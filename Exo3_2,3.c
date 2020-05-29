#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

long long countInversion(int t[], int n)
{
    long long cpt = 0;

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
void generateRand(int t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        t[i] = rand();
    }
}

int main()
{
    int t[N], n;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    generateRand(t, n);

    printf("%lld", countInversion(t, n));
}

/* 
    Réponse à la question 3:

   le temps d'exécution de cet algorithme va rapidement
   évoluer en fonction de n vue que la vérification emploie
   deux boucle for imbriquées (une compléxité de n²), expliquant
   ainsi le retard lors de la valeur de 100.000. 
   
*/