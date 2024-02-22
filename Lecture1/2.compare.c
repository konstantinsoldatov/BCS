#include<stdio.h>

int main(void)
{
    int x,y;
    printf("Please input x and y:\n");
    scanf("%d %d", &x, &y);
    if(x<y)
    {
        printf("%d < %d", x,y);
    }
    else if(x==y)
    {
        printf("%d = %d", x,y);
    }
    else
    {
        printf("%d > %d", x ,y);
    }

}