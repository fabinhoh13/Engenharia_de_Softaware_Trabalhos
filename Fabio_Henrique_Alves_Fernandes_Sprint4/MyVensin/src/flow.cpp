#include "flow.h"

Flow :: Flow (const Flow_Inteface& flow){
    if (this != &flow) {
        this->name = flow.getName();
        this->source = NULL;
        this->target = NULL;
    }
}

Flow& Flow :: operator=(const Flow_Inteface& flow){
    if (this != &flow){
        this->name = flow.getName();
        this->source = NULL;
        this->target = NULL;
    }

    return *this;
}

Flow :: Flow (string name, System_Interface *source, System_Interface *target):
    name (name), source (source), target (target) {}

Flow :: ~Flow () {}

string Flow :: getName() const {
    return this->name;
}

System_Interface* Flow :: getSource () const {
    return this->source;
}

System_Interface* Flow :: getTarget () const {
    return this->target;
}

void Flow :: setName (string flowName) {
    this->name = flowName;
}

void Flow :: setSource (System_Interface* sourceSys) {
    this->source = sourceSys;
}

void Flow :: setTarget (System_Interface* targetSys) {
    this->target = targetSys;
}

void Flow :: clearSource () {
    this->source = NULL;
}

void Flow :: clearTarget () {
    this->target = NULL;
}