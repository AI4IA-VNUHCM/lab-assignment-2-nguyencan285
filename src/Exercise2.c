/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int a = atoi(argv[1]);
    int res = 1;
    if(a % 2 !=0)
    {
        
        for(int i =2; i<=a; i++)
        {
            if (i%2 !=0)
            {
                res
				=res*i;
            }
        }
    }
    if(a % 2 ==0)
    {
        for(int i = 2;i<=sqrt(a);i++)
        {
            if (i % 2 ==0)
            {
                res=res*i;
            }
        }
    }
    printf("%d",res);
	//printf("%d", result);
	return 0;
}
