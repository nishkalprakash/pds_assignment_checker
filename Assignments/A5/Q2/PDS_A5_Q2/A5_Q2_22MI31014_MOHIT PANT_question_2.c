#include<stdio.h>
int primecheck(int a){
    int i=0;
    if (a==1) {
        i++;
    }
    else{
        for(int j=2;j<a;j++){
        if(a%j==0){
            i++;
        }
    }
    if(i==0){
            return 4;

    }
    else return 0;
    }


}
int main(){
    int n,x,y;
    scanf("%d",&n);
    if (n%2==1) {printf("-1");}
    else{
        for (int i=2;i<=(n+1)/2;i++){
                x=primecheck(i);
                y=primecheck(n-i);
                if (x+y==8){
                    printf("%d ,%d",i,n-i);
                    break;


            }
        }
    }


return 0;
}
