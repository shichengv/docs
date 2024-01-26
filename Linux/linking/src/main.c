/*    main.c    */

#include "vector.h"
#define MAX 2

int sum(int *a, int n);
int x[MAX] = {1, 2};
int y[MAX] = {3, 4};
int z[MAX];
long bss;

int main(){
        addvec(x, y, z, MAX);
        bss = sum(z, MAX);
        return bss;
}