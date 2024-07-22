#include<iostream>
#include<cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distancePoint(Point point1, Point point2);

int main(){
    Point point1 {1, 1};
    Point point2 {1, 4};

    double result = distancePoint(point1, point2);

    cout << "Result = " << result << endl;

    return 0;
}

double distancePoint(Point point1, Point point2) {
    return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}