#include <stdio.h>

/**
 * print Fahrenheit-Celcius table 
 * for fahr = 0 , 20, ..., 300; floating point version
 */

main()
{
	float fahr, celsius;
	int  lower, upper, step;

	lower = 0;	/*This is the lower limit of the 		temperature table*/
	upper = 300; 	/*This is the upper limit */
	step = 20; 	/*Here is the step size of the ta		ble*/

	fahr  = lower = 0;
while (fahr <= upper)
	{
	celsius = (5.0 / 9.0) * (fahr - 32.0);
	printf("When Fahrenheit is%3.0f\t\t\tCelsius is equal to%6.1f\n", fahr, celsius);
	fahr = fahr + step;
	}

}
