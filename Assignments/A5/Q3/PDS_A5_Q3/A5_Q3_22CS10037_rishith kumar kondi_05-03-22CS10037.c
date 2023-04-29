#include<stdio.h>
void swap(int p,int q)
{
    int a;
    a=p;
    p=q;
    q=a;
}
void reverse(int *c,int N,int i)
{
    int h;

    if(N<0){c[N-1]=h;return;}
    c[i]=c[N-1];
    reverse(c,N-1,i+1);
    return;
}
void cyclicshift(int *b,int direction,int i)
{
    if(direction==1){
    if(i==4){b[i]=b[0];return;}
    b[i]=b[i+1];
    cyclicshift(b,direction,i+1);
    return;}
    if(direction!=1){
    if(i==4){return;}
    b[i+1]=b[i];
    cyclicshift(b,direction,i+1);
    return;}
}

int main()
{
    int direction,a[10],N,j,b[10];
    printf("enter the size and direction: ");
    scanf("%d %d",&N,&direction);
    printf("Enter %d integers: ",N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The original array is:\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<N;i++)
    {
        a[i]=b[i];
    }
    printf("\n");
    reverse(a,N,0);
    printf("the reversed array is\n");

    for(j=0;j<N;j++)
    {
        printf("%d,",a[j]);
    }
    printf("\n");
    cyclicshift(b,direction,0);
    if(direction==1){
    printf("array after left cyclic shift is :");
    for(int i=0;i<N;i++)
    {
        printf("%d,",b[i]);
    }}
    if(direction!=1){
    printf("array after right cyclic shift is :");
    b[0]=b[N-1];
    for(int i=0;i<N;i++)
    {
        printf("%d",b[i]);
    }}
}