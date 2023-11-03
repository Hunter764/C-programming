/* write a C program which scans a integer variable,if the value is divisible by 2 inchrement(add) that value by 1
if not subtract the value by 1*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n%2==0){
		n=n+1;
		printf("%d value",n);
	}
	else{
		n=n-1;
		printf("%d value",n);
	}
}
