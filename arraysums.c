#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
int n;
scanf("%d", &n);
int arr[n];
int result =0;
for (int i=0; i<n;i++)
{
scanf("%d", &arr[i]);
result = result +arr[i];
}
printf("%d\n", result);
return 0;
}
