#include<iostream>

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
};

int main(){

    return 0;
}