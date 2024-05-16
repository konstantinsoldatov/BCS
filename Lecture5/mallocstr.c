#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{
    char* name = NULL;
    int size, slen;

    printf("Please input size of string: \n");
    scanf("%d", &size);

    name = malloc(size*sizeof(char));
    if(name == NULL)
    {
        printf("Error;\n");
        exit(EXIT_FAILURE);
    }
    printf("Please input string: \n");
    scanf("%s", name);
    slen = strlen(name);
    name = realloc(name,slen*sizeof(char));
    if(name == NULL)
    {
        printf("Error;\n");
        exit(EXIT_FAILURE);
    }

    printf("Hello, %s, your name is %d characters long, but size of allocated dynamic memory = %d \n", name, slen, _msize(name));
    free(name);
    name = NULL;    
    printf("Memory deallocated");
}