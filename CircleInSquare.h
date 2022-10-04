#pragma once
#include <iostream>
#include "Square.h"
#include "Circle.h"
using namespace std;

class CircleInSquare : private Square, private Circle {
	

public:
	CircleInSquare(int square, int circle) : Square(square), Circle(circle) {
		if (circle >= square) {
			cout << "Wrong number..." << endl;
			Circle(circle) = 0;
		}
		else if (circle < square) {
			cout << "It's ok..." << endl;
		}
	}

	void Print() {
		this->PrintSquare();
		this->PrintCircle();
	}
	

};

