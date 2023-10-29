#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//Includes

//Main
int main(){

	//Variables
	int num;
	char lttr;
	char *arr[] = {"q","u","i","o"};

	//Generates random number
	srand(time(NULL));
	num = rand() % 4;

	//Determines letter based off random number
	lttr = *arr[num];

	//Prints number and letter
	printf("%d\n", num);
	printf("%c\n", lttr);

	return 0;
}
