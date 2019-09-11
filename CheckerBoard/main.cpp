/* 
Grace Hoffmann
C++ Fall 2019
Due: September 12, 2019
Lab 2B
A program that displays an 8 by 8 star checkerboard
*/

#include <iostream>
#include <string>

using namespace std;

//Function Prototype
void output(const string, const string);

int main()
{
	//Declaring Varibles by Line
	const string a = "  *   *   *   *";
	const string b = "*   *   *   *  ";

	//Function Call
	output(a, b);
	
	return 0;
}

//Function Definition
void output(const string a, const string b)
{
	//Outputting lines to screen
	cout << a << endl;
	cout << b << endl;
	cout << a << endl;
	cout << b << endl;
	cout << a << endl;
	cout << b << endl;
	cout << a << endl;
	cout << b << endl;
}