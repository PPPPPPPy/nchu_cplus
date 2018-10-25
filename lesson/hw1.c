#include <stdio.h>
#include <stdlib.h>

// Main function 程式起始點
int sortArr(int*,int);
void calBmi(float*,float*,float*);
int main(){
    /*  Bmi */
    char name[2][20];
    //int age[2];
    float height[2];
    float weight[2];
    float bmi[2];
    for(int j=0; j<2; j++){
        printf("輸入User%d的身高:\n",j+1);
        scanf("%f",&height[j]);
        printf("輸入User%d的體重:\n",j+1);
        scanf("%f",&weight[j]);
    }
    calBmi(weight,height,bmi);
    /*  Bmi */

    /* Sort */
    int sort[5] = {3,4,9,1,2};
    int *ptr1,*ptr2;
    ptr1 = sort; // 陣列起始位置 -> 指標常數
    ptr2 = &sort[0];
    printf("%p %p\n",ptr1,ptr2);
    printf("%d %d\n",sort[0],*ptr2);
    int size = sizeof(sort)/sizeof(int);
    int large = sortArr(sort,size);
    printf("The biggest number: %d\n",large);
    /* Sort */
    return 0; // Normal Shutdown 程式終止
}

int sortArr(int* arr,int size){
    int temp = *arr;
    printf("Size: %d\n",size);
    for(int i=0;i<size;i++){
        if(*(arr+i) > temp){
            temp = *(arr + i);
        }
    }
    return temp;
}

void calBmi(float* weight,float* height,float* bmi){
    for(int i=0;i<2;i++){
        float wei = *(weight + i);
        float hei = *(height + i) / 100;
        float result = wei / (hei * hei);
        printf("User%d Bmi : %.3f\n",i+1,result);
    }
}
