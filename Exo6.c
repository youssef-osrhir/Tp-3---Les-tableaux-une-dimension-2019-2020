#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

int t2[N];

void lireElements(int t[], int n)
{
    printf("Donnez les elements tries par ordre croissant : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
}
 
void insererElement(int t[], int n, int v)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {

        if (t[i] >= v && t[i - 1] < v)
        {
            t2[j] = v;
            j++;
        }
        t2[j] = t[i];
        j++;
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
    int t1[N], n, v;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    printf("Donnez l'element a inserer : \n");
    scanf("%d", &v);

    lireElements(t1, n);

    insererElement(t1, n, v);

    afficherElements(t2, n + 1);
}
