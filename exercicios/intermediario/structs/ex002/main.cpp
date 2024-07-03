#include<iostream>

using namespace std;

struct Rectangle{
    double width;
    double height;
};

double area(Rectangle rectangle);

int main(){
    Rectangle rectangle {2, 2};

    cout << "The area of the rectangle is " << area(rectangle)  << endl;

    return 0;
}

double area(Rectangle rectangle) {
    return rectangle.width * rectangle.height;
}