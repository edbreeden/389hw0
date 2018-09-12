#include <stdio.h>
#include <time.h>
#include <stdlib.h>



float *generate_random_list (unsigned sz)
{   
	int i;
	int list[sz];
	float *p;
    p = list;
    for (i = 0; i < sz; i++) {
    	int r = (rand() % 1001);
    	list[i] = r;
	printf("list[i]: %d (p + i): %f *(p +i): %f \n",list[i], (p+i), *(p+i));
    } return p;
}
int main(int argc, char *argv[])
{
    srand(time(NULL));
    int n,j;
    n = atoi(argv[1]);
    float *xs;
    xs = generate_random_list(n);
    for (j = 0; j < n; j++) {
    	printf("val: %f\n", *(xs + j));
    }
    return 0;
}
