/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 3(a)

#include <stdio.h>

int main(){
char un[200], ps[200];
int i, uc_score,lc_score,sc_score,j,k,l,iu,sim_score,rep_score;
printf("Enter username without space and press enter:");
scanf("%s", un);

printf("Enter password :");
scanf("%s", ps);

//to count length of string
for(i=0; ps[i]!='\0'; i++);
for(iu=0; un[iu]!='\0'; iu++);
//to check length is valid or not
if(i<8||i>15){
    printf("\nNot acceptable");
    return 0;
}

sc_score=0;
uc_score=0;
lc_score=0;
for(j=0; j<=i; j++){
//to check special character validity
    if(ps[j]=='$'||ps[j]=='*'||ps[j]=='+'||ps[j]=='/'||ps[j]=='#'||ps[j]=='@'||ps[j]=='<'||ps[j]=='>'||ps[j]=='?'||ps[j]=='_'||ps[j]=='!'){
      sc_score+=1;
    }
    //to check upper case validity
    if(ps[j]>=65&&ps[j]<=90){
        uc_score+=1;
    }
    //to check lower case validity
    if(ps[j]>=97&&ps[j]<=122){
        lc_score+=1;
    }
// to check username in password
    k=j;
    sim_score=0;
    for(l=0; l<iu; l++){
       if(ps[k]==un[l]){
        sim_score+=1;
       }else{
           sim_score=0;
       }
       k++;
       if(sim_score==iu){
        printf("\nNot acceptable");
    return 0;
       }
    }
    // to check repetition and consecutive in password
    rep_score=0;
    for(l=0; l<i; l++){
        if(ps[j]==ps[l]){
           rep_score+=1;
        }
    }
    if(rep_score>5){
        printf("\nNot acceptable");
    return 0;
    }
}

if(sc_score<2||lc_score==0||uc_score==0){
    printf("\nNot acceptable");
    return 0;
}


printf("\nAcceptable");
    return 0;







}
