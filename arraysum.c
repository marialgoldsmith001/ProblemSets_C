#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int array[n];
	long long sum;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
		if(i == 0)
			sum = array[i];
		else
			sum= array[i] + sum;
	}
	printf("%lld\n", sum);
}
