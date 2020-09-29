#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> dd36aad137f1a39b6886701e5688e5452680b0b4
	return a + b + 0.5;
=======
	return a + b;
>>>>>>> cbcb06d... formatting: use tabs instead of spaces
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3... fix truncation error
=======
	return a + b + 0.5;
>>>>>>> 5d561517da307b932fa3c4f3158282b330e195e7
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
=======
	return a + b;
>>>>>>> 7080a70... my commit instead of formatting
=======
	return a + b + 0.5;
>>>>>>> f26ff5c... my commit instead of fix
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3... fix truncation error
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}
