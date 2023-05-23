#include<stdio.h>
int reverse()
{
  int a[20],n ;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(int i=0;i<n/2;i++)
    {
      int c=a[i] ;
       a[i]=a[n-i-1];
       a[n-1-i]=c ;
    }
     for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    return 1 ;
}
int str()
{
  char s1[20],s2[20] ;
  int i=0 ;
  scanf("%s",&s1);
  scanf("%s",&s2);
/*while(1)
    {
      s1[i]=getchar();
      if(s1[i]==10){
        break ;
      }
    }
    i=0 ;
    while(1)
    {
      s2[i]=getchar();
       if(s2[i]==10){
        break ;
      }
    }*/
  int n1=0,n2=0,c=0 ;
  while(s1[n1]!='\0')
  {
      n1++ ;
  }
    while(s2[n2]!='\0')
  {
      n2++ ;
  }
  if(n1==n2){
  for(int i=0;i<n1;i++)
    {
      for(int y=0;y<n2;y++)
        {
          if(s1[i]==s2[y])
            {
              c++ ;
          break ;
            }
        }
    }
}

if((n1==n2)&&((n1)==c))
    {
     printf("%s and %s are anagram",&s1,&s2);
    } else {
       printf("they are not anagrams");
    }
    return 0 ;

}
int pal()
{
  char s[20];
  scanf("%s",&s);
  int c=1,n1=0 ;
    while(s[n1]!='\0')
  {
      n1++ ;
  }
  n1=n1+1;
  for(int i=0;i<n1/2;i++)
    {
      if(s[i]!=s[n1-i-2]){
        c=0 ;
        break ;
      }
    }

       if(c==1){
        printf("\n%s is a palandrome",&s);
     } else {
       printf("\n%s is not a palanrome",&s);
     }
     return c ;
}
int main()
{
  int n;
  scanf("%d",&n);
  if(n==1)
    {
      reverse() ;
    }
  if(n==2)
  {
    str();
  }
  if(n==3)
    {
     int c=pal();

    }
    return 0 ;

}
