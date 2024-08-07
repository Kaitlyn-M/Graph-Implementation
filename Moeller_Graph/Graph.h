//Speeds up compilation by only needing the file once
#pragma once

// Lists graph's properties and methods
class Graph
{
// Access specificer. Lists data that can only be accessed by methods declared in public section of class
private:
	// Number of vertices
	int vertexTotal = 0;
	// Creates 10 by 10 2D array, representing adjacency matrix
	// Maximum number of vertices is 10
	int graph[10][10];
// Access specifier. Lists data that can be directly accessed from anywhere object can be accessed
public:
	// Constructs graph
	Graph(int userVertices);
	// Insert vertex prototype
	void insertVertex();
	// Insert edge prototype
	void insertEdge(int firstVertex, int secondVertex);
	// Find vertex prototype
	void findVertex(int currVertex);
	// Delete vertex prototype
	void deleteVertex(int delVertex);
	// Print graph prototype
	void printGraph();
};
