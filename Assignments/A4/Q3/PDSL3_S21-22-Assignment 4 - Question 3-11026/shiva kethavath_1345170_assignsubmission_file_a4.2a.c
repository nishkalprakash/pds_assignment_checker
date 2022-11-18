#include <stdio.h>
# define MAX 100
int enque(int arr[],int len, int n)
{
    int i,k=1;
    for (i=0;i<len;i++){
        if (arr[i]==n){
            printf("The queue contains %d",n);
            k=0;
            break;
        }
    }
    if (k==1){
        if (len==MAX) printf("Queue reached its maximum size MAX");
        else {
            arr[len]=n;
            len++;
            printf("The queue contains : ");
            printf("%d",*arr);
            for (i=1;i<len;i++) printf(",%d",arr[i]);
        }
    }
    return k;
}

int deque (int A[],int len)
{
    int i,t=0;
    if (len==0) printf("The queue is empty !!");
    else{
        t=1;
        printf("Removed element %d\n",*A);
        for (i=0;i<len-1;i++) A[i]=A[i+1];
        len--;
        printf("The queue contains : ");
        printf("%d",*A);
        for (i=1;i<len;i++) printf(",%d",A[i]);
    }
    return t;
}

int main()
{
    int n,o,nums[MAX];
    static int LEN=0;
    printf("Enter the option: 1. Enque, 2. Deque \n");
    scanf("%d",&o);
    while (o!=1){
        if (o==2) {deque(nums,LEN);printf("\nEnter the option: 1. Enque, 2. Deque \n");}
        else printf("Enter a valid option !!");
        scanf("%d",&o);
    }
    if (o==1) {
            printf("Enter the element : ");
            scanf("%d",&n);
            if (enque(nums,LEN,n)==1) LEN++;
    }
    printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
    scanf("%d",&o);
    while (1>0){
        if (o==1){
            printf("Enter the element : ");
            scanf("%d",&n);
            if (enque(nums,LEN,n)==1) LEN++;
            printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
        }
        else if (o==2) {if(deque(nums,LEN)==1) LEN--;printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");}
        else if (o==3) break;
        else printf("Enter a valid option !!");
        scanf("%d",&o);
    }
    printf("Quitting !!");
}
