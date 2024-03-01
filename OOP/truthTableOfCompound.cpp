#include <iostream>
#include <vector>
#include <queue>
#include<cmath>

using namespace std;
 
// Adjacency list representation of a graph
class Graph {
public:
  // Constructor
  Graph(int vertices) {
    this->vertices = vertices;
    adjacency_list = vector<vector<int>>(vertices);
  }

  // Add an edge to the graph
  void addEdge(int source, int destination, int weight) {
    adjacency_list[source].push_back(destination);
    adjacency_list[destination].push_back(source);
  }

  // Find the shortest path from the source vertex to all other vertices using Dijkstra's algorithm
  vector<int> findShortestPath(int source) {
    // Create a priority queue to store the vertices to be visited
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Initialize the distance of all vertices to infinity
    vector<int> distance(vertices, __INT32_MAX__);

    // Mark the source vertex as visited and set its distance to 0
    distance[source] = 0;
    pq.push({0, source});

    // While the priority queue is not empty
    while (!pq.empty()) {
      // Get the vertex with the shortest distance from the priority queue
      pair<int, int> current = pq.top();
      pq.pop();

      // For each neighbor of the current vertex
      for (int neighbor : adjacency_list[current.second]) {
        // If the distance to the neighbor through the current vertex is shorter than the existing distance
        if (distance[neighbor] > distance[current.second] + 1) {
          // Update the distance to the neighbor
          distance[neighbor] = distance[current.second] + 1;

          // Add the neighbor to the priority queue
          pq.push({distance[neighbor], neighbor});
        }
      }
    }

    // Return the shortest distances to all vertices
    return distance;
  }

private:
  // Number of vertices in the graph
  int vertices;

  // Adjacency list representation of the graph
  vector<vector<int>> adjacency_list;
};

// Main function
int main() {
  // Create a graph
  Graph graph(5);

  // Add edges to the graph
  graph.addEdge(0, 1, 10);
  graph.addEdge(0, 2, 3);
  graph.addEdge(1, 2, 1);
  graph.addEdge(2, 3, 4);
  graph.addEdge(3, 4, 2);

  // Find the shortest path from the source vertex (0) to all other vertices
  vector<int> shortest_path = graph.findShortestPath(0);

  // Print the shortest distances to all vertices
  for (int i = 0; i < shortest_path.size(); i++) {
    cout << "Shortest distance from source to vertex " << i << ": " << shortest_path[i] << endl;
  }

  return 0;
}
