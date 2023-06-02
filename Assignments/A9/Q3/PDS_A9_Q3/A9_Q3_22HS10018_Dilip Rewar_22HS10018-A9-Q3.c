#include <stdio.h>
typedef struct User{
    char* userID;
    char* password;
}User;
void enrollment(User A){
    printf("\nEnter userID:");
    scanf("%s",&A.userID);
}

int main(){
    int n,no;
    printf("Enter number of users: ");
    scanf("%d",&n);
    User *number;
    number = (char*) malloc(n*sizeof(User));
    for(int i=0;i<n;i++){
       printf("%d",number);
       scanf("%s",&number);
       if(no==1){
        printf("\nEnroll);
       }
       if(no==2){
        printf("\nSign In");
       }
       if(no==3){
        printf("\nExit");
       }
    }
    return 0;
}
