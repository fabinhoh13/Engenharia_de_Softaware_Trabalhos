#include "flow.h"

Flow :: Flow (const Flow& flow){
    if (this != &flow) {
        this->name = flow.getName();
        this->source = NULL;
        this->target = NULL;
    }
}

Flow& Flow :: operator=(const Flow& flow){
    if (this != &flow){
        this->name = flow.getName();
        this->source = NULL;
        this->target = NULL;
    }

    return *this;
}

Flow :: Flow (string name, System *source, System *target):
    name (name), source (source), target (target) {}

Flow :: ~Flow () {}

string Flow :: getName() const {
    return this->name;
}

System* Flow :: getSource () const {
    return this->source;
}

System* Flow :: getTarget () const {
    return this->target;
}

void Flow :: setName (string flowName) {
    this->name = flowName;
}

void Flow :: setSource (System* sourceSys) {
    this->source = sourceSys;
}

void Flow :: setTarget (System* targetSys) {
    this->target = targetSys;
}

void Flow :: clearSource () {
    this->source = NULL;
}

void Flow :: clearTarget () {
    this->target = NULL;
}