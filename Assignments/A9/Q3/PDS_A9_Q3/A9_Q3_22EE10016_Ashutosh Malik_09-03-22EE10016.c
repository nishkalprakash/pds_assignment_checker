#include<stdio.h>
struct account{

char* UserId;
char* password;

}acc;

int main(){
acc.UserId = (char*) malloc(100*sizeof(char));
acc.password = (char*) malloc(100*sizeof(char));
printf("Enter Max no of users : 2\n");
printf("Choose one of the following\n");
printf("1. Enroll\n");
printf("2. Sign In\n");
printf("3. Exit\n");
int a;
scanf("%d",&a);
if( a == 1){
    printf("Enter the userid:");
    scanf("%s",&acc.UserId);
    printf("Enter the password");
    scanf("%s",&acc.password);
}
else if( a == 2){
    printf("Enter the userid:");
    scanf("%s",&acc.UserId);
    printf("Enter the password");
    scanf("%s",&acc.password);
}
else if (a == 3){
    printf("EXITING");
}


}
