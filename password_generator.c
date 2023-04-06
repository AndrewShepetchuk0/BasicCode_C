//imports
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//main method
int main(){

	//length of the password
	//Still pre-determined because it wouldn't work with user input
	int length = 64;

	//variables for counter
	int i = 0;
	int r = 0;

	//Random number generator
	srand((unsigned int)(time(NULL)));

	//Array of characters used
	char number[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbol[] = "`~!@#$%&*()-_=+[]{}|:;,./<>?";

	//password storage
	char pw[length];

	//Selects randomizer (characters to randomize)
	r = rand() %4;

	for(i = 0; i < length; i++){
		if(r == 1){
			pw[i] = number[rand() % 10];
			r = rand() % 4;
			printf("%c", pw[i]);
		}
		else if(r == 2){
			pw[i] = letter[rand() % 26];
			r = rand() % 4;
			printf("%c", pw[i]);
		}
		else if(r == 3){
			pw[i] = LETTER[rand() % 26];
			r = rand() % 4;
			printf("%c", pw[i]);
		}
		else{
			pw[i] = symbol[rand() % 28];
			r = rand() % 4;
			printf("%c", pw[i]);
		}
	}
	return 0;
}
