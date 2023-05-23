/*name :MOHUL DUTTA
roll no. 22EC30035
QUESTION=2
*/
#include<stdio.h>
void abc(){
char str[100],str1[20],str2[30];

int x=scanf("%19s %29s",str1,str2);
printf("x:%d\n",x);
printf("str 1:%s\nstr 2:%s\n",str1,str2);
}
int main(){
    char typ[20];
    printf("enter what data type you want to print:int(d),float(f),longlongint(lld),longint(ld),char(c) please enter the letter in the bracket");
    scanf("%s",&typ);
   /* switch(typ){

    case 'd':
    int x1;
    scanf("%d",&x1);
    break;
    case 'ld':

    long x2;
    scanf("%ld",&x2);
    break;
    case 'lld':
    long long x3;
    scanf("%lld",&x3);
    break;
    case 'f':
    float x4;
    scanf("%f",&x4);
    break;
    case 'c':
    char x5;
    scanf("%c",&x5);
    break;
    default:
    char x6[20];



    scanf("%s",&x6);*/

    char x[30];
    scanf("%s",&x);
    printf("%s",x);
abc();
char str1[20],str2[20];
scanf("%[^\n]%*c",str1);
scanf("%[^\n]s",str2);
int nc=0,spc=0,w=0,v=0,c=0,s=0;
int l=0;
for(l=0;str2[l]!='\0';l++);
for(int i=0;i<l;i++){
        switch(str2[i]){
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
    nc++;
    break;
case ' ':
    w++;
    break;
case 'a':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'e':
case 'i':
case 'o':
case 'u':
    v++;
    break;
case '.':
    s++;
    break;


defaut:
    if((str2[i]>=65 && str2[i]<=90)||(str2[i]>=97 && str2[i]<=122))
        c++;
    else
    spc++;

}
printf("Numeric charecter :%d\n",nc);
printf("special printable charecters:%d\n",spc);
printf("words:%d\n",w);
printf("vowels:%d\n",v);
printf("consonants:%d\n",c);
printf("sentences:%d\n",s);
}

}
