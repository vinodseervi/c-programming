#include<stdio.h>

int main(){
	
	int gift;
	printf("Enter your subject code \n 1.maths and science \n 2.science \n 3.maths \n");
	
	scanf("%d", &gift);
	printf("You have entered %d as your code\n", gift);
	
	if(gift==1){
		printf("You are pass in both subjects so your goft is Rs.45");
	}
	
	else if(gift==2)
	{
		printf("You are pass in science so your gift is Rs.15");
	}
	else if(gift==3)
	{
		printf("You are passnin science so your gift is Rs.15");
	}
	else {
		printf("You have can not pass in thier subjects so no gifts for you");
	}
	
	
	return 0;
}
