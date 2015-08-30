#include<stdio.h>
#include<math.h>
#include<time.h>

void sum(unsigned int k, unsigned int a[3]);
void test_sum(unsigned int k);

int main()
{
        test_sum(1);
        test_sum(10);
        test_sum(pow(10, 2));
        test_sum(pow(10, 3));
        test_sum(pow(10, 4));
        test_sum(pow(10, 5));
        test_sum(pow(10, 6));
        test_sum(pow(10, 7));
        test_sum(pow(10, 8));
        test_sum(pow(10, 9));
        return 0;
}

void test_sum(unsigned int k)
{
        unsigned int v[3];
        time_t start = clock();
        sum(k, v);
        time_t end = clock();
        printf("%d|%d|%d|%3.24lf\n", v[0], v[1], v[2], (double)(end - start)/CLOCKS_PER_SEC);
}

void sum(unsigned int k, unsigned int a[3])
{
        unsigned int t = 0;
        a[0] = 1;
        a[1] = k;

        int i;
        for (i = 1; i <= k; i++) {
                a[0]++;
                t += (3 * i - 1);
        }
        
        a[2] = t;
}