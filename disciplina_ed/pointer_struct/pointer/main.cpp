#include<iostream>

using namespace std;

struct Point {
    double x;
    double y;

    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    void show() {
        cout << "Point (" << "X=" << this->x << ", Y=" << this->y << ")" << endl;
    }
};

void toReplace(Point *p1, Point *p2);
void doubleValue(Point *p1);

int main() {
    Point p1(1, 2);
    Point p2(3, 4);

    cout << "BEFORE EXCHANCE" << endl;
    p1.show();
    p2.show();
    cout << endl;

    toReplace(&p1, &p2);

    cout << "REPLACE VALUES: " << endl;
    p1.show();
    p2.show();
    cout << endl;

    cout << "DOUBLE THE VALUE OF FIRST POINT" << endl;
    doubleValue(&p1);
    p1.show();

    return 0;
}

void toReplace(Point *p1, Point *p2) {
    double x = p1->x;
    double y = p1->y;

    p1->x  = p2->x;
    p1->y  = p2->y;

    p2
    ->x  = x;
    p2->y  = y;
}

void doubleValue(Point *p1) {
    p1->x = p1->x * 2;
    p1->y = p1->y * 2;
}