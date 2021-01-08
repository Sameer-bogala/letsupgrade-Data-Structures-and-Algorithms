#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5]={10,20,30,40,50};
int i;
printf("array before deleting element at beginning:");
for(i=0;i<5;i++){
	printf("%d",arr[i]);
}
printf(" \narray after deleting element from beginning:");
for(i=0;i<5;i++)
{
  
	arr[i]=arr[i+1];
	
	
	printf("%d",arr[i]);
}

}
