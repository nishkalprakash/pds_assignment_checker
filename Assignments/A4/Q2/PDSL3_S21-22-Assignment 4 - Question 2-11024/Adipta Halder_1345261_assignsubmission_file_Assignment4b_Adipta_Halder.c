/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 4b
*/
#include<stdio.h>

int myHostelChangingTrips(int k,int i,int n,int m){
    int count=0;
    int j;
    if((n+1)==i&&k>0){//days finished but items left, not a proper way, so return 0
        return 0;
    }
    else if((n+1)>=i&&k==0){//days left but item finished so you have a valid oway and you return 1
        return 1;
    }
    else if(k<0){
        return 0;//items number is negative ;no way so return 0
    }
    for(j=0;j<=m;j++){//I am going through options where I can take 0 to m items in a day
        count = count+myHostelChangingTrips(k-j,i+1,n,m);//recursive call
    }
    return count;
}
int main(){
    int n,k,m;
    printf("Enter n,k,m respectively: ");
    scanf("%d%d%d",&n,&k,&m);
    printf("\nAll possible journeys= %d", myHostelChangingTrips(k,1,n,m));//day is starting from 1 so,i=1.
 return 0;
}

