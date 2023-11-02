//C Program:To check the gender and age fact to validate weather the person is eligible to vote or not
#include <stdio.h>
#include<stdlib.h>

int main() {
	int a;
	char g;
    
	printf("Enter the gender:");
	scanf("%c",&g);
 	if((g!='m'&&g!='M')&&(g!='f'&&g!='F')&&(g!='T'&&g!='t'))
	{
       	printf("invalid gender");
       	exit(1);
	}
	printf("\nEnter the age");
	scanf("%d",&a);
   
 
	if((g=='m'||g=='M'||g=='f'||g=='F'||g=='T'||g=='t')&&a>=18)
	{
	printf("The gender is :%c and age is %d,Eligible to vote",g,a);
	}
	if((g=='m'||g=='M'||g=='f'||g=='F'||g=='T'||g=='t')&&a<=18)
	{
	printf("The gender is :%c and age is %d,But not Eligible to vote",g,a);
	}
    
}
