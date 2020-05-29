#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

void inverserElements(float t[], int n)
{
    int tmp;
    for (int i = 0; i < n / 2; i++)
    {
        tmp = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = tmp;
    }
}

void lireElements(float t[], int n)
{
    printf("Donnez les elements : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &t[i]);
    }
}

void afficherElements(float t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.f ", t[i]);
    }
    printf("\n");
}

int main()
{
    float t[N];
    int n;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    lireElements(t, n);

    inverserElements(t, n);

    afficherElements(t, n);
}