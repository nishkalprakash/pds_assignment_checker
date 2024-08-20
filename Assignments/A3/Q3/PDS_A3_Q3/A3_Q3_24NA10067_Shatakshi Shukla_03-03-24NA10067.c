//Program creator Shatakshi Shukla
//roll no. 24NA10067
//Program to check equality between 2 numbers
#include <stdio.h>
  int main()
  {
    int a,b,c,d;
    printf("Enter four integers \n:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b && a!=c && a!=d && b!=c && b!=d)
    printf("YES");
 
    if(a==c && a!=b && a!=d && c!=b && c!=d)
     printf("YES");
     
    
    
    if(a==d && a!=b && a!=c && d!=b && d!=c)
    printf("YES");
   
    
    
    
    
    if(b==c && b!=d && b!=a && c!=d && c!=a)
     printf("YES");
     
     
     
      
     if(b==d && b!=c && b!=a && d!=c && d!=a)
      printf("YES");
      
       
      
        
     if(c==d && c!=a && c!=b && d!=a && d!=b)
      printf("YES");
      
      
      else 
       printf("NO");
       
       }
      
      
    
