#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int * generate_random_list (unsigned sz)
{   
	int i;
	float list[sz];
	float *p;
    p = list;
    for (i = 0; i < sz; i++) {
    	int r = (rand() % 1001);
    	list[i] = r;
    }
}
int main(int argc, char *argv[])
{
	srand(time(NULL));
    int n,j;
    n = atoi(argv[1]);
    xs = generate_random_list(n);
    for (j = 0; j < n; j++) {
    	printf("val: %d\n", xs[j] );
    }
    printf("%s\n", );

}