#include<stdio.h>
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      int m;
      scanf("%d",&m);
      int n=0, a=1;
      while(m>0){
         m=m-a;
         a=a+1;
         n=n+1;
         }
      printf("%d",n);
      }
      }