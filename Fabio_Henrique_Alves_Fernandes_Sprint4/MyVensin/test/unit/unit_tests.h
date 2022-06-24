#ifndef UNIT_TEST
#define UNIT_TEST

#include "../../src/flow.h"
#include "../../src/system.h"
#include "../../src/model.h"

#include <assert.h>
#include <stdlib.h>

class TestFlow : public Flow {
    public:
        TestFlow (string name, System_Interface *source, System_Interface *target): 
            Flow (name, source, target) {}
        
        double execute () {
            cout << "Testing a Flow" << endl;
            return 0;
        }
            

};

void testFlow();
void testModel();
void testSystem();



#endif