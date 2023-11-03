/*Take 4 positive integers input and point the greatest of them*/ 
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2st number:");
	scanf("%d",&b);
	printf("Enter 3st number:");
	scanf("%d",&c);
	printf("Enter 4st number:");
	scanf("%d",&d);
	if(a>b && a>c && a>d){
		printf("%d is greatest",a);
	}
	if(b>a && b>c && b>d){
		printf("%d is greatest",b);
	}
	if(c>b && c>a && c>d){
		printf("%d is greatest",c);
	}
	if(d>b && d>c && d>a){
		printf("%d is greatest",d);
	}
	return 0;
	
	
	
}