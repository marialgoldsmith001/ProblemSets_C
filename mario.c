#include <stdio.h>

int main()
{
int n;
int j;
scanf("%d", &n);
for(int i = 1; i<=n; i++)
{
	for(j=n-i; j>0; j--)
	{
	printf(" ");
	}
	for(int s = 0; s<i; s++)
	{
	printf("#");	
	}
	printf("\n");
}
return 0;
}
