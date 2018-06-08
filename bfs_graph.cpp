#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
	vector<int> *q;
	graph(int x)
	{
              q=new vector <int>[x];
            }
    void addEdge(int x,int y)
    {
      q[x].push_back(y);
    }
    void bfs(int s,int x)
  {
	bool visited[x];
	for(int i=0;i<x;i++)
	{
		visited[i]=false;
	}
	queue <int> q1;
	visited[s]=true;
	q1.push(s);
	while(!q1.empty())
	{
		
		for(int i=0;i<q[q1.front()].size();i++)
		{
			if(!visited[q[q1.front()][i]])
			{
			q1.push(q[q1.front()][i]);
			visited[q[q1.front()][i]]=true;
		             }
		}
		cout<<q1.front()<<" ";
		q1.pop();
	}
   }
};

int main()
{
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2,4);
 
    return 0;
}