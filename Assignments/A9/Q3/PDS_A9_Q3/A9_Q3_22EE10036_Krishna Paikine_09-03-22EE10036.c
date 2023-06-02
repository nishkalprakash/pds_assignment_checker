#include <stdio.h>
typedef struct {
    char* userID[100];
    char* password[100];
}User;
void enrollment()
{
    printf("Enter a UserID");
    scanf("%c*", User.userID);
    printf("Enter a password");
    scanf("%c*", User.password);
}
int main()
{
    enrollment();
    printf("%c", User.userID);
    printf("%c", User.password);

    return 0;
}
