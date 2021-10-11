/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result,cost;
	int base=15000;
	double n;
	n=distance;
	
	if(n<=2)
	{
		cost=base;
	}
	if(2.25<=n && n<=30)
	{
		cost=(base+(n/0.25)*2000);
	}
	if (n>30)
	{
		cost=(base+224000+(n-30)*5000);
	}
	result=cost;
	//printf("%d",cost);
	printf("%d", result);
	return 0;
}
