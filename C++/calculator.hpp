//header file to declare and define object-based calculator class
#ifndef CALCULATOR_HPP
#def CALCULATOR_HPP

class Calculator{
public:
	double addTwo(double x, double y) {
		return x + y;
	}
	double subTwo(double x, double y) {
		return x - y;
	}
	double multiTwo(double x, double y) {
		return x * y;
	}
	double divTwo(double x, double y) {
		return x / y;
	}
private:
	double x, y;
};


#endif
