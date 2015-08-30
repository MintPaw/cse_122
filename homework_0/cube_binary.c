#include <stdio.h>
#include <math.h>

#define __EP 0.00000001

void print_cube(int cube);

int main()
{
        int i;
        for (i = 1; i <= 100; i++) print_cube(i);

        return 0;
}

void print_cube(int cube)
{
        int count = 0;

        double low = 0;
        double high = 125 / 3;

        double guess = 0;
        double diff = 999;

        while (fabs(diff) > __EP) {
                count++;
                guess = (high + low) / 2;
                diff = guess * guess * guess - cube;

                if (diff < 0) low = guess;
                if (diff > 0) high = guess;
        }

        printf("%d|%d|%3.10f\n", count, cube, guess);
}