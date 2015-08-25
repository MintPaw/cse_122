#include<stdio.h>
#include<math.h>
#include<time.h>

void sum(unsigned int k, unsigned int a[2]);
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
	unsigned int v[2];
	time_t start = clock();
	sum(k, v);
	time_t end = clock();
	printf("%d|%d|%3.24lf\n", v[0], v[1], (double)(end - start)/CLOCKS_PER_SEC);
}

void sum(unsigned int k, unsigned int a[2])
{
	a[0] = k;
	a[1] = ((3 * k) * (k + 1)) / 2 - k;
}
