#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

int countInversion(int t[], int n)
{
    int cpt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (t[i] > t[j])
                cpt++;
        }
    }
    return cpt;
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

    printf("%d", countInversion(t, n));
}