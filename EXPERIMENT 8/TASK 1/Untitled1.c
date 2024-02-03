#include <stdio.h>

int main(){
    int a=1,b=5;
    printf("Before Swap values : a=%d, b=%d \n",a,b);
    swap(a,b);
}

int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swap values : a=%d, b=%d \n",a,b);
}
