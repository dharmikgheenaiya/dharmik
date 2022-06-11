#include<stdio.h>
int main()
{ 
  int a[5],b[5],i,j;
  for(i=0;i<5;i++)
     { 
       printf("enter a[%d]:",i);
       scanf("%d", &a[i]);
     }
  for(i=0;i<5;i++)
     { 
       printf("enter b[%d]:",i);
       scanf("%d", &b[i]);
     }
    
  for (i=0;i<5;i++)
     {
      printf("\n enter a:[%d]%d",i,a[i]),
      printf("\t enter b:[%d]%d",i,b[i]);
       j=a[i]+b[i];
     printf("\t total:%d",j);
     } 
}           
