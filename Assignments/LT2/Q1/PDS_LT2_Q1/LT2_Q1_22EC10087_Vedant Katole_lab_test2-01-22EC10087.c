/*Name - Vedant Katole
Roll no - 22EC10087
Section - 2
Problem no - 1
lab test 2 */

#include<stdio.h>
#include<string.h>

typedef struct{
    char dd[3];
    char mm[3];
    char yyyy[5];
}date;

typedef struct{
    char name[30];
    char passport_no[10];
    char nationality[15];
    date dob;
}Person;

void read(Person *persons)
{
    int i = 0;
    char ch;
    scanf("%c", &ch);
    printf("Name: ");
    do{
        scanf("%c", &persons->name[i]);
        i++;
    }while((persons->name[i - 1]) != '\n');
    i--;
    persons->name[i] = '\0';
    printf("passport no : ");
    scanf("%s", &persons->passport_no);
    printf("nationality : ");
    scanf("%s", &persons->nationality);
    scanf("%c", &ch);
    printf("day:");
    for(i = 0; i < 2; i++)
        scanf("%c", &persons->dob.dd[i]);
    //printf("-");
    persons->dob.dd[2] = '\0';
    scanf("%c", &ch);
    printf("month :");
    for(i = 0; i < 2 ; i++)
        scanf("%c", &persons->dob.mm[i]);
    //printf("-");
    persons->dob.mm[2] = '\0';
    scanf("%c", &ch);
    printf("year:");
    for(i = 0; i < 4; i++)
        scanf("%c", &persons->dob.yyyy[i]);
    persons->dob.yyyy[4] = '\0';
}

void print(Person *persons)
{
    printf("Name : %s\n", persons->name);
    printf("Passport no : %s\t", persons->passport_no);
    printf("Nationality : %s\t", persons->nationality);
    printf("DoB : %s-%s-%s", persons->dob.dd, persons->dob.mm, persons->dob.yyyy);
}

void main()
{
    int n;
    Person *persons;
    printf("Enter the number of persons in 1st array: ");
    scanf("%d", &n);
    //Allocating memory
    persons = (Person *) malloc(n * sizeof(Person));

    char ch;
    scanf("%c", &ch);
    printf("Enter name, passport no, nationality and dob in the order");
    printf("\nPress Enter to start");
    for(int i = 0; i < n; i++){
        read(&persons + i);
    }

    for(int i = 0 ; i < n; i++){
        printf("** Person %d **\n", i);
        print(&persons + i);
        printf("\n\n");
    }

    int m;
    Person *persons2;
    printf("Enter the number of persons in 2nd array : ");
    scanf("%d", &m);
    //Allocating memory
    persons2 = (Person *) malloc(m * sizeof(Person));

    for(int i = 0; i < m; i++){
        printf("Enter name, passport no, nationality and dob in the order for %d person\n", i+1);
        read(&persons2 + i);
    }

    printf("\n\nyuyv\n\n");

    Person *persons_merged;
    persons_merged = (Person *) malloc((m+n) * sizeof(Person));

    printf("alloted memory\n\n");

    for(int i = 0; i < n; i++){
        strcpy(&((persons_merged+i)->name), &((persons+i)->name));
        strcpy(&((persons_merged+i)->passport_no), &((persons+i)->passport_no));
        strcpy(&((persons_merged+i)->nationality), &((persons+i)->nationality));
        strcpy(&((persons_merged+i)->dob.dd), &((persons+i)->dob.dd));
        strcpy(&((persons_merged+i)->dob.mm), &((persons+i)->dob.mm));
        strcpy(&((persons_merged+i)->dob.yyyy), &((persons+i)->dob.yyyy));
    }
    printf("merge 1\n\n");
    int j = 0;
    for(int i = n ; i < m+n ; i++){
        strcpy(&((persons_merged+i)->name), &((persons2+j)->name));
        strcpy(&((persons_merged+i)->passport_no), &((persons2+j)->passport_no));
        strcpy(&((persons_merged+i)->nationality), &((persons2+j)->nationality));
        strcpy(&((persons_merged+i)->dob.dd), &((persons2+j)->dob.dd));
        strcpy(&((persons_merged+i)->dob.mm), &((persons2+j)->dob.mm));
        strcpy(&((persons_merged+i)->dob.yyyy), &((persons2+j)->dob.yyyy));
        j++;
    }

    printf("merged\n\n");

    printf("\n\n\nAll persons having nationality India : \n");
    for(int i = 0 ; i < m+n ; i++){
        if(strcmp((persons_merged+i)->nationality,"India") == 0){
            printf("** Person %d **\n", i);
            print(persons_merged+i);
            printf("\n\n");
        }
    }
}
