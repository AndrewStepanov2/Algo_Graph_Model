 agm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <memory>
#include <vector>

#include "Vertex.h"
#include "Edge.h"

using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;

std::vector<Edge<Vertex<string>, int>> makeEdges() {
    std::vector<Edge<Vertex<string>, int>> edges;
    shared_ptr<Vertex<string>> zero(new Vertex<string>("zero"));
    shared_ptr<Vertex<string>> one(new Vertex<string>("one"));
    shared_ptr<Vertex<string>> two(new Vertex<string>("two"));
    edges.push_back(Edge<Vertex<string>, int>(zero, one, 1));
    edges.push_back(Edge<Vertex<string>, int>(one, two, 1));
    edges.push_back(Edge<Vertex<string>, int>(two, zero, 2));
    return edges;
}

int main()
{
    std::vector<Edge<Vertex<string>, int>> edges = makeEdges();
    for (int i = 0; i < (int) edges.size(); ++i) {
        edges[i].print();
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
