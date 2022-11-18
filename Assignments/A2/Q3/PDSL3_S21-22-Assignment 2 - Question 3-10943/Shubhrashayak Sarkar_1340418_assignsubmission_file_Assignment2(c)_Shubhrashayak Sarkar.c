/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>

int main()
{
    int vendornum[4], total, minimum;
    int m1[] = {8200, 8300, 6900, 9200};
    int m2[] = {7700, 3700, 4900, 9200};
    int m3[] = {1100, 6900, 500, 8600};
    int m4[] = {800, 900, 9800, 2300};
    for (int i = 0; i < 4; i++)
    {
        int temp;
        total= m1[i];
        for (int j = 0; j < 4; j++)
        {
            total+=m2[j];
            for (int k = 0; k < 4; k++)
            {
                total+=m3[k];
                for (int l = 0; l < 4; l++)
                {
                    total+=m4[l];//all these nesting checks total amount of all possible combinations and assigns them to total
                    temp=total;
                    vendornum[3]=l+1;
                }
                vendornum[2]=k+1;
            }
            vendornum[1]=j+1;
        }
        vendornum[0]=i+1;
        if (minimum> temp)
        {
            minimum=temp;
        }
        
    }
    printf("The minimum cost is %d\n", minimum);
    printf("Machine 1 is repaired by vendor number- %d\n", vendornum[0]);
    printf("Machine 2 is repaired by vendor number- %d\n", vendornum[1]);
    printf("Machine 3 is repaired by vendor number- %d\n", vendornum[2]);
    printf("Machine 4 is repaired by vendor number- %d\n", vendornum[3]);
    return 0;
}