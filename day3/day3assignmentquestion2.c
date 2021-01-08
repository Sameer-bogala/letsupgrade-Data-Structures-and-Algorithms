#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5]={10,20,30,40,50};
int i,k;
printf("the array element before rotating:");
for(i=0;i<5;i++){
	printf("%d",arr[i]);
}
printf("\nthe no of times to rotate array(k): ");
scanf("%d",&k);
 
    for(i = 0; i < k; i++){    
        int j, first;    
         
        first = arr[0];    
        
        for(j = 0; j < 4; j++){    
            
            arr[j] = arr[j+1];    
        }    
         
        arr[j] = first;    
    }    
        
    printf("\n");    
        
      
    printf("Array after left rotation: \n");    
    for(i = 0; i < 5; i++){    
        printf("%d ", arr[i]);    
    }    
        
}    

