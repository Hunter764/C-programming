//take 3 postive integers as input and print greatest of them
#include<stdio.h>
int main(){ 
     int a;
     printf("Enter 1st number:",a);
     scanf("%d",&a);
     int b;
     printf("Enter 2nd number:",b);
     scanf("%d",&b);
     int c;
     printf("Enter 3rd number:",c);
     scanf("%d",&c);
	if(a>b && a>c){
		printf("Value a is the greatest");
	}
	if(c>b && c>b){
		printf("Value c is the greatest");
	}
	if(b>a && b>c){
		printf("Value b is the greatest");
	}
	return 0;
}