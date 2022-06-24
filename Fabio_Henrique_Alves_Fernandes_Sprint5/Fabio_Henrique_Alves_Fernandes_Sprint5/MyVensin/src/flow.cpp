#include "flow.h"

Flow :: Flow (const FlowInteface& flow){
    if (this != &flow) {
        this->name = flow.getName();
        this->source = NULL;
        this->target = NULL;
    }
}

Flow& Flow :: operator=(const FlowInteface& flow){
    if (this != &flow){
        this->name = flow.getName();
        this->source = NULL;
        this->target = NULL;
    }

    return *this;
}

Flow :: Flow (string name, SystemInterface *source, SystemInterface *target):
    name (name), source (source), target (target) {}

Flow :: ~Flow () {}

string Flow :: getName() const {
    return this->name;
}

SystemInterface* Flow :: getSource () const {
    return this->source;
}

SystemInterface* Flow :: getTarget () const {
    return this->target;
}

void Flow :: setName (string flowName) {
    this->name = flowName;
}

void Flow :: setSource (SystemInterface* sourceSys) {
    this->source = sourceSys;
}

void Flow :: setTarget (SystemInterface* targetSys) {
    this->target = targetSys;
}

void Flow :: clearSource () {
    this->source = NULL;
}

void Flow :: clearTarget () {
    this->target = NULL;
}