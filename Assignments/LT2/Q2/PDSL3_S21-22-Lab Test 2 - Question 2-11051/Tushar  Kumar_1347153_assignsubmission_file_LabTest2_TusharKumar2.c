/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
int max(int i,int j){    //writing the functions
    if(i>j)
    return i;
    else
    return j;
}
int findAlpha(int n,int arr[n],int i){     //the function for finding alpha
    int count=0;
    for(int k=0;k<i;k++){
        if(arr[k]%arr[i]==0)
        count++;
    }
    return count;
}
int main(){                                    //calling the main function
     int n=0;
     printf("enter the size of array: ");
     scanf("%d",&n);                           //taking input from user about the size of erray
     int arr[n];
     printf("enter the array s[]: ");
     for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);                  //taking the enteries from the user
     int ans=0;
     for(int i=0;i<n;i++)
     {
          ans=max(ans,findAlpha(n,arr,i));          //calling the function as the ans input
     }
     printf("%d\n",ans);

    return 0;
}
