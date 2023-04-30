#include<stdio.h>
#define N 100
int main(){
int n;
printf("write the number of elements you want in your array");
scanf("%d", &n);
int a[N];
int j,i,x = 0,c;

for (i = 0; i < n ; i++ )
{
    scanf("%d",&a[i]);


}

for( i = 0 ; i < n ; i++)
{
    for (j = 0; j < i ; j++){
    if(a[i] < 0){
        c = a[x];
        a[x] = a[i];
        a[i] = c;
         x++;
    }





}
}

for ( i = 0 ; i < n ; i++){

    printf("%d  ", a[i]);



}