#include <stdio.h>
#include <string.h>

/*
   sec-2
   Assignment no.- 9
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 3
*/
int n,i=0;
struct user{
    char userid[100];
    char pw[100];
} arr[10000000];

void enroll(){
    int flag=1;
    printf("Enter userid: ");
    char id[100];
    scanf("%s", id);
    for(int j=0; j<i; j++){
        if(strcmp(id, arr[j].userid)==0){
            printf("\n%s already exists", id);
            flag = 0;
            break;
        }
    }
    if(flag){
        char pass[100];
        int cap, small, num, sym;
        printf("\nEnter password: ");
        scanf("%s", pass);
        for(int k=0; pass[k]!='\0'; k++){
            if(pass[k]>'A' && pass[k]<'Z') cap=1;
            else if(pass[k]>'a'&& pass[k]<'z') small=1;
            else if(pass[k]>'0'&& pass[k]<'9') num=1;
            else if(pass[k]=='~' || pass[k]=='!' || pass[k]== '@' || pass[k]== '#' || pass[k]=='$' || pass[k]=='%' || pass[k]=='&' || pass[k]=='*') sym=1;
        }
        if(cap==1 && small==1 && num==1 && sym==1){
                strcpy(arr[i].pw, pass);
                strcpy(arr[i].userid, id);
                printf("%s enrolled successfully", id);
                i++;
        }
        else printf("Invalid password");
    }
}

void sign(){
    char id[100], pass[100];
    int j, flag=1;
    printf("Enter user-id: ");
    scanf("%s", id);
    for(j=0; j<i; j++){
        if(strcmp(id, arr[j].userid)==0){
            flag =0;
            printf("Enter password: ");
            scanf("%s", pass);
            if(strcmp(pass,arr[j].pw)==0){
                printf("%s signed in successfully", id);
            }
            else printf("Wrong password");
            break;
        }
    }
    if(flag) printf("%s doesn't exists", id);
}

int main(){
    int m;
    printf("Enter MAX number of users:- ");
    scanf("%d", &n);
    while(1){
        printf("\nChoose one of the options-\n        1.Enroll\n        2.Sign-in\n        3.Exit\n");
        scanf("%d", &m);
        if(m==1) enroll();
        if(m==2) sign();
        if(m==3){
            printf("**EXITING**");
            break;
        }
        }
    return 0;
}
