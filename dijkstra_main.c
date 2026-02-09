#include "dijkstra.h"
#include <stdio.h>
int G[MAX][MAX], n, u;
void dijkstra_input();
int main() {
	dijkstra_input();
	dijkstra(G, n, u);	
	return 0;
}

void dijkstra_input() {
	printf(" === DIJKSTRA's INPUT ===\n");
	printf(" Enter no. of nodes for this algorithms(1 - N) = ");
	scanf("%d", &n);
	printf(" --- INPUT ADJACENCY MATRIX --- \n");
	for(int i = 0; i < n; ++i ) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &G[i][j]);
	
		}
	}
	printf("\n Enter the starting node: ");
	scanf("%d", &u);
	return;
}

