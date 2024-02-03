#include <stdio.h>

int power_calculate(int num,int power){
    if(power==0){
        return 1;
    }
    else{
        return num*power_calculate(num,power-1);
    }

}
int main(){
    int number,power;

    printf("Enter integer number : ");
    scanf("%d",&number);
    printf("Enter integer number power : ");
    scanf("%d",&power);

    printf("Output of Number %d",power_calculate(number,power));



}


