
#include <stdio.h>
int main(){
int n,a[10],b[10],c[10];
printf("Length of arrays:");
scanf("%d",&n);
printf("First array:");
for (int i =0;i<n;i++){
scanf("%d ",&a[i]);
}
printf("Second array:");
for (int i =0;i<n;i++){
scanf("%d ",&b[i]);
}
for(int i=0;i<n;i++){
c[i] = a[i];
a[i] =b[i];
b[i]=c[i];
}
printf("First array:  ");
for (int i =0;i<n;i++){
printf("%d\t",a[i]);
}
printf("Second array: ");
for (int i =0;i<n;i++){
printf("%d\t",b[i]);
}
}
