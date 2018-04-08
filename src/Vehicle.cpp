#include "Vehicle.h"
#include "Graph.h"

Vehicle::Vehicle(float aut, float cons, float agg, float rec, float ce, Vertex<int>* dep, Vertex<int>* dest) {
	autonomy = aut;
	consumptions = cons;
	aggravation = agg;
	recovery = rec;
	currentEnergy = ce;
};

/*int Vehicle::getID() {
	return id;
}

void Vehicle::addTrip(int i, Node* dest, Node* dep) {
	trips.push_back(new Trip(id, dest, dep));
}

int Vehicle::findTrip(Node* dep, Node* dest) {

	for (int i = 0; i < trips.size(); i++) {
		if (dep == trips[i]->getDep() && dest == trips[i]->getDest()) {
			return i;
		}
	}
	return -1;
}

bool Vehicle::removeTrip(Node* dep, Node* dest) {

	int i = findTrip(dep, dest);

	if (i == -1) {
		return false;
	} else {
		trips.erase(trips.begin()+i);
		return true;
	}
}*/
