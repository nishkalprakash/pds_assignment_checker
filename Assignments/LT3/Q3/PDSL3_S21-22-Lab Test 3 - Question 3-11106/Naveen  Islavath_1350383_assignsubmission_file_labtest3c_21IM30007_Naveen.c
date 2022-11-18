#include<stdio.h>
void numbers(int c,int d,int t){
    static int a[5];
    if(t==5){
        t--;
        int sum=0;
        for(int i=0;i<5;i++){
            sum=a[i]+sum*10;
        }
        if(sum%(c+d)!=0){
            printf("%d ",sum);
        }
        return;
    }
    else{
        if(t<5){
            a[t++]=c;
            numbers(c,d,t);
            a[t]=d;
            numbers(c,d,t);
            return;
        }
    }
}
int main(){
    int c,d,t=0;
    printf("Enter two digits: ");
    scanf("%d%d",&c,&d);
    printf("Numbers:\n");
    numbers(c,d,t);
    return 0;
}