#include <stdio.h>
#include <math.h>

#define __EP 0.000000001

void print_cube_newton(int cube);

int main()
{
        int i;
        for (i = 1; i <= 100; i++) print_cube_newton(i);

        return 0;
}

void print_cube_newton(int cube)
{
        int count = 0;
        double guess = cube / 3 + 1;

        while (fabs(guess * guess * guess - cube) > __EP) {
                count++;
                guess = guess - (guess * guess * guess - cube) / (3 * (guess * guess));
        }

        printf("%d|%d|%3.10f\n", count, cube, guess);
}