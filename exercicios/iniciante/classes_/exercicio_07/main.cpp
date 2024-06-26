#include<iostream>

using namespace std;

class EvenOrOdd {
    public:
        EvenOrOdd(int num): number(num) {};

        bool even() {
            if(number % 2 == 0) return true;
            return false;
        }
    private:
        int number;
};

int main(){
    EvenOrOdd number(5);

    if(number.even()) {
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }

    return 0;
}