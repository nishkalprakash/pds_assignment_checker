#include<stdio.h>
int main(){


    char str[100],num[]={'1','2','3','4','5','6','7','8','9','0'};
    int p=0,w=0,v=0;
    gets(str);
    puts(str);
    for(int i=0;str[i]!='\0';i++)
        { ;
       for(int j=0;j<10;j++)
       {
        if(str[i]==num[j]) p++;
       }


    }
    for(int i=0;i<100;i++){
            if(str[i]==' ')w++;
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')v++;
    }
printf("Numeric charecters = %d\n",p);
printf("Words = %d",w+1);
  return 0;
}

