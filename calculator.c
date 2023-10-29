#include <stdio.h>
//Includes

//Main
int main()
{
        float firstnum, secondnum;
        char operation;

        printf("Enter the first numebr: ");
        scanf("%f", &firstnum);
        printf("Enter operation: ");
        scanf("%c", &operation);
        printf("Enter the second numebr: ");
        scanf("%f", &secondnum);

        switch(operation)
        {
                case '-':
                        printf("%f\n", firstnum - secondnum);
                        break;
                case '*':
                        printf("%f\n", firstnum * secondnum);
                        break;
                case '+':
                        printf("%f\n", firstnum + secondnum);
                        break;
                case '/':
                        printf("%f\n", firstnum / secondnum);
                        break;
                default:
                        printf("Not a valid operation\n");
                }
        return 0;
}
