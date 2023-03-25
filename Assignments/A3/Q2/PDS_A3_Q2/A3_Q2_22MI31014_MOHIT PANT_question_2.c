#include<stdio.h>
int main(){
    int x,y,z,s,w;
    scanf("%d %d",&x,&y);
    if(x>999 || y>999 || x<-999 || y<-999){
        printf("out of range");
    }
    else if(x/10==0 && y/10!=0 || y/10==0 && x/10!=0){
        printf(" ");

    }
    else if(x/100==0 && y/100!=0 || y/100==0 && x/100!=0){
        printf("wrong input");


    }

    else{
        if (x/10==0){
        if (x==y) printf("perfect pair");
        else printf("no perfect pair");
        }
        else if(x/100==0){
                z=(10*(x%10))+(x/10);
                if(z==y) printf("perfect pair");
                else printf("not perfect pair");

        }
        else{
            z=(100*(x%10))+(10*((x/10)%10))+(x/100);
            if(z==y) printf("perfect pair");
            else printf("not perfect pair");
        }

    }



return 0;
}
