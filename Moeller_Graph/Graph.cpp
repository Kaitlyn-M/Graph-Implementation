// Allows input and output functions
#include <iostream>
// Includes graph header information
#include "Graph.h"

// Globally names every function and variable in standard
using namespace std;

// Constructs graph
Graph::Graph(int userVertices)
{
	// Vertext total is the user's vertices
	vertexTotal = userVertices;

	// Initializes row values to 0
	for (int row = 0; row < vertexTotal; row++)
	{
		// Initializes column values to 0
		for (int col = 0; col < vertexTotal; col++)
		{
			graph[row][col] = 0;
		}
	}
}

// Inserts vertex into graph
void Graph::insertVertex()
{
	// Increases vertex total by 1
	vertexTotal++;
	// Initializes vertex to 0
	for (int i = 0; i < vertexTotal; ++i) {
		// Initializes vertex column
		graph[i][vertexTotal - 1] = 0;
		// Initializes vertex row
		graph[vertexTotal - 1][i] = 0;
	}
}

// Inserts edge into graph
void Graph::insertEdge(int firstVertex, int secondVertex)
{
	// Executes if the first or second vertex number is greater than number of vertices
	if ((firstVertex > vertexTotal) || (secondVertex > vertexTotal))
	{
		cout << "Vertex does not exist!";
	}
	// Executes if vertices are same value
	else if (firstVertex == secondVertex)
	{
		cout << "Vertex cannot connect to itself.";
	}
	// Executes if vertices are in matrix
	else
	{
		// Connects undirected edges to vertices, represented in matrix as 1
		graph[secondVertex][firstVertex] = 1;
		graph[firstVertex][secondVertex] = 1;
	}
}

// Finds vertex in graph
void Graph::findVertex(int currVertex)
{
	// Executes if current vertex is less than vertex total
	if (currVertex <= vertexTotal)
	{
		cout << "\n\nVertex found!";
	}
	// Executes if current vertex is greater than vertex total
	else
	{
		cout << "\n\nVertex does not exist.";
	}
}

// Deletes vertex from graph
void Graph::deleteVertex(int delVertex)
{
	// Executes if deletion vertex is greater than vertex total
	if (delVertex > vertexTotal)
	{
		cout << "\n\nVertex does not exist.";
	}
	// Executes if deletion vertex is in matrix
	else {
		// Executes while deletion vertex is less than vertex total
		while (delVertex < vertexTotal) {
			// Shifting rows and columns
			for (int i = 0; i < vertexTotal; ++i) {
				// Shifts columns left
				graph[i][delVertex] = graph[i][delVertex + 1];
				// Shifts columns up
				graph[delVertex][i] = graph[delVertex + 1][i];
			}
			// Increments deletion vertex by 1
			delVertex++;
		}
		// Decrements number of vertex total
		vertexTotal--;
	}
}

// Prints graph's adjacency matrix
void Graph::printGraph()
{
	cout << "\n\nAdjacency Matrix:";
	// Seperates rows
	for (int row = 0; row < vertexTotal; ++row) {
		cout << "\n";
		// Displays column values
		for (int col = 0; col < vertexTotal; ++col) {
			cout << " " << graph[row][col];
		}
	}
}