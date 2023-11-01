#include<stdio.h>
int main(){
	int n;
	printf("Enter the year:");
	scanf("%d",&n);
	if(n%2==0){
		printf("The year is leap year");
	}
	else{
		printf("It is not a leap year");
	}
	return 0;
	 
}