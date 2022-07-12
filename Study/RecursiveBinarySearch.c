#include <stdio.h>
#include "../StudyHeader/RecursiveBinarySearch.h"

int Factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n* Factorial(n-1);
	}
}
int RecursiveBinarySearch(void)
{
	int i;

    for(i=9;i>0;i--)
	{
		printf("%d! = %d \n", i,Factorial(i));
	}
    return 0;

}
