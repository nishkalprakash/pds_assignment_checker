/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>

int* dec(int* a,int* b, int* c);

int main(){
    int a,b,c;

    printf("enter values: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("a: %d   addr: %d\nb: %d   addr: %d\nc: %d   addr: %d\n",a,&a,b,&b,c,&c);

    int* p=dec(&a,&b,&c);
    printf("In non-decreasing order: ");
    printf("%d %d %d",p[0],p[1],p[2]);

    return 0;
}

int* dec(int* a,int* b, int* c){
    static int arr[3];
    if (*a<*b && *a<*c){
        arr[0]=*a;
        if (*b<*c){
            arr[1]=*b;
            arr[2]=*c;
        }
        else{
            arr[1]=*c;
            arr[2]=*b;
        }
    }
    else if(*b<*a && *b<*c){
        arr[0]=*b;
        if (*a<*c){
            arr[1]=*a;
            arr[2]=*c;
        }
        else{
            arr[1]=*c;
            arr[2]=*a;
        }
    }
    else if(*c<*a && *c<*b){
        arr[0]=*c;
        if (*a<*b){
            arr[1]=*a;
            arr[2]=*b;
        }
        else{
            arr[1]=*b;
            arr[2]=*a;
        }
    }

    return arr;
}