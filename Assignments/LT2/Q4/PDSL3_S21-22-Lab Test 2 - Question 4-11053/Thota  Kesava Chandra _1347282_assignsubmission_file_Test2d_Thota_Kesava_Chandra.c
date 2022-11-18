/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

//declaring struct
struct student
    {
        char f_name[10];
        char l_name[10];
        char gender[6];
        float marks;
    };

//function for printing
void print_data(struct student sdata[],int n)
{
    printf("\nPrinting the student records.. \n\n");
    for (int i=0;i<n;i++)
    {
        printf("%s %s - %s - %.2f\n",sdata[i].f_name,sdata[i].l_name,sdata[i].gender,sdata[i].marks);
    }
}

//finding the index of the best girl
int bestgirl(struct student sdata[],int n)
{
    float maxi=0;
    int index;
    for(int i=0;i<n;i++)
    {
        if (cmp(sdata[i].gender))
        {
            //finding the max marks
            if(sdata[i].marks > maxi)
            {
                maxi = sdata[i].marks;
                index = i;
            }
        }
    }
    return index;
}

//checking the gender of the current student
int cmp(char a[])
{
    char b[]="girl";
    for(int i=0;i<4;i++)
    {
        if (a[i]!=b[i]) return 0;
    }
    return 1;
}

int main()
{
    #define MAX 10
    struct student sdata[MAX];
    int n,i,best_index;
    printf("Enter number of students n : ");
    scanf("%d",&n);

    //taking the user input
    printf("Enter the students details : \n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %s %f",(sdata[i].f_name),(sdata[i].l_name),(sdata[i].gender),&(sdata[i].marks));
    }

    print_data(sdata,n);
    best_index = bestgirl(sdata,n);
    printf("\nBest girl student : %s %s\n",sdata[best_index].f_name,sdata[best_index].l_name);
}
