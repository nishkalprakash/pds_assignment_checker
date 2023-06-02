/*name-samares malik
  roll no-22ME10072
  q3*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct user{
    char userid[101];
    char password[101];
};
int is_valid_pass(char pass[]){
    int a,num,low,high;
    low = 0;
    high = 0;
    num = 0;
    int sp=0;
    a=strlen(pass);
    for(int i=0;i<a;i++){
        if(pass[i]==" "){
            return 0;
            break;
        }
        else if((pass[i]>='A')&&(pass[i]<='Z')){
            high += 1;
        }
        else if((pass[i]>='a')&&(pass[i]<='z')){
            low += 1;
        }
        else if((pass[i]>='0')&&(pass[i]<='9')){
            num+=1;
        }
        else if((pass[i]=='~')||(pass[i]=='!')||(pass[i]=='@')||(pass[i]=='#')||(pass[i]=='$')||(pass[i]=='%')||(pass[i]=='&')||(pass[i]=='*')){
            sp+=1;
        }

    }
    //printf("%d%d%d%d\n",high,low,sp,num);
    if((low==0)||(high==0)||(num==0)||(sp==0)){
        return 0;
    }
    else{
        return 1;
    }

}

int main(){
    int n,choice;
    printf("Enter MAX no of user:-");
    scanf("%d",&n);
    printf("\n");
    struct user arr[n];
    printf("Choose one of the following options.\n");
    printf("1.Enroll\n");
    printf("2.Sign-in\n");
    printf("3.Exit\n");
    int i=0;
    do{
        scanf("%d",&choice);
        if(choice==1){
            char temp1[101];
            char temp2[101];
            int f=0;
            printf("Enter UserID:-");
            scanf("%s",&temp1);
            printf("\n");
            for(int j=0;j<n;j++){
                if(strcmp(temp1,arr[j].userid)==0){
                    printf("%s already exists\n",temp1);
                    printf("***EXITING***\n");
                    f = 1;
                    break;
                }
            }
            if(f==0){
                strcpy(arr[i].userid,temp1);
                printf("Enter password:-");
                scanf("%s",&temp2);
                if(is_valid_pass(temp2)==1){
                    strcpy(arr[i].password,temp2);
                    printf("%s enrolled successfully.\n",temp1);
                    //printf("***EXITING***\n");
                }
                else{
                    printf("Invalid password\n");
                    printf("***EXITING***\n");
                    break;
                }
            }
        }
        if(choice==2){
            char temp3[101];
            char temp4[101];
            int flag=0;
            printf("Enter user ID:-");
            scanf("%s",&temp3);
            printf("\n");
            for(int j=0;j<n;j++){
                if(strcmp(temp3,arr[j].userid)==0){
                    flag = 1;
                    printf("Enter password:-");
                    scanf("%s",&temp4);
                    printf("\n");
                    if(is_valid_pass(temp4)==0){
                        printf("Invalid password:-\n");
                        printf("***EXITING***\n");
                        break;
                    }
                    else{
                        if(strcmp(temp4,arr[j].password)==0){
                            printf("%s signed in successfully.\n");
                            printf("***EXITING***\n");
                            break;
                        }
                    }
                }
            }
            if(flag==0){
                printf("%s is not enrolled yet.\n",temp3);
                printf("***EXITING***\n");
            }
            break;
        }
    }while(choice!=3);


    return 0;

}
