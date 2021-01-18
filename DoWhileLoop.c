#include<stdio.h>

int main(){
	
	int num, index =0;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	do
	{
		printf("%d\n", index +5); //which number to start
		index =index +5 ; //+ of number
		
	}while (index < num);
	
	return 0;
}
