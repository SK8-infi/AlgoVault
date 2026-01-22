/*
 * Breadth First Search (BFS) Algorithm
 * 
 * Description:
 * Breadth First Search (BFS) is a graph traversal algorithm that starts
 * from a given source node and explores all its neighboring nodes first
 * before moving on to the next level of neighbors.
 * 
 * BFS uses a queue data structure and is commonly used to:
 * - Traverse graphs level by level
 * - Find the shortest path in an unweighted graph
 * - Explore connected components
 * 
 * Time Complexity: O(V + E)
 *   where V = number of vertices, E = number of edges
 * 
 * Space Complexity: O(V)
 *   for visited array and queue
 */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/**
 * Performs Breadth First Search traversal on a graph
 * 
 * @param start: starting vertex for BFS
 * @param adj: adjacency list of the graph
 * @param vertices: total number of vertices in the graph
 * @return vector containing BFS traversal order
 */
vector<int> bfs(int start, const vector<vector<int>>& adj, int vertices) {
    vector<bool> visited(vertices, false);
    vector<int> traversal;
    queue<int> q;

    // Mark the start node as visited and push to queue
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        traversal.push_back(node);

        // Visit all unvisited neighbors
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return traversal;
}

/**
 * Prints BFS traversal result
 * 
 * @param traversal: vector containing BFS order
 */
void print_traversal(const vector<int>& traversal) {
    cout << "[";
    for (size_t i = 0; i < traversal.size(); i++) {
        cout << traversal[i];
        if (i < traversal.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// Example usage and test cases
int main() {
    cout << "=== Breadth First Search (BFS) Examples ===" << endl << endl;

    int vertices = 6;
    vector<vector<int>> adj(vertices);

    // Creating an undirected graph
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};

    // Test Case 1: BFS from node 0
    cout << "Test 1 - BFS starting from node 0:" << endl;
    vector<int> result1 = bfs(0, adj, vertices);
    print_traversal(result1);
    cout << endl;

    // Test Case 2: BFS from node 1
    cout << "Test 2 - BFS starting from node 1:" << endl;
    vector<int> result2 = bfs(1, adj, vertices);
    print_traversal(result2);
    cout << endl;

    // Test Case 3: BFS from node 2
    cout << "Test 3 - BFS starting from node 2:" << endl;
    vector<int> result3 = bfs(2, adj, vertices);
    print_traversal(result3);
    cout << endl;

    // Test Case 4: Single node graph
    cout << "Test 4 - Single node graph:" << endl;
    vector<vector<int>> single_adj(1);
    vector<int> result4 = bfs(0, single_adj, 1);
    print_traversal(result4);
    cout << endl;

    return 0;
}
