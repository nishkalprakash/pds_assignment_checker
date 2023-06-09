//krishna chaudhari
//22MT10012


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct persons{
    char name[30];
    char passport[10];
    char nationality[15];
    int dd[1];
    int mm[1];
    int yyyy[1];
};
struct persons2{
    char name[30];
    char passport[10];
    char nationality[15];
    int dd[1];
    int mm[1];
    int yyyy[1];
};
struct persons_merg{
    char name[30];
    char passport[10];
    char nationality[15];
   int dd[1];
    int mm[1];
    int yyyy[1];
};
void read(struct persons *per,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the detial of person %d \n",i+1);
        printf("Name :");
        scanf("%s",per[i].name);
        printf("\n Passport number : ");
        scanf("%s",per[i].passport);
        printf("\n Nationality : ");
        scanf("%s",per[i].nationality);
        printf("\n Date of birth in form dd-mm-yyyy :\n");
        scanf("%d %d %d",&per[i].dd[0],&per[i].mm[0],&per[i].yyyy[0]);

    }
}
void read2(struct persons2 *per2,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the detial of person %d \n",i+1);
        printf("Name :");
        scanf("%s",per2[i].name);
        printf("\n Passport number : ");
        scanf("%s",per2[i].passport);
        printf("\n Nationality : ");
        scanf("%s",per2[i].nationality);
        printf("\n Date of birth in form dd-mm-yyyy :\n");
        scanf("%d %d %d",&per2[i].dd[0],&per2[i].mm[0],&per2[i].yyyy[0]);

    }
}
void print(struct persons *per,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("** person %d **",i);
        printf("\n %s",per[i].name);
        printf("\n %s  %s  %d-%d-%d \n\n",per[i].passport,per[i].nationality,per[i].dd[0],per[i].mm[0],per[i].yyyy[0]);
    }
}
void merge(struct persons_merg *per_m,struct persons *per,struct persons2 *per2,int n,int m)
{
        for (int i=0;i<n;i++)
        {
          //  per_m[i].name=per[i].name;
          //  per_m[i].passport=per[i].passport;
           // per_m[i].nationality=per[i].nationality;
            //per_m[i].dd[0]=per[i].dd[0];
          //  per_m[i].mm[0]=per[i].mm[0];
           // per_m[i].yyyy[0]=per[i].yyyy[0];
           //per_m[i]=per[i];
        }

        for (int i=0;i<m;i++)
        {
         //   per_m[i+n].name=per2[i].name;
          //  per_m[i+n].passport=per2[i].passport;
          //  per_m[i+n].nationality=per2[i].nationality;
            per_m[i+n].dd[0]=per2[i].dd[0];
            per_m[i+n].mm[0]=per2[i].mm[0];
            per_m[i+n].yyyy[0]=per2[i].yyyy[0];
        }
}
/*void prind(struct persons*per,struct persons2 *per2,int n,int m)
{
    //char india;
    for(int i=0;i<n;i++)
    {
        if(strcmp(per[i].nationality, 'india')==0){
        printf("** person %d **",i);
        printf("\n %s",per[i].name);
        printf("\n %s  %s  %d-%d-%d \n\n",per[i].passport,per[i].nationality,per[i].dd[0],per[i].mm[0],per[i].yyyy[0]);
        }
        else printf("i am here");
    }
    for(int i=0;i<m;i++)
    {
        if(){
        printf("** person %d **",i+n);
        printf("\n %s",per2[i].name);
        printf("\n %s  %s  %d-%d-%d \n\n",per2[i].passport,per2[i].nationality,per2[i].dd[0],per2[i].mm[0],per2[i].yyyy[0]);
        }
       // else printf("i am here 2");
    }
   // printf("i am inside prind");
}
/*/





int main()
{
    int n,m;
    printf("Enter the number of person: ");
    scanf("%d",&n);
    struct persons *per=(struct persons *)malloc(n*sizeof(struct persons));
    struct persons2 *per2=(struct persons2 *)malloc(n*sizeof(struct persons2));
    struct persons_merg *per_m=(struct persons_merg *)malloc(n*(sizeof(struct persons2)+sizeof(struct persons)));

    read(per,n);

    printf("\n\n");
    printf("Enter the number of person for data 2 \n");
    scanf("%d",&m);

    read2(per2,m);

    printf("\n\n");

    print(per,n);

    printf("All person having nationality as India :\n");

    printf("\n\n");
//char india;
int val;
val=strcmp(per[1].nationality,"india");
if(val==0) printf("its equal");
    //prind(per,per2,n,m);
printf("hello");
return 0;

}
