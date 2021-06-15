#include <stdio.h>
/*print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; */
void main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;			//Lower limit of the temperature table
	upper = 300;		//Uppder limit of the temperature table
	step = 20;			//Step size

	fahr = lower;
	printf("##########################\n");
	printf("#####FAHR to CELSIUS######\n");
    printf("##########################\n");
	while(fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%7.0f %10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	//Reset the values

	celsius = lower;
	printf("##########################\n");
	printf("#####CELSIUS to FAHR######\n");
    printf("##########################\n");
	while(celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%7.1f %10.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}