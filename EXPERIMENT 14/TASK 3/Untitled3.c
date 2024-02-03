#include <stdio.h>

int main() {
    FILE *fp;
    char temp[300];
    char name[100];
    float height;
    int age;

    fp = fopen("person.txt", "w");

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your Height: ");
    scanf("%f", &height);

    fputs("NAME\t\tAGE\t\tHEIGHT\n", fp);
    fprintf(fp, "%s\t\t%d\t\t%.1f\n", name, age, height);

    fclose(fp);


    fp = fopen("person.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fgets(temp, sizeof(temp), fp);
    printf("%s", temp);

    fgets(temp, sizeof(temp), fp);
    printf("%s",temp);

    fclose(fp);

    return 0;
}
