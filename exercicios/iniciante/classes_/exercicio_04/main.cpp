#include<iostream>
#include<cmath>

using namespace std;

class Triangle {
    public:
        Triangle(double base, double side01) {
            this->base = base;
            this->side01 = side01;
        }

        double height() {
            return sqrt(pow(side01, 2) - pow(base/2, 2));
        }

        double area() {
            return (this->base*this->height())/2;
        }
    private:
        double base;
        double side01;

};

int main(){
    Triangle triangle(12, 10);

    cout << "The area of the Triangle is " << triangle.area() << endl;

    return 0;
}