/*  main2.c 后面的几节会使用这个例子    */
#include <dlfcn.h>
#include "vector.h"
#define MAX 2

int x[MAX] = {1, 2};
int y[MAX] = {3, 4};
int z[MAX];
long plusd;
int main(){
        void * handle;
        int (*sum)(int*, int);
        addvec(x, y, z, MAX);
        handle = dlopen("./libsum.so", RTLD_LAZY);
        sum = (int (*)(int*, int))dlsym(handle, "sum");
        plusd = sum(z, MAX);
        dlclose(handle);
        return plusd;
}