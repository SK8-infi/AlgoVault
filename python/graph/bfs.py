"""
Breadth First Search (BFS)

Description:
Breadth First Search (BFS) is a graph traversal algorithm that starts
from a given source node and explores all neighboring nodes before
moving to the next level.

BFS uses a queue and is commonly used to:
- Traverse graphs level by level
- Find the shortest path in an unweighted graph
- Explore connected components

Time Complexity:
O(V + E), where V is the number of vertices and E is the number of edges

Space Complexity:
O(V) for visited set and queue
"""

from collections import deque


def bfs(start, adj_list):
    """
    Performs Breadth First Search traversal on a graph

    Args:
        start (int): Starting node for BFS
        adj_list (dict): Adjacency list representation of the graph

    Returns:
        list: BFS traversal order
    """
    visited = set()
    traversal = []
    queue = deque()

    visited.add(start)
    queue.append(start)

    while queue:
        node = queue.popleft()
        traversal.append(node)

        for neighbor in adj_list.get(node, []):
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)

    return traversal


def print_traversal(traversal):
    """Prints BFS traversal result"""
    print(traversal)


# Example usage and test cases
if __name__ == "__main__":
    print("=== Breadth First Search (BFS) Examples ===\n")

    graph = {
        0: [1, 2],
        1: [0, 3, 4],
        2: [0, 5],
        3: [1],
        4: [1],
        5: [2]
    }

    # Test Case 1: BFS from node 0
    print("Test 1 - BFS starting from node 0:")
    print_traversal(bfs(0, graph))
    print()

    # Test Case 2: BFS from node 1
    print("Test 2 - BFS starting from node 1:")
    print_traversal(bfs(1, graph))
    print()

    # Test Case 3: Single node graph
    print("Test 3 - Single node graph:")
    single_graph = {0: []}
    print_traversal(bfs(0, single_graph))
    print()
