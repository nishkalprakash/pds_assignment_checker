//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 9
//description:Q3
#include<stdio.h>

struct user
    {
        char userID[100];
        char password[100];
    }user;
void enrollment(int a)
{
    printf("Enter User ID:");
    scanf("%s",user.userID);
    printf("Enter Password:");
    scanf("%s",user.password);
}
int main()
{
    int n,a,i;

    for (i=0;i<n;i++)
    {
    printf("Enter MAX no of users:-");
    scanf("%d",&n);
    printf("Choose one of the option\n");
    printf("1.Enroll\n");
    printf("2.Signin\n");
    printf("3.Exit\n");
    scanf("%d",&a);

    if (a==1)
    {
        enrollment(a);
    }
    }

}
