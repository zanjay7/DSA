#include <stdio.h>

int main() {
	int vertices;


	printf("Enter the number of vertices: ");
	scanf("%d", &vertices);

	int graph[vertices][vertices];  // Adjacency matrix

	// Initialize the adjacency matrix to 0
	for (int i = 0; i < vertices; i++) {
		for (int j = 0; j < vertices; j++) {
			graph[i][j] = 0;
		}
	}

	int edges;
	printf("Enter the number of edges: ");
	scanf("%d", &edges);

	printf("Enter each edge as a pair of vertices (e.g., '0 1' for an edge between vertex 0 and vertex 1):\n");

	for (int i = 0; i < edges; i++) {
		int src, dest;//strg point destination
		scanf("%d %d", &src, &dest);

		// Check for valid vertex input
		if (src >= 0 && src < vertices && dest >= 0 && dest < vertices) {
			graph[src][dest] = 1;  // Set the edge
			graph[dest][src] = 1;  // For undirected graph
		} else {
			printf("Invalid edge! Please enter vertices between 0 and %d.\n", vertices - 1);
			i--;  // the user can retry entering the current edge.
		}
	}

	// Display the adjacency matrix
	printf("Adjacency Matrix:\n");
	for (int i = 0; i < vertices; i++) {
		for (int j = 0; j < vertices; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

	return 0;
}