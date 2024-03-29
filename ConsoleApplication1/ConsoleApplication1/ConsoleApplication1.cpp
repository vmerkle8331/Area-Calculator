#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

//Victoria Merkle, CSC1612H1
//What are the inputs for the program? One of the shape options and one or two numbers
//What are the outputs for the program? one or two numbers based on the inputs
//What calculations does it perform? It performs different multiplication and addition calculations to find area, volume, and the like depending on the shape
//What does the program do overall? It find the area, perimeter, volume, or the like of the given shape with it's given measurments

using namespace std;

const double PI = 3.1416;

int main()
{
    string shape;
    double height;
    double radius;
    double length;
    double width;

    cout << fixed << showpoint << setprecision(2);

    //Asks user for a shape
    cout << "Enter the shape type: (rectangle, circle, cylinder) ";
    cin >> shape;
    cout << endl;

    //If the shape is a rectangle it asks for the length and width and calculates it's area and perimeter
    if (shape == "rectangle")
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << endl;

        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << endl;

        cout << "Area of the rectangle = "
            << length * width << endl;

        cout << "Perimeter of the rectangle = "
            << 2 * (length + width) << endl;
    }
    //if the shape is a circle it asks for the radius then calculates it's area and circumference
    else if (shape == "circle")
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;

        cout << "Area of the circle = "
            << PI * pow(radius, 2.0) << endl;
        cout << "Circumference of the circle: "
            << 2 * PI * radius << endl;
    }
    //if the shape is a cylinder it asks for the height and radius and calculates it's volume and surface area
    else if (shape == "cylinder")
    {
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << endl;

        cout << "Enter the radius of the base of the cylinder: ";
        cin >> radius;
        cout << endl;

        cout << "Volume of the cylinder = "
            << PI * pow(radius, 2.0) * height << endl;
        cout << "Surface area of the cylinder: "
            << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
    }
    //if the user doesn't give one of the optiions it prints an error message
    else
        cout << "The program does not handle " << shape << endl;

    return 0;
}

