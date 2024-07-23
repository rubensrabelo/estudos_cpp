#include<iostream>
#include<cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle {
    Point sideSupLeft;
    Point sideInfRight;
    
    Rectangle(Point point1, Point point2) {
        this->sideSupLeft = point1;
        this->sideInfRight = point2;
    }

    double length() {
        return fabs(this->sideSupLeft.x - this->sideInfRight.x);
    }

    double width() {
        return fabs(this->sideSupLeft.y - this->sideInfRight.y);
    }

    double diagonal() {
        return sqrt(pow(this->sideSupLeft.x - this->sideInfRight.x, 2) + pow(this->sideSupLeft.y - this->sideInfRight.y, 2)); 
    }

    double area() {
        return this->length() * this->width();
    }

    double perimeter() {
        return 2*(this->length() + this->width());
    }
};

int main(){
    Point p1 = {0, 10};
    Point p2 = {5, 0};

    Rectangle rect(p1, p2);

    cout << "Length: " << rect.length() << endl;
    cout << "Width: " << rect.width() << endl;
    cout << "Diagonal: " << rect.diagonal() << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    
    return 0;
}