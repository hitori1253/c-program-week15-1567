#include<stdio.h>
int testPointer3(){
    int num = 10;
    int *ptr;
    ptr = &num;
    printf("Value of num = %d\n",num);
    printf("Addres of num = %d\n",&num);
    printf("Addres stored in ptr = %p\n",ptr);
    *ptr = 6;
    printf("Dereference Value of *ptr = %d\n",*ptr);
    printf("Value of num = %d\n",num);
    num = 20;
    printf("Dereference Value of *ptr = %d\n",*ptr);
    printf("Value of num = %d\n",num);
    return 0;
}