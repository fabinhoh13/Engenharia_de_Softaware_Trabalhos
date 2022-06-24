#ifndef FUNCTIONAL_TEST
#define FUNCTIONAL_TEST

#include "../../src/flow.h"
#include "../../src/system.h"
#include "../../src/model.h"

#include <assert.h>

class ExponencialFlow : public Flow {
    public:
        ExponencialFlow (string name, System *source, System *target): 
            Flow (name, source, target) {}
        
        double execute () {
            if (getSource() != NULL){
                return (0.01 * getSource()->getValue());
            }
            else 
                return 0;
        }

};

class LogisticFlow : public Flow {
    public:
        LogisticFlow (string name, System *source, System *target): 
            Flow (name, source, target) {}

        double execute(){
            if (getTarget() != NULL)
                return 0.01 * getTarget()->getValue() * (1 - getTarget()->getValue() / 70);
            else
                return 0;
        }
};

class ComplexFlowF : public Flow{
    public:
        ComplexFlowF(string name, System *source, System *target): 
            Flow (name, source, target) {}

        double execute() {
            if (getSource() != NULL)
                return 0.01 * getSource()->getValue();
            else
                return 0;
        }
};


class ComplexFlowT : public Flow{
    public:
        ComplexFlowT(string name, System *source, System *target): 
            Flow (name, source, target) {}

        double execute() {
            if (getSource() != NULL)
                return 0.01 * getSource()->getValue();
            else
                return 0;
        }
};


class ComplexFlowU : public Flow {
    public:
        ComplexFlowU(string name, System *source, System *target): 
            Flow (name, source, target) {}

        double execute(){
            if (getSource() != NULL)
                return 0.01 * getSource()->getValue();
            else
                return 0;
        }
};


class ComplexFlowV : public Flow {
    public:
        ComplexFlowV(string name, System *source, System *target): 
            Flow (name, source, target) {}

        double execute(){
            if (getSource() != NULL)
                return 0.01 * getSource()->getValue();
            else
                return 0;
        }
};



class ComplexFlowG : public Flow {
    public:
        ComplexFlowG(string name, System *source, System *target): 
            Flow (name, source, target) {}

        double execute(){
            if (getSource() != NULL)
                return 0.01 * getSource()->getValue();
            else
                return 0;
        }
};



class ComplexFlowR: public Flow {
    public:
        ComplexFlowR(string name, System *source, System *target): 
            Flow (name, source, target) {}

        double execute(){
            if (getSource() != NULL)
                return 0.01 * getSource()->getValue();
            else
                return 0;
        }
};


void exponentialFuncionalTest ();
void logisticalFuncionalTest ();
void complexFuncionalTest ();

#endif