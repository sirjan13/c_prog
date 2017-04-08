#include <stdio.h>
int main()
{
    int n,i;
	printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n==1) 
    	printf("%d is not a prime number.",n);
	else{
    int flag = 0;
	for(i=2; i<=n/2; ++i){
        if(n%i==0){
            flag=1;
            break;
        }
    }

    if (!flag)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
	}
    return 0;
}
