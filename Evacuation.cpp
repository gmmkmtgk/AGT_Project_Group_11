#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// 1 <= n <= 100; 0 <= m <= 10000; 1 <= u,v <=n; 1  <= c <=10 000
//The first line of the input contains integers n and m — the number of cities and the number
//of roads respectively
//Each of the next m lines contains three integers u,v & c describing a particular road — start of the road, end of the road and the number of people that can be transported through this road in one hour


class FlowGraph
{
    public:
      struct Edge
      {
        int from, to, capacity, flow;
      };

    private:
      /* List of all - forward and backward - edges */
      vector<Edge> edges;

      /* These adjacency lists store only indices of edges in the edges list */
      vector<vector<size_t>> graph;

    public:
      explicit FlowGraph(size_t n, size_t m)
          : graph(n)
      {
        edges.reserve(m * 2);
      }
}

void DFS(const FlowGraph &graph, int s, int t, vector<int> &pred)
{
    if()
    {
        DFS();
    }
}

void BFS(const FlowGraph &graph, int s, int t, vector<int> &pred)
{
  queue<int> q;
  q.push(s);

}

int max_flow(FlowGraph &graph, int s, int t)
{
  int flow = 0;

  return flow;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif //ONLINE_JUDGE

    int vertex_count, edge_count;
    std::cin >> vertex_count >> edge_count;

    FlowGraph graph(vertex_count, edge_count);

    for (int i = 0; i < edge_count; ++i)
    {
        int u, v, capacity;
        std::cin >> u >> v >> capacity;
        graph.add_edge(u - 1, v - 1, capacity);
    }

    return 0;

}




