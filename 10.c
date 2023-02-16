#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the number");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		if((n%i)==0)
		printf("%d\t",i);
		i++;
	}
}
