/*Name-Ankit Kumar
Roll no. 21MI10010
Department:Mininig Engineering*/

#include <stdio.h>
int cur=100000;
void f(int i,int s[],int n,int k,int x[]) {
if(i==n){
  int p1[k+1];
  for(int h=0;h<=k;h++){
    p1[h]=0;
  }
  for(int ip=0;ip<n;ip++){
    int z=x[ip];
    p1[z]+=s[ip];
  }
  int ans1=0;
  int ans2=100000;
  for(int ip=1;ip<=k;ip++){
        if(p1[ip]==0){
            ans1=-1;break;
        }
    if(ans1<p1[ip]){
        ans1=p1[ip];
    }
    if(ans2>p1[ip]){
        ans2=p1[ip];
    }
  }
  if(ans1==-1) return;
  if(ans1-ans2<cur){
    cur=ans1-ans2;
  }
    return;
}
for(int ip=1;ip<=k;ip++){
    x[i]=ip;
    f(i+1,s,n,k,x);
}
}
int main()
{
int n,k;
scanf("%d %d",&n,&k);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int x[n];
for(int i=0;i<n;i++) x[i]=0;
f(0,arr,n,k,x);
printf("%d",cur);
}