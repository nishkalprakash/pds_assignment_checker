/*Name Pushkaraj Jagtap
  21MF3IM12
  Section 3  group-5
  Codeblocks
  Assigment 3c*/

#include<stdio.h>
int main(){
  char pass[20],name[20],i,l;
  printf("Enter Username(Upto 20 character):");
  scanf("%c",&name[20]);
  printf("Enter a Password");
  scanf("%c",&pass[20]);

  for(i=0; pass[i]!='\0';++i);

    printf("Length of password is:%d",l);


    for(i=0;i<l;i++){
      if((8<=l<=15)&&(pass[i]!=name[i])&&(pass[i]>='a' && pass[i]<='z')&&(pass[i]>='A' && pass[i]<='Z')&&
         (pass[i]=( '$'|| '*' ||'+'|| '/' || '#'|| '@'|| '<'|| '>'|| '?'|| '_'|| '!'))){


         printf("Valid Password");
         }
      else{
        printf("Try again");
      }

    }

}
