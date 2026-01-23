/*
 * Topological Sort Algorithm (Kahn's Algorithm)
 *
 * Description:
 * Topological sort is a linear ordering of vertices in a Directed Acyclic Graph (DAG)
 * such that for every directed edge u -> v, vertex u comes before v in the ordering.
 * 
 * This algorithm is a way of arranging tasks in an order so that every task is done
 * only after all the tasks it depends on are finished.
 * 
 * Time Complexity: O(V + E)
 * where V = number of vertices, E = number of edges
 *
 * Space Complexity: O(V)
 *
 * Note:
 * Topological sort is only possible for Directed Acyclic Graphs (DAGs).
 * If a cycle exists, topological sorting is not possible.
 */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/**
 * Performs topological sort on a directed graph
 * @param V: number of vertices
 * @param adj: adjacency list representing the graph
 * @return vector containing topological order of vertices
 */
vector<int> topological_sort(int V, const vector<vector<int>>& adj) {
    vector<int> indegree(V, 0);

    // Calculate indegree of each vertex
    for (int u = 0; u < V; u++) {
        for (int v : adj[u]) {
            indegree[v]++;
        }
    }

    // Push all vertices with indegree 0 into queue
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo_order;

    // Process vertices in BFS order
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo_order.push_back(node);

        // Reduce indegree of adjacent vertices
        for (int neighbor : adj[node]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Cycle detection
    if (topo_order.size() != V) {
        cout << "Error: Graph contains a cycle." << endl;
        return {};
    }

    return topo_order;
}

/**
 * Prints a vector
 * @param arr: vector to print
 */
void print_vector(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// Example usage and test cases
int main() {
    cout << "=== Topological Sort Examples ===" << endl << endl;

    // Test Case 1: Simple DAG
    int V1 = 6;
    vector<vector<int>> adj1(V1);

    adj1[5].push_back(2);
    adj1[5].push_back(0);
    adj1[4].push_back(0);
    adj1[4].push_back(1);
    adj1[2].push_back(3);
    adj1[3].push_back(1);

    cout << "Test 1 - Simple DAG:" << endl;
    vector<int> result1 = topological_sort(V1, adj1);
    cout << "Topological Order: ";
    print_vector(result1);
    cout << endl;

    // Test Case 2: Linear dependency
    int V2 = 4;
    vector<vector<int>> adj2(V2);

    adj2[0].push_back(1);
    adj2[1].push_back(2);
    adj2[2].push_back(3);

    cout << "Test 2 - Linear dependency:" << endl;
    vector<int> result2 = topological_sort(V2, adj2);
    cout << "Topological Order: ";
    print_vector(result2);
    cout << endl;

    // Test Case 3: Single node
    int V3 = 1;
    vector<vector<int>> adj3(V3);

    cout << "Test 3 - Single node:" << endl;
    vector<int> result3 = topological_sort(V3, adj3);
    cout << "Topological Order: ";
    print_vector(result3);
    cout << endl;

    // Test Case 4: Disconnected DAG
    int V4 = 5;
    vector<vector<int>> adj4(V4);

    adj4[0].push_back(1);
    adj4[2].push_back(3);

    cout << "Test 4 - Disconnected DAG:" << endl;
    vector<int> result4 = topological_sort(V4, adj4);
    cout << "Topological Order: ";
    print_vector(result4);
    cout << endl;

    // Test Case 5: Graph with a cycle
    int V5 = 3;
    vector<vector<int>> adj5(V5);

    adj5[0].push_back(1);
    adj5[1].push_back(2);
    adj5[2].push_back(0);

    cout << "Test 5 - Graph with a cycle:" << endl;
    vector<int> result5 = topological_sort(V5, adj5);
    cout << "Topological Order: ";
    print_vector(result5);
    cout << endl;

    return 0;
}