#include <stdio.h>

#define SWAP(a,b)  {int t; t = a; a=b; b=t;}


void BubbleSort(int *base, int n);
int main(void)
{
    int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
    BubbleSort(arr, 10);
    return 0;
}
void ViewArr(int *arr, int n);
void BubbleSort(int *base, int n)
{
    int i, j;
    ViewArr(base, n);
    for (i = n; i>1; i--)
    {
        for (j = 1; j<i; j++)
        {
            if (base[j - 1]>base[j])
            {
                SWAP(base[j - 1], base[j]);
                ViewArr(base, n);
            }
        }
    }
}

void ViewArr(int *arr, int n)
{
    int i = 0;
    for (i = 0; i<n; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}

