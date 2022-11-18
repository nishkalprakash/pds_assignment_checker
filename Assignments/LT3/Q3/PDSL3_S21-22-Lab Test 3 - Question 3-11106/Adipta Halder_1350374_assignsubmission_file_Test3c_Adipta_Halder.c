/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test number: 3c
*/
#include<stdio.h>
#include<string.h>
//swap 2 variables
void swap(char *a,char *b){
    char t;
    t=*a;
    *a=*b;
    *b=t;
}
//take input string and check all possible combinations
void combi(char string[6],int left,int right,int c,int d){
    int i,j,l,k;
    //base
    if(left==right){
            if((10000*string[0]+1000*string[1]+100*string[2]+10*string[3]+string[4])%(c+d)!=0){
            printf("%s ",string);
        }
        else {
            return;
        }
    }
    else{
            //recursion
        for(i=left;i<=right;i++){
            swap((string+left),(string+i));
            combi(string,left+1,right,c,d);
            swap((string+left),(string+i));}

        }
    }
}
int main(){
    int c,d,i,j;
    char s1[6],s2[6],s3[6],s4[6],s5[6],s6[6],total[500][6];
    printf("Enter two digits:");
    scanf("%d%d",&c,&d);
    for(i=0;i<5;i++){
        s1[i]=48+c;
    }
    s1[i]='\0';
    for(i=0;i<4;i++){
        s2[i]=48+c;
    }
    for(j=4;j<5;j++){
        s2[j]=48+d;
    }
    s2[j]='\0';
    for(i=0;i<3;i++){
        s3[i]=48+c;
    }
    for(j=3;j<5;j++){
        s3[j]=48+d;
    }
    s3[j]='\0';
    for(i=0;i<2;i++){
        s4[i]=48+c;
    }
    for(j=2;j<5;j++){
        s4[j]=48+d;
    }
    s4[j]='\0';
    for(i=0;i<1;i++){
        s5[i]=48+c;
    }
    for(j=1;j<5;j++){
        s5[j]=48+d;
    }
    s5[j]='\0';
    for(j=0;j<5;j++){
        s6[j]=48+d;
    }
    s6[j]='\0';
    printf("Numbers: \n");
    if(((10000*s1[0]+1000*s1[1]+100*s1[2]+10*s1[3]+s1[4])%(c+d))!=0){
        printf("%s ",s1);
    }
    combi(s2,0,4,c,d);
    combi(s3,0,4,c,d);
    combi(s4,0,4,c,d);
    combi(s5,0,4,c,d);
    if(((10000*s6[0]+1000*s6[1]+100*s6[2]+10*s6[3]+s6[4])%(c+d))!=0){
        printf("%s ",s6);
    }
 return 0;
}
/*all cases are covered*/
