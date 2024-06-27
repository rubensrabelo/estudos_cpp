#include<iostream>
#include<cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distanceOfTwoPoints(Point point1, Point point2);

int main(){
    Point point1;
    Point point2;

    point1.x = 1;
    point1.y = 1;
    point2.x = 1;
    point2.y = 4;

    cout << "The distance about point 1 and point 2 is " << distanceOfTwoPoints(point1, point2) << endl;

    return 0;
}

double distanceOfTwoPoints(Point point1, Point point2) {
    return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}