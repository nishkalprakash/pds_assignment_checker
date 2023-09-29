//Roll no. = 23MF3IM17
//Name = Shine Srivastava

#include<stdio.h>
#include<math.h>
int main()
{
  int n,a,b,c;
  printf("Enter an integer n :\n");
  scanf("%d",&n);
  b=n;
  
  printf("Encoded\n");
 
      a=n%10;
     int a4=a;
     int c4=a4+2;
      n=n/10;
      
      a=n%10;
     int a3=a;
     int c3=a3+2;
      n=n/10;
      
      a=n%10;
     int a2=a;
     int c2=a2+2;
      n=n/10;

      a=n%10;
     int a1=a;
     int c1=a1+2;
      
      

       if((a4/1000)==0){
       printf("%d%d%d\n",c1,c2,c3);
       printf("with checksum\n");
       if(((c1+c2+c3)/10)==0){printf("%d%d%d0%d",c1,c2,c3,c1+c2+c3);}
       else {printf("%d%d%d%d",c1,c2,c3,c1+c2+c3);}
     printf("Double encoded");
      printf("%d0%d0%d0%d0",c1,c2,c3,c1+c2+c3);
     }
 else if((a3/100)==0)
   {printf("%d%d\n",c1,c2);
     printf("with checksum\n");
      if(((c1+c2)/10)==0){printf("%d%d0%d",c1,c2,c1+c2);}
      else{printf("%d%d%d",c1,c2,c1+c2);}
     printf("Double encoded");
     printf("%d0%d0%d0",c1,c2,c1+c2);
   }
    else if((a4/10)==0){
      printf("%d\n",c1);
      printf("with checksum\n");
      printf("%d0%d",c1,c1);
      printf("Double encoded");
      printf("%d0%d0",c1,c1);
    }
    else {
      printf("%d%d%d%d\n",c1,c2,c3,c4);
      printf("with checksum\n");
      if(((c1+c2+c3+c4)/10)==0){printf("%d%d%d%d0%d",c1,c2,c3,c4,c1+c2+c3+c4);}
      else{printf("%d%d%d%d%d",c1,c2,c3,c4,c1+c2+c3+c4);}
     printf("Double encoded");
      printf("%d0%d0%d0%d0%d0",c1,c2,c3,c4,c1+c2+c3+c4);
    }

     
      
  
}
      
  
  
  
