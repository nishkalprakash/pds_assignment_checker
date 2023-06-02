/*name- Mohul Dutta
22EC30035
section 2
question 3*/
#include<stdio.h>
#include<string.h>
typedef struct{
char userID[101];
char password[101];
}User;
void enrollment(int i,User *x){
printf("Enter a User ID:- ");
char pwd[101],uid[101];
scanf("%s",&uid);
int f=1;
for(int j=0;j<i;j++){
    if(strcmp(x[j].userID,uid)==0){
        f=0;
        break;
    }
}
if(f==0){
    printf("%s already exists.\n ** EXITING **",uid);
    exit(0);
}
else{
    int lc=0,uc=0,nu=0,sp=0,spac=0;
    printf("Enter a password:- ");
    scanf("%s",&pwd);
    if(strlen(pwd)>=12){
    for(int j=0;j<strlen(pwd);j++){
        if(pwd[j]==' '){
            spac++;
            break;
        }
        else if(pwd[j]>=65&&pwd[j]<=90)
            uc++;
        else if(pwd[j]>=97&&pwd[j]<=122)
            lc++;
        else if(pwd[j]>=48&&pwd[j]<=57)
            nu++;
        else if(pwd[j]=='~'||pwd[j]=='!'||pwd[j]=='@'||pwd[j]=='#'||pwd[j]=='$'||pwd[j]=='%'||pwd[j]=='&'||pwd[j]=='*')
            sp++;
    }
    if(spac==0){
        if(lc*uc*nu*sp!=0){
            printf("%s enrolled successfully.\n",uid);
            strcpy(x[i].userID,uid);
            strcpy(x[i].password,pwd);
            return;
        }
        else{
            printf("Invalid Password.\n** EXITING **");
            exit(0);
        }
    }
    else{
            printf("Invalid Password.\n** EXITING **");
            exit(0);
    }
    }
    else{
        printf("Invalid Password.\n** EXITING **");
        exit(0);
    }
}
}
void signIn(int index,User *x){
    char uid[101];
    printf("Enter User Id:- ");
    scanf("%s",&uid);
    int f=-1;
    for(int i=0;i<index;i++){
        if(strcmp(uid,x[i].userID)==0){
            f=i;
            break;
        }
    }
    if(f==-1){
    printf("%s is not enrolled.\n ** EXITING **",uid);
    exit(0);
    }
    else{
        char pwd[101];
        printf("Enter Password:- ");
        scanf("%s",&pwd);
    int lc=0,uc=0,nu=0,sp=0,spac=0;
    if(strlen(pwd)>=12){
    for(int j=0;j<strlen(pwd);j++){
        if(pwd[j]==' '){
            spac++;
            break;
        }
        if(pwd[j]>=65&&pwd[j]<=90)
            uc++;
        if(pwd[j]>=97&&pwd[j]<=122)
            lc++;
        if(pwd[j]>=48&&pwd[j]<=57)
            nu++;
        if(pwd[j]=='~'||pwd[j]=='!'||pwd[j]=='@'||pwd[j]=='#'||pwd[j]=='$'||pwd[j]=='%'||pwd[j]=='&'||pwd[j]=='*')
            sp++;
    }
    if(spac==0){
        if(lc*uc*nu*sp!=0){
            if(strcmp(pwd,x[f].password)==0){
                printf("%s signed in successfully.\n ** EXITING **",uid);
                exit(0);
            }
            else{
                printf("Wrong Password.\**EXITING**");
                exit(0);
            }
        }
        else{
            printf("Invalid Password.\n** EXITING **");
            exit(0);
        }
    }
    else{
            printf("Invalid Password.\n** EXITING **");
            exit(0);
    }
    }
    else{
             printf("Invalid Password.\n** EXITING **");
            exit(0);
    }
}
}
int main(){
int max;
printf("Enter MAX no of users:- ");
scanf("%d",&max);
int uinp;
int j=0;
User x[max];
do{
printf("Choose one of the options.\n\t1. Enroll\n\t2. Sign-in\n\t3. Exit\n");
scanf("%d",&uinp);
switch(uinp){
case 1:
    enrollment(j,x);
    j++;
    break;
case 2:
    signIn(j,x);
    break;
case 3:
    exit(0);
}
printf("\n");
}while(1>0);
}
