#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

void lireElements(int t[], int n)
{
    printf("Donnez les elements comme demande dans la question : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
}

void fusion(int *t, int d, int m, int f)
{
    int A[N], B[N];
    int k = 0, j = 0;

    for (int i = d; i < m; i++)
    {
        A[j] = t[i];
        j++;
    }
    j = 0;
    for (int i = m; i < f; i++)
    {
        B[j] = t[i];
        j++;
    }

    A[m - d] = __INT_MAX__;
    B[f - m] = __INT_MAX__;

    j = 0;

    for (int i = d; i < f; i++)
    {
        if (A[j] <= B[k])
        {
            t[i] = A[j];
            j++;
        }
        else
        {
            t[i] = B[k];
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
    int t[N], n, m, d, f;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    lireElements(t, n);

    printf("Donner d,m et f :\n");
    scanf("%d %d %d", &d, &m, &f);

    fusion(t, d, m, f);

    afficherElements(t, n);
}