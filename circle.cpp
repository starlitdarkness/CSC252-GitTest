#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius;
	cout << "Enter radius\n";
	cin >> radius;	
	cout << "The area of a circle with radius \n";
	double area;
	area = (radius * radius) * 3.14592;
	cout << area;
	double circ;
	circ = (2 * radius) * 3.14592;
	cout << "The circumference of a circle with radius \n";
	cout << circ; 
	return 0;
}