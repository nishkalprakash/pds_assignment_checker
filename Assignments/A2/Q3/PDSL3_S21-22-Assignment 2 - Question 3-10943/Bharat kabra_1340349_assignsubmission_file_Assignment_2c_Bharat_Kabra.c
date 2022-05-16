/*n
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 2
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[24][4]={
{1,2,3,4},
{1,2,4,3},
{1,3,2,4},
{1,3,4,2},
{1,4,2,3},
{1,4,3,2},
{2,1,3,4},
{2,1,4,3},
{2,3,1,4},
{2,3,4,1},
{2,4,1,3},
{2,4,3,1},
{3,1,2,4},
{3,1,4,2},
{3,2,1,4},
{3,2,4,1},
{3,4,1,2},
{3,4,2,1},
{4,1,2,3},
{4,1,3,2},
{4,2,1,3},
{4,2,3,1},
{4,3,1,2},
{4,3,2,1}};

int m[4][4]={
{8200, 8300, 6900, 9200},
{7700, 3700, 4900, 9200},
{1100, 6900, 500, 8600},
{800, 900, 9800, 2300}
};

int cost[16] = { 0 };


for(int i=0;i<16;i++){
    cost[i]+=m[arr[i][0]-1][0];
    cost[i]+=m[arr[i][1]-1][1];
    cost[i]+=m[arr[i][2]-1][2];
    cost[i]+=m[arr[i][3]-1][3];

}
int ind;
for(int j=0;j<16;j++){

        int flag=0;
    for(int k=0;k<16;k++){
        if(cost[j]<=cost[k]){
            flag++;
        }
    }
    if(flag==16){
        ind = j;
    }
}
printf("Total cost is : %d\n",cost[ind]);
printf("vendor 1 repairs machine %d \n vendor 2 repairs machine %d \n vendor 3 repairs machine %d \n vendor 4 repairs machine %d",arr[ind][0],arr[ind][1],arr[ind][2],arr[ind][3]);


    return 0;
}
