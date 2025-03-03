/*
Filename: Chapter4Exercise23GeometryCalculator.cpp
Programmer: Morgan Thorne
Date: March 2025
Requirements: 
Write a program that displays the following:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1-4):
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int choice; //To hold a menu choice
    double area = 0; //Placeholder value
    
    //Menu Variables
    const int selectcircleArea = 1,
              selectrectangleArea = 2,
              selecttriangleArea = 3,
              selectQuit = 4;
    
    
    //Circle Variables
    double radius = 0; 
    const double PI = 3.14159;
    
    //Rectangle Variables
    double length = 0;
    double width = 0;
    
    //Triangle Variables
    double base = 0;
    double height = 0;

    //Menu
    cout << setw(45) << right << "" << " Geometry Calculator " << endl;
    cout << endl;
    cout << setw(39) << right << "" << "All answers are rounded to the fifth decimal" << endl;
    cout << setw(39) << right << "" << "1. Calculate the Area of a Circle" << endl;
    cout << setw(39) << right << "" << "2. Calculate the Area of a Rectangle" << endl;
    cout << setw(39) << right << "" << "3. Calculate the Area of a Triangle" << endl;
    cout << setw(39) << right << "" << "4. Quit" << endl;
    cout << setw(39) << right << "" << "Enter your choice (1-4): ";
    cin >> choice;
    
    //Response to user's choice if not between 1-4
    while (choice < 1 || choice > 4) {
        cout << "Enter a number between 1-4: ";
        cin >> choice;
    }
    //if and else if for output based off users choice
        if (choice == selectcircleArea) {
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double circleArea = PI * (pow(radius, 2));
            cout << fixed << setprecision(5) << "The Area of the circle is " << circleArea;
        }
            else if (choice == selectrectangleArea) {
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                double rectangleArea = length * width;
                cout << "The Area of the rectangle is " << rectangleArea;
            }
                else if (choice == selecttriangleArea) {
                    cout << "Enter the base of the triangle: ";
                    cin >> base;
                    cout << "Enter the height of the triangle: ";
                    cin >> height;
                    double triangleArea = base * height * 0.5;
                    cout << "The Area of the triangle is " << triangleArea;
                }
                    else if (choice == selectQuit) {
                        cout << "Quitting Program!";    
                    }



}


