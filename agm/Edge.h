#pragma once
#include "Vertex.h"

using std::shared_ptr;

template<typename V, typename W>
class Edge {
public:
	Edge(shared_ptr<V> end0, shared_ptr<V> end1, W weight);
	~Edge() {
		delete ends_[0];
		delete ends_[1];
	}
	void print();
	W weight() {
		return weight_;
	}
private:
	shared_ptr<V> ends_[2];
	W weight_;
};

//#include "Edge.cpp"