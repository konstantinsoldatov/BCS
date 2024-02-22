#include<stdio.h>

int main(void)
{
    char name[256];
    int age;
    printf("What's your name?\n");
    gets(name);
    printf("Hello, %s\n", name);
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("Wow, %s, you are %d years old, cool!\n", name, age);
}

//ctrl+e - открыть терминал
//ctrl+b - открыть вкладки меню
//ctrl+/ - многострочный комментарий
//shift+alt+a - многострочный комментарий
//ctrl+x - вырезать+добавить в буфер


