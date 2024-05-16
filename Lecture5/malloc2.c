#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int* arr, int size);
int* create_dynamic_array(int* size);
void deallocate_dynamic_array(int* arr);


int main()
{
    int size;
    //Объявление динамического массива и заполнение его случайными числами от 0 до 100
    int* arr = create_dynamic_array(&size);

    //Вывод массива на экран
    print(arr, size);

    //Освобождение памяти
    deallocate_dynamic_array(arr);
}

int* create_dynamic_array(int* size)
{
    int*ptr = NULL;
    srand(time(NULL));
    printf("Please input size of array: \n");
    scanf("%d", size);
    ptr = malloc(*size*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation error; \n");
        exit(EXIT_FAILURE);
    }
    for(int i=0;i<*size; i++)
        {
    ptr[i] = rand() % 100;
        }
    return ptr;
}

void print(int* arr, int size)
{
    for(int i =0; i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deallocate_dynamic_array(int* arr)
{
    free(arr);
    arr = NULL;
    printf("Memory deallocated; \n");
}