/*Name-Ankit Kumar
Roll no. 21MI10010
Department:Mininig Engineering*/

#include <stdio.h>
int maxAlphaValue(int s[],int n) {
int ans=0;
for(int i=1;i<n;i++){
        int cur=0;
    for(int j=0;j<i;j++){
        if(s[j]%s[i]==0){
            cur++;
        }
    }
    if(ans<cur){
        ans=cur;
    }
}
return ans;
}
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a=maxAlphaValue(arr,n);
printf("%d",a);
}