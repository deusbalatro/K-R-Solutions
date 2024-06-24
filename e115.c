#include <stdio.h>

/*
	ct = Conversion Type (fahrenheit to celsius (ftoc) or vice versa)
	hcon = Heat Converter
	0 = Fahrenheit to Celsius
	1 = Celsius to Fahrenheit
*/

int hcon(double m, int n);

int main()
{

	int i;

	for (i = 0; i < 200; i = i + 20)
		hcon(i, 0);

	for (i = 0; i < 100; i = i + 20)
		hcon(i, 1);

}

int hcon(double degree, int ct)
{

	double result = 0;
	if (ct == 0)
	{
		printf("Fahrenheit to Celsius: \n");
		result = 5 * (degree-32) / 9;
		printf("%8.2f || %8.2f\n", degree, result);
		return result;
	}
	else
	{
		printf("Celsius to Fahrenheit: \n");
		result = (degree*9/5) + 32;
		printf("%8.2f || %8.2f\n", degree, result);
		return result;
	}
	return 0;
}
