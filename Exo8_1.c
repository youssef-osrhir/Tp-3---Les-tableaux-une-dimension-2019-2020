#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

void lireElements(int t[], int n)
{
    printf("Donnez les elements : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
}
 
void fusion2tab(int A[], int B[], int C[], int n, int m)
{
    int j = 0, k = 0;

    for (int i = 0; i <= n + m; i++)
    {
        if (A[j] <= B[k])
        {
            C[i] = A[j];
            j++;
        }

        else
        {
            C[i] = B[k];
            k++;
        }
    }
}

void afficherElements(int t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
}

int main()
{
    int A[N], B[N], C[N], n, m;

    do
    {
        scanf("%d %d", &n, &m);

    } while ((n < 0 || n > N) || (m < 0 || m > N));

    lireElements(A, n);
    lireElements(B, m);

    A[n] = __INT_MAX__;
    B[m] = __INT_MAX__;

    fusion2tab(A, B, C, n, m);

    afficherElements(C, n + m);
}
