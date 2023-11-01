//comparing area and perimeter of a rectangle
#include<stdio.h>
int main(){
   int l;
   printf("Enter value of length:");
   scanf("%d",&l);
   int b;
   printf("Enter value of breadth:");
   scanf("%d",&b);
   int a=l*b;

   int p=2*(l+b);
   if(a>p){
   	printf("Area of rectangle is greater than its perimeter");
   }
   else{
   	printf("Perimeter of rectangle is greater than its area");
   }
	
    return 0;
}