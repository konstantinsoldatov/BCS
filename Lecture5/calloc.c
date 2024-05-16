#include<stdio.h>
#include<stdlib.h>

int main()
{
    int len;
    int* arr = NULL;
    
    printf("Please input size of array: \n");
    scanf("%d", &len);

    arr = calloc(len,sizeof(int));
    if(arr ==NULL)
    {
        printf("Not enough memory; \n");
        exit(EXIT_FAILURE);
    }
 
    for(int i =0;i<len; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

}