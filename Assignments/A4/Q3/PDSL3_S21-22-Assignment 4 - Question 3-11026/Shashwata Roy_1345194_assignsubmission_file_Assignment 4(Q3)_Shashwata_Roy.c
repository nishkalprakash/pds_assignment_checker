/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#define MAX 300000

struct s
{
    int f;
    int r;
    int a[MAX];
};

void enque(int x,struct s s1)
{
    s1.r++;
    s1.a[s1.r]=x;
}

void deque(struct s s1)
{
    s1.f++;
}

int main()
{
    int n,i,x;
    struct s s1;
    printf("Enter f: ");
    scanf("%d",&s1.f);
    printf("Enter r: ");
    scanf("%d",&s1.r);
    printf("Enter the option: 1.Enque, 2.Deque, 3.Exit");
    scanf("%d",&n);
    while(n!=3){
        printf("Enter the option: 1.Enque, 2.Deque, 3.Exit");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter the element: ");
            scanf("%d",&x);
            enque(x,s1);
        }
        else if(n==2)
    {
        deque(s1);
    }
    for(i=s1.f;i<=s1.r;i++){
        printf("%d ",i);
    }
    printf("\n");
    }
    if(s1.f==s1.r){
        printf("The Queue is empty");
    }
    return 0;
}
