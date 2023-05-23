#include<stdio.h>
/*name-Sumit Kumar
roll no-22CS30056
Description-string*/
void abc(){
    char str[100],str1[20],str2[30];
    scanf("%s",str);
    int x=scanf("%19s %29s",str1,str2);
    printf("x:%d\n",x);
    printf("str1:%s\n",str1);
    printf("str2 :%s\n",str2);

}
int main(){
    int a;
    long int b;
    long long int c;
    float d;
    char e;
    char f[100];
    printf("enter value for integers:");
    scanf("%d",&a);
    printf("enter value for long integers:");
    scanf("%ld",&b);
    printf("enter value for long long integers :");
    scanf("%lld",&c);
    printf("enter value for real numbers:");
    scanf("%f",&d);
    printf("enter value for character:");
    scanf(" %c",&e);
    printf("enter value for string:");
    scanf("%s",f);
    printf("value for integer is:%d\n",a);
    printf("value for long integers is:%ld\n",b);
    printf("value for long long integers is:%lld\n",c);
    printf("value for real numbers is:%f\n",d);
    printf("value for character is:%c\n",e);
    printf("value for string is:%s\n",f);
    abc();
    getchar();
    printf("enter new:");

   char z[1024];
    int vowel=0;
    int conso=0;
    int numeric=0;
    int words=0;
    int sent=1;
    int spe=0;
    int blank=0;
    getchar();
    scanf("%[^\n]s",&z);
     getchar();
    for(int l=0;z[l]!='\0';l++){
           if((z[l]>=65 && z[l]<=90) || (z[l]<=127 && z[l]>=97)){
            switch(z[l]){
                     case 'a':
                     case 'e':
                     case 'i':
                     case 'o':
                     case 'u':
                     case 'A':
                     case 'E':
                     case 'I':
                     case 'O':
                     case 'U': vowel++;
                     break;
                     default: conso++;
}
}
        else if((z[l]>='0'&& z[l]<='9')) numeric++;
        else if(z[l]=='\0') blank++;
        else if(z[l]=='.') sent++;
        else spe++;
}
words=blank+1;
printf("Numeric Characters:%d\n",numeric);
printf("Special Printable Characters:%d\n",spe);
printf("Words:%d\n",numeric);
printf("Vowels:%d\n",vowel);
printf("Consonants:%d\n",conso);
printf("Sentences:%d\n",sent);
}
