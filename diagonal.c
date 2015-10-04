#include <stdio.h>
#include <math.h>

int main()
{
int n;
scanf("%d", &n);
int box[n];
int a;
for(int i=1; i<=n; i++)
{
for(int j=0; j<n; j++)
{
scanf("%d", &box[j]);
}
a = box[i]; 
}
printf("%d\n", a);
return 0;
}
