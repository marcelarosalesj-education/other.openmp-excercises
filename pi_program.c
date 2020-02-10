#include "omp.h"
#include <stdio.h>

static long num_steps = 100000;
double step;

void main() {
    int i;
    double x, pi, sum = 0.0;

    step = 1.0/(double)num_steps;

    #pragma omp parallel num_threads(4) private(i, x) reduction(+:sum)
    {
        int ID = omp_get_thread_num();
        int start = ID*(num_steps/omp_get_num_threads());
        int end = (ID+1)*(num_steps/omp_get_num_threads());
        for (i=start; i < end; i++) {
            x = (i+0.5)*step;
            sum = sum+4.0/(1.0+x*x);
        }
    }
    pi = step*sum;
    printf("PI is %f\n", pi);
}
