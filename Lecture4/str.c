#include<stdio.h>
#include<string.h>
void uppercase(char* arr, int size);

int main()
{
    char* name;
    char* words[] = {"Hello" , "World"};
    // printf("Please input your name:\n");
    // gets(name);
    // uppercase(name, strlen(name));
    // printf("%s \n", name);
    printf("%c", words[0][0]);



}

void uppercase(char* arr, int size)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i]-=32;
        }
    }
}