
#include <stdio.h>
int main(){
int a,b;
printf("a: ");
scanf("%d",&a);
printf("b: ");
scanf("%d",&b);
int temp =a;
a=b;
b=temp;
printf("a: %d\n",a);
printf("b: %d\n",b);
}
