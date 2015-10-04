#include <math.h>
#include <stdio.h>

int solution(int a, int b);

int main(void)
{
int num1 , num2;
scanf("%d %d", &num1, &num2);
int total = solution(num1, num2);
printf("the total is: %d\n", total);
}

int solution(int a, int b)
{
return (a+b);
}
