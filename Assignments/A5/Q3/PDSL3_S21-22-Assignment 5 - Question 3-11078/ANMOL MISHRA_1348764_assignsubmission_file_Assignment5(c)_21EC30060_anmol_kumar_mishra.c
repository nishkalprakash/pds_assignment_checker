#include<stdio.h>
#include<stdlib.h>
// NAME- ANMOL KUMAR MISHRA
//SECTION- 3
// ROLL NO.- 21EC30060
//PDS LAB TEST

//Function for finding saddle point.
void saddle_point(int **arr,int m,int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        //First finding maximum and minimum element in a row
        int mx=arr[i][0],mn=arr[i][0];
        for(int j=0;j<m;j++)
        {
            if(mx<arr[i][j])
                mx=arr[i][j];
            if(mn>arr[i][j])
                mn=arr[i][j];
        }
        //Now,finding if the maximum is unique or not.
        int cnt=0,ind=-1;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==mx)
            {
                cnt++;
             //ind is for storing the column of the maximum element.  
                ind=j;
            }
        }
        //if maximum is unique then finding minimum of the column.
        if(cnt==1)
        {
            int cmn=arr[0][ind];
            for(int j=0;j<n;j++)
            {
                if(cmn>arr[j][ind])
                    cmn=arr[j][ind];
            }
            //checking if the minimum of the column is same as the maximum we found above or not.
            if(cmn==arr[i][ind])
            {
                int c=0;
                //checking if the minimum is unique or not.
                for(int j=0;j<n;j++)
                 {
                      if(cmn==arr[j][ind])
                        c++;
                  }
                  //if minimum is unique then it is a saddle point.
                  if(c==1)
                  {
                    printf("a[%d][%d] = %d is a saddle point.\n",i,ind,cmn);
                    s++;
                  }
            }

        }



      //finding if the minimum is unique or not.
        cnt=0,ind=-1;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==mn)
            {
                cnt++;
                   //ind is for storing the column of the minimum element.
                ind=j;
            }
        }
        //if minimum is unique then finding maximum of the column.
        if(cnt==1)
        {

            int cmx=arr[0][ind];
            for(int j=0;j<n;j++)
            {
                if(cmx<arr[j][ind])
                    cmx=arr[j][ind];
            }
             //checking if the maximum of the column is same as the minimum we found above or not.
            if(cmx==arr[i][ind])
            {
                int c=0;
                //checking if the maximum is unique or not.
                for(int j=0;j<n;j++)
                 {
                      if(cmx==arr[j][ind])
                        c++;
                  }
                  //if maximum is unique then it is a saddle point.
                  if(c==1)
                  {
                    printf("a[%d][%d] = %d is a saddle point.\n",i,ind,cmx);
                    s++;
                  }  
            }

        }
    }

    if(s==0)
        printf("There is no saddle point.\n");
}

int main()
{
    int m,n;
    int **arr;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("Enter M = ");
    scanf("%d",&m);
    //Dynamically allocating memory for 2-D array.
    arr = (int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        arr[i] = (int*)malloc(sizeof(int)*m);
    //Taking input in 2-D array.
    printf("Enter th 2D array:  ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
    }
 
  saddle_point(arr,m,n);


    return 0;

}