//Name:pramod kumar
//roll no: 23PH10032


  #include<stdio.h>
  #include<string.h>
//void chak(int str[20],size)
//{}
void encode1(char str[20])
{
  for(int i=0;str[i]!='\0';i++)
    {
      int a=(int)str[i]+2;
      if((int)str[i]<89)
      str[i]=(char)a;
      if((int)str[i]>=89)
	{
	int k=(int)str[i]-24;
	str[i]=(char)k;
	}
    }
     
      printf("%s",str);
  }
void encode2(char str[20],int size)
   {
     for(int i=size;i>0;i--)
       {
	
	 str[2*i-1]=str[i-1];
       }
     
     for(int i=0;i<size;i=i+2)
       str[i]='a';
     printf("%s",str);
   }
  int main()
 {
  char str[20];
  int i=1;
  printf("enter the string ;\n");
  scanf("%[^'\n']s",str);
  while(str[i]!='\0')
    i++;
  encode1(str);
  encode2(str,i);
}
