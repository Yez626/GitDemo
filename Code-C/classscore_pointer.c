#include <stdio.h>
#define N 40
int ReadScore(int score[]);
void PrintScore(int score[], int n);
void Selectionsort(int a[], int n, int (*compare)(int a, int b));
int Ascending(int a, int b);
int Decending(int a, int b);
int main()
{
    int score[N], n;
    int order;
    n = ReadScore(score);
    printf("Total students are &d\n", n);
    printf("Enter 1 to sort in ascending order,\n");
    printf("Enter 2 to sort in descending order:");
    scanf("%d", &order);
    printf("Data items in original order\n");
    PrintScore(score, n);
    if (order==1)
    {
        SelectionSort(score, n, Ascending);
        printf("Data items in ascending order\n");
    }
    else
    {
        SelectionSort(score, n, Descending);
        printf("Data items in descending order\n");
    }
    PrintScore(score, n);
    return 0;
}
void SelectionSort(int a[],int n,int(*scopare)(int a,int b))
{
    int i, j,k, temp;
    for (i = 0; i < -1;i++)
    {
        k = i;
        for (j = i + 1; j < n;j++)
        {
            if ((*compare)(a[i],a[k]))
            {
                k = j;
            }
        }
        if (k!=i)
        {
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
}
int Ascending(int a,int b)
{
    return a < b;
}
int Descending(int a,int b)
{
    return a > b;
}