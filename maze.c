#include<stdio.h>
int maze(int arr[3][3],int i,int j);
int main(){
	int arr[3][3];
	for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
	    scanf("%d ",&arr[i][j]);
	  }
	  printf("\n");
	}

	printf("%d",maze(arr,0,0));
	return 0;
}
int maze(int arr[3][3],int i,int j){
	    if(i<0||j<0||i>3||j>3){
			return 0;
		}
		if(arr[i][j] == 9){
			return 1;
		}
		if(arr[i][j]!=1){
			return 0
		}
		if(arr[i][j] == 1){
			arr[i][j]=3;
		}
		if(maze(arr,i+1,j)){
			return 1;
		}
		if(maze(arr,i,j+1)){
			return 1;
		}
		if(maze(arr,i-1,j)){
			return 1;
		}
		if(maze(arr,i,j-1)){
			return 1;
		}
		arr[i][j] = 0;
		return 0;

}

	 
     	 