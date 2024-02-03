#include <stdio.h>

int main(){
    FILE *fp;
    char buffer[100];

    fp=fopen("abc.txt","w");
    fprintf(fp,"Mujeeb Ur Rehman");
    fclose(fp);
    fp=fopen("abc.txt","r");

      if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fgets(buffer, sizeof(buffer), fp);
    printf("%s\n", buffer);

    fclose(fp);

}
