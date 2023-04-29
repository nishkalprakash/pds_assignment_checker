#include<stdio.h>
void swap(int *p,int *q){
    int z=p;
    p=q;
    q=z;
    return;

}
void reverse(int *a,int n,int i){
    if (n==i){

        return ;
    }
    int j=a[n-i];
    a[n-i]=a[i];
    a[i]=j;
    reverse(a,n-1,i+1);



}
int cyclicshift(int *a,int dir,int n){
    if(dir==0){
        return a[n-dir-1];
    }
    else{
        for(int i=0 ;i<n;i++){
            int z=a[0];
            for (int j=0;j<n;j++){
                a[j]=a[j+1];
            }
            a[n-1]=z;
        }
        cyclicshift(a,dir-1,n);


    }
    return a;


}
int main(){
    int n,d,x,i=0;
    printf("Enter the size of array and direction");
    scanf("%d %d",&n,&d);
    int a[n];
    printf("Enter %d integers : ",n);
    for (int i=0;i<n;i++){
        scanf("%d",&x);
        a[i]=x;

    }
    reverse(a,n,i);
    a[n]=cyclicshift(a,d,n);

return 0;
}

