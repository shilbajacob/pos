#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		printf("the number is positive");
	}
	else if(n<0){
	 	printf("the number is negative");	
	}
	else
	{
	printf("the number is zero");		
	}
	return 0;
}
