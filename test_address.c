#include<stdio.h>
int testAddress(){
    int a = 5;
    printf("value of normol variable:%d\n",a);
    printf("Address of normol variable:%d\n",&a);
    printf("Address of normol variable:%x\n",&a);
    printf("Address of normol variable:%p\n",&a);
    return 0;
}