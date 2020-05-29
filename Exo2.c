
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

int inclusion(int A[], int n, int B[], int m)
{
    for (int i = 0; i < m; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (A[j] == B[i])
                break;
        }
        if (j >= n)
            return 0;
    }

    return 1;
}

void lireElements(int t[], int n)
{
    printf("Donnez les elements : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
}

int main()
{
    int A[N], B[N], n, m;

    do
    {
        scanf("%d %d", &n, &m);

    } while ((n < 0 || n > N) || (m < 0 || m > N));

    lireElements(A, n);
    lireElements(B, m);

    printf("%d", inclusion(A, n, B, m));
}