#include<stdio.h>
int testPointer2(){
    int x = 20, derf; 
    int *ptr; 
    ptr = &x;
    derf = *ptr;
    printf("Dereferrence");
    printf("Value of x: %d\n",x);
    printf("Put Value at ptr derf: %d\n",derf);
    printf("Address of x: %d\n",&x);
    printf("Address of derf: %d\n",&derf);
    printf("Address of ptr: %d\n",&ptr);
    return 0;
}