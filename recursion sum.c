#include<stdio.h>
int sum();

int main()
{
	printf("Enter a number:");
	int n=0,s=0,res;
	scanf("%d",&n);
	
	res=sum(n);
	
	printf("The sum is: %d",res);
}

int sum(int x)
{
	int s=0,d;
	
	while(x>0)
	{
		d=x%10;
		s=s+d;
		x=x/10;
	}
	return s;
}
