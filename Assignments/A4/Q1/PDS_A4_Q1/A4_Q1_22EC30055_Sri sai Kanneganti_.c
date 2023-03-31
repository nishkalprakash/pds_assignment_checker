/*
* SECTION 2
* ROLL NO 22EC30055
* NAME SRISAI
* ASSIGNMENT 4,
* DISCRIPTION enter password
*/
#include<stdio.h>
int main()
{
    char a;
    int n,c1,c2,c3,c4,c5,l1,tc ;
    c1=1 ;
    c2=1;
    c3=0;
    c4=1;
    c5=1;
    n=0 ;
    l1=0 ;
    while(l1==0){
        scanf("%c",&a);
        if((a>=65)&&(a<=90)&&(n==0))
        {
            c1=0 ;
        }
       switch(a){

       case  0 :  ;
       case 1 :  ;
       case 2 :  ;
       case 3 :  ;
       case 4 :  ;
       case 5 :  ;
       case 6 :  ;
       case 7 :  ;
       case 8 :  ;
       case 9 : c2=0  ;
       }
                 if(a==' ')
        {
            c3=1 ;
        }
        switch(a){
        case '$' : ;
        case '#' : ;
        case '@': ;
        case '%' : ;
        case '&' : c4=0 ;
        }




        n++ ;
        if(a=='\n'){
            l1=1 ;
        }
    }
    if((n>7)&&(n<13))
    {
        c5=0 ;
    }
    tc = c1+c2+c3+c4+c5 ;
    if(tc>0){
        printf("Invalide password\n");
    }else
    printf("valid password");
     if(c1==1)
    printf("must start with uppercase\n");
        if(c2==1)
    printf("must have atleast one digit\n");
            if(c3==1)
    printf("must not have space\n");
                if(c4==1)
    printf("must have atleast one special charecter\n");

    return 0 ;
}