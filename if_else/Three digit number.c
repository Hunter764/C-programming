// if the given number is three digit numbr or not
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>99 && n<1000){
		printf("NUmber is three digit number");
	}
	else{
		printf("It is not a three digit number");
	}
   
   
	
    return 0;
}