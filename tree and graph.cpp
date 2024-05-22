/*
GROUP MEMBERS
1.GOODLUCK LUSELO
2.DANIEL NNKO
3.SAID MKILALU


This code implements a graph using a matrix representation. It has a constructor that initializes the number of vertices and creates the matrix.
The addEdge method adds an edge between two vertices, the printGraph method prints the matrix representation of the graph.
*/



#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int src;
    int dest;
};

class Graph {
private:
    int V;
    vector<vector<int>> adjList;

public:
    Graph(int vertices) {
        V = vertices;
        adjList.resize(V);
    }

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (int j = 0; j < adjList[i].size(); j++) {
                cout << adjList[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int V = 5;
    Graph graph(V);

    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.printGraph();

    return 0;
}

/*
The output shows the vertices connected to each vertex in the graph, based on the egdes added in the main function.
*/



