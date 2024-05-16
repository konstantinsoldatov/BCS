#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int* x = NULL;
    x = malloc(sizeof(int));
    if(x == NULL)
    {
        printf("Not enough memory; \n");
        exit(EXIT_FAILURE);
    }

    printf("Please input your number: \n");
    scanf("%d", x);
    printf("Your is number is: %d", *x);

    free(x);
    x = NULL;
}