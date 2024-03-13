#include<stdio.h>
#define SIZE 10

int main()
{   
    int arr[SIZE] = {1, 5 ,7 ,10, 15, 25, 23, 88, 100, 110};
                    
    for(int i=0; i<SIZE-1; i++)
    {
       printf("%d\n", arr[i]+arr[i+1]);
    }
    
}