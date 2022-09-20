#pragma once

#include <vector>
#include <list>
#include <memory>
#include <unordered_map>

#include "Vertex.h"
#include "Edge.h"

using std::shared_ptr;
using std::vector;
using std::list;
using std::unordered_map;

template<typename V, typename E>
class Graph {
public:
	Graph() {};
	Graph(vector<shared_ptr<V>> v, vector<E> e);
	void insert(shared_ptr<V>& v);
	void erase(shared_ptr<V>& v);
	const list<shared_ptr<E>>& incdident(shared_ptr<V>& v);
	const list<const shared_ptr<const E>>& incident(shared_ptr<V>& v);
	int degree(shared_ptr<V>& v) const;
	unsigned int numVertices() const;
	void insert(shared_ptr<V>& v);
	void erase(shared_ptr<V>& v);
	unsigned int numEdges() const;
	bool adjcent(shared_ptr<V>& v1, shared_ptr<V> v2) const;
	void print();

	//const vector<E>& getEdges();
	//edgeIterator ebegin();
	//edgeIterator eend();
	//vertexIterator vbegin();
	//vertexIterator vend();
	//incidentEdges(vertexIterator it);
private:
	unordered_map<shared_ptr<V>, list<shared_ptr<E>> verticies_;
	list<shared_ptr<E>> edges_;
	const list<shared_ptr<E>> empty_;
};