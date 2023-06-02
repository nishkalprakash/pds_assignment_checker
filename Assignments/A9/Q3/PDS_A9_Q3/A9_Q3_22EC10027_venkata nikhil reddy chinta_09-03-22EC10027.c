/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 9
* Description :  user enrollment
*question : 3
*/
#include<stdio.h>
typedef struct user{
char userid[100],password[100];
}user;
void enrollment( user a){
char i,A,Z;
int j;
printf("enter a userID : ");
scanf("%s" , a.userid);
printf("give a password : ");
scanf("%s" , a.password);
for(i=A;i<=Z;i++)
{
  for(j=0;a.password!='0';j++)
  {
      if(a.password[j]!=i)
      {
          printf("invalid");
      }
  }
}
printf("you are successfully enrolled");

}
void signin(user b){
printf("enter a userID : ");
scanf("%s" , b.userid);
printf("give a password : ");
scanf("%s" , b.password);

}
int main()
{
    int n;
    user p,q;
    printf("enter the no.of user : ");
    scanf("%d" , &n);

    enrollment(p);


    return 0;
}
