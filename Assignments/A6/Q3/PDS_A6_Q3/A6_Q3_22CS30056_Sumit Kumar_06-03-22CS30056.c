#include<stdio.h>
/*name-Sumit Kumar
roll no-22CS30056
Description-program 3*/
int n;
void swap (int *x, int *y){

int t;
t = *x; *x = *y; *y = t;
}
void reverse(int *a,int k){
      if(k>n/2) return;
      else {
            swap(&a[k],&a[n-1-k]);
             reverse(a,k+1);
             return;
      }

}

int main(){
    int ch;
    scanf("%d",&ch);
    if(ch==1){
        printf("enter the limit for the array:");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    printf("the array you have entered is:");
    for(int p=0;p<n;p++){
        printf("%d ",a[p]);
    }
    printf("\n");
    reverse(&a,0);
    printf("the reversed array is");
    for(int p=0;p<n;p++){
        printf("%d ",a[p]);
    }
    printf("\n");

    }
    else if(ch==2){
             char p[200];
             printf("enter the first string:");
        scanf("%s",&p);

        char op[200];
        printf("enter the second string:");
        scanf("%s ",&op);

        int l1=0;
        for (int m=0;p[m]!='\0';m++){
                l1++;
        }
        int l2=0;
        for (int m=0;op[m]!='\0';m++){
                l2++;
        }

        if(l1==l2){
                int flag=0;
                for(int q=0;q<=l1;q++){
                    for(int v=0;v<=l2;v++){
                        if(p[q]==op[v]) flag++;
                    }
                }
            if(flag==l1) printf("%s and %s are anagrams",p,op);
            else printf("%s and %s are not anagrams",p,op);

        }
        else printf("they are not anagrams");

    }
    else if(ch==3){
        char r[200];
        scanf("%s",&r);
        getchar();
        int l=0;
        for (int m=0;r[m]!='\0';m++){
                l++;
        }
        int flag=0;
        for (int w=0;w<l;w++){
                if(r[w]!=r[l-w-1]) flag++;

        }
        if(flag==0) printf("%s is a palindrome",r);
        else printf("%s is  not a palindrome",r);

    }

}
