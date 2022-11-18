
#include <stdio.h>
int myHostelChangingTrips(int n,int k,int m,int i)
{int journey=1;
   int a=0,b=0,c=0,d=0;
   for(int i=0;i<n;i++){
       while(a<=m){a++;
         while(b<=m){b++;
            while(c<=m){c++;
            while(d<=m){d++;
   if(a+b+c+d==k){
       journey++;
   }}}}}}


   return journey;

}
int main()
{
    int n,m,k,i=1,journey;
    printf("enter n ,k and m:");
    scanf("%d%d%d",&n,&k,&m);
    journey=myHostelChangingTrips(n,k,m,i);
    printf("the total journeys = %d",journey);
    return 0;
}
