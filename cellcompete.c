#include <stdio.h>  
void cellcompete(int arr[],int days){
     int retarr[8];
	for(int j=0;j<days;j++){
	   retarr[-1] = 0;
	   retarr[0] = 0;
	   for(int i=1;i<7;i++){
		  if(arr[i-1] == arr[i+1]){
			  retarr[i] = 0;
		    }
		  else{
			  retarr[i] = 1;
		    }
	    }
		if(j==days-1){
			break;
		}
		for(int i=0;i<8;i++){
			arr[i] = retarr[i];
		}
	 }
	 for(int i=0;i<8;i++){
	     printf("%d ",retarr[i]);
	 }
	 
}

int main()  
{  
    int arr[8]; 
    int i;  
    int days;	
    for(i=0; i<8; i++)  
    {  
        scanf("%d ", &arr[i]);  
    }  
	scanf("%d",&days);
    cellcompete(arr,days);
    return 0; 	
}
