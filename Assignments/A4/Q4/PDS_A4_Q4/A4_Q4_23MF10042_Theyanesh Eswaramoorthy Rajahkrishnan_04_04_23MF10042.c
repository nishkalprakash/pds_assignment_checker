#include<stdio.h>
int main()
{
  int n,n1,n2,n3,m=1;
  while(m>0){
    printf("Enter a single digit number\n");
    scanf("%d",&n);
    if(n<0)
      m=0;
    else if (n==5){
      printf("Enter a single digit number\n");
      scanf("%d",&n1);
      if(n1==1){
	printf("Enter a single digit number\n");
	scanf("%d",&n2);
	if(n2>=0){
	  printf("Enter a single digit number\n");
	  scanf("%d",&n3);
	  if(n3==7){
	    printf("pattern found");
	    m=0;
	  }
	  else if (n3<0)
	    m=0;
	}
	else if (n3<0)
	    m=0;
      }
      else if (n1<0)
	m=0;
    }
  }
  return 0;
}
      
	
	
	
      
      
