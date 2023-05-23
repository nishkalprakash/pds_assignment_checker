#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char **a,**b,s;
  int n ;
  scanf("%d",&n);
  scanf("%c",&s);
  a=(char**)malloc(n*sizeof(char*));
  for(int i=0;i<n;i++)
    {
        int o=1 ;
     a[i]=(char*)malloc(o*sizeof(char));
     int j=0 ;
     while(1)
        {
            a[i]=realloc(a[i],o++);
            char v=getchar();
            if(v=='\n')
                {
                 break ;
                }
          a[i][j]=v;
          j++ ;

        }
        a[i][o-1]='\0';
    }
    int n1;
    scanf("%d",&n1);
      scanf("%c",&s);
  b=(char**)malloc(n1*sizeof(char*));
  for(int i=0;i<n1;i++)
    {
        int o=1 ;
     a[i]=(char*)malloc(o*sizeof(char));
     int j=0 ;
     while(1)
        {
            b[i]=realloc(b[i],o++);
            char v=getchar();
            if(v=='\n')
                {
                 break ;
                }
          b[i][j]=v;
          j++ ;

        }
        b[i][o-1]='\0';
    }
    printf("\n#    NAME X %d ",n);
    for(int i=0;i<n;i++){
    printf("\n%d %s",i+1,a[i]);
    }

    printf("\n#    NAME Y %d ",n1);
    for(int i=0;i<n;i++){
    printf("\n%d %s",i+1,b[i]);
    }
    char **c ;


}
