#include <stdio.h>

int main()
{

	void *p;
	int a[4] = {1, 2, 3, 8};
	p = &a;
	printf("%p\t%p", p, a);
}