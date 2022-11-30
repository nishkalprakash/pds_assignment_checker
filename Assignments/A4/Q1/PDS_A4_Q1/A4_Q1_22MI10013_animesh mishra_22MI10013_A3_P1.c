
/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:4
discription : find factors
*/
#include<stdio.h>
int main()
{ 
      int i,n;
      printf("enter the input");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++) {
                if(n%i==0)
    printf("%d\n",i);
  }
return 0;

}
