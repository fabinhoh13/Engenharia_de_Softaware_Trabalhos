#include "unit_flow.h"
#include <assert.h>

// Function for flow's constructor unit test.
void unit_flow_constructor() {
    cout << "TEST 1 - Default constructor of the Flow class without passing parameters" << endl;

    ExponencialFlow* flow1 = new ExponencialFlow();
    
    // Making assertion to verify if the name property was initialized with the default data.
    assert(flow1->getName() == "");
    // Making assertion to verify if there isn't a source system in this flow.
    assert(flow1->getSource() == NULL);
    // Making assertion to verify if there isn't a target system in this flow.
    assert(flow1->getTarget() == NULL);

    cout << GREEN << "OK!" << RESET << endl;
}

// Function for Flow class's copy constructor unit test.
void UnitFlow::unit_flow_copy_constructor() { 
    cout << "TEST 2 - Copy constructor of the Flow class" << endl;

    SystemInterface* sys1 = new System("Sys 1", 5.0);
    SystemInterface* sys2 = new System("Sys 2", 6.0);

    ExponencialFlow* flow1 = new ExponencialFlow("Flow 1");
    Flow* flow2 = new ExponencialFlow(*flow1); 

    flow1->setName("Original Flow 1");
    flow1->setSource(sys1);
    flow1->setTarget(sys2);
    
    // Making assertion to verify if the name property was copied.
    assert(flow2->getName() == "Flow 1");
    // Making assertion to verify if there isn't a source system in this flow.
    assert(flow2->getSource() == NULL); 
    // Making assertion to verify if there isn't a target system in this flow.
    assert(flow2->getTarget() == NULL);

    cout << GREEN << "OK!" << RESET << endl;
} 

// Function for the Flow class' destructor unit test.
void unit_flow_destructor() {
    cout << "TEST 3 - Default destructor of the Flow class" << endl;

    double vmBefore, vmAfter, rss;

    // Getting the memory usage previous to the creation of a flow.
    memory_usage(vmBefore, rss);
  
    ExponencialFlow* flow = new ExponencialFlow("Flow");
    delete(flow);

    // Getting the memory usage after the creation and destruction of a Flow object.
    memory_usage(vmAfter, rss);

    // Making assertion to verify if the memory usage after the creation and deletion
    // is the same as before the creation of Flow object.
    assert(vmBefore == vmAfter);

    cout << GREEN << "OK!" << RESET << endl;
}

// Function for Flow class' method getName() unit test.
void unit_flow_getName() {
    cout << "TEST 4 - Flow class' getName() method" << endl;
    
    ExponencialFlow* flow = new ExponencialFlow("Flow 1");

    // Making assertion to verify if the method returns the Flow class name and if it's
    // equal to the parameter previously passed. 
    assert(flow->getName() == "Flow 1");
    
    cout << GREEN << "OK!" << RESET << endl;
}

// Function for Flow class' method setName() unit test.
void unit_flow_setName() {
    cout << "TEST 5 - Flow class' setName() method" << endl;

    ExponencialFlow* flow = new ExponencialFlow();
    flow->setName("Test Flow");

    // Making assertion to verify if the data of the name property has been altered.
    assert(flow->getName() == "Test Flow");

    cout << GREEN << "OK!" << RESET << endl;
}

// Function for Flow class' method getSource() unit test.
void unit_flow_getSource(){
    cout << "TEST 6 - Flow class' getSource() method" << endl;
    
    SystemInterface* system = new System("Test System");
    ExponencialFlow* flow = new ExponencialFlow("Flow 1");
    flow->setSource(system);

    // Making assertion to verify if the method returns the Flow class source system and if it's
    // equal to the parameter previously passed. 
    assert(flow->getSource()->getName() == "Test System");
    
    cout << GREEN << "OK!" << RESET << endl;  
}

// Function for Flow class' method setSource() unit test.
void unit_flow_setSource(){
    cout << "TEST 7 - Flow class' setSource() method" << endl;
    
    SystemInterface* system = new System("Test System");
    ExponencialFlow* flow1 = new ExponencialFlow("Flow 1");
    flow1->setSource(system);

    // Making assertion to verify if the data of the source system property has been altered.
    assert(flow1->getSource()->getName() == "Test System");
    
    cout << GREEN << "OK!" << RESET << endl;  
}

// Function for Flow class' method clearSource() unit test.
void unit_flow_clearSource(){
    cout << "TEST 8 - Flow class' clearSource() method" << endl;
    
    SystemInterface* system = new System("Test System");
    ExponencialFlow* flow1 = new ExponencialFlow("Flow 1");
    flow1->setSource(system);
    flow1->clearSource();

    // Making assertion to verify if the data of the source system property has been altered.
    assert(flow1->getSource() == NULL);
    
    cout << GREEN << "OK!" << RESET << endl;  
}

// Function for Flow class' method getTarget() unit test.
void unit_flow_getTarget(){
    cout << "TEST 9 - Flow class' getTarget() method" << endl;
    
    SystemInterface* system = new System("Test System"); 
    ExponencialFlow* flow = new ExponencialFlow("Flow 1");
    flow->setTarget(system);

    // Making assertion to verify if the method returns the Flow class target system and if it's
    // equal to the parameter previously passed. 
    assert(flow->getTarget()->getName() == "Test System");
    
    cout << GREEN << "OK!" << RESET << endl;
}

// Function for Flow class' method setTarget() unit test.
void unit_flow_setTarget(){
    cout << "TEST 10 - Flow class' setTarget() method" << endl;
    
    SystemInterface* system = new System("Test System");
    ExponencialFlow* flow = new ExponencialFlow("Flow 1");
    flow->setTarget(system);

    // Making assertion to verify if the data of the target system property has been altered.
    assert(flow->getTarget()->getName() == "Test System");
    
    cout << GREEN << "OK!" << RESET << endl;
}

// Function for Flow class' method clearTarget() unit test.
void unit_flow_clearTarget(){
    cout << "TEST 11 - Flow class' clearTarget() method" << endl;
    
    SystemInterface* system = new System("Test System");
    ExponencialFlow* flow = new ExponencialFlow("Flow"); 
    flow->setTarget(system);
    flow->clearTarget();

    // Making assertion to verify if the data of the target system property has been altered.
    assert(flow->getTarget() == NULL);
    
    cout << GREEN << "OK!" << RESET << endl;  
}

// Function for Flow class' assingment operator unit test.
void UnitFlow::unit_flow_assingmentOperator(){
    cout << "TEST 12 - Flow class' assignment operator" << endl;
    
    SystemInterface* sys1 = new System("Sys 1", 5.0);
    SystemInterface* sys2 = new System("Sys 2", 6.0);

    ExponencialFlow* flow1 = new ExponencialFlow("Flow 1");
    ExponencialFlow* flow2 = new ExponencialFlow();
    *flow2 = *flow1;
    
    flow1->setName("Original Flow 1");
    flow1->setSource(sys1);
    flow1->setTarget(sys2);
        
    // Making assertion to verify if the name property was assigned.
    assert(flow2->getName() == "Flow 1");
    // Making assertion to verify if the source system property was assigned.
    assert(flow2->getSource() == NULL);
    // Making assertion to verify if the target system property was assigned.
    assert(flow2->getTarget() == NULL);
    
    cout << GREEN << "OK!" << RESET << endl;
}

// Function for Flow class' execute method unit test.
void unit_flow_execute(){
    cout << "TEST 13 - Flow class' execute() method" << endl;
    
    SystemInterface* system1 = new System("Test System 1", 10.0);
    SystemInterface* system2 = new System("Test System 2", 0.0);
    ExponencialFlow* flow = new ExponencialFlow("Flow");
    flow->setSource(system1);
    flow->setTarget(system2);
    system2->setValue(flow->execute());
    
    // Making assertion to verify if the execute method has been completed successfully.
    assert(abs(flow->getTarget()->getValue() - 0.1) < 0.01);
    
    cout << GREEN << "OK!" << RESET << endl;
}

// Function to run all the Flow class' unit tests.
void run_unit_tests_flow() {

    UnitFlow* unit_flow = new UnitFlow();

    // Calling all the Flow class' unit test functions.
    unit_flow_constructor();  
    unit_flow->unit_flow_copy_constructor();
    unit_flow_destructor(); 
    unit_flow_getName();
    unit_flow_setName();
    unit_flow_getSource();
    unit_flow_setSource();
    unit_flow_clearSource();
    unit_flow_getTarget();
    unit_flow_setTarget();
    unit_flow_clearTarget();
    unit_flow->unit_flow_assingmentOperator();
    unit_flow_execute();

    delete(unit_flow);
}