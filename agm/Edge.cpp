#include "Edge.h"
#include "Vertex.h"
#include <iostream>

template<typename V, typename W>
Edge<V, W>::Edge(shared_ptr<V> end0, shared_ptr<V> end1, W weight) {
	ends_[0] = end0;
	ends_[1] = end1;
	weight_ = weight;
}

template<typename V, typename W>
void Edge<V, W>::print() {
	std::cout << *ends_[0] << "--" << weight_ << "--" << *ends_[1];
}