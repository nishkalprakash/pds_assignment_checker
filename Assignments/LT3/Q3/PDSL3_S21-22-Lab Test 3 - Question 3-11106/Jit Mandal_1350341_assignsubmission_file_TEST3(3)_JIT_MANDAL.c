#include<stdio.h>
#include<math.h>

int noGenerate(int n1,int n3){
    //n3 for no. of digits

    if(n3==0){
        return 0;
    }
    int val;
    val=(n1*pow(10,(n3-1)))+ (noGenerate(n1,n3-1));

    return val;
}

int main(){

    int n1,n2;
    printf("enter the two digits\n");
    scanf("%d%d",&n1,&n2);

    for(int i=n1;i<=n2;i+n2-n1){
        int r=noGenerate(i,5);
        if(r%(n1+n2)!=0){
            printf("%d\n",r);
        }
    }

    return 0;
}
