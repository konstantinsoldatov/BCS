//алгоритм бинарного поиска
//TO DO: Дописать функцию, проверяющую отсортирован ли массив
#include<stdio.h>
#define SIZE 10
void print_arr(int* arr, int size);
int bin_search(int* arr, int size);

int main()
{
    int arr[SIZE] = {10, 15, 25, 35, 44, 55, 68, 77, 81, 99};
    print_arr(arr, SIZE);
    //вызов функции бинарного поиска
    bin_search(arr, SIZE);
}

void print_arr(int* arr, int size)
{
    for(int i =0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int bin_search(int* arr, int size)
{
    int item; //число которое вводит пользователь
    int count = 0; //счетчик итераций
    printf("Please input number: \n");
    scanf("%d", &item);
    int left = 0, right = size -1; //левая граница, правая граница
    while(left<=right)  //цикл выполняется пока левая и правая граница не совпадут
    {
        int mid = (left+right)/2;  //вычисляем середину
        if(arr[mid] == item) 
        {
            printf("Your item indexed as %d in array and = %d \n", mid, arr[mid]);
            printf("Number of iterations is %d \n", count);
            return mid;
        }
        else if(arr[mid]> item)
        {
            right = mid-1;  //сдвигаем правую границу влево
            count++; 
        }
        else
        {
            left = mid+1; //сдвигаем левую границу вправо
            count++;
        }
    }
    printf("Your item is not in list \n"); //если число отсутствует в массиве функция возвращает -1
    return -1;
}