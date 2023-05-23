/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO:5
DESCRIPTION:FUNCTIONS
*/
#include <stdio.h>
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void reverse(int *a,int l){
    int t;
    if (l>0){
        swap(&a[0],&a[l-1]);
        reverse(&a[1],l-2);
    }
}
int pallindrome(char str[],int n){
    int i;
    int flag=0;
    for (i=0;i<n/2;i++){
        if (str[i]!=str[n-i]) flag=1;
    }
    if (flag==1) return 0;
    else return 1;
}
int main(){
    int c;
    scanf("%d",&c);
    while(1){
        if (c==1){
            int n,*a,i;
            scanf("%d",&n);
            a=(int *) malloc(n*4);
            for (i=0;i<n;i++){
                scanf("%d",&a[i]);
            }
            reverse(a,n);
            for (i=0;i<n;i++){
                printf("%d ",a[i]);
            }
        }
        else if (c==2){
            int i,j,flag,e=0,i1,j1;
            char s1[100],s2[100],h,k;
            scanf("%c",&h);
            for (i1=0;i1<100;i1++){
               scanf("%c",&s1[i1]);
               if (s1[i1]=='\n') break;
            }
            for (j1=0;j1<100;j1++){
               scanf("%c",&s2[j1]);
               if (s2[j1]=='\n') break;
            }

            flag=0;
            for (i=0;i<i1;i++){
                h=s1[i];
                flag=0;
                for (j=0;j<j1;j++){
                    k=s2[j];
                    if (h==k) {
                        flag=1;
                        break;
                    }
                }
                if (flag==0){
                    e=1;
                    break;

                }
            }

            for (i=0;i<i1;i++){
                printf("%c",s1[i]);
            }
            printf(" and ");
            for (i=0;i<j1;i++){
                printf("%c",s2[i]);
            }
            if (e==0){
                printf(" are anagrams");
            }
            else if (e==1) printf(" are not anagrams");


        }
         else if (c==3){
            int i;
            char str[20],h;
            scanf("%c",&h);
            for (i=0;i<20;i++){
                scanf("%c",&str[i]);
                if (str[i]=='\n') break;
            }
            if (pallindrome(str,i-1)==0) printf("not a pallindrome");
            else printf("it is a pallindrome");

        }
    }
    printf("enter again from 1 ,2 ,3");
}



