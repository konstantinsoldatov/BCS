#include<stdio.h>

int main()
{
    // && - логическое И 
    // || - логическое ИЛИ
    char c;
    printf("Please input y\\n for yes or no\n");
    scanf("%c", &c);
    if(c == 'y' || c =='Y')
    {
        printf("Your input is %c, action confirmed\n", c);
    }
    else if(c == 'n' || c == 'N')
    {
        printf("Your input is %c, action canceled\n",c);
    }
    else
    {
        printf("Your input is incorrect\n");
    }
}