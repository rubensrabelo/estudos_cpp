#include<iostream>

using namespace std;

class Factorial {
    public:
        Factorial(int number): number(number) {}

        int calculate() {
            if(number == 0) return 1;
            int result = 1;
            for(int i = 1; i <= number; i++){
                result *= i;
            }

            return result;
        }
    private:
        int number;
};

int main(){
    Factorial factorial(5);
    int value = factorial.calculate();

    cout << "Fatorial de 5: " << value << endl;

    return 0;
}