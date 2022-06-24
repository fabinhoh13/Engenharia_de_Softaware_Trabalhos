#include "model.h"
#include "system.h"

vector<ModelInterface*> Model :: models;

Model :: Model (const Model &model) {}

void Model :: operator= (const Model &model) {
    
}


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
    flows.clear();
    systems.clear();
}

void Model :: execute (double start, double final, double increment) {
    vector <double> results;
    int j = 0;

    for (double k = start; k < final; k += increment) {
        for (FlowInteface *item : flows) {
            results.push_back(item->execute());
        }

        j = 0;

        for (FlowInteface *item : flows) {
            if (item->getSource() != NULL)
                item->getSource()->setValue(item->getSource()->getValue() - results[j]);
            
            if (item->getTarget() != NULL)
                item->getTarget()->setValue(item->getTarget()->getValue() + results[j]);

            j++;
        }

        for (auto item = beginFlows(); item != endFlows(); ++item)
            results.pop_back();

        time += increment;
    }
}

ModelInterface* Model :: createModel(string name, double time){
    ModelInterface* m = new Model(name, time);
    models.push_back(m);
    return m;
}

SystemInterface* Model :: createSystem(string name, double value){
    SystemInterface* s = new System(name,value);
    this->add(s);
    return s;
}

void Model :: add (SystemInterface *sys) {
    systems.insert(endSystems(), sys);
}

void Model :: remove (SystemInterface *sys) {
    auto i = beginSystems();

    for (SystemInterface *item : systems) {
        if (item == sys) {
            systems.erase(i);
            break;
        }
        ++i;
    }
}


void Model :: add (FlowInteface *flow) {
    flows.insert(endFlows(), flow);
}

void Model :: remove (FlowInteface *flow) {
    auto i = beginFlows();

    for (FlowInteface *item : flows) {
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

SystemInterface* Model :: getSystem (int index) {
    return this->systems[index];
}

FlowInteface* Model :: getFlow (int index) {
    return this->flows[index];
}

void Model :: incrementTime (double increment) {
    this->time += increment;
}