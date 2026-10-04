#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMinVertex(vector<int>& distance, vector<bool>& visited, int vertices) {
    int minDistance = INT_MAX;
    int minVertex = -1;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i] && distance[i] < minDistance) {
            minDistance = distance[i];
            minVertex = i;
        }
    }

    return minVertex;
}

void dijkstra(vector<vector<int>>& graph, int source, int vertices) {
    vector<int> distance(vertices, INT_MAX);
    vector<bool> visited(vertices, false);

    distance[source] = 0;

    for (int i = 0; i < vertices - 1; i++) {
        int current = findMinVertex(distance, visited, vertices);

        if (current == -1) {
            break;
        }

        visited[current] = true;

        for (int j = 0; j < vertices; j++) {
            if (graph[current][j] != 0 &&
                !visited[j] &&
                distance[current] != INT_MAX &&
                distance[current] + graph[current][j] < distance[j]) {

                distance[j] = distance[current] + graph[current][j];
            }
        }
    }

    cout << "\nShortest distances from vertex " << source << ":\n";

    for (int i = 0; i < vertices; i++) {
        cout << "To " << i << " = ";

        if (distance[i] == INT_MAX)
            cout << "Unreachable";
        else
            cout << distance[i];

        cout << endl;
    }
}

int main() {
    int vertices;

    cout << "Enter number of vertices: ";
    cin >> vertices;

    vector<vector<int>> graph(vertices, vector<int>(vertices));

    cout << "Enter adjacency matrix:\n";
    cout << "(Enter 0 if there is no edge)\n";

    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cin >> graph[i][j];
        }
    }

    int source;

    cout << "Enter source vertex: ";
    cin >> source;

    dijkstra(graph, source, vertices);

    return 0;
}