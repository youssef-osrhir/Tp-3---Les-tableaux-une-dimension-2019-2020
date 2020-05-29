#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

void conquerCombine(int t[], int t1[], int t2[], int n)
{

    int i1 = 0;
    int i2 = 0;
    t1[n / 2] = __INT_MAX__;
    t2[n - n / 2] = __INT_MAX__;

    for (int i = 0; i < n; i++)
    {
        if (t1[i1] <= t2[i2])
        {
            t[i] = t1[i1];
            i1++;
        }

        else
        {
            t[i] = t2[i2];
            i2++;
        }
    }
}
void divide(int t[], int n)
{

    int mid = n / 2;
    int t1[mid], t2[n - mid];

    if (n < 2)
        return;

    for (int i = 0; i < mid; i++)
    {
        t1[i] = t[i];
    }
    for (int i = mid; i < n; i++)
    {
        t2[i - mid] = t[i];
    }

    divide(t1, mid);
    divide(t2, n - mid);
    conquerCombine(t, t1, t2, n);
}

void afficherElements(int t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
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
    int t[N], n;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    lireElements(t, n);

    divide(t, n);

    afficherElements(t, n);
}