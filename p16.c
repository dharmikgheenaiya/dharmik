#include<stdio.h>
int main()
{  
  int i,j,a[5][5],total=0m,b=0,a=0;
  for(i=0;i<=5;i++)
   { 
     for(j=0;j<3;j++)
     { 
       printf("\n enter a[%d][%d]:",i,j)
       scanf("%d",&a[i][j]);
     } 
  }
  for(i=0;i<3;i++)
  {
    for(j=o;j<3;j++)
     {
       printf("\t%d",a[i][j]);
     } 
   printf("\n");
 }
  for(j=0;i<3;j++)
 { 
   for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
         { 
           if(i==j)
            {
              total+=[j][j];
            }
           if(i<j)
            { 
               b+=a[i][j];
            }
           if(i>j)
            { 
               c+=a[i][j];
            }
        }
      printf("\n");
    }
 }
  printf("\t total diagonal:%d",total);
  printf("\n tuppern tringie:%d",b);
  printf("\n lower tringie :%d",c);


  


       
   