//to find the difference in sum of odd and sum of even

#include <stdio.h>
int main()
{
	int n,difference;
	printf("Enter a positive integer\n");
	scanf("%d",&n);

//to find the sum of n even numbers
	int sum_even;
	{
		sum_even=n*(n+1);
	}
//to find the sum of n odd numbers
	int sum_odd;
	{
		sum_odd=n*n;
	}
	difference=sum_even-sum_odd;

	printf("sum of %d even numbers:%d\n",n,sum_even);
	printf("sum of %d odd numbers:%d\n",n,sum_odd);
	printf("sum of difference:%d",difference);
}
