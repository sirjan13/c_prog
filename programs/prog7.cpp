#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float a[100],sum=0,x;
 int n,i;

printf ("Enter the degree of the polynomial:");
scanf("%d",&n);

printf("Enter the coefficients into the array:");
 for(i=n;i>=0;i--)
 {
  scanf("%f",&a[i]);
 }

 printf("Enter the value of x:");
 scanf("%f",&x);
 
 for(i=n;i>0;i--)
 {
  sum+=a[i]*pow(x,i);
 }

 sum=sum+a[0];
 
 printf ("Value of the polynomial is = %f",sum);
 getch();
}
