#include<stdio.h>

int strln(char s[])
{
    int length = 0;
    while (*(s++) != '\0' )
    {
        length++;
    }
    return length;
}

int main() {
    char un[100], ps[100];
    printf("Enter Username: ");
    scanf("%s",un);
    printf("Enter Password:");
    scanf("%s",ps);
    int up=0,low=0,sp=0,num=0;
    int length = strln(ps);
    int lu = strln(un);
    int flag =0;

    for (int i=0; i<length; i++){
        if (ps[i]>=65 && ps[i]<=90){
            up+= 1;
        }
    }

    for (int i=0; i<length; i++){
        if (ps[i]>=97 && ps[i]<=122){
            low+= 1;
        }
    }

    for (int i=0; i<length; i++){
        if (ps[i] == '$' || ps[i] == '*' ||ps[i] == '_' ||ps[i] == '@' ||ps[i] == '#' ||ps[i] == '/' ||ps[i] == '<' ||ps[i] == '>' ||ps[i] == '!' || ps[i] == '+' ||ps[i] == '?' ){
            sp+= 1;
        }
    }

    for (int j=0; j<length; j++)
    {
        num =0;
        for (int i=j; i<length;i++)
        {

          if (ps[i] == '0' || ps[i] == '1' ||ps[i] == '2' ||ps[i] == '3' ||ps[i] == '4' ||ps[i] == '5' ||ps[i] == '6' ||ps[i] == '7' ||ps[i] == '8' || ps[i] == '9' )
          {
             num+= 1;
          }

        }

    if (!(length<=15 && length >=8)){
        printf("Not Acceptable\n");
         return 0;
    }


    else if (up < 1){
        printf("Not Acceptable\n");
         return 0;
    }

    else if (low < 1){
        printf("Not Acceptable\n");
         return 0;
    }

    else if (sp < 2){
        printf("Not Acceptable\n");
         return 0;
    }

    else if (num==5){
        printf("Not Acceptable\n");
         return 0;
        break;
    }

    for (int i=0; i<length-lu+1; i++)
    {
        flag =0;
        for(int j=0;j<lu;j++)
        {

            if(un[j]==ps[j+i])
            {

                flag ++;
                if (flag == lu){
                  printf("Not Acceptable\n");
                  return 0;

                  break;
                }
            }


            else
            {
                break;
            }
        }


    }


    }

    for(int i=0;i<length;i++){
      int f=0;
      for(int j=i;j<length;j++){
        if(ps[i]==ps[j]){
          f++;
        }
      if(f==5){

        break;
      }
      }
      if(f==5){
      printf("Not Acceptable\n");
      return 0;
      break;
      }
    }
    printf("Acceptable\n");


}
