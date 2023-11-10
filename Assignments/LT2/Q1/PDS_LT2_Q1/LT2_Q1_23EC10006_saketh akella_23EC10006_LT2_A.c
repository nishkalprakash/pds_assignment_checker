//ROLL No: 23EC10006
//Name: Akella Satya Hanuma Saketh

#include<stdio.h>
#include<string.h>

struct stud{
   unsigned int roll;
   char name[20];
   int points;
};

struct stud badminton[10];
struct stud chess[10];
struct stud carrom[10];
struct stud tt[10];
struct stud tmp[30];

void sort(int p[],int n)
{
    int y;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]<p[j]){
                y=p[i];
                p[i]=p[j];
                p[j]=i;
            }
        }
    }
}

void sorts(struct stud p[],int n)
{
   struct stud y;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
         if(p[i].points<p[j].points){
            y=p[i];
            p[i]=p[j];
            p[j]=y;
        }
    }
   }
}

void findChamp(int n1,int n2,int n3,int n4)
{
    int count=1;
    int y;
    int k=0;
    int point[4]={0,0,0,0};
    int max=0;
    int flag=1;
    int m=1;
   for(int i=0;i<n1;i++)
   {
     m=1;
     count=1;
     point[0]=badminton[i].points;
     for(int j=0;j<10;j++){
        if((badminton[i].roll==chess[j].roll)){
            count++;
            point[m]=chess[j].points;
            m++;
        }
        if((badminton[i].roll==carrom[j].roll)){
            count++;
            point[m]=carrom[j].points;
            m++;
        }
        if((badminton[i].roll==tt[j].roll)){
            count++;
            point[m]=tt[j].points;
            m++;
        }
     }
     sort(point,4);
     if(count>=3){
        tmp[k]=badminton[i];
        tmp[k].points=point[0]+point[1]+point[2];
        k++;
     }
   }

   for(int i=0;i<n2;i++)
   {
     count=1;
     flag=1;
     m=1;
     point[0]=carrom[i].points;
     for(int j=0;j<10;j++){
        if((carrom[i].roll==chess[j].roll)){
            count++;
            point[m]=chess[j].points;
            m++;
        }
        if((carrom[i].roll==tt[j].roll)){
            count++;
            point[m]=carrom[j].points;
            m++;
        }
     }
     for(int l=0;l<=k;l++){
        if(tmp[k-l].roll==chess[i].roll)flag=0;
     } 
     sort(point,4);
     if((count>=3)&&(flag)){
        tmp[k]=carrom[i];
        tmp[k].points=point[0]+point[1]+point[2];
        k++;
     }
   }
   for(int i=0;i<k;i++){
     if(max<tmp[i].points){
        max=tmp[i].points;
        y=i;
     }
   }
   printf("the winner is: %u %s %d \n",tmp[y].roll,tmp[y].name,tmp[y].points);
}

void findRunnersup(int n1,int n2,int n3,int n4)
{
    int count=1;
    int y;
    int k=0;
    int point[4]={0,0,0,0};
    int max=0;
    int flag=1;
    int m=1;
   for(int i=0;i<n1;i++){
     m=1;
     count=1;
     point[0]=badminton[i].points;
     for(int j=0;j<10;j++){
        if((badminton[i].roll==chess[j].roll)){
            count++;
            point[m]=chess[j].points;
            m++;
        }
        if((badminton[i].roll==carrom[j].roll)){
            count++;
            point[m]=carrom[j].points;
            m++;
        }
        if((badminton[i].roll==tt[j].roll)){
            count++;
            point[m]=tt[j].points;
            m++;
        }
     }
     sort(point,4);
     if(count>=3){
        tmp[k]=badminton[i];
        tmp[k].points=point[0]+point[1];
        k++;
     }
   }

   for(int i=0;i<n2;i++)
   {
     count=1;
     flag=1;
     m=1;
     point[0]=carrom[i].points;
     for(int j=0;j<10;j++){
        if((carrom[i].roll==chess[j].roll)){
            count++;
            point[m]=chess[j].points;
            m++;
        }
        if((carrom[i].roll==tt[j].roll)){
            count++;
            point[m]=carrom[j].points;
            m++;
        }
     }
     for(int l=0;l<=k;l++){
        if(tmp[k-l].roll==chess[i].roll)flag=0;
     }  
     sort(point,4);
     if((count>=3)&&(flag)){
        tmp[k]=carrom[i];
        tmp[k].points=point[0]+point[1];
        k++;
     }
   }
   for(int i=0;i<k;i++){
     if(max<tmp[i].points){
        max=tmp[i].points;
        y=i;
     }
   }
   printf("the winner is: %u %s %d \n",tmp[y].roll,tmp[y].name,tmp[y].points);
       
}

void findConsolationWinner(int n1,int n2,int n3,int n4)
{
    int max=0;
    int y1;
    for(int i=0;i<n1;i++){
       if(max<badminton[i].points){
        max=badminton[i].points;
        y1=i;
       }
    }
    tmp[0]=badminton[y1];
    for(int i=0;i<n2;i++){
        max=0;
       if(max<carrom[i].points){
        max=carrom[i].points;
        y1=i;
       }
    }
    tmp[1]=carrom[y1];
    for(int i=0;i<n3;i++){
        max=0;
       if(max<chess[i].points){
        max=chess[i].points;
        y1=i;
       }
    }
    tmp[2]=chess[y1];
    for(int i=0;i<n3;i++){
        max=0;
       if(max<tt[i].points){
        max=tt[i].points;
        y1=i;
       }
    }
    tmp[4]=tt[y1];
    for(int i=0;i<4;i++){
        max=0;
        if(max<tmp[i].points){
            max=tmp[i].points;
            y1=i;
        }
    }
    printf("consolation winner is %u %s %d \n",tmp[y1].roll,tmp[y1].name,tmp[y1].points);
}

void displaymeritlist(int n1,int n2,int n3,int n4)
{
   sorts(badminton,n1);
   printf("merit list for badminton \n");
   for(int i=0;i<n1;i++){
    printf("roll number:%u\tname:%s\tpoints:%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
   }
   sorts(carrom,n2);
   printf("merit list for carrom \n");
   for(int i=0;i<n2;i++){
    printf("roll number:%u\tname:%s\tpoints:%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
   }
   sorts(chess,n3);
   printf("merit list for chess \n");
   for(int i=0;i<n3;i++){
    printf("roll number:%u\tname:%s\tpoints:%d\n",chess[i].roll,chess[i].name,chess[i].points);
   }
   sorts(tt,n4);
   printf("merit list for tt\n");
   for(int i=0;i<n4;i++){
    printf("roll number:%u\tname:%s\tpoints:%d\n",tt[i].roll,tt[i].name,tt[i].points);
   }
}

int main()
{
    int n1,n2,n3,n4,y;
    struct stud z;
    int flag=1;
    printf("enter the number of students in badminton\n");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        printf("enter the roll number:\n");
        scanf("%u",&badminton[i].roll);
        printf("enter the name:\n");
        scanf("%s",badminton[i].name);
        printf("enter the no.of points:\n");
        scanf("%d",&badminton[i].points);
    }

    printf("enter the number of students in carrom\n");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        printf("enter the roll number:\n");
        scanf("%u",&carrom[i].roll);
        printf("enter the name:\n");
        scanf("%s",carrom[i].name);
        printf("enter the no.of points:\n");
        scanf("%d",&carrom[i].points);
    }
    printf("enter the number of students in chess\n");
    scanf("%d",&n3);
    for(int i=0;i<n3;i++){
        printf("enter the roll number:\n");
        scanf("%u",&chess[i].roll);
        printf("enter the name:\n");
        scanf("%s",chess[i].name);
        printf("enter the no.of points:\n");
        scanf("%d",&chess[i].points);
    }
    printf("enter the number of students in tt\n");
    scanf("%d",&n4);
    for(int i=0;i<n4;i++){
        printf("enter the roll number:\n");
        scanf("%u",&tt[i].roll);
        printf("enter the name:\n");
        scanf("%s",tt[i].name);
        printf("enter the no.of points:\n");
        scanf("%d",&tt[i].points);int count=1;
    int y;
    int k=0;
    int point[4]={0,0,0,0};
    int max=0;
    int flag=1;
    int m=1;
   for(int i=0;i<n1;i++){
    m=1;
    count=1;
    point[0]=badminton[i].points;
    for(int j=0;j<10;j++){
        if((badminton[i].roll==chess[j].roll)){
            count++;
            point[m]=chess[j].points;
            m++;
        }
        if((badminton[i].roll==carrom[j].roll)){
            count++;
            point[m]=carrom[j].points;
            m++;
        }
        if((badminton[i].roll==tt[j].roll)){
            count++;
            point[m]=tt[j].points;
            m++;
        }
    }
     if(count>=3){
        tmp[k]=badminton[i];
        tmp[k].points=point[0]+point[1]+point[2];
        k++;
     }
   }

   for(int i=0;i<n2;i++){
    count=1;
    flag=1;
    m=1;
    point[0]=carrom[i].points;
    for(int j=0;j<10;j++){
        if((carrom[i].roll==chess[j].roll)){
            count++;
            point[m]=chess[j].points;
            m++;
        }
        if((carrom[i].roll==tt[j].roll)){
            count++;
            point[m]=carrom[j].points;
            m++;
        }
    }
    for(int l=0;l<=k;l++){
        if(tmp[k-l].roll==chess[i].roll)flag=0;
    } 
    if((count>=3)&&(flag)){
        tmp[k]=carrom[i];
        tmp[k].points=point[0]+point[1]+point[2];
        k++;
     }
   }
   for(int i=0;i<k;i++){
     if(max<tmp[i].points){
        max=tmp[i].points;
        y=i;
     }
   }
   printf("the winner is: %u %s %d \n",tmp[y].roll,tmp[y].name,tmp[y].points);
    }
    findChamp(n1,n2,n3,n4);
    findRunnersup(n1,n2,n3,n4);
    findConsolationWinner(n1,n2,n3,n4);
    displaymeritlist(n1,n2,n3,n4);
    return 0;
}