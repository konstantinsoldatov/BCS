#include<stdio.h>
#define SIZE 4

void print(int* arr, int size);
void shift(int* arr, int size);
int permutation(int* arr, int size);

int main()
{
    int arr[SIZE] ={};
    for(int i = 0; i<SIZE; i++)
    {
        arr[i] = i;
    }
    permutation(arr, SIZE);
 
}

int permutation(int* arr, int size)
{
    int k = size-1;
    int count =1;
    print(arr,size);
    shift(arr,size);
    print(arr,size);
    count++;

    while(k!=0)
    {   
        
        shift(arr,k+1);
        if(arr[k]!=k)
        {
            print(arr,size);
            count++;
            k=size-1;
        }
        else
        {
            k--;
        }
        
    }
    printf("Number of permutatations = %d \n", count);
   
   

}



void shift(int* arr, int size)
{
    int temp = arr[0];
    for(int i = 0; i<size; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}


void print(int* arr, int size)
{
    for(int i =0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}