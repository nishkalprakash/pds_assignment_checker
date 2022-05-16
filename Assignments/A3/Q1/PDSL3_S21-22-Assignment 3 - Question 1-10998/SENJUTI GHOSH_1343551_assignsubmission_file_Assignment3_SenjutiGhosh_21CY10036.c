/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
int main(){
int i,w,j,k,l,flag,upper,lower,countspecial,count,maxcount,m,length;
int length2;
char special[]={'$','*','+','/','#','@','<','>','?','-','!'};
upper=0;
lower=0;
length2=0;
k=0;
length=0;
char username[100],password[100];
printf("Enter username");
scanf("%s",username);
printf("\nEnter Password");
scanf("%s",password);
printf("\n");
for (w=0;special[w]!='\0';w++){
     length2++;}
flag=1;
for (i=0;password[i]!='\0';i++){
     for (j=0;username[j]!='\0';j++){
          if (password[i+j]!=username[j]){
              flag=0;
              break;}
     }
     if (flag==1){
         printf("Not acceptable");}
}
if (flag==0){
    for(k=0;password[k]!=0;k++){
        length++;
    }
    if ((length<8)||(length>15)){
        printf("Not Acceptable");
        flag=1;

    }
    for (l=0;password[l]!=0;l++){
        if ((password[l]>='A')&&(password[l]<='Z')){
             upper++;}
        else if ((password[l]>='a')&&(password[l]<='z')){
                 lower++;}
        }
    if ((lower<1)||(upper<1)){
        printf("Not acceptable");
        flag=1;
        }
    for (l=0;password[l]!='\0';l++){
         for (j=0;j<length2;j++){
              if (password[l]==special[j]){
                  countspecial++;}
              }
         }
    if (countspecial<2){
        printf("Not Acceptable");
        flag=1;
        }
    m=0;
    count=0;
    maxcount=5;
    while ((password[m]!='\0')&&(count<=maxcount)){
           count=1;
           while (password[m]==password[m+1]){
                  m++;
                  count++;
                  if (count>maxcount){
                      printf("Not Acceptable");
                      break;}
             }
           }
}
else{
    printf("Acceptable");
}

return 0;
}
