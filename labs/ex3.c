#include <stdio.h>
int main()
{
	unsigned long int max = 0;
	unsigned long int min = ~max;
    int n=0;
	while (max>0)
    {
        max=max>>1;
        n++;
    }
	printf("unsigned long int is sizeof %d bit. The max is %lu, the min is %lu\n",n, max, min);
	return 0;
}