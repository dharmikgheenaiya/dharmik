#include<stdio.h>
int main()
{ 
  int i,a[10],b=0;
  for(i=0;i<10;i++)
   {
     printf("enter a[%d]:",i);
     scanf("%d",&a[i]);
   } 
  for(i=0;i<10;i+=2)
   {
    b=b+a[i];
    printf("\n a[%d] :%d",i,a[i]);
   }  
   printf("\n total=[%d]",b);
  
}
 

