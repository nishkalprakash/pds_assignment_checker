/*name :MOHUL DUTTA
roll no. 22EC30035
QUESTION=3
*/
#include<stdio.h>
int palindrome(char s[]){
int l=0;
for(l=0;s[l]!='\0';l++);
for(int i=0;i<l/2;i++){
    if(s[i]!=s[l-i-1])
        return 0;
}
return 1;
}
int chk(char s1[],char s2[]){
int l1,l2,k=0;
for(l1=0;s1[l1]!='\0';l1++);
for(l2=0;s2[l2]!='\0';l2++);
if(l1!=l2)
    return 0;
else
{
    for(int i=0;i<l1;i++){
        k=0;
        for(int j=0;j<l2;j++){
            if(s1[i]==s2[j]){
                k=1;
            }
        }
        if(k==0)
            return 0;
    }
    return 1;
}
}
int rev(int a[],int st, int e){
if(st<e){
    int temp=a[st];
    a[st]=a[e];
    a[e]=temp;
    return rev(a,st+1,e-1);
}
else
    return 0;
}




int main(){
    int n;
    int choice;
    int a[20];
    char s[20];
    char s1[20],s2[20];
scanf("%d",&choice);
switch(choice){
case 1:


    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    rev(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    break;
case 2:

    scanf("%s",&s1);
    scanf("%s",&s2);
    if(chk(s1,s2))
                printf("%s and %s are anagrams",s1,s2);
    else
        printf("arent anagrams");
    break;
case 3:

    scanf("%s",&s);
    if(palindrome(s)==1)
        printf("%s is a palindrome",s);
    else
        printf("%s is not a palindrome",s);
}
}
