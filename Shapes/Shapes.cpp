// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Drawing.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main() {
    Drawing drawing;

    Rectangle rectangle(5.0, 3.0);
    rectangle.setColor("Red");

    Circle circle(2.5);
    circle.setColor("Blue");

    Triangle triangle(3.0, 4.0, 5.0);
    triangle.setColor("Green");

    drawing.addShape(&rectangle);
    drawing.addShape(&circle);
    drawing.addShape(&triangle);

    drawing.draw();

    return 0;
}
