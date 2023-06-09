#include<stdio.h>
#include<stdlib.h>

int recursive(int m,int n,int l,int *a){
    if (l==0) return a[0];
    if (recursive(m,(m+n)/2,((m+n)/2)-m,a)>=(recursive(((m+n)/2)+1,n,n-((m+n)/2)-1,a))) return (recursive(m,(m+n)/2,((m+n)/2)-m,a));
    else return (recursive(((m+n)/2)+1,n,n-((m+n)/2)-1,a));
}
int main(){
    int p,q,n,*a,i,result;
    scanf("%d%d%d",&n,&p,&q);
    a=(int *)malloc(n*sizeof(int));
    while (1){
        if (n==1){
            printf("in valid value of n");
            break;
        }
        else if (p>q){
            printf("p should be less than q");
            break;
        }
        else{
        for (i=0;i<n;i++){
           a[i]=rand()%(q-p+1)+p;
        }
        printf("List =[");
        for (i=0;i<n;i++) printf("%d,",a[i]);
        result=recursive(0,n-1,n-1,a);
        printf("]max= %d",result);
        break;
        }
    }

}
