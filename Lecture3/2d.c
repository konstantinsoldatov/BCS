//пример работы с двумерными массивами, проходы, передача в функцию первым способом
#include<stdio.h>
#define ROWS 3
#define COLS 3
void print_arr(int arr[ROWS][COLS]);

int main()
{
    int arr[ROWS][COLS] = {};
    print_arr(arr);
}

void print_arr(int arr[ROWS][COLS])
{
    for(int i=0; i<ROWS; i++)
    {
        for(int j = 0; j<COLS; j++)
        {
            printf("%d ", *(*(arr+i)+j));
            // printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
}