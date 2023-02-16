#include<stdio.h>
void main()
{
	int i;
	float n,c;
	i=1;
	n=1.00;
	while(i<=10&&n<2.00){
		printf("%d\t%.2f\n",i,n);
		i++;
		n=n+0.1;
	}
	
}
