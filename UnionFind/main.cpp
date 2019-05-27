#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Edge
{
    int src, dest;
};

struct Graph
{
    int V, E;

    Edge* edge; //STL container: Array
};

struct Graph* createGraph(int V, int E)
{
    auto* graph = new Graph;

    graph->V = V;
    graph->E = E;

    graph->edge = new Edge;

    return graph;
}

int find(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}

void Union(int parent[], int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    if(xset!=yset){
        parent[xset] = yset;
    }
}

int main()
{
    int V = 3, E = 3;
    struct Graph* graph = createGraph(V, E);

    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;

    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;

    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;

    return 0;
}