
#include <stdio.h>
#include<string.h>
int main(){
char f[100],s[100],temp[100];
printf("First string: ");
gets(f);
printf("Second string: ");
gets(s);
printf("First string: %s\n",f);
printf("Second string: %s\n",s);
strcpy(temp ,f);
strcpy(f,s);
strcpy(s,temp);
printf("First string: %s\n",f);
printf("Second string: %s\n",s);
}
