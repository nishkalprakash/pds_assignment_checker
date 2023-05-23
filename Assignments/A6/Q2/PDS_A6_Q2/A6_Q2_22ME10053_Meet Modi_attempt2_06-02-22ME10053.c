//Name -Meet Modi
//Roll No-22ME10053
//Lab 6-Q2)
//Ques-

#include<stdio.h>

void abc(){
    char str[100],str1[20],str2[30];
    int i,j,k=0;
    printf("Enter the string for ques_b :");
    scanf("%s",str);
    int x = scanf("%19s %29s",str1,str2);
    printf(" x : %d \n",x);
    printf("str1 : %s \n str2 : %s \n",str1,str2);

}

int main(){

    // use this for Q2)A)
    // int var; long long int scanf("%lld",var);
//



    // FIRST CHECKING FOR Q2)C)

    int i,j,k;
    printf("Enter the string for ques_c : \n");
    char str3[1024];
//    fflush(stdin);
    scanf("%[^\n]%*c",str3);
    for(i=0;str3[i] !='\0';i++);
    int ctr3=i;
    int numerals=0,vowels=0,words=0,specials=0,consonants=0,sentences=0;
    for(i=0;i<ctr3;i++){
        if( (int)str3[i]>=48 && (int)str3[i]<= 57) numerals++;
        else if (str3[i]=='a'|| str3[i]=='e'|| str3[i]=='i' || str3[i]=='o' || str3[i]=='u'
                 || str3[i]=='A'|| str3[i]=='E'|| str3[i]=='I' || str3[i]=='O' || str3[i]=='U') vowels++;
        else if(str3[i]== ' ') words++;
        else if( str3[i]== '$' || str3[i] == '#' || str3[i] == '&' || str3[i] == '%' || str3[i] == '@') specials++;
        else if( ((int)str3[i] >=65 && (int) str3[i]<=90) || (str3[i]>=97 && str3[i]<=122) ) consonants++;
        else if (str3[i]=='.') sentences++;
    }
    specials += sentences;
    words += sentences;
    printf("Numeric Characters : %d\n",numerals);
    printf("Special Printable Characters : %d\n",specials);
    printf("Words : %d\n",words);
    printf("Vowels : %d\n",vowels);
    printf("Consonants :%d\n",consonants);
    printf("Sentences : %d\n",sentences);


     //USE THIS FUNCTION FOR Q2)b)

     abc();



    return 0;
}
