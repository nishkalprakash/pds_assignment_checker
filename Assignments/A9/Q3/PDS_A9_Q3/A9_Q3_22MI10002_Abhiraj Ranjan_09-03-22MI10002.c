/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 9
Question: 3
Description: Vectors*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct
{
    char userID[50];
    char password[50];
} User;

void enrolment(User a[],int n,int i)
{
    char userid[50];
    char newpassword[50];
    int j,flag=0;

        printf("Enter User ID:- ");
        scanf("%s",userid);
        for(j=0; j<n; j++)
        {
            if(strcmp(userid,a[j].userID)==0)
            {
                flag++;
                printf("%s already exists.\n",userid);
                printf("**EXITING**\n");
                return;
            }
        }
        strcpy(a[i].userID,userid);
        printf("Enter Password:- ");
        scanf("%s",newpassword);
        if(strlen(newpassword)<12)
        {
            printf("Invalid Password.\n**EXITING**\n");
            return;
        }
        int k,capital_counter=0,small_counter=0,num_counter=0,symbol_counter=0;
        for(k=0; newpassword[k]!='\0'; k++)
        {
            if(newpassword[k]>='A'&&newpassword[k]<='Z')
            {
                capital_counter++;
            }
            if(newpassword[k]>='a'&&newpassword[k]<='z')
            {
                small_counter++;
            }
            if(newpassword[k]>='0'&&newpassword[k]<='9')
            {
                num_counter++;
            }
            if(newpassword[k]=='~'||newpassword[k]=='!'||newpassword[k]=='@'||newpassword[k]=='#'||newpassword[k]=='$'||newpassword[k]=='%'||newpassword[k]=='&'||newpassword[k]=='*')
            {
                symbol_counter++;
            }
        }
        if((capital_counter&&small_counter&&num_counter&&symbol_counter)==0)
        {
            printf("Invalid Password.\n**EXITING**\n");
            return;
        }
            strcpy(a[i].password,newpassword);

}
void signin(User a[],int n,int i){
char newuser[50];
printf("Enter User ID:- ");
scanf("%s",newuser);
int t,count=0;
for(t=0;t<n;t++){
    if(strcmp(newuser,a[t].userID)==0)
        count++;
}
if (count=0){
    printf("%s is not enrolled.\n**EXITING**",newuser);
}
}
int main()
{
    int n,i;
    printf("Enter MAX number of users:- ");
    scanf("%d",&n);
    User a[n];
    int index;
    for(i=0;i<n;i++){
    printf("Choose on of the enrollment options.\n");
    printf("\t\t1.Enroll\n\t\t2.Sign-in\n\t\t3.Exit\n");

    scanf("%d",&index);
    if(index==1)
    {
        enrolment(a,n,i);
    }
    if(index==2){
        signin(a,n,i);
    }
    }
    return 0;
}
