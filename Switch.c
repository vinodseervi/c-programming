#include<stdio.h>

int main(){
	
	int age , marks;
	printf("Enter your age\n");
	scanf("%d", &age);
	printf("Enter your mraks\n");
	scanf("%d", &marks);
	
	switch (age)
	{
		case 3:
			printf("The age is 3\n");
			
			switch (marks)
		{
			case 45:
				printf("Your marks are 45");
				break;
				
				default:
					printf("Your marks are not 45");
		}
			break;
			
		case 13:
			printf("The age is 3");
			break;
			
		case 26:
			printf("The age is 26");
			break;
			
			default:
				printf("Age is not 3,13,26");
				
	}
	return 0;
}
