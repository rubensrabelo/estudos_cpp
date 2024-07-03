#include<iostream>

using namespace std;

void doubleValue(int *number);

int main(){
    int number = 5;

    cout << "The user insert the number: " << number << endl;

    doubleValue(&number);

    cout << "The double of is " << number << endl;

    return 0;
}

void doubleValue(int *number) {
    *number = 2*(*number);
}