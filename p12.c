#include<stdio.h>
int main()
{ 
  int i,a[10],total;
  for(i=0;i<10;i++)
   {
     printf("enter a[%d]:",i);
     scanf("%d",&a[i]);
   } 
  for(i=0;i<10;i+=2)
   {
    printf("\n a [%d]:%d",i,a[i]);
   }  
   printf("\n total=[%d]",i+i);
  
}
 

