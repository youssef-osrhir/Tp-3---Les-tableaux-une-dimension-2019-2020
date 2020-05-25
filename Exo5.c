#include <stdio.h>
#include <math.h>
#define N 100000

void ordonnerCouleurs(char t[], int n)
{
    int count_R = 0, count_W = 0, count_B = 0;

    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'R')
        {
            count_R++;
        }
        else if (t[i] == 'W')
        {
            count_W++;
        }
        else
        {
            count_B++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i < count_R)
            t[i] = 'R';
        else if (i < count_R + count_W)
            t[i] = 'W';
        else
            t[i] = 'B';
    }
}

void lireCouleurs(char t[], int n)
{
    printf("Donnez les couleurs : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &t[i]);
    }
}

void afficherTableau(char t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", t[i]);
    }
    printf("\n");
}

int main()
{
    char t[N];
    int n, count_R = 0, count_W = 0, count_B = 0;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    lireCouleurs(t, n);

    ordonnerCouleurs(t, n);

    afficherTableau(t, n);
}