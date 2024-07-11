#include "../include/Shape.h"

namespace Shape {
    Rectangle::Rectangle(double width, double height) {
        this->width = width;
        this->height = height;
    }

    double Rectangle::getwidth(){
        return this->width;
    }

    void Rectangle::setWidth(double width){
        this->width = width;
    }

    double Rectangle::getHeight(){
        return this->height;
    }
    
    void Rectangle::setHeight(double height){
        this->height = height;
    }

    double Rectangle::area(){
        return this->getHeight() * this->getwidth();
    }
}