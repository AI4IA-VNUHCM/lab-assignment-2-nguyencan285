/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
____________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	//Your codes here
	for (int i = 2; i <= testcase; i++)
	{
		while (testcase % i == 0)
		{
			testcase /= i;
			printf(" %d", i);
			if (testcase >= i)
				printf(" *");
		}
	}
	return 0;
}