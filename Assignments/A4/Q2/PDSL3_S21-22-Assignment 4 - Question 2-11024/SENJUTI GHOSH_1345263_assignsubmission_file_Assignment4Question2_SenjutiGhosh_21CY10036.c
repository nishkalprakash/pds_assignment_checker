/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
int MyHostelChangingTrips(int k,int i,int n,int m){
    if (k<0){
        return 0;
    }
    if (k==0){
        return 1;
    }
    int j;
    int next=0;
    for (j=1;j<=m;j++){
         next=MyHostelChangingTrips(k-j,i+1,n,m);
    }
    return next;
}
int main(){
int n,k,m,next;
printf("Enter n,k,m respectively");
scanf("%d %d %d",&n,&k,&m);
next=MyHostelChangingTrips(k,1,n,m);
printf("Number of trips=%d",next);
return 0;
}
