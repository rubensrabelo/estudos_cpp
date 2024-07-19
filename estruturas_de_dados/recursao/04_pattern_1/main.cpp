#include<iostream>

using namespace std;

using namespace std;

int pattern_1(int n);

int main(){
    int n = 0;

    cin >> n;

    int value = pattern_1(n);

    cout << value << endl;

    return 0;
}

int pattern_1(int n) {
    if(n == 1) return 20;
    return pattern_1(n - 1) + 8;
}