#include<iostream>
#include <list>

using namespace std;

class Gra{
    private:
        int nv;
        list<int> *adj;
        bool *visited;

    public:
        Gra(int V);
        void addEdge(int v, int w);
        void BFS(int s);
};

Gra::Gra(int V){
	nv = V;
	adj = new list<int>[V];
}

void Gra::addEdge(int v, int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Gra::BFS(int s){
	visited = new bool[nv];
	for(int i = 0; i < nv; i++)
		visited[i] = false;

	list<int> queue;
	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while(!queue.empty())
	{
		int s = queue.front();
		cout << " inspect the vetices " <<s<< endl;
		queue.pop_front();

		for (i = adj[s].begin(); i != adj[s].end();++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}


int main()
{

	Gra g(4);
	g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);

	g.BFS(2);

	return 0;
}

