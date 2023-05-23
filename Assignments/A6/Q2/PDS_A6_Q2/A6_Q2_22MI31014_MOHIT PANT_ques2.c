#include<stdio.h>
int main(){
    int nc,sp,w,v,c,s;
    char ar[1024];
    int i;
    gets(ar);

    while(i<1024){
        if ((int)ar[i]<=57 && (int)ar[i]>=48){
            nc++;
        }
        if ((int)ar[i]<=47 && (int)ar[i]>=30){
            sp++;


    }
    if (ar[i]=="a" || ar[i]=="e" ||ar[i]=="i" ||ar[i]=="o" ||ar[i]=="u" ){
            v++;

    }
    else{
        c++;
    }
    }
    printf("Numeric Characters: %d\n",nc);
    printf("special printable characters: %d\n",sp);
    printf("words: %d\n",w);
    printf("vowels: %d\n",v);
    printf("Consonants: %d\n",c);
    printf("sentence: %d\n",s);
    return 0;


}
