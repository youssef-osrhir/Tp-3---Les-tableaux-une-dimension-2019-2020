#include <stdio.h>
#include <math.h>
#define N 100000

int calculerPoly(int t[], int n, int x)
{
    int res = 0;

    for (int i = 0; i <= n; i++)
    {

        res += t[i] * ceil(pow(x, i));
        }
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
    int p[N], x, n;

    do
    {
        scanf("%d", &n);

    } while (n < 0 || n > N);

    printf("Donnez la valeur de x\n");
    scanf("%d", &x);

    lireCoef(p, n);

    printf("%d", calculerPoly(p, n, x));
}