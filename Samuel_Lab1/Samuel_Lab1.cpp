// Edited directly on GitHub
// Samuel_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// My favourite number function — added by Brexton
void myFavouriteNumber()
{
    int fav = 6;
    cout << "My favourite number is: " << fav << endl;
  
// My favourite number function — added by Samuel
void myFavouriteNumber2() {
    int fav2 = 8;
    cout << "My favourite number is: " << fav2 << endl;
}

double gradeCalculator();

int main()
{
    cout << "Git makes collaboration easy!" << endl;
    cout << "Hello from Samuel!";
    cout << "Hello from Brexton!" << endl;
    cout << "Changes made by Brexton!" << endl;

    cout << "LAB 1 COMPLETED ON 4/6/2026!" << endl;

    cout << "Feature by Samuel: Branching is awesome!" << endl;

    cout << "Student ID: 1001 | Name: Samuel" << endl;

    double grade = gradeCalculator();

    // Brexton: Pass-Fail-Checker
    if (grade >= 60)
    {
        cout << "Congratulations! You passed!" << endl;
    }
    else
    {
        cout << "Sorry, you failed. Better luck next time!" << endl;
    }

    myFavouriteNumber();
    myFavouriteNumber2();
}

// Feature by Samuel: Calculates Grade
double gradeCalculator()
{
    double grade;
    cout << "\nEnter a grade (0-100): ";
    cin >> grade;
    return grade;
}