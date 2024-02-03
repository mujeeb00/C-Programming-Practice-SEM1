#include <stdio.h>
int sumofFirstfifty(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sumofFirstfifty(n-1);
    }
}
int main(){
    printf("The sum of first 50 natural number is %d ",sumofFirstfifty(50));

}
