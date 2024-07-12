#include<iostream>
#include "./include/Shape.h"

using namespace std;
using namespace Shape;

int main(){
    Rectangle rectangle(2, 2);

    cout << "The area is " << rectangle.area() << endl;

    system("pause");

    return 0;
}