/*Take 3 numbers input and tell if they can be the sides of a triangle*/ 
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2st number:");
	scanf("%d",&b);
	printf("Enter 3st number:");
	scanf("%d",&c);
	if(a+b>c && b+c>a && c+a>b){
		printf(" 3 inputs numbers are sides of triangle");
	}
	else{
		printf("Not satisfying the triangle condition");
	}
	return 0;
}