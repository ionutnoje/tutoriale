#include <iostream>

int compare(int a, int b, int sign)
{
    if(sign == 1)
    {
        if(a > b) return 1;
        else return -1;
    }
    else if(sign == -1)
    {
        if(a < b) return 1;
        else return -1;
    }

    return 1;
    
}


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n, int (*ptr)(int ,int, int), int sign)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
         for (j = 0; j < n - i - 1; j++)
            if (compare(arr[j], arr[j + 1], sign) > 0)
                swap(&arr[j], &arr[j + 1]);


}
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i];
    std::cout << "\n";
}
 

int main()
{
    int arr[] = { 5, 1, 4, 2, 8 };

    bubbleSort(arr, sizeof(arr)/sizeof(arr[0]), compare, -1);
    printArray(arr, sizeof(arr)/sizeof(arr[0]));


    return 0;
}