#include<stdio.h>


  int main()
{
    int n;
        printf("enter the desired no. of characters in the word 1: ");
   scanf("%d",&n);
       char s1[n];
 	 for (int k=0; k<n; k++)
 	 {
   	scanf("%c",&s1[k]);
          }
    
       int l ;
        printf("enter the desired no. of characters in the word 2: ");
   scanf("%d",&l);
       char s2[l];
 	 for (int j=0; j<l; j++)
 	 {
   	scanf("%c",&s2[j]);
            }
                  int count=0;
      for (int i=0; i<l; i++)
          {        
                 if (s1[0]=s2[i])
                       { 
                          if(s1[1]=s2[i+1])
                              {
                                    if(s1[2]=s2[i+2])
                                       count=count+1;
                              }
                        }
            


                    }
   printf("%d",count);

    
   return 0;
}
