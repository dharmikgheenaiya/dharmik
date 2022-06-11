#include<stdio.h>
 int main()
 {
  int i,j=-1,n;
  printf("\n enter n=");
  scanf("%d",&n); 
   
  for (i=2;i<=n;i+=2)
   { 
      
     printf("\n %d \n %d",j+=2,i*i);
   }
} 