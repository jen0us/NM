#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) (x*x*x*x + x*x - 1)
#define p(x) (1/sqrt(x*x + 1))
#define dp(x) (-1/(2*pow(x*x + 1, 1.5)))
#define e 0.001
#define MAX_ITERATIONS 1000

int main() {
    float a, b, x0, f0, f1, dp0, xn;
    printf("Enter the value of a and b: ");
    scanf("%f%f", &a, &b);

    f0 = f(a);
    f1 = f(b);

    if (f0 * f1 < 0)
        x0 = fabs((a + b) / 2);
    else {
        printf("No root exists in the given interval.");
        return 0;
    }

    int i = 0;
    do {
        dp0 = dp(x0);
        xn = p(x0);
        x0 = xn;
        i++;

        printf("The value of iteration %d is: %f\n", i, xn);
    } while (fabs(xn - x0) > e && i < MAX_ITERATIONS);

    if (i >= MAX_ITERATIONS)
        printf("Maximum number of iterations reached. No convergence.");

    printf("The value of the root is: %f\n", xn);

    return 0;
}

