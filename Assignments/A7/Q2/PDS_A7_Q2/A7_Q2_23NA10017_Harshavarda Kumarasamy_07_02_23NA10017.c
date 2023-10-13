//Name:<Harshavarda Kumarasamy>
//Roll No:<23NA10017>

#include <stdio.h>

void check(char str[20])
{int i=0, n=0;
  while(str[i]!='\0')
    {if(str[i]==str[i+2]-1)
	{n++;
	    }
      i++;
    }
  printf("Check Output:%d\n", n);
  return;
}
      
void encode1(char str[20])
{int i=0;
  printf("Encode1 Output:");
  while(str[i]!='\0')
    { if(str[i]=='y')
	{printf("a");
	}
      else if(str[i]=='z')
	{printf("b");
	}
      else if('a'<=str[i]<='x'){
	printf("%c", str[i]+2);
	 }
      i++;
    }
  printf("\n");
  return;
}

void encode2(char str[20])
{int i=0;
  printf("Encode2 Output:");
  while(str[i]!='\0')
    {printf("a%c", str[i]);
      i++;
	}
  printf("\n");
  return;
}
  
int main()
{int i, j;
  char str[20];
  printf("Give a string value:\n");
  scanf("%s", str);
  check(str);
  encode1(str);
  encode2(str);
  
  return 0;
}
