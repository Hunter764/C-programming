//take a positive number input and tell if it is divisible by 5 or 3
#include <stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%5==0 || n%3==0){
		printf("number is divisible by 5 or 3");
	}
	else{
		printf("number is not divisible by 5 or 3");
	}

	return 0;
}