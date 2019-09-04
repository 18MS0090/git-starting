#include<stdio.h>
int fact(int);
int n;
int main()
{
	int i,b,s=0;
		printf("enter the number");
	scanf("%d",&n);
	for(i=n;i>=1;i=i/10)
	{
		b=i%10;
		s=s+fact(b);
	}
	if(s==n)
		printf("number is strong");
	else
		printf("number is not strong");
	return 0;
}
	int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
		f=f*i;
	return (f);
}

