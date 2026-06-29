#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    void init(string name, double money);
    void deposit(double money);
    bool withdraw(double money);
    double getBalance();
    void print();
};
void BankAccount::init(string name, double money) {
    owner = name;

    if (money >= 0) {
        balance = money;
    } else {
        balance = 0;
    }
}

int main(){

    return 0;
}