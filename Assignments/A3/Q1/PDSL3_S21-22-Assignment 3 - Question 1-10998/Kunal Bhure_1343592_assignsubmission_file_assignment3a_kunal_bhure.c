#include<stdio.h>
int main()
{
    char A[50],c[50],b[10]= {'$','*','+','/','#','@','<','>','?','_','!'};
    int r=0,s=0,p=0,t=0,len,i,j;
    printf("enter username:");
    scanf("%s",c);
    printf("enter password:");
    scanf("%s",A);
    for (i=0; A[i]!='\0'; i++);
    len = i;
    for(i=0; i<len; i++)
    {
        for(j=0; j<11; j++)
        {
            if(A[i]== b[j])p++;
        }
        if("a"<A[i]<"z")
        {
            r=1;
        }
        if("A"<A[i]<"Z")
        {
            s=1;
        }
    }
    for(i=0; i<16; i++)
    {
        if(A[i]==c[0])
        {
            for(j=0; j!='\0'; j++)
            {
                t++;
            }
        }
    }
    {if(8<len<=15&&r==1&&s==1&&t==0&&p>=2){
        printf("valid password");
    }
    else{printf("invalid password"); }}
}
