#include<stdio.h>  //header file

int main()
{
	int n;
	printf("enter the size :");
	scanf("%d",&n);
	char str1[n],str2[n];   //defining two strings

	scanf("%s",&str1);
	scanf("%s",&str2);

	for(int i=0;i<n;i++)
	{
	   for(int j=i+1;j<n;j++)
	    {
	      if(str1[i]>str1[j])
	      {
	          int a=str1[i];
	          str1[i]=str1[j];     //swapping
	          str1[j]=a;
	      }
	    }
	}
    
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
       if(str2[i]>str2[j])
       {
           int a=str2[i];
           str2[i]=str2[j];         //swapping
           str2[j]=a;
       }
      }
    }

   int count =0;
 for(int i=0;i<n;i++)
  {
   if(str1[i]==str2[i])
   {
    count++;

   }
  }

  if(count==n)
  {
   printf("anagram");
  }
  else
  {
  printf("NOT Anagram");
  }
return 0;
}