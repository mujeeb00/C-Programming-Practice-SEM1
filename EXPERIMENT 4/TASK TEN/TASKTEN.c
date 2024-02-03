#include <stdio.h>

int main(){
    int user_num[4],i;

    for(i=0;i<=3;i++){
    printf("Enter %d number ",i+1);
    scanf("%d",&user_num[i]);
    }

    for(i=3;i>=0;i--){
        printf("%d",user_num[i]);
    }


}
