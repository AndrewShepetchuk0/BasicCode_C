#include <stdio.h>
//includes

//main
int main()
{
	float price = 0.0;
	float tax = 1.13;
	printf("Input the price of the item: \n");
	scanf("%f", &price);
	printf("The price of the item after HST is: ");
	printf("%f\n", price * tax);

	return 0;
}
