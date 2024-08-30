#include "test_address.c"
#include "pointer_c1.c"
#include "pointer_c2.c"
#include "pointer_c3.c"
#include "pointer_array.c"
#include<stdio.h>
int count(int counter){
    int ct= counter;
    for (int i = 0; i <= ct; i++)
    {
        printf("=");
    }
    printf("\n");
    return 0;
}
void main(){
    int number = 30;
    printf("Pointer variable in c-progarming\n");
    count(number);
    testPtrAndArray();
    //testPointer2();
    //testPointer3();
    //testAddress();
    //testPointer();
}