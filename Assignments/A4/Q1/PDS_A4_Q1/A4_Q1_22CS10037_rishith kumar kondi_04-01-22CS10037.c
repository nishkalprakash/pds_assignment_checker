/*
*section 2
*Roll no:22CS10037
*Name:22CS10037
*Assignment no:4
*description:
*/
#include<stdio.h>
int main()
{
    int n=0,t,r,m,g,h,j,u,s,v,z,x;
    char d,p;
    while(n>=0)
    {
        scanf("%c",&d);
        if(d=='\n'){
           n=-2;}
    }
    n=0;
    printf("enter a password");
    do
    {
        scanf("%c",&p);
        if(p>='A'&&p<='Z'){
            t=1;g=-2;}
        else{
             printf("the password must start with upper case letter");}
    }
    while(g>=0);
    do
    {
        scanf("%c",&p);
        if(p>='9'&&p<='1'){
               h=h+1;}
        if(p=' '){
             u=u+1;}
        if(p=='@'||p=='#'||p=='$'||p=='%'||p=='&'){
                v=v+1;}

        s=s+1;
        if(v>=1&&h>=1&&u==0){
                x=-2;}

    }
    while(x>=0);
    if(s>12&&s<8){
            printf("the password must contain 8 to 12 characters");}
    if(h==0){
        printf("the password must contain a digit");}
    if(v==0){
        printf("the password must contain atleast character of #,$,%,&");}
    if(u>=1){
                printf("the password should not contain a space ");}


}