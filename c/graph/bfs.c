/*
 * Breadth First Search (BFS) Algorithm
 *
 * Description:
 * Breadth First Search (BFS) is a graph traversal algorithm that starts
 * from a given source node and explores all its neighboring nodes before
 * moving on to nodes at the next level.
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

#include <stdio.h>

#define MAX_VERTICES 100

/**
 * Performs Breadth First Search traversal on a graph
 *
 * @param start: starting vertex for BFS
 * @param adj: adjacency matrix of the graph
 * @param vertices: total number of vertices
 */
void bfs(int start, int adj[MAX_VERTICES][MAX_VERTICES], int vertices) {
    int visited[MAX_VERTICES] = {0};
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS Traversal: ");

    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        for (int i = 0; i < vertices; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    printf("\n");
}

// Example usage and test cases
int main() {
    printf("=== Breadth First Search (BFS) Examples ===\n\n");

    int vertices = 6;
    int adj[MAX_VERTICES][MAX_VERTICES] = {0};

    // Creating an undirected graph
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[1][4] = adj[4][1] = 1;
    adj[2][5] = adj[5][2] = 1;

    // Test Case 1: BFS from node 0
    printf("Test 1 - BFS starting from node 0:\n");
    bfs(0, adj, vertices);
    printf("\n");

    // Test Case 2: BFS from node 1
    printf("Test 2 - BFS starting from node 1:\n");
    bfs(1, adj, vertices);
    printf("\n");

    // Test Case 3: Single node graph
    printf("Test 3 - Single node graph:\n");
    int single_adj[MAX_VERTICES][MAX_VERTICES] = {0};
    bfs(0, single_adj, 1);
    printf("\n");

    return 0;
}
