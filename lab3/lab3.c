#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int fact = 1;
    if (n < 2) {
        return 1;
    }
    int i = 1;
    for (i; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main()
{
    double function, element, eps = 2.72;
    int n = 0;

    for (double x = 0.1; x <= 1.0; x += 0.1) {
        double sum = 0.0, sum2 = 0.0;
        double u = pow(x, 2);
        function = (1 + 2 * pow(x, 2)) * pow(eps, u);
        for (n; n <= 10; n++) {

            element = (2 * n + 1) / (fact(n)) * pow(x, 2 * n);
            sum += element;
        }
        n = 0;

        do {
            element = (2 * n + 1) / (fact(n)) * pow(x, 2 * n);
            sum2 += element;
            n++;
        } while (element > 0.0001);

        printf("Function: %e ", function);
        printf("X: %e ", x);
        printf("Sum: %e ", sum);
        printf("Sum_eps: %e \n", sum2);
    }
    return 0;
}

