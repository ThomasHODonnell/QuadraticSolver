//============================================================================
/**
* This program calculates the solutions, discriminate, axis of symmetry,
* vertex, roots, and y intercepts of a quadratic function. <br>
* Thomas O'Donnell
* <pre>
* Date: 2/21/22
* CSC 1253 Project # 1 Section # 002
* Instructor: Dr. Duncan
* File: QuadraticSolver.cpp
* </pre>
*/
//============================================================================
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	double quadratic_term, linear_term, constant_term, x1, x2, discriminate;
	double axis, vertex, irrational_part;

	cout << "Enter a, b, and c for the function f(x)=ax^2+bx+c ->";
	cin >> quadratic_term >> linear_term >> constant_term;
	if (quadratic_term == 0) {
	cout << "ERROR: The coefficient of the quadratic term must be non-zero." << endl;
	return 0; }
	cout << endl;
	if (quadratic_term == 1)
			cout <<"Quadratic Equation: x^2";
		else if (quadratic_term == -1)
			cout <<"Quadratic Equation: -x^2";
		else if (quadratic_term > 0)
			cout <<"Quadratic Equation: " << setprecision(3) << fixed << quadratic_term << "x^2";
	else
		cout << "Quadratic Equation: " << setprecision(3) << fixed << quadratic_term << "x^2";
	if (linear_term != 0) {
		if (linear_term == 1)
				cout <<" + x";
			else if (linear_term == -1)
				cout <<" - x";
			else if (linear_term > 0)
				cout << " + " << setprecision(3) << fixed << linear_term << "x";
		else
			cout << " - " << setprecision(3) << fixed << abs(linear_term) << "x"; }
		if (constant_term != 0) {
			if (constant_term > 0)
				cout <<" + " << setprecision(3) << fixed << constant_term;
			else
				cout <<" - " << abs(constant_term); }
		cout << endl;
		cout << endl;
	discriminate = (pow(linear_term,2)-4*quadratic_term*constant_term);
			cout<< "Discriminate: " << setprecision(3) << fixed << discriminate;
			cout<< endl; {
		axis = (-linear_term)/(2*quadratic_term);
		vertex = -pow(linear_term,2)/(4*quadratic_term)+constant_term;
			cout << "Axis of Symmetry: x = " << axis << endl;
			cout << "Vertex: (" << axis << ", " << vertex << ")" << endl; } {
		cout << "y-intercept: (0.000, " << setprecision(3) << constant_term << ")" << endl; }
		if (discriminate > 0) {
			x1 = (-linear_term + sqrt(discriminate)) / (2*quadratic_term);
			x2 = (-linear_term - sqrt(discriminate)) / (2*quadratic_term);
			cout << "The root of the equation f(x) = 0.000: {";
			cout <<x1<< ", " <<x2<< "}"; }
			else if (discriminate == 0) {
				cout << "The root of the equation f(x) = 0.000: ";
				cout << "x = {" << axis << "}" << endl; }
			else if (axis != 0) {
				irrational_part = sqrt(-discriminate)/(2*quadratic_term);
			cout << "The root of the equation f(x) = 0.000: {";
				if (irrational_part == 1) {
					cout << axis << " + i, " << axis << " - i}"; }
				else {
			cout << setprecision(3) << fixed << axis << " + ";
			cout << setprecision(3) << fixed << abs(irrational_part) << "i , ";
			cout << setprecision(3) << fixed << axis << " - ";
			cout << setprecision(3) << fixed << abs(irrational_part) << "i}"; } }
			else {
				irrational_part = sqrt(-discriminate)/(2*quadratic_term);
			cout << "The root of the equation f(x) = 0.000: {";
				if (abs(irrational_part) == 1) {
					cout << "i, -i}"; }
				else {
			cout << setprecision(3) << fixed << abs(irrational_part) << "i , -";
			cout << setprecision(3) << fixed << abs(irrational_part) << "i}"; } } {
			cout<< endl; }
	return 0; }