
#include <stdio.h>
int main()
{
	int a,b;
	printf("\n Enter the value of a: ");
	scanf("%d",&a);
	printf("\n Enter the value of b: ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping a: %d \n",a);
	
	printf("After swapping b: %d \n",b);
	return 0;
	
}
