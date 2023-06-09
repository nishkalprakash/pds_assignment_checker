/*
Hindvee Vispute
22ME10034
Section 2
lab Test 2
Set A
Q2 : Management of Records
*/

#include<stdio.h>

struct dob
{
    int dd;
    int mm;
    int yyyy;
};
struct record
{
    char rollNo[10];
    char branch[2];
    struct dob t;

};
void read_rec(struct record *student, int n)
{
    int i;
    char c1, c2;
    for(i=0; i<n; i++)
    {
        scanf("%s %s %d %c %d %c %d", student[i].rollNo, student[i].branch, &student[i].t.dd, &c1,  &student[i].t.mm, &c2,  &student[i].t.yyyy);
    }
    printf("\n%d", student[0].t.yyyy);

}

void del_rec(struct record *student, int y, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(student[i].t.yyyy < y)
        {
            printf("\nDeleted Record: %s %s %d/%d/%d", student[i].rollNo, student[i].branch, student[i].t.dd, student[i].t.mm,  student[i].t.yyyy);

            //free(student[i]);
        }
    }
    printf("\n m = %d, n - m = ", i, n-i);


}

int main()
{
    int i, n, year;
    scanf("%d", &n);

    struct record *s;
    s = (struct record *)calloc(n, sizeof(struct record));
    read_rec(s, n);

    scanf("%d", year);

    del_rec(s, year, n);







}
