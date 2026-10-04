#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int findMinCity(vector<int>& distance,
                vector<bool>& visited,
                int n) {

    int minDistance = INT_MAX;
    int minCity = -1;

    for (int i = 0; i < n; i++) {
        if (!visited[i] && distance[i] < minDistance) {
            minDistance = distance[i];
            minCity = i;
        }
    }

    return minCity;
}

void findShortestPath(
    vector<vector<pair<int, int>>>& graph,
    vector<string>& cities,
    int source,
    int destination) {

    int n = cities.size();

    vector<int> distance(n, INT_MAX);
    vector<int> parent(n, -1);
    vector<bool> visited(n, false);

    distance[source] = 0;

    for (int i = 0; i < n; i++) {

        int current = findMinCity(
            distance,
            visited,
            n
        );

        if (current == -1) {
            break;
        }

        visited[current] = true;

        for (auto edge : graph[current]) {

            int neighbor = edge.first;
            int weight = edge.second;

            if (distance[current] != INT_MAX &&
                distance[current] + weight < distance[neighbor]) {

                distance[neighbor] =
                    distance[current] + weight;

                parent[neighbor] = current;
            }
        }
    }

    if (distance[destination] == INT_MAX) {
        cout << "\nNo route exists between "
             << cities[source] << " and "
             << cities[destination] << ".\n";

        return;
    }

    vector<int> path;

    int current = destination;

    while (current != -1) {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());

    cout << "\nShortest Route:\n";

    for (int i = 0; i < path.size(); i++) {

        cout << cities[path[i]];

        if (i != path.size() - 1) {
            cout << " -> ";
        }
    }

    cout << "\nShortest Distance: "
         << distance[destination]
         << " km\n";
}

int main() {

    int n;

    cout << "Enter number of cities: ";
    cin >> n;

    vector<string> cities(n);

    cout << "\nEnter city names:\n";

    for (int i = 0; i < n; i++) {
        cout << "City " << i << ": ";
        cin >> cities[i];
    }

    vector<vector<pair<int, int>>> graph(n);

    int edges;

    cout << "\nEnter number of roads: ";
    cin >> edges;

    cout << "\nEnter roads in the format:\n";
    cout << "City1 City2 Distance\n\n";

    for (int i = 0; i < edges; i++) {

        string city1, city2;
        int distance;

        cin >> city1 >> city2 >> distance;

        int u = -1;
        int v = -1;

        for (int j = 0; j < n; j++) {

            if (cities[j] == city1) {
                u = j;
            }

            if (cities[j] == city2) {
                v = j;
            }
        }

        if (u != -1 && v != -1) {
            graph[u].push_back({v, distance});
            graph[v].push_back({u, distance});
        }
    }

    string startCity;
    string destinationCity;

    cout << "\nEnter starting city: ";
    cin >> startCity;

    cout << "Enter destination city: ";
    cin >> destinationCity;

    int source = -1;
    int destination = -1;

    for (int i = 0; i < n; i++) {

        if (cities[i] == startCity) {
            source = i;
        }

        if (cities[i] == destinationCity) {
            destination = i;
        }
    }

    if (source == -1 || destination == -1) {
        cout << "\nInvalid city name.\n";
        return 0;
    }

    findShortestPath(
        graph,
        cities,
        source,
        destination
    );

    return 0;
}