//name:GUNNU HEMANTH
//ROLL NO :21BT30006
//SEC 3
#include<stdio.h>
int main()
{
    int k;
int a[4]={8200,8300,6900,9200};
int b[4]={7700,3700,4900,9200};
int c[4]={1100,6900,500,8600};
int d[4]={800,900,9800,2300};
for (k=1;k<=4;k++){
    if (a[k]<b[k]&&a[k]<c[k]&&a[k]<d[k]){printf("the smallest is %d",a[k]);}
    else if(b[k]<a[k]&&b[k]<c[k]&&b[k]<d[k]){printf("the smallest is %d",b[k]);}
    else if(c[k]<a[k]&&c[k]<b[k]&&c[k]<d[k]){printf("the smallest is %d",c[k]);}
    else {printf("the smallest is %d",d[k]);}




}
return(0);


}


