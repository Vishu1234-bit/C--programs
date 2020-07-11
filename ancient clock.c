#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    char alphas[100]={'A','B','C','D','E','F','G','H','I','J','M','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int hh,mm,a,total;
        scanf("%d:%d",&hh,&mm);
        a=hh;
        total=a;
        for(int i=0;i<mm;i++){
            a=2*a-1;
            total=total+a;

        }
        int password[10];
        while(total>0){
            password[i]=total%10;
            total/=10;

        }
        int len=(sizeof(password))/(sizeof(password[0]));
        
        for(int i=0;i<len;i++){
            printf(alphas[password[i]]);
        }





    }
    return 0;
}