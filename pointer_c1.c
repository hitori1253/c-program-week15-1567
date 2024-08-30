#include<stdio.h>
int testPointer(){
    int var = 10;
    int *ptr;//declare pointer variablr
    ptr=&var;
    //Assign the address of a variable to pointer
    printf("Value addres var ptr = %p\n",ptr);
    printf("Value addres at ptr = %p\n",&ptr);
    printf("Value at var = %d\n",var);
    printf("Value at pointe = %d\n",*ptr);
}