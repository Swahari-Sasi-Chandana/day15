#include<stdio.h>
void main()
{
	int x,y;
	int z=1;
	printf("Enter x value:");
	scanf("%d",&x);
	printf("Enter y value:");
	scanf("%d",&y);
	while(y>0){
		z*=x;
		--y;
		
	}
	printf("Your Answer: %d",z);
	
}
