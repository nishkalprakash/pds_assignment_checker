/*Name - Modi Meet
Roll No-22ME10053
LAB - 9 Q3)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct user{
    char userid[100];
    char password[100];
};

int validitypass(struct user A){
    char str[100];
    int i,j,k;
    strcpy(str,A.password);
    int len = strlen(str);
    if(len<12) return 0;
    int flag1 = 0,flag2=0,flag3=0,flag4=0,flag5=1;
    for(i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){flag1 = 1; break;}
    }
    for(i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){flag2 = 1; break;}
    }
    for(i=0;i<len;i++){
        if(str[i]>='0' && str[i]<='9'){flag3 = 1; break;}
    }
    for(i=0;i<len;i++){
        if(str[i] =='%' || str[i]=='$' || str[i] =='@' || str[i]=='#' || str[i]<='&'){flag4 = 1; break;}
    }
    for(i=0;i<len;i++){
        if(str[i]==' ') flag5=0;
    }
    if(flag1 == 1 && flag2 == 1 && flag3 ==1 && flag4 ==1 && flag5 == 1) return 1;
    else return 0;

}

int validityid(struct user A){
    char str[100];
    int i,j,k,flag=1;
    strcpy(str,A.userid);
    int len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==' ') flag=0;
    }
    if(flag==1) return 1;
    else return 0;
}

void enrollment(struct user A, int p,struct user X[]){
    printf("Enter User ID :\n");
    scanf("%s",&(A).userid);
    int m,flag=0;
    for(m=0;m<p;m++){
       if(strcmp(X[m].userid,(A).userid)==0){
            printf("%s already exists.\n**EXITING**",(A).userid);
            exit(1);
       }
    }
    printf("Enter the password :\n");
    scanf("%s",A.password);
    if(validitypass(A)==1) printf("%s successfully enrolled.\n",A.userid);
    else{
        printf("Invalid password. **EXITING**");
        exit(1);
    }
}

void signin(struct user A,int p,struct user X[]){
    printf("Enter User ID :\n");
    scanf("%s",A.userid);
    int m;
    for(m=0;m<p;m++){
        if(strcmp(X[m].userid,A.userid)==0) break;
    }
    if(m==p){
     printf("%s is not enrolled **EXITING** ",A.userid);
     exit(1);
    }
    else{
    printf("Enter the password :\n");
    scanf("%s",A.password);
    if(validitypass(A)!=1){ printf("Invalid Password"); exit(1);}
    for(m=0;m<p;m++) {
            if(strcmp(A.password,X[m].password)==0 && strcmp(A.userid,X[m].userid)==0) printf("%s successfully logged in",A.userid);
            else if(strcmp(A.password,X[m].password)!=0 && strcmp(A.userid,X[m].userid)==0) {
                printf("Wrong Password");
                exit(1);
             }
            }
    }
}

int main(){
    int users;
    printf("Enter the MAX no of users :\n");
    scanf("%d",&users);
    struct user X[10];
    int key[10];
    int i,j,k;
    for(i=0;i<users;i++){
       printf("Choose one of the options:\n       1.Enroll\n       2.Sign In\n       3.Exit\n");
       scanf("%d",&key[i]);
       if(key[i]==1) enrollment(X[i],i,X);
       else if(key[i]==2) signin(X[i],i,X);
       else if(key[i]==3) exit(1);
    }
    return 0;
}
