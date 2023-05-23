#include<stdio.h>
/*
   sec-2
   Assignment no.- 7
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 3
*/

void swap(int *p , int *q){
   int temp = *p;
   *p = *q;
   *q = temp;
}

int palindrome(char str[20]){
int l,flag=1;
for(l=0; str[l]!='\0'; l++);
for(int i=0; i<l/2; i++){
    if(str[i]!=str[l-i-1]){
        flag=0;
        break;
    }
}
printf("%d", l);
return flag;
}

int main(){
int k,n;
scanf("%d",&k);

if(k==1){
    scanf("%d", &n);
    float a[n];
    for(int k=0; k<n; k++) scanf("%f", &a[k]);

    if(n%2==1){
         for(int i=0; i<=n/2; i++) swap(a+i, a+n-i-1);
    }
    else{
         for(int i=0; i<=n/2-1; i++) swap(a+i, a+n-i-1);
    }

    for(int k=0; k<n; k++) printf("%f ", a[k]);
}
else if(k==2){
    char c[100], c2[100];
    int flag=1, l1, l2,count1=0, count2=0;
    scanf("%s", c);
    scanf("%s", c2);
    for(l1=0; c[l1]!='\0'; l1++);
    for(l2=0; c2[l2]!='\0'; l2++);
    for(int i=0; i<l1; i++){
         for(int j=0; j<l2; j++){
            if(c[i]!=c2[j]){
                count1++;
            }
         }
         if(count1==l2){
            flag=0;
            break;
         }
    }
    for(int i=0; i<l2; i++){
         for(int j=0; j<l1; j++){
            if(c2[i]!=c[j]){
                count2++;
            }
         }
         if(count2==l1){
            flag=0;
            break;
         }
    }
    if(l1!=l2) flag=0;

    if(flag==0){
        for(int i=0; i<l1; i++) printf("%c", c[i]);
        printf(" and ");
        for(int i=0; i<l2; i++) printf("%c", c2[i]);
        printf(" are not anagrams");
    }
    else{
        for(int i=0; i<l1; i++) printf("%c", c[i]);
        printf(" and ");
        for(int i=0; i<l2; i++) printf("%c", c2[i]);
        printf(" are anagrams");
    }
}
else if(k==3){
    char str[20];
    scanf("%s", str);
    if(palindrome(str)){
        for(int i=0; str[i]!='\0'; i++) printf("%c", str[i]);
        printf(" is a palindrome");
    }
    else{
        for(int i=0; str[i]!='\0'; i++) printf("%c", str[i]);
        printf(" is not a palindrome");
    }
}

return 0;
}
