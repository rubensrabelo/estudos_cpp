#include<iostream>

using namespace std;

class Rectangle {
    public:
        Rectangle(double width, double height) {
            this->width = width;
            this->height = height;
        }

        double area() {
            return this->width * this->height;
        }
    private:
        double width;
        double height;
};

int main(){
    Rectangle rectangle(2, 2);

    cout << "The area of the Rectangle is " << rectangle.area() << endl;

    return 0;
}