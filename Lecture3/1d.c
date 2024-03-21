//пример работы с одномерными массивами, проходы, передача в функцию
#include<stdio.h>
#define SIZE 3
float average(int* arr, int size);
void print_arr(int* arr, int size);
void multiply(int* arr, int size);

//%d - decimal 
//%p - pointer
 
// const int SIZE = 3;
int main()
{
    int score[SIZE] = {15, 25, 34};
    printf("%f \n", average(score, SIZE));
    //вывод массива на экран
    print_arr(score, SIZE);
    multiply(score , SIZE);
    print_arr(score, SIZE);
    //умножение массива на число
    
}

float average(int* arr, int size)
{
    float result = 0;
    for(int i = 0; i<size; i++)
    {
        result +=arr[i];
    }
    return result / (float)size;
}

void print_arr(int* arr, int size)
{
    for(int i =0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void multiply(int* arr, int size)
{
    int n;
    printf("PLease input number: \n");
    scanf("%d", &n);
    for(int i =0; i < size; i++)
    {
        arr[i] *= n;
    }
}