#include <stdio.h>
//Includes

//Main
int main()
{
        //Variables for first number, second number, and operation
        float firstnum, secondnum;
        char operation;

        //User input and variable allocation for first number, second number, and operation
        printf("Enter the first numebr: ");
        scanf("%f", &firstnum);
        printf("Enter operation: ");
        scanf("%c", &operation);
        printf("Enter the second numebr: ");
        scanf("%f", &secondnum);

        //Switch statement for operation
        switch(operation)
        {
                //Prints result of subtraction operation
                case '-':
                        printf("%f\n", firstnum - secondnum);
                        break;
                //Prints result of multiplication operation
                case '*':
                        printf("%f\n", firstnum * secondnum);
                        break;
                //Prints result of addition operation
                case '+':
                        printf("%f\n", firstnum + secondnum);
                        break;
                //Prints result of division operation
                case '/':
                        printf("%f\n", firstnum / secondnum);
                        break;
                default:
                        printf("Not a valid operation\n");
                }
        return 0;
}
