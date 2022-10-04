#pragma once
#include <iostream>
using namespace std;

class Circle {
protected:
	int d;

public:
	Circle() {
		d = 0;
	}

	Circle(int x) {
		d = x;
	}

	void PrintCircle() {
		cout << "Circle diameter = " << d << endl;
	}

};

