/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 __________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void tang(int A[], int n)
{
	for (int i = 0; i < n / 2 - 1; i++)
		for (int j = i + 1; j < n / 2; j++)
			if (A[i] > A[j])
			{
				int temp;
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
}
void giam(int A[], int n)
{
	for (int i = n / 2; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (A[i] < A[j])
			{
				int temp;
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
}
int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n], i;
	for (i = 0; i < n; i++)
	{
		test_array[i] = atoi(argv[i + 1]);
	}
	//Your codes here
	tang(test_array, n);
	for (int i = 0; i < n / 2; i++)
	{
		printf(" %d", test_array[i]);
	}
	giam(test_array, n);
	for (int i = n / 2; i < n; i++)
	{
		printf(" %d", test_array[i]);
	}
	return 0;
}