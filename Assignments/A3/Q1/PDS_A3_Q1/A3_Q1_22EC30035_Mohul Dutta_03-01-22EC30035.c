#include<stdio.h>
int main(){
int a,b,c,d,e,o1,o2,o3;
printf("Enter five numbers:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
int i=0;
if(a%2==1)
    i++;
if(b%2==1)
    i++;
if(c%2==1)
    i++;
if(d%2==1)
    i++;
if(e%2==1)
    i++;
if(i==3){
        if((a%2==0)&&(b%2==0)){
            o1=c;
            o2=d;
            o3=e;
        }
        else if((a%2==0)&&(c%2==0)){
            o1=b;
            o2=d;
            o3=e;

        }
        else if((a%2==0)&&(d%2==0)){
            o1=b;
            o2=c;
            o3=e;
        }
        else if((a%2==0)&&(e%2==0)){
            o1=b;
            o2=c;
            o3=d;
        }
        else if((b%2==0)&&(c%2==0)){
            o1=a;
            o2=d;
            o3=e;
        }
        else if((b%2==0)&&(d%2==0)){
            o1=a;
            o2=c;
            o3=e;
        }
        else if((b%2==0)&&(e%2==0)){
            o1=a;
            o2=c;
            o3=d;
        }
        else if((c%2==0)&&(d%2==0)){
            o1=a;
            o2=b;
            o3=e;
        }
        else if((c%2==0)&&(e%2==0)){
            o1=a;
            o2=b;
            o3=d;
        }
        else if((d%2==0)&&(e%2==0)){
            o1=a;
            o2=b;
            o3=c;
        }
        int l,m,s;
        if(o1>o2){
            if(o1>o3)
            {
                l=o1;
                if(o2>o3){
                    m=o2;
                    s=o3;
                }
                else{
                    m=o3;
                    s=o2;
                }
            }
            else{
                l=o3;
                if(o1>o2){
                    m=o1;
                    s=o2;
                }
                else{
                    m=o2;
                    s=o1;
                }
            }
        }
        else{
                           if(o2>o3)
            {
                l=o2;
                if(o1>o3){
                    m=o1;
                    s=o3;
                }
                else{
                    m=o3;
                    s=o1;
                }
            }
            else{
                l=o3;
                if(o2>o1){
                    m=o2;
                    s=o1;
                }
                else{
                    m=o1;
                    s=o2;
                }
            }

        }
       printf("Smallest three odd digit number :\n%d %d %d",s,m,l);

}

else{
        printf("Largest Number :\n");
    if(a>b){
            if(a>c){
                if(a>d){
                    if(a>e){
                        printf("%d",a);
                    }
                    else
                        printf("%d",e);
                }
                else{
                    if(d>e)
                        printf("%d",d);
                    else
                        printf("%d",e);
                }
            }
            else{
                if(c>d){
                    if(c>e)
                        printf("%d",c);
                    else
                        printf("%d",e);
                }
                else{
                        if((d>c)&&(d>e)){
                            if(d>e)
                                printf("%d",d);
                            else
                                printf("%d",c);
                        }
                        else
                            printf("%d",e);

                }



            }
       }
else{
    if(b==b){
            if(b>c){
                if(b>d){
                    if(b>e){
                        printf("%d",b);
                    }
                    else
                        printf("%d",e);
                }
                else{
                    if(d>e)
                        printf("%d",d);
                    else
                        printf("%d",e);
                }
            }
            else{
                if(c>d){
                    if(c>e)
                        printf("%d",c);
                    else
                        printf("%d",e);
                }
                else{
                        if((d>c)&&(d>e)){
                            if(d>e)
                                printf("%d",d);
                            else
                                printf("%d",c);
                        }
                        else
                            printf("%d",e);

                }



            }
       }

}
}
}

