//name harsh patidar
// roll no- 22mf10015
//sec - 2
//problem -1

#include<stdio.h>
#include<stdlib.h>

int main(){
int n , k=0,*b , q;
int *a;
srand(time(0));
 printf("random number array");
 scanf("%d",&n);
 a = (int*) malloc(n * sizeof(int));
 for(int i=0; i<n;i++)
    {
    a[i]= 2+ rand()%1000;
    }
     printf("random number are : ");
 for(int i=0; i<n;i++)
 {
     printf("%d  ",a[i]);
 }
 for( int i=0;i<n;i++)
 {
int      add=0;
     for(int j=1; j<a[i]; j++)
        {
        if(a[i]%j==0)
            add=add+j;
        }
     if(add==a[i])
        {
            b[k]=a[i];
            k++;
        }
 }
 printf("perfect number are %d\n",k);
 for(int y =0; y<k; y++){
    printf("%d\n",b[y]);
 }

 return  0;
}
