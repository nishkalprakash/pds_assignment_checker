#include<stdio.h>
#include<string.h>
/*
    PDS LAB ASSIGNMENT - 8
    DIPESH GOEL
    22NA30011
    PROBLEM - 1
*/


/*
Message = At the stroke of the midnight hour, when the world sleeps. India will awake to life and freedom."*/
#define MAX_SIZE 105

char Message[MAX_SIZE];

//char B[5] ={'a', 'e', 'i', 'o', 'u'};
//int i, j, len, C[5]= {0,0,0,0,0};

/*void Read_Message(char A[])
{
    printf("Enter message: ");
    scanf("%s", A);
}*/


/*void Message_Length(char A[])
{
    for (i=0; A[i]!='\0'; i++);
    len= i;
    printf("Length = %d\n", len);
}*/

/*void Count_Vowels(char A[])
{
    for(i=0; i<len; i++){
    for(j=0; j<5;j++)
        if(A[i]== B[j]) C[j]++;
    }
    int temp=0;
    for (j=0;j<5;j++)
        temp+=B[j];
    printf("Number of vowels = %d \n", temp);
}*/

typedef struct{
    char c;
    int n;
} freq_alpha;

freq_alpha Alphabets[26];

void count_freq(char c)
{
    int d = (int)c;

    if (d>96)
    {
        Alphabets[d-97].c=c;
        //printf("  %c  ",c);
        Alphabets[d-97].n += 1;
        //printf("  %d  ",d);
    }


}

int main()
{
    int i;
    int count_spaces =0, count_sentences=0, count_vowels=0;
    for (i=0;i<MAX_SIZE;i++)
    {
        char c;
        c= getchar();
        //printf(" %d ",i);
        printf("%c",c);
        if (c=='\n') break;
        else Message[i]=c;
        if (c==' ') count_spaces++;
        if (c=='.' || c=='?') count_sentences++;
        c=tolower(c);
        //printf("%c",c);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') count_vowels++;
        //printf("%c = %d",c,c);
        //printf("Type casting....");
        //printf("%c = %d  ",c,(int)c);
        count_freq(c);
    }


    // fflush(stdin);
    printf("\nLength counted without using library = %d\n",i);
    printf("Length counted by strlen() = %d\n", (int)strlen(Message));
    printf("Number of words: %d\n", count_spaces+1); //Added 1 bcz last word is not counted due to absence of space ahead
    printf("Number of sentences: %d\n",count_sentences);
    printf("Number of vowels: %d\n",count_vowels);
    printf("Frequency count of each alphabet: \n");
    for (int k=0;k<26;k++){
        if (Alphabets[k].n != 0) printf("   Number of %c = %d \n",Alphabets[k].c,Alphabets[k].n);
    }

    return 1;
}
