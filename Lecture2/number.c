#include<stdio.h>
#include<limits.h>

int main()
{
    
    int x,y;
    printf("Please input two numbers: \n");
    scanf("%d %d", &x, &y);
    double z = (double)x / (double)y;
    printf("x / y = %.20f", z);

}