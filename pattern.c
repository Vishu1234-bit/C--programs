#include<stdio.h>
int main(){
	int n,k,m,s;
	scanf("%d",&n);
	for(int i=n, k=1;i>=1;i--,k++){
	  for(int j = 1, s =n,m=k;j<=i;j++,s--){
		  printf("%d ",m);
	      m+=s;
		}
		printf("\n");
	 }
}