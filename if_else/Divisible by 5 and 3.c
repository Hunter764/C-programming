//take a positive integer input and tell if it divisible by 5 and 3
#include <stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%15==0){
		printf("Number is divisible by 5 and 3");
	}
	else{
		printf("Number is not divisible by 5 and 3");
	}
	return 0;
}