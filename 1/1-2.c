#include <stdio.h>
main()
{
	printf("this is a title\n");
	int fahr,celsius;
	int lower,upper,step;
	lower = 0;
	upper = 300;
	step = 20;
	for(fahr=lower;fahr<=upper;fahr+=20)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d%5d\n",fahr,celsius);
	}
}

