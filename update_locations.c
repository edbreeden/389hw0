#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
int array_sum(unsigned sz, int *arr) {
    int i, sum;
    sum = 0;
    for (i=0; i< sz; i ++) {
        sum = sum + arr[i];
    } 
    return sum;
}
void update_coords(unsigned sz, int *x, int *y, int *z, int *vx, int *vy, int *vz) {
    int i;
    for (i=0; i< sz; i++) {
        x[i] = x[i] + vx[i];
        y[i] = y[i] + vy[i];
        z[i] = z[i] + vz[i];
        return;
    }
    
}
int main(int argc, char *argv[])
{
    int n,j,m;
    n = atoi(argv[1]);
    m = atoi(argv[2]);
    srand(n);
    int *xlist;
    int *ylist;
    int *zlist;
    int *vx;
    int *vy;
    int *vz;
    xlist = generate_random_list(n); 
    for (j = 0; j < n; j++) {
    	printf("xval %d : %d  ", j, *(xlist + j));
    }
    ylist = (xlist + (n // 3));
    zlist = (ylist + (n // 3));
    vx = xlist + n;
    vy = vx + (n // 3);
    vz = vy + (n // 3);
    int iter
    int start = clock_gettime(CLOCK_PROCESS_CPUTIME_ID);
    for (iter=0;iter < m;iter++) {
        updatecoords(n,xlist,ylist,zlist,vx,vy,vz);
    }
    int end_time = clock_gettime(CLOCK_PROCESS_CPUTIME_ID)
    print "avg time per coord: %d", (end-start)/(m*n));
               
    int chksum = array_sum(sz*3, xlist;
    //int *xvex;
    //int *ylist;
   // int *xvex = generate_random_list(n, vecext);
   // for (k = 0; k < n; k++) {
    	//printf("mval %d : %d  ", k, *(xvex + k));
    //
    return 0;
    }
}
