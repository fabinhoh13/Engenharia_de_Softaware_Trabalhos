#include "unit_tests.h"

void testFlow() {
    System_Interface *S1 = new System ();
    System_Interface *S2 = new System ();

    Flow_Inteface *F1 = new TestFlow ("Test", S1, S2);
    assert (F1->getSource() == S1);
    assert (F1->getTarget() == S2);

    Flow_Inteface *F2 = new TestFlow ("Test", S2, S1);
    assert (F2->getSource() == S2);
    assert (F2->getTarget() == S1);

    cout << "FLOW TEST PASSED" << endl;

}


void testModel () {
    Model_Interface *M1 = new Model ("TestModel", 0);
    System_Interface *S1 = new System ("TestSystem1", 0);
    System_Interface *S2 = new System ("TestSystem2", 0);
    Flow_Inteface *F1 = new TestFlow ("TestFlow", S1, S2);

    M1->add(F1);
    M1->add(S1);
    M1->add(S2);

    assert (M1->getFlow(0) == F1);
    assert (M1->getSystem(0) == S1);
    assert (M1->getSystem(1) == S2);

    cout << "MODEL TEST PASSED" << endl;
}


void testSystem () {
    System_Interface *S1 = new System("Test", 0);
    assert (S1->getName() == "Test");
    assert (S1->getValue() == 0);

    cout << "SYSTEM TEST PASSED" << endl;

}