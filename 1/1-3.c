#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP  20
main()
{
	float fahr,celsius;
	for(fahr=LOWER;fahr<=UPPER;fahr+=20)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f%7.2f\n",fahr,celsius);
	}
	printf("****************reverse compute*****************\n");
	float fahrr,celsiusr;
	for(celsiusr=LOWER;celsiusr<=UPPER;celsiusr+=20)
	{
		fahrr = (9 * celsiusr) / 5 + 32;
		printf("%3.0f%7.2f\n",fahrr,celsiusr);
	}
}

