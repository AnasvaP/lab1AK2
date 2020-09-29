#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
<<<<<<< HEAD
	return a + b + 0.5;
=======
	return a + b;
>>>>>>> cbcb06d... formatting: use tabs instead of spaces
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3... fix truncation error
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Sub (int a, int b)
{
    return Add (a, -b);
}
