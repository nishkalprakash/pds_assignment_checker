//pramod kumar
//23PH10032
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char sptr[100][100];

void create()
{  int n;
  printf("how many words do you want to enter in array\n");
  scanf("%d",&n);
  char *A;
  for(int i=0;i<n;i++)
    {
      A=(char*)malloc(n*sizeof(int));
      
      scanf("%[^\n]s",&(*A));
      int k=0;
      while(A[k]!='\0')
	k++;
      for(int j=0;j<k;j++)
	{
	  (*sptr[j])=A[j];
	}
      printf("%s\n",sptr);
    }
}
 int main()
 {
   int k;
   while(1)
     {
      
       printf("create->1\nlengthstat->2\nletterstat->3\nsearch->4\nremoveDuplicate->5\nsearchreplace->6\n");
       printf("enter your choise\n");
       scanf("%d",&k);
   
       if(k!=0)
	 {
   switch(k)
     {
     case 1:create();
       break;
        case 2:lengthstat();
         break;
        case 3:letterstat();
         break;
        case 4:search();
          break;
        case 5:removeDuplicate();
          break;
         case 6:searchReplace();
        break;
     }
	 }
   if(k==0) break;
     
     }
 }
