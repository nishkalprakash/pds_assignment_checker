#include<stdio.h>

int main(){
    int count=0,i=0,k=0;

    char s1[100],s2[100];
    printf("s1:");
    scanf("%s",&s1);
    printf("s2:");
    scanf("%s",&s2);
  while(s2[i]!='\0')
  {   
  	i++;
  }
  int n=i;
  for(int j=0;j<n-3;j++)
  {
   for(int i=0;i<2;i++)
   {
   
     if(s1[i]==s2[i+j] && s1[i+1]==s2[i+j+1] && s1[i+2]==s2[i+j+2])
     {
   	   k++;
     }

   }
  }
  printf("%d\n",k);
  return 0;

}
