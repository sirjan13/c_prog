#include <stdio.h>

float exponential(int n, float x)
{
    float value_sum = 1.0f;
    
    for (int i = n - 1; i > 0; --i )
        value_sum=1+x*value_sum/i;
    return value_sum;
}
int main()
{
    int n;
    float x;
    printf("Enter The Power to calculate exponential :- ");
    scanf("%f",&x);
    printf("Enter The no of terms till which u want to calculate :- ");
    scanf("%d",&n);
	printf("e ^ %f = %f", x,exponential(n,x));
    return 0;
}
