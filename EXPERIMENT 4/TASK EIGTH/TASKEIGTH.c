#include <stdio.h>

int main(){
    int user_num[4],i,x;

    for(i=1;i<=4;i++){
        printf("Enter number %d : ",i);
        scanf("%d",&user_num[i]);
    }

    printf("\n\n");

    for(i=4;i>=1;i--){
            if(i==4){
                   printf("Unit\t %d\n",user_num[i]);
            }
            else if(i==3){
                   printf("Ten\t %d\n",user_num[i]);
            }
            else if(i==2){
                   printf("Hundred\t %d\n",user_num[i]);
            }
            else {
                   printf("Thousand %d\n",user_num[i]);
            }

    }

}
