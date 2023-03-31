
//section 2
// roll no. 22mf10015
// name : harsh patidar
//assignement : 4
// discription :
#include<stdio.h>
int main(){
 int a,b,c,d,n;
printf("Enter rows ");
scanf("%d",&n);
for(a=1;a<=n;a++){
    for(c=a;c<=(n-1);c++){
        printf(" ");
    }
    for(b=a;b<=(2*a-1);b++){
        if(b<=9)
            printf("%d",b);
        else

            printf("%d",(b-10));
    }

    for(d=b-2;d>=a;d--){
        if(d<=9)
            printf("%d",d);
        else{

            printf("%d",(d-10));
        }
    }
    printf("\n");
}
return 0;
}
