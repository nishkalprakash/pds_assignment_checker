#include<stdio.h>

  int main()
{
    int a[100];
      int n;
   scanf("%d", &n);
 	 for (int k=0; k<n; k++)
 	 {
   	scanf("%d", &a[k]);
      		 }
      int m;
        scanf("%d",&m);
   int i,l,j=0;
	for (i=0; i<n-1; i++)
		{ 
                  for(j=i+1;j<n;j++) 
                      {   if (a[i]==a[j])
                               j=j+1;
                               l=a[i];
                              
                         } 
                 }

      if (m==j)
         printf(" %d appears %d no. of times",l,m);
      else
         printf("no number appears %d no. of times",m);
      
        





   return 0;
}


