// Define a union called Shape that can represent either a circle or a rectangle. The circle should have members radius and center, while the rectangle should have members length and width
#include <iostream>

struct Point {
    int x;
    int y;
};

union Shape {
    struct {
        int radius;
        Point center;
    } circle;
    struct {
        int length;
        int width;
    } rectangle;
};

int main() {
    Shape shape;
    
    // Circle
    shape.circle.radius = 5;
    shape.circle.center.x = 10;
    shape.circle.center.y = 15;

    std::cout << "Circle: Radius = " << shape.circle.radius
              << ", Center = (" << shape.circle.center.x
              << ", " << shape.circle.center.y << ")" << std::endl;

    // Rectangle
    shape.rectangle.length = 10;
    shape.rectangle.width = 7;

    std::cout << "Rectangle: Length = " << shape.rectangle.length
              << ", Width = " << shape.rectangle.width << std::endl;

    return 0;
}
