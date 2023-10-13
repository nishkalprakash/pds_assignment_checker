//Name:Shantanu
//Roll no. 23MA10056

#include<stdio.h>
#include<string.h>
int check(char str[]);
void encode1( char str[]);
void encode2(char str[]);

int main()
{
  int size,m;

  scanf("%d",&m);

  while(m >20 && m < 1)
    printf("Enter the correct size ");


  size=m;

  char str[size] ;
  char str2[size];

  scanf("%s",str) ;

  strcpy(str2,str);

  printf("The number of times letter 'a' to 'y' appear before succeeding character 'b' to 'z' is %d\n",check(str));
  printf("\n");

  encode1(str);
  printf("\n");
  encode2(str2);

    







  return 0;
}

int check(char str[])
{
  int count =0,i,j ;
  int len = strlen(str);
  for(i=0;i<(len -2);i++)
    {
      if(str[i]== str[i+2]-1)
         count++ ;
    }
  return count;
}
void encode1(char str[])
{
  int i,len=strlen(str);
  for(i=0;i<len;i++)
    {
      str[i]=(char)(str[i]+2 );

      if(str[i]=='y')
	str[i]='a';
      
  if(str[i]=='z')
	str[i]='b';

    }
  str[i]='\0' ;

  printf("%s",str);
  
    }


void encode2(char str[])
{
  int i,len=strlen(str),temp,temp2;
  for(i=1;i<20;i=i+1)
    { temp=str[i];
      str[2*i]=temp;
      str[2*i+1]='a';
      
    }
  str[1]='a';
    
  str[i]='\0' ;

  printf("%s",str);
}


  
         



  
