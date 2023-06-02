#include<stdio.h>
#include<stdlib.h>
struct User{
char* userid;
char* password;
};
int main()
{
    struct User *a;
    a->userid=(char*)malloc(100*sizeof(char*));
    a->password=(char*)malloc(100*sizeof(char*));
    int ch,n;
    printf("Enter maximum number of users\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("Enter choice\n1.Enroll\n2.Sign-in\n3.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:printf("Enter user id\n");

            break;
        case 2:
            break;
        case 3:return 0;
            break;

        }
    }




}
