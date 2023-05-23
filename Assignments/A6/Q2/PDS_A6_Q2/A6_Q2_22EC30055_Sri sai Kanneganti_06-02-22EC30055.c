#include<stdio.h>
void abc()
{
  char str[100],str1[30],str2[30];

  int x = scanf("%19s %29s",str1,str2);
  printf("x: %d\n",x);
  printf("str1: %s\n",str1);
  printf("str2: %s\n",str2);
}
int main()
{
 abc() ;
int n=0,s=0,w=0,v=0,c=0,sc=0,i=0 ;
  char str[1024] ;
  scanf("%[^\n]s",str);
  while(str[i]!='\n')
  {
      switch(str[i])
      {
                  case '1':
                  case '2':
                  case '3':
                  case '4':
                   case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                    case '0': n++;
                    break ;
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u': v++ ;
                    break ;
                    case ' ': w++ ;
                    break ;
                    case '.': s++ ;
                    break ;
      }
      i++ ;
      }

      w=w+1;
      printf("numerical charecter: %d\nspecial charecter: %d\nwords: %d\nvovels: %d\ncosonents: %d\nsentences: %d\n",n,sc,w,v,c,s);
      return 0 ;
  }
