#include <stdio.h>
# define MAX 100
int enque(int A[],int len, int k)
{
    int i,flag=1;
    for (i=0;i<len;i++){
        if (B[i]==k){
            printf("The queue contains %d",k);
            flag=0;
            break;
        }
    }
    if (flag==1){
        if (len==MAX) printf("Queue reached its maximum size MAX");
        else {
            A[len]=k;
            len++;
            printf("The queue contains : ");
            printf("%d",*B);
            for (i=1;i<len;i++) printf(",%d",B[i]);
        }
    }
    return flag;
}

int deque (int B[],int len)
{
    int i,flag=0;
    if (len==0) printf("The queue is empty !!");
    else{
        flag=1;
        printf("Removed element %d\n",*B);
        for (i=0;i<len-1;i++) B[i]=B[i+1];
        len--;
        printf("The queue contains : ");
        printf("%d",*B);
        for (i=1;i<len;i++) printf(",%d",B[i]);
    }
    return flag;
}

int main()
{
    int k,op,nums[MAX];
    static int LEN=0;
    printf("Enter the option: 1. Enque, 2. Deque \n");
    scanf("%d",&op);
    while (op!=1){
        if (op==2) {deque(nums,LEN);printf("\nEnter the option: 1. Enque, 2. Deque \n");}
        else printf("Enter a valid option !!");
        scanf("%d",&op);
    }
    if (op==1) {
            printf("Enter the element : ");
            scanf("%d",&k);
            if (enque(nums,LEN,k)==1) LEN++;
    }
    printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
    scanf("%d",&op);
    while (1>0){
        if (op==1){
            printf("Enter the element : ");
            scanf("%d",&k);
            if (enque(nums,LEN,k)==1) LEN++;
            printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
        }
        else if (op==2) {if(deque(nums,LEN)==1) LEN--;printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");}
        else if (op==3) break;
        else printf("Enter a valid option !!");
        scanf("%d",&op);
    }
    printf("Quitting !!");
}