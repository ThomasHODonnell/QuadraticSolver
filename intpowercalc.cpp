//============================================================================
/**
* This program calculates exponential math operations with integer exponents. <br>
* Thomas O'Donnell
* <pre>
* Date: 3/07/22
* CSC 1253 Project # 2 Section # 002
* Instructor: Dr. Duncan
* File: IntPowerCalculator.cpp
* </pre>
*/
//============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	long double base, num = 1;
	long int_exp, i;

	cout << "Enter the base and integer exponent of the power ->";
	cin >> base >> int_exp;

	cout << setprecision(5) << fixed << base << "^" << int_exp << " = ";

	if (base == 0 && int_exp <= 0)
	cout << "nan";
	else {
		for (long i = 1;i <= abs(int_exp); i++)
			num = base * num;
			if (int_exp < 0)
				cout << 1 / num;
			else
				cout << num;
	}
return 0;
	}