#include <stdio.h>
struct Person
{
    char  name[30];
    char passport_no[10];
    char nationality[15];
    char dob[12];
};
void read(struct Person *Persons,int n)
{
    int i,c;
    char ch;
    for(i=0;i<n;i++)
    {
        scanf("%[^\n]s",Persons[i].name);
        //give input of each field leaving spaces when one input gets over
        scanf("%s %s %s",Persons[i].passport_no,Persons[i].nationality,Persons[i].dob);
    }
}
void print(struct Person *Persons,int n)
    {
        int i;
        char ch2;
        for(i=0;i<n;i++)
        {
            printf("** Person %d **\n",i);
            printf("%s",Persons[i].name);
            printf("\n");
            ch2=getchar();

            printf("%s %s %s",Persons[i].passport_no,Persons[i].nationality,Persons[i].dob);
            ch2=getchar();
            printf("\n");
        }

    }



int main()
{
    int m,n;
    char ch;
    printf("Enter the value of n");
    scanf("%d",&n);
    ch=getchar();
    struct Person *Persons=(struct Person *) malloc(sizeof(struct Person));
    struct Person *Persons2=(struct Person *) malloc(sizeof(struct Person));
    struct Person *Persons_merged=(struct Person *) malloc(sizeof(struct Person));
    read(Persons,n);
    printf("Enter the value of m");
    scanf("%d",&m);
    ch=getchar();
    read(Persons2,m);
    print(Persons,n);

}
