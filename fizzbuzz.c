#include <stdio.h>
//Includes

//Main
int main(){
	//For loop
	for(int i = 1; i <= 100; i++){
		//If the number is divisible by 3, prints Fizz and number
		if((i % 3) == 0){
			printf("%d\t", i);
			printf("Fizz\n");
		}
		//If the number is divisible by 5, prints Buzz and number
		if((i % 5) == 0){
			printf("%d\t", i);
			printf("Buzz\n");
		}
		if(((i % 5) == 0) && ((i % 3) == 0)){
			printf("%d\t", i);
			printf("FizzBuzz\n");
		}

		if((i % 3 != 0) && (i % 5 != 0)){
			printf("%d\n", i);
		}
	}
}
