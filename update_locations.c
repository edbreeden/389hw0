#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int *generate_random_list (unsigned sz)
{   
    int i;
    int list[sz];
    for (i = 0; i < sz; i++) {
    	int r = (rand() % 1001);
    	list[i] = r;
    } 
    static int *xs;
    xs = list;
    return xs;
}
int main(int argc, char *argv[])
{
    srand(time(NULL));
    int n,j;
    n = atoi(argv[1]);
    int *xs;
    xs = generate_random_list(n);
    for (j = 0; j < n; j++) {
    	printf("val %d : %d\n", j, *(xs + j));
    }
    return 0;
}
