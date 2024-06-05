#include<stdio.h>
#include<stdlib.h>
void print_2d(int** arr, int rows, int cols);
int** allocate_2d_arr(int* rows, int* cols);
void deallocate_2d_arr(int** arr, int rows, int cols);


int main()
{   
    int rows, cols;
    int** arr = allocate_2d_arr(&rows, &cols);
    print_2d(arr, rows, cols);
    deallocate_2d_arr(arr, rows, cols);
}

int** allocate_2d_arr(int* rows, int* cols)
{
    printf("Please input number of rows and cols: \n");
    scanf("%d %d", rows, cols);
    int** arr = calloc(*rows, sizeof(int*));
    if(arr == NULL)
    {
        printf("Memory allocation failure; \n");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i<*rows; i++)
    {
        arr[i] = calloc(*cols, sizeof(int));
        if(arr[i] == NULL)
            {
             printf("Memory allocation failure; \n");
             exit(EXIT_FAILURE);
            }
    }
    return arr;
}

void print_2d(int** arr, int rows, int cols)
{
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j< cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void deallocate_2d_arr(int** arr, int rows, int cols)
{
     for(int i = 0; i<rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
    arr = NULL;
    printf("Memory deallocated; \n");
}