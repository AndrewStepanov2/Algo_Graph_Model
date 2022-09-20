#include "Graph.h"



template<typename V, typename E>
const list<shared_ptr<E>>& Graph<V, E>::incdident(shared_ptr<V>& v) {
	auto v_it = verticies_.find(v);
	if (v_it != verticies_.end()) {
		return v_it->second;
	}
	else {
		return empty_;
	}
}

template<typename V, typename E>
const list<const shared_ptr<const E>>& Graph<V, E>::incdident(shared_ptr<V>& v) const {
	auto v_it = verticies_.find(v);
	if (v_it != verticies_.end()) {
		return v_it->second;
	}
	else {
		return empty_;
	}
}

//template<typename V, typename E>
//int Graph<V, E>::degree()



template <typename V, typename E>
bool Graph<V, E>::adjcent(shared_ptr<V>& v1, shared_ptr<V>& v2) {
	auto v1_it = vertices_.find(v1);
	auto v2_it = vertices_.find(v2);
	if (v1_it == vertices_.end() || v2_it == vertices_.end()) {
		return false;
	}
	if (v1_it->second.size() > v2_it->second.size()) {
		for (auto v2_e : v2_it->second) {
			if (v2_e->ends().first == v1 || v2_ends().second == v1) {
				return true;
			}
		}
	}
	else {
		for (auto v1_e : v1_it->second) {
			if (v1_e->ends().first == v2 || v1_ends().second == v2) {
				return true;
			}
		}
	}
	return false;
}