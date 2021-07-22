#include<stdio.h>
int main(){
    long long int temp,num1,num2,hcf;
    scanf("%lld %lld",&num1,&num2);
    while(1){
        temp = num1%num2;
        if(temp==0)
           break;
        num1 = num2;
        num2 = temp;
    }
    printf("%lld",num2);
    return 0;
}
