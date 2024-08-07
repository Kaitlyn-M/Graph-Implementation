// Includes graph header information
#include "Graph.h"

// Main function
int main()
{
	// Creates graph with 5 vertices
	Graph graph(5);
	// Connects edges to vertices
	graph.insertEdge(0,1);
	graph.insertEdge(1,2);
	graph.insertEdge(2,3);
	graph.insertEdge(3,0);
	graph.insertEdge(3,4);
	// Prints graph's adjacency graph
	graph.printGraph();
	// Inserts vertex into graph
	graph.insertVertex();
	// Connects edge to vertex
	graph.insertEdge(2, 5);
	// Prints graph's adjacency list
	graph.printGraph();
	// Find vertex
	graph.findVertex(7);
	// Delete vertex
	graph.deleteVertex(8);
	// Prints graph's adjacency list
	graph.printGraph();
	// Returns to the main function
	return 0;
}