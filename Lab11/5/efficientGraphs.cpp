/*
 Graph Example (30 points)
In this exercise you are going to implement a graph object in an efficient way. Recall that a graph 
can be thought of as a collection of vertices that are connected to other vertices by edges.
There are many different ways to represent a graph in a computer program. In this exercise we 
will represent a graph as a vector of vertices, where pairs of adjacent vertices form an edge. For 
example, suppose we have 4 vertices, labeled: 1, 2, 3, and 4. Then consider the list:
1, 2, 1, 3, 1, 4, 2, 3
Edges are formed by reading the list two items at a time, so in the above graph vertex 1 is 
connected to 2, 3, and 4, vertex 2 is connected to vertex 3.
So we will be able to specify any graph as a vector of Vertex objects. One obvious observation is 
that many of the vertices listed above are repeats of the same vertex. For example, 1 appears in 
the list three times but all of the occurrences refer to the same vertex. When we implement the 
graph we may choose to create separate copies for each occurrence of a vertex in the list. This 
approach is inefficient so instead, we will simply store a pointer to each vertex.
The problem with this approach is related to freeing the memory taken up by our graph. We have 
a list of pointers to Vertex, with repeated entries. If we were to successfully delete the graph, we 
would have to call the delete operator once for every unique entry. We would not be able to 
simply call delete on each entry because when we get to the third entry of our example graph 
above, we would be attempting to delete 1, which would be already deleted before, so it would 
result in a Segmentation Fault.
One way to deal with this situation is to use a smart pointer, like the one that was introduced in 
the previous exercise. Use the files Shared.h, Vertex.h, Graph.h, and efficientGraphs.cpp, which 
implement the idea of using a smart pointer to be able to delete the graph. Parts of Graph.h have 
been omitted. Your task is to fill in the missing parts and upload the updated version of Graph.h.
Expected output:
Creating v1 
Creating v2 
Creating v3 
Creating v4 
Creating v5 
v1 - v1 
v1 - v3 
v1 - v4 
v1 - v2 
v1 - v3 
v1 - v4 
v2 - v3 
v2 - v4 
v3 - v4 
v5 - v1 
v5 - v3 
Deleting v2 
Deleting v4 
Deleting v1 
Deleting v5 
Deleting v3
*/

// WORKING

#include <iostream>
#include <vector>
#include "Graph.h"

using namespace std;


int main(int argc, const char * argv[])
{
    /*! Creating some vertices */
	Vertex * v1 = new Vertex("v1");
	Vertex * v2 = new Vertex("v2");
	Vertex * v3 = new Vertex("v3");
    Vertex * v4 = new Vertex("v4");
    Vertex * v5 = new Vertex("v5");
	
    /*! Storing the edges as pairs of vertices*/
    Graph edges;
    edges.add(v1);  //v1 is connected to v1
	edges.add(v1);
	
    edges.add(v1);  //v1 is connected to v3
	edges.add(v3);
    
    edges.add(v1);  // etc...
    edges.add(v4);
    
    edges.add(v1);
	edges.add(v2);
	
    edges.add(v1);
	edges.add(v3);
    
    edges.add(v1);
    edges.add(v4);
    
    edges.add(v2);
	edges.add(v3);
	
    edges.add(v2);
	edges.add(v4);
    
    edges.add(v3);
    edges.add(v4);
    
    edges.add(v5);
    edges.add(v1);
    
    edges.add(v5);
    edges.add(v3);
    
    /*! Display all the edges of the graph */
	edges.print();
    
    /*! Delete the whole graph by freeing memory taken up by vertices */
    edges.deleteAll();

    return 0;
}