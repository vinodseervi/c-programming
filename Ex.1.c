#include<stdio.h>

int main(){
	 printf("\aThis is a calculador\n");
	int a,b,c;
	   
		printf("Enter number a\n");
	scanf("%d",&a);
	
	printf("Enter number b\n");
	scanf("%d",&b);

    printf("Enter 1.For addition \nEnter 2.For subtraction \nEnter 3.For multiplication \nEnter 4.For division\n");
    scanf("%d", &c);
    printf("You have entered %d as your code\n", c);
    
    
	if(c==1)
	{
		printf("The addition is %d\n",a+b);
	}
	
	else if(c==2)
	{
		printf("The subtraction is %d\n",a-b);
	}
	else if(c==3)
	{
		printf("The multiplication is %d\n",a*b);
	}
	else if(c==4)
	{
		printf("The division is %d\n",a/b);
	}
	else {
		printf("This is a not correct value! ");
	}
	
	
	return 0;
}
