#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swapElement(int arr[], int first, int second)
{
    int temp;
    temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("INPUT %d : %d\n", i, *(arr + i));
    }
}

int main()
{
    int *numArr = NULL;
    int arrSize = 0;

    int first, second = 0;

    printf("Enter an array size : ");
    scanf("%d", &arrSize);

    numArr = malloc(sizeof(int) * arrSize);
    
    for (int i = 0; i < _msize(numArr) / sizeof(int); i++)
    {
        printf("%d : ", i);
        scanf("%d", &numArr[i]);
    }

    printf("*******************************************\n");
    printArray(numArr, _msize(numArr)/sizeof(int));

    printf("Swap(ex 2,0) : ");
    scanf("%d %d", &first, &second);
    swapElement(numArr, first, second);
    
    printf("*******************************************\n");
    printArray(numArr, _msize(numArr) / sizeof(int));

    free(numArr);

    return 0;
}