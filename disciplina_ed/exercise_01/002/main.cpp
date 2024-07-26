#include<iostream>

using namespace std;

void maxAndMinValues(int *vector, int n, int *min, int *max);

int main() {
    int vector[] = {1, 2, 6, 10, 20};
    int n = 5;
    int min;
    int max;

    maxAndMinValues(vector, n, &min, &max);

    cout << "Min  = " << min << endl;
    cout << "Max  = " << max << endl;

    return 0;
}

void maxAndMinValues(int *vector, int n, int *min, int *max) {
    *min = vector[0];
    *max = vector[0];

    for(int i = 1; i<n; i++){
        if(vector[i] < *min) *min = vector[i];
        if(vector[i] > *max) *max = vector[i];
    }
}