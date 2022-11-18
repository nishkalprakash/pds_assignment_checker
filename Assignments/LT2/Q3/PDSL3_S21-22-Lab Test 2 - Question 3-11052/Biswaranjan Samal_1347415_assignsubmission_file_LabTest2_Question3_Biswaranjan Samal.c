/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
lab Test 2,Question:3
*/

#include <stdio.h>

int minTotalIqDiff(int m,int n,int IQ[],int teamIQ[],int i){
	if(i == n){
		int j;
//		findMin(); finds minimum iq  amongst all
		int min = 1000000000;
		for(j = 0;j < m;j++)
			if(min > teamIQ[j])
				min = teamIQ[j];

//		findMax(); finds max and returns max-min as found,base case
		int max = -1000000000;
		for(j = 0;j < m;j++)
			if(max < teamIQ[j])
				max = teamIQ[j];
		return max-min;
	}

	int j;
	int min = 1000000000;
	for(j = 0;j < m;j++){
		teamIQ[j] += IQ[i];
		int k = minTotalIqDiff(m,n,IQ,teamIQ,i+1);
		if(min > k)
			min = k;                 //minimum possible difeerence
		teamIQ[j] -= IQ[i];
	}
	return min;

}

int main() {
	int n,m;
	printf("Enter Number of shortlisted students(total elements in array):");
	scanf("%d",&n);
	printf("Enter Number of Teams to be formed(m):");
	scanf("%d",&m);

	int IQ[1000];
	int i,j;
	printf("Enter IQ of each students(elements of array):");  //stores iq of individual  members
	for(i = 0;i < n;i++)
		scanf("%d",&IQ[i]);

	int teamIQ[1000];
	for(i = 0;i < m;i++)      //total team iq
		teamIQ[i] = 0;

	int ans = minTotalIqDiff(m,n,IQ,teamIQ,0); //function called
	printf("Output:%d\n",ans);
	return 0;
}


