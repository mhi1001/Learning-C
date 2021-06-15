#include <stdio.h>

void temperature_tables_while()
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

void temperature_tables_for()
{
	int fahr;
	printf("\n\n\ From 0 to 300\n");

	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	printf("\n\n\ From 300 to 0\n");

	for(fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

void main()
{
	temperature_tables_while();
	temperature_tables_for();
}
