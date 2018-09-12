#include <stdio.h>
#include <stdlib.h>



int *generate_random_list (unsigned sz)
{   
    int i,l;
    int list[(sz * 3)];
    for (i = 0; i < (sz * 3); i++) {
    	int r = (rand() % 1001);
    	list[i] = r;
        printf("xval %d : %d  ", i, *(list + i));
    } 
    static int *vects;
    vects = (list + (sz * 3));
    for (l = 0; l < (sz * 3); l++) {
        int s = (rand() % 2);
        vects[i] = s;
        printf("vecval %d : %d  ", l, *(vects + l));
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
    xlist = generate_random_list(n);
    printf("HEYE Look vAl 0 is: %d\n", *xlist); 
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
