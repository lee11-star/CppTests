#include <iostream>
#define MAX 1025
int BinarySearch(int arr[],int low,int high,int target){
    int mid =(low+high)/2;
    if(low>high){
         return 0;
    }
    if(arr[mid]=target){
        return mid+1;
    }
    else if(arr[mid]>target)
        BinarySearch(arr,low,mid-1,target);
    else if(arr[mid]<target)
        BinarySearch(arr,mid+1,high,target);
}

void Merge(int R[],int low,int high,int mid){
    int* R1 = new int[high-low+1];
    int i=low,j=mid+1,k=0;
    while(i<=mid&&j<=high){
        if(R[i]<=R[j])
            R1[k++]=R[i++];
        else
            R1[k++]=R[j++];
    }
    while(i<=mid){
        R1[k++]=R[i++];
    }
    while(j<=high){
        R1[k++]=R[j++];
    }
    
    for(int t=0,m=low;m<=high;t++,m++){
        R[m]=R1[t];
    }
    delete[] R1;

}

int main(){
    //###
    return 0;
}