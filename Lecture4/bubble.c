// 10 5 25 14 50
// 5 10 25 14 50
// 5 10 14 25 50

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 10

void fill_arr(int arr[SIZE]);
void print(int arr[SIZE]);
void swap(int* a, int* b);
void sort_arr(int arr[SIZE]);

int main()
{
    srand(time(NULL));
    int arr[SIZE] = {};
    fill_arr(arr);
    print(arr);
    sort_arr(arr);
}

void fill_arr(int arr[SIZE])
{
    for(int i =0; i<SIZE; i++)
    {
        arr[i] = rand() %100;
    }
}

void print(int arr[SIZE])
{
     for(int i =0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* a, int* b)
{
    *a = *a+*b;
    *b = *a- *b;
    *a = *a-*b;
}

void sort_arr(int arr[SIZE])
{
    for(int i =0; i<SIZE; i++)
    {
        for(int j = 0; j<SIZE-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(&arr[j+1], &arr[j]);
                print(arr);
            }
        }
    }

}