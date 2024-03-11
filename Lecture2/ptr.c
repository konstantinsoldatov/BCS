#include<stdio.h>
int* f(int* x);

int main()
{
    int x = 5, y =4;
    int* ptr_x = &x; 
    int* ptr_y = &y;
    
    f(ptr_x);
    f(ptr_y);
    printf("%d %d", x, y);
}

int* f(int* x)
{
    *x = *x +5;
    return x;
}