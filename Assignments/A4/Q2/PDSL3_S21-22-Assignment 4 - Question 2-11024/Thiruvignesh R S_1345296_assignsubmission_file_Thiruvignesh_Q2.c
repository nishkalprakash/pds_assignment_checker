/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>

int myHostelChangingTrips(int k,int i,int n,int m);

int main(){
    int n,k,m;
    printf("no of days: ");
    scanf("%d",&n);
    printf("no of items: ");
    scanf("%d",&k);
    printf("m:");
    scanf("%d",&m);

    int res=myHostelChangingTrips(k,1,n,m);
    printf("Journeys: %d",res);

    return 0;
}

int myHostelChangingTrips(int k,int i,int n,int m){
    static int journey=0;
    int j;
    if(k<0) return -1; //breaks for k<0
    if(i>n) return -1; //breaks for i>n
    for (j=1 ; j<= m;j++){
        myHostelChangingTrips(k-j,i+1,n,m);
    }
    if (i==n && k<=m){

        journey++; 
        return -1;
    }
    if (k == 0) {
        journey++;
        return -1;
    }
    if (i==n && k>m) return -1;

    return journey;
}