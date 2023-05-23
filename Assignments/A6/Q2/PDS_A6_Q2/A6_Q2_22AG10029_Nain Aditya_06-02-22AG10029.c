#include <stdio.h>

/*Name - Nain Aditya
section -2
roll no. 22AG10029
LAB 6 QUESTION 1*/
void abc(){
    char str[100],str1[20],str2[30];int x;
    //scanf("%s",str);
    x = scanf("%19s %29s", str1 ,str2);
    //printf("%s\n",str);
    printf("x= %d \nstr1 = %s \nstr2= %s",x,str1,str2);}
int main(){
    //a
    int n1,n2;long int n3;long long int n4;float n5;char c1;char c2[10];
    printf(" 1) integers 2)long integers 3)long long inetgers 4)float number 5) character 6)string ");
    scanf("%d",&n1);
    if (n1==1){scanf("%d",&n2);printf("%d\n",n2);}
    else if (n1==2){scanf("%ld",&n3);printf("%ld\n",n3);}
    else if (n1==3){scanf("%lld",&n4);printf("%lld\n",n4);}
    else if (n1==4){scanf("%f",&n5);printf("%f\n",n5);}
    else if (n1==5){scanf("%c",&c1);printf("%c\n",c1);}
    else if (n1==6){scanf("%s",&c2);printf("%s\n",c2);}

    //abc();//b

    //c
    char str[1024];
    int len=0,w=0,v=0,n=0,sc=0,s=0,c=0;
    scanf("%[^\n]s",&str);
    printf("%s",str);
    while (1){
        if (str[len]=="\0")break;
        len++;}
        printf("%d",len);
for (int i=0;i<len;i++){
        int o;
        o=(int)str[i];
        if ((o>64 && o<91)||(o>96 && o<123)){
        if (str[i]=="a" || str[i]=="A"){v++;}
        else if (str[i]=="e" || str[i]=="E"){v++;}
        else if (str[i]=="i" || str[i]=="I"){v++;}
        else if (str[i]=="o" || str[i]=="O"){v++;}
        else if (str[i]=="u" || str[i]=="U"){v++;}
        else c++;}
    else if (o>46 && o<58){n++;}
    else if (str[i]=="."){sc++;s++;}
    else if (str[i]==" "){w++;}
    else if (!(str[i]=="\0")){sc++;}}
printf("numeric characters = %d\nspecial printable characters = %d\nwords = %d\nvowels = %d\nconsonants = %d\nsentences = %d",n,sc,w,v,c,s);
return 0;
}
