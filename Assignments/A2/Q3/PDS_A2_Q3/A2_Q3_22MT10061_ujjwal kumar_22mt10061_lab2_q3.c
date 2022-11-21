#include<stdio.h>
#include<math.h>       //-lm

int main()
{   
          int a,b,c;
	float dummy,root;
          scanf("%d %d %d",&a,&b,&c);
	printf("%d %d %d ",a,b,c);
          dummy=sqrt(b*b-4*a*c);
          root=-b+dummy/2*a;
          printf("%f",root);
          
          return 0;
                   
       








}





