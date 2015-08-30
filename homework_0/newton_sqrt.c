#include <stdio.h>
#include <math.h>

#define __EP 0.000000001

void print_square_newton(int square);

int main()
{
        int i;
        for (i = 1; i <= 100; i++) print_square_newton(i);

        return 0;
}

void print_square_newton(int square)
{
        int count = 0;
        double guess = square / 2 + 1;

        while (fabs(guess * guess - square) > __EP) {
                count++;
                guess = guess - (guess * guess - square) / (2 * guess);
        }


        printf("%d|%d|%3.10f\n", count, square, guess);
}