#include<stdio.h>
void get_size(int* rows, int* cols);
void print(int rows, int cols);

int main()
{   int rows, cols;
    
    get_size(&rows, &cols); // ввод пользователем размерности, проверка на правильность ввода
    
    print(rows, cols); // вывод на экран массива символов #
    
}

void get_size(int* rows, int* cols)
{
    do
    {
        printf("Please input two number: \n");
        scanf("%d %d", rows, cols);
    }
    while(*rows < 1 || *cols < 1);

}
 
void print(int rows, int cols)
{
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            printf("#");
        }
    printf("\n");
    }

}


    
   