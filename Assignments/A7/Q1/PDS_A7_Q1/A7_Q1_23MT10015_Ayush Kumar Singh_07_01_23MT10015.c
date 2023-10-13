//NAME : AYUSH KUMAR SINGH
//ROLL no.: 23MT10015

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int m,n;

void findMaxMin(int a[m][n]){
    int arr[m];
    int tempmin=10;
    int max=0;
    int f;
    int tempi,tempj[m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<=tempmin){
                tempmin=a[i][j];
                arr[i]=tempmin;
                tempj[i]=j;
            }
        }tempmin=10;
    }printf("Min of the Rows is : ");
    for(int k=0;k<m;k++){
        printf("%d ", arr[k]);
    }
    printf("\n");
    for(int p=0;p<m;p++){
        if(arr[p]>=max){
            max=arr[p];
            tempi=p;
            f = tempj[p];
        }
    }printf("MaxMin is = %d, at row %d and column %d", max,tempi, f);

}


void findMinMax(int a[m][n]){
    int arr[m];
    int tempmax=0;
    int min=10;
    int f;
    int tempi,tempj[m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>=tempmax){
                tempmax=a[i][j];
                arr[i]=tempmax;
                tempj[i]=j;
            }
        }tempmax=0;
    }printf("Max of the Rows is : ");
    for(int k=0;k<m;k++){
        printf("%d ", arr[k]);
    }
    printf("\n");
    for(int p=0;p<m;p++){
        if(arr[p]<min){
            min=arr[p];
            tempi=p;
            f = tempj[p];
        }
    }printf("MinMax is = %d, at row %d and column %d", min,tempi, f);

}



void findMin(int a[m][n]){
    int sum=0;
    int temp=81;
    int i,j;
    int save1,save2;
    if (m%3!=0&&n%3!=0){
    for(i=0;i<m/2;i++){
        for(j=0;j<n/2;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum<=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}
    else if (m%3==0&&n%3==0 && m!=3 && n!=3){{
    for(i=0;i<m/2+1;i++){
        for(j=0;j<n/2+1;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum<=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
    else if (m==3&&n==3){{
    for(i=0;i<m/2;i++){
        for(j=0;j<n/2;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum<=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
    else if (m%3==0&&n%3!=0){{
    for(i=0;i<m/2+1;i++){
        for(j=0;j<n/2;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum<=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
    else if (m%3!=0&&n%3==0){{
    for(i=0;i<m/2;i++){
        for(j=0;j<n/2+1;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum<=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
        printf("Minimum sum Submatrix is:\n");
        for(int k=save1;k<save1+3;k++){
            for(int p=save2;p<save2+3;p++){
                printf("%d ",a[k][p]);
            }
            printf("\n");
        }
        printf("Submatrix Sum = %d", temp);
}



void findMax(int a[m][n]){
    int sum=0;
    int temp=0;
    int i,j;
    int save1,save2;
    if (m%3!=0&&n%3!=0){
    for(i=0;i<m/2;i++){
        for(j=0;j<n/2;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}
    else if (m%3==0&&n%3==0){{
    for(i=0;i<m/2+1;i++){
        for(j=0;j<n/2+1;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
    else if (m%3==0&&n%3!=0){{
    for(i=0;i<m/2+1;i++){
        for(j=0;j<n/2;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
    else if (m==3&&n==3){{
    for(i=0;i<m/2;i++){
        for(j=0;j<n/2;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
    else if (m%3!=0&&n%3==0){{
    for(i=0;i<m/2;i++){
        for(j=0;j<n/2+1;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>=temp){
            temp=sum;
            save1=i;
            save2=j;}
        }

        sum=0;
        }}}
        printf("Maximum sum Submatrix is:\n");
        for(int k=save1;k<save1+3;k++){
            for(int p=save2;p<save2+3;p++){
                printf("%d ",a[k][p]);
            }
            printf("\n");
        }
        printf("Submatrix Sum = %d", temp);
}
int main(){

    printf("Enter size of matrix m and n between 2 and 20:\n");
    scanf("%d %d", &m,&n);
    if(m<=2||m>=20 || n<=2||m>=20){
            printf("Invalid input of m or n");
        return 0;
    }
    int data[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            data[i][j]=(rand()%10);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    findMax(data);
    printf("\n\n");
    findMin(data);
    printf("\n\n");
    findMinMax(data);
    printf("\n\n");
    findMaxMin(data);
    printf("\n");
    return 0;
}
