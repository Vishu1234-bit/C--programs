#include<stdio.h>
int main(){
char hex[7] = {'A','B','C','D','E','F','G'};
char a[10];
int n,i;
printf("Enter a decimal number: ");
scanf("%d",&n);
for( i=0;n>0;i++){
int rem=n%16;
if(rem>9){
a[i] = hex[rem-10];
}
else{
a[i] = rem + '0';
}
n=n/16;
}
for( i = i-1;i>=0;i--){
printf("%c",a[i]);
}
}