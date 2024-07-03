#include<iostream>

using namespace std;

class Account {
    public:
        Account(int number): number(number){}

        Account(int number, double balance): number(number), balance(balance) {}

        int getNumber() {
            return this->number;
        }

        double getBalance() {
            return this->balance;
        }

        void addBalance(double amount) {
            this->balance += amount;
        }

        void removeBalance(double amount) {
            this->balance -= amount;
        }

        friend ostream& operator<<(ostream& input, const Account& account) {
            input << "Account(int=" << account.number << ", Balance=" << account.balance << ")" << endl;
            return input;
        }
    private:
        int number;
        double balance;
};

int main(){
    Account account(123);

    // Adiciona saldo
    account.addBalance(200.0);
    cout << account << endl;

    // Remove saldo
    account.removeBalance(100.0);
    cout << account << endl;

    return 0;
}