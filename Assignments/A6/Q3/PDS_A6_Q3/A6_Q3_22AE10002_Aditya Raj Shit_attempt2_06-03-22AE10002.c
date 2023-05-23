#include<stdio.h>

int main()
{
    int n,size;
    printf("Enter your choice 1/2/3:");
    scanf("%d",&n);
    printf("\nEnter size: ");
    scanf("%d",&size);

    if(n==1){
        int a[100];
        for(int i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        for(int j=0;j<size/2;j++){
            int temp=a[j];
            a[j]=a[size-j-1];
            a[size-j-1]=temp;
        }
        for(int k=0;k<size;k++){
            printf("%d ",a[k]);
        }
    }

    else if(n==2){
        char str1,str2;
        int n1,n2;
        printf("Enter string 1 : ");
        gets(str1);
        printf("Enter string 2 : ");
        gets(str2);
        for(n1=1;str1[n1]!='\0';n1++);
        for(n2=1;str2[n2]!='\0';n2++);

        if(n1==n2){
            for(int i=0;i<n1;i++){
                for(int j=0;j<n1;j++){
                    if(str1[i]==str2[j]){
                        str2[j]='0';
                    }
                }
            }
            int flag=1;
            for(int i=0;i<n2;i++){
                if(str2[i]!='0'){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                printf("%s and %s are anagrams.\n",str1,str2);
            }
            else{
                printf("%s and %s are not anagrams.\n",str1,str2);
            }
        }
    }

    else if(n==3){
        char a[100];
        printf("Enter the string: ");
        gets (a);
        int i,size;
        for(size=1;a[size]!='\0';size++);
        for(i=0;a[i]!='\0';i++){
            if(a[i]!=a[size-i-1]){
                break
            }
        }
        if(i==size/2){
            printf("%s is a palindrome.",a);
        }
        else{
            printf("%s is not a palindrome.",a);
        }
    }

}
