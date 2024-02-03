#include <stdio.h>
int main() {
int i,num,start,end,update;
printf("Enter a integer: ");
scanf("%d", &num);
printf("Enter a start integer: ");
scanf("%d", &start);
printf("Enter a end integer: ");
scanf("%d", &end);
printf("Enter a update integer: ");
scanf("%d", &update);
for (i=start;i<=end;i+=update) {
printf("%d * %d= %d\n", num,i,num*i);}

return 0;
}
