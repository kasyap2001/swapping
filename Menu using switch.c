#include<stdio.h>
int main()
{
	int choice;
	printf("\n Please select an Food Item\n1. Fried Rice\n2. Manchuria\n3. Roti\n4. Curry\n5. Ice Cream \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Your Selected Food Item- Fried Rice\n Price- 179 \n");
			break;
		case 2:
			printf("\n Your Selected Food Item- Manchuria\n Price- 129 \n");
			break;
		case 3:
			printf("\n Your Selected Food Item- Roti\n Price- 40 \n");
			break;
		case 4:
			printf("\n Your Selected Food Item- Curry\n Price- 190 \n");
			break;
		case 5:
			printf("\n Your Selected Food Item- Ice Cream\n Price- 100 \n");
			break;	
		default : printf("\n Invalid Choice \n");
	}
}
