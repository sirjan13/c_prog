#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int num = n;
    int reverse=0,rem;
    while(n)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    printf("Reverse of %d = %d", num, reverse);

    return 0;
}
