#include<stdio.h>
int prime();
int main()
{
	printf("Enter a number");
	int num=0;
	scanf("%d",&num);
	
	prime(num);
	if(prime(num)==1)
	{
		printf("%d is a prime number",num);
	}
	else
	{
		printf("%d is not a prime number", num);
	}
}

int prime(int x)
{
	int i,c=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			c++;
		}
		if(c==2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
