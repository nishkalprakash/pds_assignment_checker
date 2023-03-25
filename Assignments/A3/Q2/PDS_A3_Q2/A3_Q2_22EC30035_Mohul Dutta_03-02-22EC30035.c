
#include<stdio.h>
int main(){
int x,y;
scanf("%d%d",&x,&y);
if((x<=999)&&(x>=-999)&&(y<=999)&&(y>=-999)){
if((x>=0)&&(y>=0)){
    int nd1=0,nd2=0;
    if(x/100!=0){
        nd1=3;
    }
    else if(x/10!=0){
    nd1=2;
    }
    else{
        nd1=1;
    }
    if(y/100!=0){
        nd2=3;
    }
    else if(y/10!=0){
    nd2=2;
    }
    else{
        nd2=1;
    }
    if(nd1==nd2){
        int d1=x%10,d2=(x/10)%10,d3=(x/100)%10;
        int d4=y%10,d5=(y/10)%10,d6=(y/100)%10;
        if((d1==d6)&&(d2==d5)&&(d3==d4)&&(nd1==3)){
            printf("Perfect Pair");
     }
     else if((d2==d4)&&(d1==d5)&&(nd1==2)){
        printf("Perfect Pair");
     }
else{
    printf("Not a Perfect Pair");
}


    }
    else{
        printf("Wrong Input");
    }

}
else if((x<=0)&&(y<=0))
{
    if (x<0)
        x=-x;
    if (y<0)
        y=-y;
    int nd1=0,nd2=0;
    if(x/100!=0){
        nd1=3;
    }
    else if(x/10!=0){
    nd1=2;
    }
    else{
        nd1=1;
    }
    if(y/100!=0){
        nd2=3;
    }
    else if(y/10!=0){
    nd2=2;
    }
    else{
        nd2=1;
    }
    if(nd1==nd2){
        int d1=x%10,d2=(x/10)%10,d3=(x/100)%10;
        int d4=y%10,d5=(y/10)%10,d6=(y/100)%10;
              if((d1==d6)&&(d2==d5)&&(d3==d4)&&(nd1==3)){
            printf("Perfect Pair");
     }
     else if((d2==d4)&&(d1==d5)&&(nd1==2)){
        printf("Perfect Pair");
     }
else{
    printf("Not a Perfect Pair");
}


    }
    else{
        printf("Wrong Input");
    }




}
else if(x*y<0){
    printf("Not a Perfect Pair");
}
else{
    printf("Wrong input");
}
}
else
    printf("Wrong input");
}

