#pragma once
#include <iostream>
using namespace std;

class Square {
protected:
	int a;

public:
	Square() {
		a = 0;
	}

	Square(int x) {
		a = x;
	}

	void PrintSquare() {
		cout << "Square side = " << a << endl;
	}

};
