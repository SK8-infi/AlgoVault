/*
 * Topological Sort Algorithm (Kahn's Algorithm)
 *
 * Description:
 * Topological sort is a linear ordering of vertices in a Directed Acyclic Graph (DAG)
 * such that for every directed edge u -> v, vertex u comes before v in the ordering.
 * 
 * This algorithm is a way of arranging tasks in an order so that every task is done only after all the tasks it depends on are finished.
 * 
 * Time Complexity: O(V + E)
 * where V = number of vertices, E = number of edges
 *
 * Space Complexity: O(V)
 *
 * Note:
 * Topological sort is only possible for Directed Acyclic Graphs (DAGs)
 * If a cycle exists, topological sorting is not possible
 */

#include <stdio.h>

const int max_vertices = 10;

/**
 * Performs topological sort on a directed graph
 *
 * @param graph: adjacency matrix of the graph
 * @param vertices: number of vertices in the graph
 */
void topological_sort(int graph[max_vertices][max_vertices], int vertices) {
    int indegree[max_vertices] = {0};
    int queue[max_vertices];
    int front = 0, rear = 0;
    int count = 0;

    // Calculate in-degree of each vertex
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            if (graph[i][j] == 1) {
                indegree[j]++;
            }
        }
    }

    // Add vertices with in-degree 0 to the queue
    for (int i = 0; i < vertices; i++) {
        if (indegree[i] == 0) {
            queue[rear++] = i;
        }
    }

    printf("Topological Order: ");

    // Process the queue
    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);
        count++;

        // Reduce in-degree of adjacent vertices
        for (int i = 0; i < vertices; i++) {
            if (graph[current][i] == 1) {
                indegree[i]--;
                if (indegree[i] == 0) {
                    queue[rear++] = i;
                }
            }
        }
    }

    // Check for cycle
    if (count != vertices) {
        printf("\nError: Graph contains a cycle.\n");
    } else {
        printf("\n");
    }
}

/**
 * Prints the adjacency matrix of the graph
 *
 * @param graph: adjacency matrix
 * @param vertices: number of vertices
 */
void print_graph(int graph[max_vertices][max_vertices], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Example usage and test cases
int main() {
    printf("=== Topological Sort Examples ===\n\n");

    // Test Case 1: Valid DAG
    int graph1[max_vertices][max_vertices] = {
        {0, 1, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0}
    };
    int vertices1 = 5;

    printf("Test 1 - Directed Acyclic Graph:\n");
    print_graph(graph1, vertices1);
    topological_sort(graph1, vertices1);
    printf("\n");

    // Test Case 2: Graph with a cycle
    int graph2[max_vertices][max_vertices] = {
        {0, 1, 0},
        {0, 0, 1},
        {1, 0, 0}
    };
    int vertices2 = 3;

    printf("Test 2 - Graph with Cycle:\n");
    print_graph(graph2, vertices2);
    topological_sort(graph2, vertices2);
    printf("\n");

    // Test Case 3: Single vertex
    int graph3[max_vertices][max_vertices] = {
        {0}
    };
    int vertices3 = 1;

    printf("Test 3 - Single Vertex:\n");
    print_graph(graph3, vertices3);
    topological_sort(graph3, vertices3);
    printf("\n");

    return 0;
}