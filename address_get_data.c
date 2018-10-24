#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a = 10;
    int* temp;
    printf("a address is : %p",&a);
    scanf("%p",&temp);
    int* ptr = (int*)(temp);
    printf("data = %d\n",*ptr); //output hex with ptr value (0x116)
}
