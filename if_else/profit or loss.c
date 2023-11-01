#include<stdio.h>
int main(){
    int sp;
    printf("Enter selling price:");
    scanf("%d",&sp);
    int cp;
    printf("Enter cost pricce:");
    scanf("%d",&cp);
    if(sp>cp){
    	printf("profit");
	}
	if (sp==cp){
		printf("Neither profit nor loss");
	}
	if (cp>sp){
		printf("loss");
	}
	
    return 0;
}