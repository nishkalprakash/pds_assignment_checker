#include<stdio.h>

int main() {
    int a,b,c,d,e,f;
    printf("Enter the integer a,b,c,d,e\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a%2!=0&&b%2==0&&c%2==0&&d%2!=0&&e%2!=0){
        printf("these numbers are in odd\n" );
    }else  {
        printf("these numbers are even\n");
    }
    if(e>c&&c>a){
        printf("Numbers are in order e>c>a\n");
    }



return 0;
}
