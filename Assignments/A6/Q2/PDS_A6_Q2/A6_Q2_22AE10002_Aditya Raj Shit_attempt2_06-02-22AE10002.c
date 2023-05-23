#include<stdio.h>

void abc()
{
    char str[100], str1[20], str2[30];
    scanf("%s",str);
    int x=2;
    //scanf("%19s %29s",str1,str2);
    printf("x: 2");
    printf("str1: %19s\n",str1);
    printf("str2: %29s\n",str2);
}

int main()
{

    int a;
    long b;
    long long c;
    float d;
    double e;
    char f;
    char g[100];
//ld,lld,f,c,s


    /*printf("Enter an integer: ");
    scanf("%d",&a);
    printf("You entered %d",a);
    printf("\nEnter a long integer: ");
    scanf("%ld",&b);
    printf("You entered %ld",b);
    printf("\nEnter a long long integer: ");
    scanf("%lld",&c);
    printf("You entered %lld",c);
    printf("\nEnter a floating point number: ");
    scanf("%f",&d);
    printf("You entered %f",d);
    printf("\nEnter a double precision number: ");
    scanf("%lf",&e);
    printf("You entered %lf",e);
    printf("\nEnter a character: ");
    scanf("%c",&f);
    printf("You entered %c",f);
    printf("\nEnter a string: ");
    scanf("%s",&g);
    printf("You entered %s",g);*/


//part a below
printf("In first line, please enter d-for integer, ld-for long integer, s-for string and so on. Basically you have to type the data type short name.\n\n");
char ch[5];
printf("Enter data type short name you want to enter: ");
scanf("%s",&ch);

if(ch[0]=="d"){
    printf("Type here: ");
    scanf("%d",&a);
    printf("You entered: %d",a);
}

else if(ch=="ld"){
    printf("Type here: ");
    scanf("%ld",&b);
    printf("You entered: %ld",b);
}

else if(ch=="lld"){
    printf("Type here: ");
    scanf("%lld",&c);
    printf("You entered: %lld",c);
}

else if(ch=="f"){
    printf("Type here: ");
    scanf("%ld",&d);
    printf("You entered: %f",d);
}

else if(ch=="lf"){
    printf("Type here: ");
    scanf("%lf",&e);
    printf("You entered: %lf",e);
}

else if(ch=="c"){
    printf("Type here: ");
    scanf("%c",&f);
    printf("You entered: %c",f);
}

else if(ch=="s"){
    printf("Type here: ");
    scanf("%s",&g);
    printf("You entered: %s",g);
}





//part c below
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]%*c",s);
    int num=0,sp=0,words=1,vowels=0,cons=0,sent=0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowels++;
            }
            else{
                cons++;
            }
        }

        else if(s[i]=='#'|| s[i]=='!' || s[i]=='@' || s[i]=='$' || s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='*' ){
            sp++;
        }

        else if(s[i]>='0' && s[i]<='9'){
            num++;
        }
        else if(s[i]==' ' && s[i+1]!=' ' && s[i+1]!='\0'){
            words++;
        }
        else if(s[i]=='.'){
                if(s[i]!=' '){
                    words++;
                }
            sent++;
            sp++;
        }
    }

    //printf("%d %d %d %d %d %d",num, words,vowels,cons,sent);
    printf("Numeric characters: %d\n",num);
    printf("Special printable characters: %d\n",sp);
    printf("Words: %d\n",words);
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",cons);
    printf("Sentences: %d\n",sent);

    abc();

}
