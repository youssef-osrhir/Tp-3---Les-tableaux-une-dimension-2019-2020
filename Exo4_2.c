#include <stdio.h>
#include <math.h>
#define N 100000

int calculHorner(int t[], int n, int x)
{
    int res = t[n] * x;

    for (int i = n; i > 1; i--)
    {
        res = x * (res + t[i - 1]);
    }
    res = res + t[0];
    return res;
}

void lireCoef(int t[], int n)
{
    printf("Donnez les coefficients : \n");

    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &t[i]);
    }
}

int main()
{
    int A[N], n, x;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    printf("Donnez la valeur de x\n");
    scanf("%d", &x);

    lireCoef(A, n);

    printf("%d\n", calculHorner(A, n, x));
}