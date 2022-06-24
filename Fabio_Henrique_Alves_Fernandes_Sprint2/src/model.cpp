#include "model.h"

Model :: Model (const Model &model) {}

void Model :: operator= (const Model &model) {}


Model :: systemIterator Model :: beginSystems () {
    return systems.begin();
}

Model :: systemIterator Model :: endSystems () {
    return systems.end();
}

Model :: flowIterator Model :: beginFlows () {
    return flows.begin();
}

Model :: flowIterator Model :: endFlows () {
    return flows.end();
}

Model :: Model (string name, double time) :
    name (name), time(time) {}

Model :: ~Model() {
    for (Flow *item : flows)
        delete item;
    flows.clear();

    for (System *item : systems)
        delete item;
    systems.clear();
}

void Model :: execute (double start, double final, double increment) {
    vector <double> results;
    int j = 0;

    for (double k = start; k < final; k += increment) {
        for (Flow *item : flows) {
            results.push_back(item->execute());
        }

        j = 0;

        for (Flow *item : flows) {
            if (item->getSource() != NULL)
                item->getSource()->setValue(item->getSource()->getValue() - results[j]);
            
            if (item->getTarget() != NULL)
                item->getTarget()->setValue(item->getTarget()->getValue() + results[j]);

            j++;
        }

        for (auto a = beginFlows(); a != endFlows(); ++a){
            results.pop_back();
        }

        time += increment;
    }
}

void Model :: add (System *sys) {
    systems.insert(endSystems(), sys);
}

void Model :: remove (System *sys) {
    auto i = beginSystems();

    for (System *item : systems) {
        if (item == sys) {
            systems.erase(i);
            break;
        }
        ++i;
    }
}


void Model :: add (Flow *flow) {
    flows.insert(endFlows(), flow);
}

void Model :: remove (Flow *flow) {
    auto i = beginFlows();

    for (Flow *item : flows) {
        if (item == flow) {
            flows.erase(i);
            break;
        }
        ++i;
    }
}

void Model :: setName (string modelName) {
    this->name = modelName;
}

void Model :: setTime (double currentTime) {
    this->time = currentTime;
}

string Model :: getName () const {
    return this->name;
} 

double Model :: getTime () const {
    return this->time;
}

System* Model :: getSystem (int index) {
    return this->systems[index];
}

Flow* Model :: getFlow (int index) {
    return this->flows[index];
}

void Model :: incrementTime (double increment) {
    this->time += increment;
}