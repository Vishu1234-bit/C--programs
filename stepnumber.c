#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int m =0;
	while(n>0){
		int rem1 = n%10;
		n = n/10;
		if(n==0){
			break;
		}
		int rem2 = n%10;
		if(abs(rem1-rem2) == 1 ){
			m = 1;
		}
		else{
			m = 0;
			break;
		}
	}
	if(m ==1){
		printf("yes");
	}
	else{
		printf("no");
	}
}
	
		