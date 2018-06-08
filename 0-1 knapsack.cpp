#include <bits/stdc++.h>
using namespace std;
void knapsack(int wt[],int val[],int n,int W)
{
    int v[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
    	for(int j=0;j<W+1;j++)
    	{
    		if(i==0||j==0)
    			v[i][j]=0;
    		else if(wt[i]<=j)
    		{
    			int z=max(v[i-1][j],(val[i])+v[i-1][j-wt[i]]);
                 v[i][j]=z;
    		}
    		else if(wt[i]>j)
    		{
    			v[i][j]=v[i-1][j];
    		}
    	}
    }
    cout<<"The max value is = "<<v[n][W]<<endl;
}
int main()
{
	int n=3;
	int W=50;
	int wt[]={-1,10,20,30};
	int val[]={-1,60,100,120};
	knapsack(wt,val,n,W);
	
}