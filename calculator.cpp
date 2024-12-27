#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b;
}
void Calculator::PrintResult(double a, double b)
{
    int result = Mul(a, b);
    std::cout << "Обчислено: " << a << " * " << b << " = " << result << std::endl;
}