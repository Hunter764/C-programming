/* Write a C program to print i am analysing the program properly only if a number is divisible by both 2 and 3
if not display i have to practice more*/
#include<stdio.h>
 int main(){
 	int n;
 	printf("Enter a value:");
 	scanf("%d",&n);
 	if(n%2==0 && n%3==0){
 		printf("i am analysing the program");
	 }
	else{
		printf("i have to practice more");
	} 
 	
 }