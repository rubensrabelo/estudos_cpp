#pragma once

namespace Shape {
    class Rectangle {
        public:
            Rectangle(double width, double height);

            double getwidth();

            void setWidth(double width);

            double getHeight();
            
            void setHeight(double height);

            double area();
        private:
            double width;
            double height;
    };
}