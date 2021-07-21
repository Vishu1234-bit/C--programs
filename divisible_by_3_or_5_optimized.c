#include<stdio.h>
int main(){
    long long int range,three_count,five_count,sum=0,fifteen_count;
    scanf("%lld",&range);
    three_count = range/3;
    five_count = range/5;
    fifteen_count = range/15;
    sum = 3*(three_count*(three_count+1))/2 + 5*(five_count*(five_count+1))/2 - 15*(fifteen_count*(fifteen_count+1))/2;
    printf("%lld",sum);
}
