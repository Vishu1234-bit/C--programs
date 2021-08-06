#include<stdio.h>
int max(int num1,int num2);
int min(int num1,int num2);
int main()
{
int dim;
scanf("%d",&dim);
int arr[dim][dim];
for(int i=0;i<dim;i++){
for(int j=0;j<dim;j++){
scanf("%d",&arr[i][j]);
}
}
int minweightedarr[dim][dim];
minweightedarr[0][0] = arr[0][0];
//filling 1st row
for(int row=1;row<dim;row++)
minweightedarr[row][0] = max(arr[row][0],minweightedarr[row-1][0]);
for(int col=1;col<dim;col++)
minweightedarr[0][col] = max(arr[0][col],minweightedarr[0][col-1]);
for(int row = 1;row<dim;row++){
for(int col =1 ;col<dim;col++){
minweightedarr[row][col] = max(arr[row][col],min(minweightedarr[row-1][col],minweightedarr[row][col-1]));
}
}
printf("%d",minweightedarr[dim-1][dim-1]);
}
int max(int num1,int num2){
if(num1>num2)
return num1;
return num2;
}
int min(int num1,int num2){
if(num1<num2)
return num1;
return num2;
}