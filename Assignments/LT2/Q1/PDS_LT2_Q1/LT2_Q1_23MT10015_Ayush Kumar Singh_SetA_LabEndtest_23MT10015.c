//Ayush Kumar SIngh
//Roll no. 23MT10015
//SET A

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<math.h>

struct stud{
    unsigned int roll;
    char name[20];
    int points;
}badminton[10],chess[10],carrom[10],tt[10],tmp[30];


struct stud findChamp();
struct stud findConsolationWinner();
struct stud displayMeritList();


int main(){
    int n_badminton;
    int n_chess;
    int n_carrom;
    int n_tt;
    printf("No. of students in Badminton: ");
    scanf("%d", &n_badminton);
    printf("Enter Roll No, Name, Points\n");
    for(int i=0;i<n_badminton;i++){
        scanf("%d%s%d", &badminton[i].roll, badminton[i].name, &badminton[i].points);
    }
    printf("No. of students in chess: ");
    scanf("%d", &n_chess);
    printf("Enter Roll No, Name, Points\n");
    for(int i=0;i<n_chess;i++){
        scanf("%d%s%d", &chess[i].roll, chess[i].name, &chess[i].points);
    }
    printf("No. of students in carrom: ");
    scanf("%d", &n_carrom);
    printf("Enter Roll No, Name, Points\n");
    for(int i=0;i<n_carrom;i++){
        scanf("%d%s%d", &carrom[i].roll, carrom[i].name, &carrom[i].points);
    }
    printf("No. of students in tt: ");
    scanf("%d", &n_tt);
    printf("Enter Roll No, Name, Points\n");
    for(int i=0;i<n_tt;i++){
        scanf("%d%s%d", &tt[i].roll, tt[i].name, &tt[i].points);
    }
    printf("Badminton participants: \n");
    for(int i=0;i<n_badminton;i++){
        printf("%d\t%s\t%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
     }
     printf("Chess participants: \n");
    for(int i=0;i<n_chess;i++){
        printf("%d\t%s\t%d\n",chess[i].roll,chess[i].name,chess[i].points);
     }
     printf("Carrom participants: \n");
    for(int i=0;i<n_carrom;i++){
        printf("%d\t%s\t%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
     }
     printf("tt participants: \n");
    for(int i=0;i<n_tt;i++){
        printf("%d\t%s\t%d\n",tt[i].roll,tt[i].name,tt[i].points);
     }
    printf("\n");
     printf("List of Champions in any 3 or more games with total points:\n");
     findChamp(n_badminton, n_chess,n_carrom,n_tt);
     printf("\n");
     printf("Consolation Winners of Individual games:\n");
     findConsolationWinner(n_badminton, n_chess,n_carrom,n_tt);
     printf("\n");
     printf("Merit List for individual games:\n");
     displayMeritList(n_badminton, n_chess,n_carrom,n_tt);
}

struct stud findChamp(int n_badminton,int n_chess,int n_carrom,int n_tt){
    int index=0;
    int max=0;
    for(int i=0;i<n_badminton;i++){
            for(int j=0;j<n_chess;j++){
                if(badminton[i].roll==chess[j].roll){
                    break;
                }
            }for(int k=0;k<n_carrom;k++){
                if(badminton[i].roll==carrom[k].roll){
                    tmp[index].roll=carrom[k].roll;
                    index++;
                    break;}
            }

    }
    for(int i=0;i<index;i++){
        for(int j=0;j<n_badminton;j++){
            if(tmp[i].roll==badminton[j].roll){
                tmp[i].points+=badminton[j].points;
                break;
            }
        }
        for(int k=0;k<n_chess;k++){
            if(tmp[i].roll==chess[k].roll){
                tmp[i].points+=chess[k].points;
                break;
            }
        }
        for(int l=0;l<n_carrom;l++){
            if(tmp[i].roll==carrom[l].roll){
                tmp[i].points+=carrom[l].points;
                break;
            }
        }
        for(int m=0;m<n_tt;m++){
            if(tmp[i].roll==tt[m].roll){
                tmp[i].points+=tt[m].points;
                break;
            }
        }
    }
    struct stud sort[index];
    for(int i=0;i<index;i++){
        for(int j=i;j<index;j++){
            if(tmp[j].points>max){
                max=tmp[j].points;
                sort[i]=tmp[i];
                tmp[i]=tmp[j];
                tmp[j]=sort[i];
            }
        }
    }
    for(int i=0;i<index;i++){
        printf("%d\t%s\t%d\n",tmp[i].roll,tmp[i].name,tmp[i].points);
    }
};

struct stud findConsolationWinner(int n_badminton,int n_chess,int n_carrom,int n_tt){
    int max_badminton=0;
    int max_chess=0;
    int max_carrom=0;
    int max_tt=0;
    struct stud temp_badminton[n_badminton];
    struct stud temp_chess[n_chess];
    struct stud temp_carrom[n_carrom];
    struct stud temp_tt[n_tt];

    for(int i=0;i<n_badminton;i++){
        for(int j=i;j<n_badminton;j++){
            if(badminton[j].points>max_badminton){
                max_badminton=badminton[j].points;
                temp_badminton[i]=badminton[i];
                badminton[i]=badminton[j];
                badminton[j]=temp_badminton[i];
            }
        }
    }

    for(int i=0;i<n_chess;i++){
        for(int j=i;j<n_chess;j++){
            if(chess[j].points>max_chess){
                max_chess=chess[j].points;
                temp_chess[i]=chess[i];
                chess[i]=chess[j];
                chess[j]=temp_chess[i];
            }
        }
    }

    for(int i=0;i<n_carrom;i++){
        for(int j=i;j<n_carrom;j++){
            if(carrom[j].points>max_carrom){
                max_carrom=carrom[j].points;
                temp_carrom[i]=carrom[i];
                carrom[i]=carrom[j];
                carrom[j]=temp_carrom[i];
            }
        }
    }

    for(int i=0;i<n_tt;i++){
        for(int j=i;j<n_tt;j++){
            if(tt[j].points>max_tt){
                max_tt=tt[j].points;
                temp_tt[i]=tt[i];
                tt[i]=tt[j];
                tt[j]=temp_tt[i];
            }
        }
    }
    printf("For Badminton\n");
    printf("%d\t%s\t%d\n",badminton[0].roll,badminton[0].name,badminton[0].points);
    printf("For Chess\n");
    printf("%d\t%s\t%d\n",chess[0].roll,chess[0].name,chess[0].points);
    printf("For Carrom\n");
    printf("%d\t%s\t%d\n",carrom[0].roll,carrom[0].name,carrom[0].points);
    printf("For tt\n");
    printf("%d\t%s\t%d\n",tt[0].roll,tt[0].name,tt[0].points);
};


struct stud displayMeritList(int n_badminton,int n_chess,int n_carrom,int n_tt){
    int max_badminton=0;
    int max_chess=0;
    int max_carrom=0;
    int max_tt=0;
    struct stud temp_badminton[n_badminton];
    struct stud temp_chess[n_chess];
    struct stud temp_carrom[n_carrom];
    struct stud temp_tt[n_tt];

    for(int i=0;i<n_badminton;i++){
        for(int j=i;j<n_badminton;j++){
            if(badminton[j].points>max_badminton){
                max_badminton=badminton[j].points;
                temp_badminton[i]=badminton[i];
                badminton[i]=badminton[j];
                badminton[j]=temp_badminton[i];
            }
        }
    }

    for(int i=0;i<n_chess;i++){
        for(int j=i;j<n_chess;j++){
            if(chess[j].points>max_chess){
                max_chess=chess[j].points;
                temp_chess[i]=chess[i];
                chess[i]=chess[j];
                chess[j]=temp_chess[i];
            }
        }
    }

    for(int i=0;i<n_carrom;i++){
        for(int j=i;j<n_carrom;j++){
            if(carrom[j].points>max_carrom){
                max_carrom=carrom[j].points;
                temp_carrom[i]=carrom[i];
                carrom[i]=carrom[j];
                carrom[j]=temp_carrom[i];
            }
        }
    }

    for(int i=0;i<n_tt;i++){
        for(int j=i;j<n_tt;j++){
            if(tt[j].points>max_tt){
                max_tt=tt[j].points;
                temp_tt[i]=tt[i];
                tt[i]=tt[j];
                tt[j]=temp_tt[i];
            }
        }
    }

    printf("For Badminton\n");
    for(int i=0;i<n_badminton;i++){
         printf("%d\t%s\t%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
    }
    printf("For Chess\n");
    for(int i=0;i<n_chess;i++){
         printf("%d\t%s\t%d\n",chess[i].roll,chess[i].name,chess[i].points);
    }
    printf("For Carrom\n");
    for(int i=0;i<n_carrom;i++){
         printf("%d\t%s\t%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
    }
    printf("For tt\n");
    for(int i=0;i<n_carrom;i++){
         printf("%d\t%s\t%d\n",tt[i].roll,tt[i].name,tt[i].points);
    }

};
