
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

int t2[N];

void lireElements(int t[], int n)
{
    printf("Donnez les elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
}

int supprimerOccurences(int t[], int n, int v)
{
    int j = 0;
    int cpt = 0;

    for (int i = 0; i < n; i++)
    {
        if (t[i] == v)
        {
            cpt++;
            continue;
        }

        t2[j] = t[i];
        j++;
    }
    return cpt;
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

    int t[N], n, v, cpt;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    printf("Donnez l'element a supprimer : \n");
    scanf("%d", &v);

    lireElements(t, n);

    cpt = supprimerOccurences(t, n, v);

    afficherElements(t2, n - cpt);
}