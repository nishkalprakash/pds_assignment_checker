#include <stdio.h>
#define MAX 100

struct students
{
    char name[100];
    char gender[5];
    float marks;
};

void arr_print(struct students stud[], int num)
{
    printf("\nPrinting the students record:\n");
    for(int i=0;i<num;i++)
    {
        printf("%s\t%s\t%.2f\n", stud[i].name, stud[i].gender, stud[i].marks);
    }
}

void best_gal(struct students stud[], int num)
{
    int index = -1;
    float flag = stud[0].marks;

    for(int i=1;i<num;i++)
    {
        if(flag < stud[i].marks && stud[i].gender[0] == 'g')
        {
            index = i;
            flag = stud[i].marks;
        }
    }

    if(index == -1)
    {
        printf("\nNo Girl is in the list!\n");
    }
    else
    {
        printf("\nBest girl student: %s\n", stud[index].name);
    }
}

int main()
{
    int num;
    struct students stud[MAX];
    char garbage;

    printf("Enter the number of students: ");
    scanf("%d", &num);

    for(int i=0;i<num;i++)
    {
        scanf("%c", &garbage);
        printf("\nEnter the details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%[^\n]s", stud[i].name);
        scanf("%c", &garbage);
        printf("Gender: ");
        scanf("%[^\n]s", stud[i].gender);
        scanf("%c", &garbage);
        printf("Marks: ");
        scanf("%f", &stud[i].marks);
    }

    arr_print(stud, num);

    best_gal(stud, num);

    return 0;
}