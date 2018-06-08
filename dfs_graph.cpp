#include <bits/stdc++.h>
using namespace std;
class graph
{
  public:
  vector <int> *q;
   graph(int x)
   {
     q=new vector <int> [x];
   }
   void addEdge(int x,int y)
   {
     q[x].push_back(y);
   }
   void dfs(int m,int x)
   {
     stack <int> s;
    bool visited[x];
     for(int i=0;i<x;i++)
     {
      visited[i]=false;
     }
     s.push(m);
     cout<<m<<" ";
     visited[m]=true;
     while(!s.empty())
     {
      int flag = 0;       
      int z=s.top();
       for(int i=0;i<q[z].size();i++)
       {          
         if(visited[q[z][i]]==false)
         {
          flag=1;
          visited[q[z][i]]=true;                    
          s.push(q[z][i]);
          cout<<q[z][i]<<" ";
          break;
         }
       }
 
       if(flag==0)
       {
        s.pop();
       }
 
     }
   }  
};
int main()
{
  graph g(9);
        g.addEdge(0, 1);
        g.addEdge(0, 7);
        g.addEdge(1, 0);
        g.addEdge(1, 7);
        g.addEdge(1, 2);
        g.addEdge(2, 1);
        g.addEdge(2, 8);
        g.addEdge(2, 5);
        g.addEdge(2, 3);
        g.addEdge(3, 2);
        g.addEdge(3, 5);
        g.addEdge(3, 4);
        g.addEdge(4, 3);
        g.addEdge(4, 5);
        g.addEdge(5, 4);
        g.addEdge(5, 3);
        g.addEdge(5, 2);
        g.addEdge(5, 6);
        g.addEdge(6, 5);
        g.addEdge(6, 8);
        g.addEdge(6, 7);
        g.addEdge(7, 6);
        g.addEdge(7, 8);
        g.addEdge(7, 1);
        g.addEdge(7, 0);
        g.addEdge(8, 2);
        g.addEdge(8, 6);
        g.addEdge(8, 7);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.dfs(0,9);
 
}