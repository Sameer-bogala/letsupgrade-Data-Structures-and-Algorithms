#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5]={10,20,30,40,50};
int i;
int pos;
printf("array before deleting element at beginning:");
for(i=0;i<5;i++){
	printf("%d",arr[i]);
}
printf("\nenter the position of deleting element:");
scanf("%d",&pos);
printf("%d",pos);
printf(" \narray after deleting element from position:");
for(i=pos-1;i<5;i++)
{
  
	arr[i]=arr[i+1];
	
}
for(i=0;i<5;i++){
	printf("%d",arr[i]);
}


}
