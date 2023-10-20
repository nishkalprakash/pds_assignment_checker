/*
1.	Write the following text editor program in C by implementing the following functions. Assume that all inputs to the program would be in only lower case characters. 

a)	main: Define sptr as a pointer to an array of string pointers. In an infinite loop, display a menu and prompt  the user to enter a choice, a number in the range  [1,7]. Based on the user choice, call the appropriate function as follows: (1create(), 2lengthStat(), …, 6searchReplace(), 7arrange()) described in the following. Terminate, when the user enters ‘0’.                                                                            
b)	create: It should take sptr a pointer to an array of string pointers as its argument. First ask the user how many words (< 100) to enter. Store it in an integer variable n.  Dynamically allocate an array of size n of pointers to strings and store it in sptr. Read n words (usually of different lengths) from the keyboard one at a time, dynamically allocate just enough memory for each word entered, and store it so that the next element of sptr points to it [Note that each element of sptr is a string pointer]. The entered words therefore get sequentially placed in sptr. Display all the words that have been entered by the user. 	[10]
c)	lengthStat: This function receives sptr a pointer to an array of pointers to strings as its argument. Display the number of words that are of lengths: between 1-- 2 letters, between 3 -- 5 letters,  and larger than 5 letters.                                                                                            	[5]
d)	letterStat: This function receives sptr a pointer to an array of pointers to  strings as its argument. It should find and display the number of occurrences of  the vowels (‘a’ to ‘u’) by considering all the words together.                                                                                 	[5]
e)	search: This function receives sptr a pointer to an array of pointers to strings (sptr) as its argument. Read a word from the user and check if the word is present in sptr. If present, display the sequence number in sptr at which it is present.  If it is present multiple times, display each  occurrence and the sequence number in sptr at which the word is present. 	[5]
f)	removeDuplicate: This function receives sptr a pointer to an array of string pointers (sptr) as its argument. It should find all duplicate words, deallocate the duplicates, and display the updated list of words.                                                                 	[5]
g)	searchReplace: This function receives sptr a pointer to an array of string pointers (sptr) as its argument. It should next prompt the user and read a word from the user, and check if the word is present in sptr. Prompt the user to enter a new word. Replace (deallocate old word and dynamically allocate memory for the new word) the word with the new word. If a word being searched is present at multiple locations, replace only the first occurrence. Display the updated list of words.       	[5]
h)	arrange: This function receives sptr a pointer to an array of string pointers (sptr) as its argument displays the strings (also their lengths) in the order they are stored in sptr. It should then rearrange the strings in sptr such that each string is either equal to or less than the length of the subsequent string. After the rearrangement, displays the strings (also their lengths) in the order they are stored in sptr.	[5]
	[40 Marks]

*/
// code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// date: 2023-10-18 14:20:00
#include <stdio.h>
#include <stdlib.h>
#define MAX_WORDS 100
#define MAX_WORD_SIZE 100

// ** HELPER FUNCTIONS **
int len(char *str){
    int length=0;
    for(length=0;str[length]!='\0';length++);
    return length;
}

void display(char **sptr,int n){
    printf("\nDisplaying the array contents:\n");
    for(int i=0;i<n;i++){
        printf("%d - %s\n",len(sptr[i]),sptr[i]);
    }
}

void strcopy(char *str1,char *str2)
{
    // to copy contents of str2 in str1
    // for(int i=0;str2[i]!='\0';i++)
    int i=0;
    do{
        str1[i]=str2[i];
    }while(str2[i++]!='\0');
}
int strcompare(char *str1,char *str2)
{
    // function to compare two strings
    // returns 0 if equal
    // returns 1 if str1>str2
    // returns -1 if str1<str2
    int i=0;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]>str2[i]){
            return 1;
        }else if(str1[i]<str2[i]){
            return -1;
        }
        i++;
    }
    if(str1[i]=='\0'&&str2[i]=='\0'){
        return 0;
    }
    return 2;
}

// ** REQUIRED FUNCTIONS **
void create(char ***sptr,int *n){
    // takes n;inputs the word array;
    char *placeholder=(char *)calloc(MAX_WORD_SIZE,sizeof(char));
    printf("\nEnter n (the number of words):\n");
    scanf("%d",n);
    printf("\nEnter %d words:\n",*n);
    *sptr = (char **)calloc((*n),sizeof(char *));
    for(int i=0;i<*n;i++){
        // store word in a temp array
        scanf("%s",placeholder);
        // printf("%d - %s",len(placeholder),placeholder);
        // create a calloc using the length of array
        (*sptr)[i]=(char *)calloc(len(placeholder),sizeof(char));
        strcopy((*sptr)[i],placeholder);
    }
    // print the array contents
    display(*sptr,*n);

}

void lengthStat(char **sptr,int n){
    // takes sptr; displays the number of words of length 1-2,3-5,>5
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++){
        int length=len(sptr[i]);
        if(length<=2){
            count1++;
        }else if(length<=5){
            count2++;
        }else{
            count3++;
        }
    }
    printf("\nNumber of words of length 1-2: %d\n",count1);
    printf("Number of words of length 3-5: %d\n",count2);
    printf("Number of words of length >5: %d\n",count3);
}

void letterStat(char **sptr,int n){
    // takes sptr; displays the number of vowels
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;sptr[i][j]!='\0';j++){
            if(sptr[i][j]=='a'||sptr[i][j]=='e'||sptr[i][j]=='i'||sptr[i][j]=='o'||sptr[i][j]=='u'){
                count++;
            }
        }
    }
    printf("\nNumber of vowels: %d\n",count);
}

void search(char **sptr,int n){
    // takes sptr; searches for a word; displays the sequence number
    // if multiple times, display each occurrence and the sequence number
    char *placeholder=(char *)calloc(MAX_WORD_SIZE,sizeof(char));
    printf("\nEnter the word to search:\n");
    scanf("%s",placeholder);
    int count=0;
    for(int i=0;i<n;i++){
        if(strcompare(sptr[i],placeholder)==0){
            printf("\nWord found at index %d of sptr\n",i);
            count++;
        }
    }
    if(count==0){
        printf("\nWord not found\n");
    }
}


void removeDuplicate(char ***sptr,int *n){
    // takes sptr; removes duplicate words; displays the updated list
    // find all duplicate words
    // deallocate the duplicates
    // display the updated list of words
    int count=0;
    printf("\nBefore removing duplicates:\n");
    display(*sptr,*n);
    for(int i=0;i<*n;i++){
        for(int j=i+1;j<*n;j++){
            if(strcompare((*sptr)[i],(*sptr)[j])==0){
                printf("\nDuplicate string \"%s\" found at %d and %d\n",(*sptr)[i],i,j);
                // deallocate the duplicates
                free((*sptr)[j]);
                // shift the array
                for(int k=j;k<*n-1;k++){
                    (*sptr)[k]=(*sptr)[k+1];
                }
                // reduce the size of array
                *sptr=(char **)realloc(*sptr,((*n)-1)*sizeof(char *));
                (*n)--;
                count++;
            }
        }
    }
    if(count==0){
        printf("\nNo duplicates found\n");
    }else{
        printf("\nAfter removing duplicates:\n");
        display(*sptr,*n);
    }
}

void searchReplace(char ***sptr,int n){
    // takes sptr; searches for a word; replaces it with another word
    char *placeholder=(char *)calloc(MAX_WORD_SIZE,sizeof(char));
    char *placeholder2=(char *)calloc(MAX_WORD_SIZE,sizeof(char));
    printf("\nEnter the word to search:\n");
    scanf("%s",placeholder);
    printf("\nEnter the word to replace:\n");
    scanf("%s",placeholder2);
    printf("\nBefore replacing:\n");
    display(*sptr,n);
    int count=0;
    for(int i=0;i<n;i++){
        if(strcompare((*sptr)[i],placeholder)==0){
            printf("\n%s found at index %d of sptr",placeholder,i);
            // replace the word
            free((*sptr)[i]);
            (*sptr)[i]=(char *)calloc(len(placeholder2),sizeof(char));
            strcopy((*sptr)[i],placeholder2);
            count++;
            break;
        }
    }
    if(count==0){
        printf("\n%s not found\n",placeholder);
    }else{
        printf("\nAfter replacing:\n");
        display(*sptr,n);
    }
}

void arrage(char ***sptr,int n){
    // takes sptr; displays the strings in the order they are stored in sptr
    // rearrange the strings in sptr such that each string is either equal to or less than the length of the subsequent string
    // display the strings in the order they are stored in sptr
    char *placeholder=(char *)calloc(MAX_WORD_SIZE,sizeof(char));
    printf("\nBefore rearranging:\n");
    display(*sptr,n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(len((*sptr)[i])>len((*sptr)[j])){
                // swap the words
                strcopy(placeholder,(*sptr)[i]);
                strcopy((*sptr)[i],(*sptr)[j]);
                strcopy((*sptr)[j],placeholder);
            }
        }
    }
    printf("\nAfter rearranging:\n");
    display(*sptr,n);
}
int main()
{
    int choice;
    char **sptr;

    int n;
    while (1)
    {
        printf("\nEnter a number between 1-7: (0 to exit)\n");
        printf("1. create()\n");
        printf("2. lengthStat()\n");
        printf("3. letterStat()\n");
        printf("4. search()\n");
        printf("5. removeDuplicate()\n");
        printf("6. searchReplace()\n");
        printf("7. arrage()\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("\nExiting.\nThank you.\n");
            return 0;
        case 1:
            printf("\nCalling create() function\n");           
            create(&sptr,&n);
            break;
        case 2:
            printf("\nCalling lengthStat() function\n");
            lengthStat(sptr,n);
            break;
        case 3:
            printf("\nCalling letterStat() function\n");
            letterStat(sptr,n);
            break;
        case 4:
            printf("\nCalling search() function\n");
            search(sptr,n);
            break;
        case 5:
            printf("\nCalling removeDuplicate() function\n");
            removeDuplicate(&sptr,&n);
            break;
        case 6:
            printf("\nCalling searchReplace() function\n");
            searchReplace(&sptr,n);
            break;
        case 7:
            printf("\nCalling arrage() function\n");
            arrage(&sptr,n);
            break;
        default:
            printf("Please enter a number between 0-7");break;
        }
    }
}