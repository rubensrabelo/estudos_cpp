#include<iostream>

using namespace std;

int binomial_coefficient(int n, int k);

int main() {
    int n=8, k=4;

    cout << binomial_coefficient(n, k) << endl;

    return 0;
}

int binomial_coefficient(int n, int k) {
    if(k == 0 || k == n) return 1;
    return binomial_coefficient(n-1, k-1) + binomial_coefficient(n-1, k);
}