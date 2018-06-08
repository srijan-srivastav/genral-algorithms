
//program to insert an element to a given position 
//Srijan Srivastav 101610086 COE-22.
#include <bits/stdc++.h>
using namespace std;
bool search(int ar[],int x)
{
   for(int i=0;i<10;i++)
   {
   	if(ar[i]==x)
   		return true;
   }
   return false;
}
int main()
{
   int ar[10];
   for(int i=0;i<10;i++)
   {
   	  int x=rand()%100;
   	  ar[i]=x;
   }
   cout<<"enter element you want to be searched"<<endl;
   int x;
   cin>>x;
   if(search(ar,x))
   	cout<<"element found"<<endl;
   else
   	cout<<"element not found"<<endl;

}