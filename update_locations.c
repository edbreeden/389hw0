#include <stdio.h>
#include <stdlib.h>



int *generate_random_list (unsigned sz, unsigned ext)
{   
    int i;
    int list[(sz * 3)];
    for (i = 0; i < (sz * 3); i++) {
    	int r = (rand() % (ext));
    	list[i] = r;
        printf("val %d : %d  ", i, *(list + i));
    } 
    static int *xs;
    xs = list;
    return xs;
}

int main(int argc, char *argv[])
{
    int n,j,posext;
    n = atoi(argv[1]);
    srand(n);
    int *xlist;
    posext = 1001;
    //vecext = 3;
    xlist = generate_random_list(n, posext);
    printf("HEYE Look vAl 0 is: %d n NOT: %d", xlist, *xlist) 
    for (j = 0; j < n; j++) {
    	printf("xval %d : %d  ", j, *(xlist + j));
    }
    //int *xvex;
    //int *ylist;
   // int *xvex = generate_random_list(n, vecext);
   // for (k = 0; k < n; k++) {
    	//printf("mval %d : %d  ", k, *(xvex + k));
    //}
    return 0;
}
