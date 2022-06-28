#include <stdio.h>
#include <stdlib.h>
void inputarr(int arr[], int n);
void reverse(int arr[], int n);
void actual(int arr[], int n);
void printarr(int arr[], int n);
void swap(int *a, int *b);
int main()
{
    int n, i;
    int *ptr;
    printf("enter the size \n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    inputarr(arr, n);
    printarr(arr, n);
    reverse(arr, n);
    printarr(arr, n);
    return 0;
}
void inputarr(int arr[], int n)
{
    int i;
    printf("Enter your elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void reverse(int arr[], int n)
{
    int i, temp;
    for (i = 0; i < (n); i++, n--)
    {
        swap(&arr[i], &arr[n - 1]);
    }
}
void printarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
 enter the size 
3
Enter your elements 
1
2
3
1 2 3 
3 2 1 
*/ 
