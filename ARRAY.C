#include <stdio.h>
int insertSorted(int arr[], int n, int key, int capacity)
{
    if (n >= capacity)
        return n;
  
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];
  
    arr[i + 1] = key;
  
    return (n + 1);
}
  
int main()
{
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;
  
    printf("\nBefore Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
  
    // Inserting key
    n = insertSorted(arr, n, key, capacity);
  
    printf("\nAfter Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
  
    return 0;
}
#include <stdio.h>
  
// To search a key to be deleted
int binarySearch(int arr[], int low, int high, int key);
  
/* Function to delete an element */
int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = binarySearch(arr, 0, n - 1, key);
  
    if (pos == -1) {
        printf("Element not found");
        return n;
    }
  
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
  
    return n - 1;
}
  
int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
    return binarySearch(arr, low, (mid - 1), key);
}
  
int main()
{
    int i;
    int arr[] = { 10, 20, 30, 40, 50 };
  
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
  
    printf("Array before deletion\n");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
  
    n = deleteElement(arr, n, key);
  
    printf("\n\nArray after deletion\n");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
}
