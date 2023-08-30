#include <iostream>

using namespace std;

int main() {

	float A;
	float B;
	float X;

	cout << "Hello, my name is Ian and I'm going to solve the equation:" << endl;
	cout << "Ax + b = 0" << endl;
	cout << "For x" << endl << endl;
	
	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;
	
	cout << endl << "Solving " << A << "x+" << B << "=0" << endl;

	cout << endl << "The answer is:" << endl;

	X = (0 - B) / A;
	cout << "x="<< X << endl;
}