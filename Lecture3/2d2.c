//пример работы с двумерными массивами, проходы, передача в функцию через массив указателей
#include<stdio.h>
#define ROWS 3
#define COLS 3
void print_arr(int** arr, int rows, int cols);
void multiply(int* arr, int size);

int main()
{
    int arr[ROWS][COLS] = {};
    int* ptr_arr[ROWS] ;
    for(int i=0; i<ROWS; i++)
    {
        ptr_arr[i] = arr[i];
    }
    
    print_arr(ptr_arr, ROWS, COLS);
    
    
}

void print_arr(int** arr, int rows, int cols)
{
    for(int i = 0; i< ROWS; i++)
    {
        for(int j = 0; j<COLS; j++)
        {
            printf("%d ", *(*(arr+i)+j)); //арифметика указателей
        }
    printf("\n");    
    }

}