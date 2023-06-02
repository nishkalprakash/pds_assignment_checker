#include<stdio.h>
#include<math.h>
#include<string.h>
/*NAME - NAIN ADITYA
ROLL 22AG10029 | sec 2
LAB -9 QUESTION 3*/
typedef struct user{
  char *userID;
  char *password;
}user;
int passwordcheck(char *a){
    int n1=0,n2=0,n3=0,n4=0;
    if (strlen(a)<12)return 0;

    else {for (int i=0;i<strlen(a);i++){
        if ((int)a[i]>=65&&(int)a[i]<=90)n1=1;
        else if ((int)a[i]>=97&&(int)a[i]<=122)n2=1;
        else if ((int)a[i]>=48&&(int)a[i]<=57)n3=1;
        else if (a[i]=='!'|| a[i]=='@')n4=1;
        else if (a[i]=='~'|| a[i]=='#')n4=1;
        else if (a[i]=='$'|| a[i]=='&')n4=1;
        else if (a[i]=='%'|| a[i]=='*')n4=1;}
    if ((n1+n2+n3+n4)==4)return 1;

    else return 0;
}}
int useridcheck(user *a1, char *a,int n){
  for (int i=0;i<n;i++){
    if (!(strcmp(a1[i].userID,a)))return 0;
  }return 1;
}
void enroll(user *a,int n){
    char s[100],p[100]
    printf("enter the user id : ");
    scanf("%s",s);
    if useridcheck(a,s,n) strcpy(a[n].userID,s);
    else printf("please enter a valid user id");
    scanf("%s",p);
    if passwordcheck(p) strcpy(a[n].password,p);
    else printf("invalid password");

}
void signin(user *a,int n){char s[100];
    printf("enter the user id");
    scanf("%s",s);
    if (usercheck(a,s,n));




}
int main(){
  int n,n1,a;
  printf("enter the max no. of user : ");
  scanf("%d",&n);
  user ar[n];
  int k=0
   while (1){
  printf("please choose one of the following options :\n1.Enroll\n2.SignIn\n3.EXIT \n");
  scanf("%d",&n1);
  if(n1<0||n1>3){printf("enter a valid option no.\n");continue;}
  if (n1==1){enroll(ar,k);k++}
  if(n1==2){singin();}
  if(n1==3)break;
  }


return 0;

}
