// Roll No.: 23CS30049
// Name: Shikhar Burman

#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned int roll;
    char name[20];
    int points;
} stud;

struct studData
{
    stud studentInfo;
    int nGames;
    int totalPoints;
    int whichGames[4];
};

stud badminton[10], carrom[10], chess[10], tt[10], temp[30];
struct studData allStuds[40];
int nBadminton, nChess, nCarrom, nTT;

int whichGame(int k)
{
    if (k < nBadminton)
        return 0;
    if (k >= nBadminton && k < nBadminton + nChess)
        return 1;
    if (k >= nBadminton + nChess && k < nBadminton + nChess + nCarrom)
        return 2;
    if (k >= nBadminton + nChess + nCarrom && k < nBadminton + nChess + nCarrom + nTT)
        return 3;
}

int findChamp()
{
    int nStuds = nBadminton + nChess + nCarrom + nTT;
    int nUniqueStuds = nStuds;
    struct studData allStuds[nStuds];

    for (int i = 0, k = 0; k < nStuds; i++, k++)
    {
        allStuds[k].nGames = 1;
        allStuds[k].totalPoints = 0;
        for (int x = 0; x < 4; x++)
            allStuds[k].whichGames[x] = 0;

        if (whichGame(k) == 0)
        {
            allStuds[i].studentInfo = badminton[k];
            allStuds[i].whichGames[0] = 1;
            allStuds[i].totalPoints = badminton[k].points;
        }
        if (whichGame(k) == 1)
        {
            allStuds[i].studentInfo = chess[k - nBadminton];
            allStuds[i].whichGames[1] = 1;
            allStuds[i].totalPoints = chess[k - nBadminton].points;
        }
        if (whichGame(k) == 2)
        {
            allStuds[i].studentInfo = carrom[k - nBadminton - nChess];
            allStuds[i].whichGames[2] = 1;
            allStuds[i].totalPoints = carrom[k - nBadminton - nChess].points;
        }
        if (whichGame(k) == 3)
        {
            allStuds[i].studentInfo = tt[k - nBadminton - nChess - nCarrom];
            allStuds[i].whichGames[3] = 1;
            allStuds[i].totalPoints = tt[k - nBadminton - nChess - nCarrom].points;
        }

        for (int j = 0; j < i; j++)
        {
            if (allStuds[j].studentInfo.roll == allStuds[i].studentInfo.roll)
            {
                allStuds[j].nGames++;
                nUniqueStuds--;
                allStuds[j].whichGames[whichGame(k)] = 1;
                allStuds[j].totalPoints += allStuds[i].totalPoints;
                i--;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < nUniqueStuds; i++)
    {
        printf("Roll %d\tName %s\tPoints %d\tnGames %d\tTotal %d\t", allStuds[i].studentInfo.roll, allStuds[i].studentInfo.name, allStuds[i].studentInfo.points, allStuds[i].nGames, allStuds[i].totalPoints);
        printf("which games: ");
        for (int j = 0; j < 4; j++)
            printf("%d ", allStuds[i].whichGames[j]);
        printf("\n");
    }

    for (int i = 0, j = 0; i < nUniqueStuds; i++)
    {
        if (allStuds[i].nGames >= 3)
        {
            temp[j] = allStuds[i].studentInfo;
            j++;
        }
    }
    printf("\n");
    return nUniqueStuds;
}

void displayMeritList(int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            if (allStuds[i].totalPoints < allStuds[j].totalPoints)
            {
                int temp = allStuds[i].totalPoints;
                allStuds[i].totalPoints = allStuds[j].totalPoints;
                allStuds[j].totalPoints = temp;
            }
            // if(allStuds[i].totalPoints==allStuds[j].totalPoints)
        }
    for (int i = 0; i < n; i++)
    {
        printf("Roll %d\tName %s\tPoints %d\tnGames %d\tTotal %d\t", allStuds[i].studentInfo.roll, allStuds[i].studentInfo.name, allStuds[i].studentInfo.points, allStuds[i].nGames, allStuds[i].totalPoints);
        printf("which games: ");
        for (int j = 0; j < 4; j++)
            printf("%d ", allStuds[i].whichGames[j]);
        printf("\n");
    }
}

int main()
{

    // Badminton
    printf("Enter number of students who have participated in Badminton: ");
    scanf("%d", &nBadminton);
    printf("\n");

    printf("Enter details of the students who participated in Badminton\n");
    for (int i = 0; i < nBadminton; i++)
    {
        printf("\nEnter details of student %d :\n", i + 1);
        printf("Roll: ");
        scanf("%u", &badminton[i].roll);
        printf("Name: ");
        scanf("%s", badminton[i].name);
        printf("Points: ");
        scanf("%d", &badminton[i].points);

        for (int j = 0; j < i; j++)
        {
            if (badminton[i].roll == badminton[j].roll)
            {
                printf(">>Found duplicate roll numbers!<<\n>>Overwriting previous entry<<");
                strcpy(badminton[j].name, badminton[i].name);
                badminton[j].points = badminton[i].points;
                i--;
                break;
            }
        }
    }

    // Chess
    printf("Enter number of students who have participated in Chess: ");
    scanf("%d", &nChess);
    printf("\n");

    printf("Enter details of the students who participated in Chess\n");
    for (int i = 0; i < nChess; i++)
    {
        printf("\nEnter details of student %d :\n", i + 1);
        printf("Roll: ");
        scanf("%u", &chess[i].roll);
        printf("Name: ");
        scanf("%s", chess[i].name);
        printf("Points: ");
        scanf("%d", &chess[i].points);

        for (int j = 0; j < i; j++)
        {
            if (chess[i].roll == chess[j].roll)
            {
                printf(">>Found duplicate roll numbers!<<\n>>Overwriting previous entry<<");
                strcpy(chess[j].name, chess[i].name);
                chess[j].points = chess[i].points;
                i--;
                break;
            }
        }
    }

    // Carrom
    printf("Enter number of students who have participated in Carrom: ");
    scanf("%d", &nCarrom);
    printf("\n");

    printf("Enter details of the students who participated in Carrom\n");
    for (int i = 0; i < nCarrom; i++)
    {
        printf("\nEnter details of student %d :\n", i + 1);
        printf("Roll: ");
        scanf("%u", &carrom[i].roll);
        printf("Name: ");
        scanf("%s", carrom[i].name);
        printf("Points: ");
        scanf("%d", &carrom[i].points);

        for (int j = 0; j < i; j++)
        {
            if (carrom[i].roll == carrom[j].roll)
            {
                printf(">>Found duplicate roll numbers!<<\n>>Overwriting previous entry<<");
                strcpy(carrom[j].name, carrom[i].name);
                carrom[j].points = carrom[i].points;
                i--;
                break;
            }
        }
    }

    // TT
    printf("Enter number of students who have participated in TT: ");
    scanf("%d", &nTT);
    printf("\n");

    printf("Enter details of the students who participated in TT\n");
    for (int i = 0; i < nTT; i++)
    {
        printf("\nEnter details of student %d :\n", i + 1);
        printf("Roll: ");
        scanf("%u", &tt[i].roll);

        printf("Name: ");
        scanf("%s", tt[i].name);
        printf("Points: ");
        scanf("%d", &tt[i].points);

        for (int j = 0; j < i; j++)
        {
            if (tt[i].roll == tt[j].roll)
            {
                printf(">>Found duplicate roll numbers!<<\n>>Previous entry will be overwritten<<");
                strcpy(tt[j].name, tt[i].name);
                tt[j].points = tt[i].points;
                i--;
                break;
            }
        }
    }

    printf("\nDetails of students who participated in Badminton:\n");
    for (int i = 0; i < nBadminton; i++)
    {
        printf("Roll: %u\tName: %s\tPoints: %d\n", badminton[i].roll, badminton[i].name, badminton[i].points);
    }

    printf("\nDetails of students who participated in Chess:\n");
    for (int i = 0; i < nChess; i++)
    {
        printf("Roll: %u\tName: %s\tPoints: %d\n", chess[i].roll, chess[i].name, chess[i].points);
    }

    printf("\nDetails of students who participated in Carrom:\n");
    for (int i = 0; i < nCarrom; i++)
    {
        printf("Roll: %u\tName: %s\tPoints: %d\n", carrom[i].roll, carrom[i].name, carrom[i].points);
    }

    printf("\nDetails of students who participated in TT:\n");
    for (int i = 0; i < nTT; i++)
    {
        printf("Roll: %u\tName: %s\tPoints: %d\n", tt[i].roll, tt[i].name, tt[i].points);
    }

    int n = findChamp();
    displayMeritList(n);

    return 0;
}