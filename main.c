#include <stdio.h>;
#include <math.h>;

void main() {
	double step = 0.2;
	int interval[2] = { 2, 4 };
	double x;
	double y;

	
	for (double i = interval[0]; i <= interval[1] + 0.1; i += step) {

		x = i;

		if (x <= 3) {

			y = log10(pow(x, 3));
		}

		else if (3 < x < 3.5) {

			 y = 1 / fabs(sin(x));
		}

		else if (x <= 4) {

			y = 1/cos(1 / x);
		}
		else { y = 0; };


		printf("x= %f;  y= %f \n", x, y);
		
	}

}