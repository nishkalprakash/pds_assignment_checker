/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
#include<stdlib.h>
int *input(int n){ int i;
    int *arr=(int*)malloc(n*(sizeof(int)));
    printf("enter the elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    return arr;
}
int maxmin_range(int *p,int n,int *max,int *min){int *range,i; // function to compute max min range of input
    *min=p[0];
 *max=p[0];
 for ( i = 0;i<n; i++)
 {
    if (p[i]>*max)
    {
       *max=p[i]; /* code */
    }
    if (p[i]<*min)
    {
      *min=p[i];  /* code */
    }

 }
 range=*max-*min;
 return range;
}
void order(int *p,int n,int range,int *max ,int *min){  //function to compute bins
 int i,j,k,l,m, length=range/4,l1=0,l2=0,l3=0,l4=0, a[n],b[n],c[n],d[n]; // assuming b to be 4
 int **bins;
 for ( i = 0; i < n; i++)
 {
    if(p[i]>(*max)-length){
     a[j++]=p[i];
     l1++;
    } /* code */
    else if (p[i]>(*max)-2*length)
    {
        b[k++]=p[i];
        l2++;/* code */
    }
    else if(p[i]>(*max)-3*length){
c[l++]=p[i];
l3++;
    }
    else {
        d[m++]=p[i];
    }
 }
 bins[0]=(int*)malloc(l1*sizeof(int));
 printf("bin1->");
 for ( i = 0; i < l1; i++)
 {
    *bins[0]++=a[i];
    printf("%d",*bins[0]); /* code */
 }

 bins[1]=(int*)malloc(l2*sizeof(int));
 printf("bin2->");
 for ( i = 0; i < l2; i++)
 {
    *bins[1]++=b[i];
    printf("%d",*bins[1]); /* code */
 }
 bins[2]=(int*)malloc(l3*sizeof(int));
 printf("bin3->");
 for ( i = 0; i < l3; i++)
 {
    *bins[2]++=c[i];
    printf("%d",*bins[2]);/* code */
 }
 bins[3]=(int*)malloc(l4*sizeof(int));
 printf("bin4->");
 for ( i = 0; i < l4; i++)
 {
    *bins[3]++=d[i]; /* code */
     printf("%d",*bins[3]);
 }
 return bins;
}

int main()
{ int n,*p,*max,*min,range,i,**bins; //assuming no.of bins to be 4
 printf("enter the no.of elements");
  scanf("%d",&n);
 p=input(n);
 range=maxmin_range(p,n,max,min);
 printf("enter the no.of bins");
 scanf("%d",&b);
 order(p,n,range,max,min);


return(0);

}
