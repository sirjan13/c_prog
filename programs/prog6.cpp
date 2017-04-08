#include<stdio.h>
int main(){
	int n,r,tri1,tri2,spaces;
	char ch = 'A';
	printf("\nEnter the number of rows :- ");
	scanf("%d",&n);
	for(r = 0;r < n ; r++){
		for(spaces = 0; spaces < (n-r); spaces++){
			printf(" ");
		}
		for(tri1 = 0;tri1 <=r ; tri1++){
			printf("%c",ch);
			ch++;
		}
		ch -= 2;
		for(tri2 = 0;tri2 < r; tri2++){
			printf("%c",ch);
			ch--;
		}
		ch = 'A';
		printf("\n");
		}	
	return 0;
}
