#include "geometric_figures.h"

void Figures::print() const {
	cout << get_name() << endl;
	cout << "������� " << area() << endl;
	cout << "�������� " << perimeter() << endl;
}

//---------------------����-------------------//

Circle::Circle(double x, double y, double rad) {
	this->x = x;
	this->y = y;
	this->rad = rad;
}

double Circle::area() const {
	return PI * rad * rad;
}

double Circle::perimeter() const {
	return 2 * PI * rad;
}

string Circle::get_name() const {
	return "����";
}

void Circle::draw() const {
	cout << "   ***   " << endl;
	cout << " *     * " << endl;
	cout << "*       *" << endl;
	cout << " *     * " << endl;
	cout << "   ***   " << endl;
	cout << "�����: (" << x << ", " << y << "), ������: " << rad << endl;
}

//---------------------�����������-------------------//

Triangle::Triangle(double x, double y, double triangle_a, double triangle_b, double triangle_c) {
	this->x = x;
	this->y = y;
	this->triangle_a = triangle_a;
	this->triangle_b = triangle_b;
	this->triangle_c = triangle_c;
}

double Triangle::perimeter() const {
	return triangle_a + triangle_b + triangle_c;
}

double Triangle::area() const {
	double per_2 = perimeter() / 2;
	return sqrt(per_2 * (per_2 - triangle_a) * (per_2 - triangle_b) * (per_2 - triangle_c));
}

string Triangle::get_name() const {
	return "�����������";
}

void Triangle::draw() const {
	cout << "    /\\    " << endl;
	cout << "   /  \\   " << endl;
	cout << "  /    \\  " << endl;
	cout << " /      \\ " << endl;
	cout << "/________\\" << endl;
	cout << "�����: (" << x << ", " << y << "), �������: "
		<< triangle_a << ", " << triangle_b << ", " << triangle_c << endl;
}

//---------------------�������������-------------------//

Rectangle::Rectangle(double x, double y, double rectangle_a, double rectangle_b) {
	this->x = x;
	this->y = y;
	this->rectangle_a = rectangle_a;
	this->rectangle_b = rectangle_b;
}

double Rectangle::perimeter() const {
	return 2 * (rectangle_a + rectangle_b);
}

double Rectangle::area() const {
	return rectangle_a * rectangle_b;
}

string Rectangle::get_name() const {
	return "�������������";
}

void Rectangle::draw() const {
	cout << "************" << endl;
	cout << "*          *" << endl;
	cout << "*          *" << endl;
	cout << "*          *" << endl;
	cout << "************" << endl;
	cout << "�����: (" << x << ", " << y << "), ������: "
		<< rectangle_a << " x " << rectangle_b << endl;
}

//---------------------�������-------------------//

double Square::perimeter() const {
	return 4 * rectangle_a;
}

double Square::area() const {
	return rectangle_a * rectangle_a;
}

string Square::get_name() const {
	return "�������";
}

void Square::draw() const {
	cout << "********" << endl;
	cout << "*      *" << endl;
	cout << "*      *" << endl;
	cout << "*      *" << endl;
	cout << "********" << endl;
	cout << "�����: (" << x << ", " << y << "), �������: " << rectangle_a << endl;
}





