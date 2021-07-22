#include<stdio.h>
int main(){
    int small,num1,num2,i,hcf;
    scanf("%d %d",&num1,&num2);
    small = (num1<num2) ? num1:num2;
    if(num1%num2 == 0 || num2%num1==0){
        printf("%d",small);
    }
    else{
    for(i=small/2;i>=1;i--){
        if(num1%i==0 && num2%i==0)
            hcf = i;
        }
    }
    printf("%d",hcf);
    return 0;
}
