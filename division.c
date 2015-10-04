#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d", &n);
int array[n];
int positive = 0;
int negative = 0;
int zero = 0;
for (int i=0; i<n; i++)
{
scanf("%d", &array[i]);
if(array[i] >0)
{
positive++;
}
if(array[i] == 0)
{
zero++;
}
if(array[i] < 0)
{
negative++;
}
}
float positivenumber = (int)positive;
float zeronumber = (int)zero;
float negativenumber = (int)negative;
float number = (int)n;
float result1 = positivenumber / number;
float result2 = negativenumber / number;
float result3 = zeronumber / number;
printf("%.3f %.3f %.3f\n", result1, result2, result3);
}
