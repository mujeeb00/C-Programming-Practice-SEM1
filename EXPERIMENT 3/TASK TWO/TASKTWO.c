#include <stdio.h>

int main(){
    char capital_word[30],smaller_word[30];
    int length,i;

    //PROMPT FROM USER
    printf("Enter word in capital : ");
    scanf("%s",capital_word);

    //LENGTH OF WORD
    length=strlen(capital_word);

    //LOOP SO THAT ON EVERY INDEX IT CONVERTS EACH CHAR
    for(i=0;i<=length;i++){
            smaller_word[i]=tolower(capital_word[i]);
            printf("%c",smaller_word[i]);
    }



}
