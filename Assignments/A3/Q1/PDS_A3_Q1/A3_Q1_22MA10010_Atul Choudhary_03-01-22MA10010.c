
#include<stdio.h>

int main()
{
int a,b,c,d,e;
printf("enter any five number \n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//printf("%d %d %d %d %d", a ,b,c,d,e);
///*
int sum=(a%2 + b%2 + c%2 + d%2 + e%2 );
int p=-1,q=-1 ,r=-1;
//printf("sum=%d\n" ,sum);
if(sum ==3){

    if(a%2==1){
    if(p== -1) p=a;
    else if(q== -1) q=a;
    else if(r==-1) r=a;


    }
    if (b%2==1){
    if(p== -1) p=b;
    else if(q== -1) q=b;
    else if (r== -1) r=b;
    }

    if(c%2==1){if(p== -1) p=c;
    else if(q== -1) q=c;
    else if (r== -1) r=c;
    }

    if (d%2==1){
    if(p== -1) p=d;
    else if(q== -1) q=d;
    else if (r== -1) r=d;
    }
     if(e%2==1){
    if(p== -1) p=e;
    else if(q== -1) q=e;
    else if (r== -1) r=e;
    }

    //printf("%d %d %d %d %d \n", a ,b,c,d,e);
   // /*
    if(p>q && p>r){
        if(q>r){
        printf("%d %d %d \n" ,r,q,p);}
        else{
        printf("%d %d %d\n" ,q,r,p);}
    }
    else if(q>p && q>r){
    if(p>r){
    printf("%d %d %d \n" ,r,p,q);}
    else{
    printf("%d %d %d \n", p,r,q);}
    }
    else if(r>p&& r>q){
    if(p>q){
    printf("%d %d %d \n" ,q,p,r);}
    else{
    printf("%d %d %d \n" ,p,q,r);}
    }

}

else{

    if(a%2==0){
    if(p==-1) p=a;
    else if(q== -1) q=a;
    else if(r==-1) r=a;


    }
    if (b%2==0){
    if(p== -1) p=b;
    else if(q== -1) q=b;
    else if (r== -1) r=b;
    }

    if(c%2==0){if(p== -1) p=c;
    else if(q== -1) q=c;
    else if (r== -1) r=c;
    }

    if (d%2==0){
    if(p== -1) p=d;
    else if(q== -1) q=d;
    else if (r== -1) r=d;
    }
     if(e%2==0){
    if(p== -1) p=e;
    else if(q== -1) q=e;
    else if (r== -1) r=e;
    }

    printf("%d %d %d \n", p,q,r);


    if(p>q && p>r){
        printf("%d" ,p);
    }
    else if(r>p && r>q){
        printf("%d",r);
    }
        else if(q>p && q>r){
        printf("%d",q);
    }



}
return 0;



}
