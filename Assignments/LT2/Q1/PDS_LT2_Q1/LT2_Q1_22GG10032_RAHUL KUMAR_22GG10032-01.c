#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n,m;
typedef struct date{
    int day;
    int month;
    int year;
}date;
typedef struct person{
    char firstname[30];
    char secondname[30];
    char passport_no[10];
    char nationality[15];
    date dob;
}person;
void read(person persons[n]){
    for(int i=0;i<n;i++){
    printf("Enter the first name of person : \n");
    scanf("%s",persons[i].firstname);
    printf("Enter the second name of person : \n");
    scanf("%s",persons[i].secondname);
    printf("Enter the passport no : \n");
    scanf("%s",persons[i].passport_no);
    printf("Enter the nationality : \n");
    scanf("%s",persons[i].nationality);
    printf("Enter the dob : \n");
    scanf("%d-%d-%d",&persons[i].dob.day,&persons[i].dob.month,&persons[i].dob.year);
    }
    return;
}
void print(person persons[n]){
    for(int i=0;i<n;i++){
    printf("%s ",persons[i].firstname);
    printf("%s\n",persons[i].secondname);
    printf("%s\n",persons[i].passport_no);
    printf("%s\n",persons[i].nationality);
    printf("%d-%d-%d\n",persons[i].dob.day,persons[i].dob.month,persons[i].dob.year);
    }
    return;
}
int main(){
    printf("Enter the number of person for n record  : \n");
    scanf("%d",&n);
    getchar();
    person persons[n];
    read(persons);
    print(persons);
    printf("Enter the number of persons for another m records: \n");
    scanf("%d",&m);
    getchar();

    person persons2[m];
    read(persons2);
    print(persons2);
    person persons_merged[n+m];
   /* for(int i=0;i<n;i++){
        if((persons[i].nationality)==India){
            printf("%s ",persons[i].firstname);
            printf("%s\n",persons[i].secondname);
            printf("%s\n",persons[i].passport_no);
            printf("%d-%d-%d\n",persons[i].dob.day,persons[i].dob.month,persons[i].dob.year);
        }
        else printf("No persons having nationality as India\n");
    }*/
    /* for(int i=0;i<m;i++){
        if((persons[i].nationality)==India){
            printf("%s ",persons2[i].firstname);
            printf("%s\n",persons2[i].secondname);
            printf("%s\n",persons2[i].passport_no);
            printf("%d-%d-%d\n",persons2[i].dob.day,persons[i].dob.month,persons[i].dob.year);
        }
        else printf("No persons having nationality as India\n");
    }*/

    return 0;
}
