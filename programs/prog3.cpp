#include <stdio.h>
#include <math.h>
float exponential(int n, float x)
{
    float value_sum = 1.0f;
    
    for (int i = n - 1; i > 0; --i )
        value_sum=1+x*value_sum/i;
    return value_sum;
}
float uselibfunc(float x){
	return exp(x);
}
int main()
{
    int n;
    float x;
    printf("Enter The Power to calculate exponential :- ");
    scanf("%f",&x);
    int ch;
    printf("How do You want to calculate\n");
    printf("1.Library function\n");
    printf("2.By taylor series method \n");
    printf("Enter choice(1 or 2)");
    scanf("%d",&ch);
	switch(ch){
	case 1:
    {
		printf("e ^ %f = %f", x,uselibfunc(x));
		break;
   }
   case 2:
   	{
   	 	printf("Enter The no of terms till which u want to calculate :- ");
	    scanf("%d",&n);
		printf("e ^ %f = %f", x,exponential(n,x));
		break;
	}
}
      return 0;
}
