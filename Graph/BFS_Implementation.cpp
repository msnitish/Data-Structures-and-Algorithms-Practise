#include <bits/stdc++.h>
using namespace std;
const int INF = int(1e9) + 5;
// BFS of a Graph

class Graph{
          int V;
          list<int> *adj;
          
  public:
  
  Graph(int V);
  
  void addEdge(int v, int w);
  void BFS(int s);

          
};

Graph::Graph(int v){
          adj = new list<int>[v];
}

void Graph::addEdge(int v, int w){
          adj[v].push_back(w);
}


void Graph::BFS(int s){
          bool *visited = new bool[V];
          // V is the total number of nodes.
          for(int i  =0; i < V; i++){
                    visited[i] = false;
          }
          
         list<int> queue;
         visited[s] = true;
         queue.push_back(s);
         
         list<int>::iterator i;
         
         while(queue.empty() == false){
               s = queue.front();
               cout << s << " ";
               queue.pop_front();
               for(i = adj[s].begin(); i != adj[s].end(); i++){
                       if(visited[*i] == false){
                                 visited[*i] = true;
                                 queue.push_back(*i);
                       }  
               }
         }
}

int main(){ 

         Graph g(4);
         g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);

        cout << endl << "BFS from the vertex '2' " << endl;
        g.BFS(2);
        cout << endl;
        return 0; 
       
       
}