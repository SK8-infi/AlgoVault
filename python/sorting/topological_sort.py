"""
Topological Sort Algorithm (Kahn's Algorithm)

Description:
Topological sort is a linear ordering of vertices in a Directed Acyclic Graph (DAG)
such that for every directed edge u -> v, vertex u comes before v in the ordering.

This algorithm is a way of arranging tasks in an order so that every task is done
only after all the tasks it depends on are finished.

Time Complexity: O(V + E)
where V = number of vertices, E = number of edges

Space Complexity: O(V)

Note:
Topological sort is only possible for Directed Acyclic Graphs (DAGs).
If a cycle exists, topological sorting is not possible.
"""

from collections import deque
from typing import List

def topological_sort(V: int, adj: List[List[int]]) -> List[int]:
    """
    Performs topological sort on a directed graph
    :param V: number of vertices
    :param adj: adjacency list representing the graph
    :return: list containing topological order of vertices
    """
    indegree = [0] * V

    # Calculate indegree of each vertex
    for u in range(V):
        for v in adj[u]:
            indegree[v] += 1

    # Push all vertices with indegree 0 into queue
    q = deque()
    for i in range(V):
        if indegree[i] == 0:
            q.append(i)

    topo_order = []

    # Process vertices in BFS order
    while q:
        node = q.popleft()
        topo_order.append(node)

        # Reduce indegree of adjacent vertices
        for neighbor in adj[node]:
            indegree[neighbor] -= 1
            if indegree[neighbor] == 0:
                q.append(neighbor)

    # Cycle detection
    if len(topo_order) != V:
        print("Error: Graph contains a cycle.")
        return []

    return topo_order

def print_vector(arr: List[int]) -> None:
    """
    Prints a list
    :param arr: list to print
    """
    print(arr)

# Example usage and test cases
if __name__ == "__main__":
    print("=== Topological Sort Examples ===\n")

    # Test Case 1: Simple DAG
    V1 = 6
    adj1 = [[] for _ in range(V1)]

    adj1[5].append(2)
    adj1[5].append(0)
    adj1[4].append(0)
    adj1[4].append(1)
    adj1[2].append(3)
    adj1[3].append(1)

    print("Test 1 - Simple DAG:")
    result1 = topological_sort(V1, adj1)
    print("Topological Order:", end=" ")
    print_vector(result1)
    print()

    # Test Case 2: Linear dependency
    V2 = 4
    adj2 = [[] for _ in range(V2)]

    adj2[0].append(1)
    adj2[1].append(2)
    adj2[2].append(3)

    print("Test 2 - Linear dependency:")
    result2 = topological_sort(V2, adj2)
    print("Topological Order:", end=" ")
    print_vector(result2)
    print()

    # Test Case 3: Single node
    V3 = 1
    adj3 = [[] for _ in range(V3)]

    print("Test 3 - Single node:")
    result3 = topological_sort(V3, adj3)
    print("Topological Order:", end=" ")
    print_vector(result3)
    print()

    # Test Case 4: Disconnected DAG
    V4 = 5
    adj4 = [[] for _ in range(V4)]

    adj4[0].append(1)
    adj4[2].append(3)

    print("Test 4 - Disconnected DAG:")
    result4 = topological_sort(V4, adj4)
    print("Topological Order:", end=" ")
    print_vector(result4)
    print()

    # Test Case 5: Graph with a cycle
    V5 = 3
    adj5 = [[] for _ in range(V5)]

    adj5[0].append(1)
    adj5[1].append(2)
    adj5[2].append(0)

    print("Test 5 - Graph with a cycle:")
    result5 = topological_sort(V5, adj5)
    print("Topological Order:", end=" ")
    print_vector(result5)
    print()