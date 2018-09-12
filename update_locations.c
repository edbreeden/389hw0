#include <stdio.h>
#include <stdlib.h>



int *generate_random_list (unsigned sz)
{   
    int i;
    int list[sz];
    for (i = 0; i < sz; i++) {
    	int r = (rand() % 1001);
    	list[i] = r;
        printf("val %d : %d\n", i, *(list + i));
    } 
    static int *xs;
    xs = list;
    return xs;
}
int main(int argc, char *argv[])
{
    int n,j;
    n = atoi(argv[1]);
    srand(n);
    int *rlist;
    rlist = generate_random_list(n);
    for (j = 0; j < n; j++) {
    	printf("mval %d : %d\n", j, rlist[j]);
    }
    return 0;
}
