#include <iostream>
#include <string>
#include <math.h>

using namespace std;

const double PI{ 3.14 };

class Figures {
public:

	virtual double area() const = 0;
	virtual double perimeter() const = 0;
	virtual string get_name() const = 0;
	virtual void draw() const = 0;
	
	void print() const;

	~Figures() = default;
};

class Circle : public Figures {
private:
	double rad;
	double x, y;

public:
	Circle(double x, double y, double rad);

	double area() const override;
	double perimeter() const override;
	string get_name() const override;
	void draw() const override;

};

class Triangle : public Figures {
private:
	double triangle_a, triangle_b, triangle_c;
	double x, y;

public:
	Triangle(double x, double y, double triangle_a, double triangle_b, double triangle_c);

	double area() const override;
	double perimeter() const override;
	string get_name() const override;
	void draw() const override;

};

class Rectangle : public Figures {
protected:
	double rectangle_a, rectangle_b;
	double x, y;

public:
	Rectangle(double x, double y, double rectangle_a, double rectangle_b);

	double area() const override;
	double perimeter() const override;
	string get_name() const override;
	void draw() const override;

};

class Square : public Rectangle {
public:
	Square(double x, double y, double side) : Rectangle(x, y, side, side) {}

	double area() const override;
	double perimeter() const override;
	string get_name() const override;
	void draw() const override;

};