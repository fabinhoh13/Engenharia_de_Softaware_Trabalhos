#include "funcional_tests.h"

void exponentialFuncionalTest() {
    SystemInterface *population1 = new System ("Population 1", 100);
    SystemInterface *population2 = new System ("Population 2", 0);

    ExponencialFlow* exponentialFlow = new ExponencialFlow("Unlimited Growth", population1, population2);

    ModelInterface *exponentialModel = new Model ("Exponential Model", 0.0);

    exponentialModel->add(population1);
    exponentialModel->add(population2);
    exponentialModel->add(exponentialFlow);


    assert(population1->getName() == "Population 1");
    assert(population2->getName() == "Population 2");
    assert(exponentialFlow->getName() == "Unlimited Growth");
    assert(exponentialModel->getName() == "Exponential Model");

    cout << "NAMES PASSED" << endl;


    assert(abs(population1->getValue() - 100.0) < 0.0001);
    assert(abs(population2->getValue() - 0.0) < 0.0001);
    assert(abs(exponentialModel->getTime() - 0.0) < 0.0001);

    cout << "VALUES PASSED" << endl;
    
    exponentialModel->execute(0, 100, 1);
    

    assert(abs(population1->getValue() - 36.6032) < 0.0001);
    assert(abs(population2->getValue() - 63.3968) < 0.0001);
    assert(abs(exponentialModel->getTime() - 100) < 0.0001);

    cout << "EXECUTE PASSED" << endl;

    delete exponentialModel;
}


void logisticalFuncionalTest() {
    SystemInterface *population1 = new System ("Population 1", 100);
    SystemInterface *population2 = new System ("Population 2", 10);

    LogisticFlow* logisticalFlow = new LogisticFlow("Limited Growth", population1, population2);
    ModelInterface *logisticalModel = new Model ("Logistic Model", 0);

    logisticalModel->add(population1);
    logisticalModel->add(population2);
    logisticalModel->add(logisticalFlow);


    assert(population1->getName() == "Population 1");
    assert(population2->getName() == "Population 2");    
    assert(logisticalFlow->getName() == "Limited Growth");
    assert(logisticalModel->getName() == "Logistic Model");
    cout << "NAMES PASSED" << endl;


    assert(abs(population1->getValue() - 100.0) < 0.0001);
    assert(abs(population2->getValue() - 10.0) < 0.0001);
    assert(abs(logisticalModel->getTime() - 0.0) < 0.0001);
    cout << "VALUES PASSED" << endl;  


    logisticalModel->execute(0, 100, 1);

    assert(abs(population1->getValue() - 88.2167) < 0.0001);
    assert(abs(population2->getValue() - 21.7833) < 0.0001);
    assert(abs(logisticalModel->getTime() - 100.0) < 0.0001);
    cout << "EXECUTE PASSED" << endl; 

    delete logisticalModel;
}


void complexFuncionalTest() {
    SystemInterface *Q1 = new System ("Q1", 100);
    SystemInterface *Q2 = new System ("Q2", 0);
    SystemInterface *Q3 = new System ("Q3", 100);
    SystemInterface *Q4 = new System ("Q4", 0);
    SystemInterface *Q5 = new System ("Q5", 0);

    ComplexFlowF* complexFlowF = new ComplexFlowF("Flow f", Q1, Q2);
    ComplexFlowT* complexFlowT = new ComplexFlowT("Flow t", Q2, Q3);
    ComplexFlowU* complexFlowU = new ComplexFlowU("Flow u", Q3, Q4);
    ComplexFlowV* complexFlowV = new ComplexFlowV("Flow v", Q4, Q1);
    ComplexFlowG* complexFlowG = new ComplexFlowG("Flow g", Q1, Q3);
    ComplexFlowR* complexFlowR = new ComplexFlowR("Flow r", Q2, Q5);

    ModelInterface *complexModel = new Model ("Complex Model", 0);

    complexModel->add(Q1);
    complexModel->add(Q2);
    complexModel->add(Q3);
    complexModel->add(Q4);
    complexModel->add(Q5);
    complexModel->add(complexFlowF);
    complexModel->add(complexFlowT);
    complexModel->add(complexFlowU);
    complexModel->add(complexFlowV);
    complexModel->add(complexFlowG);
    complexModel->add(complexFlowR);

    assert(Q1->getName() == "Q1");
    assert(Q2->getName() == "Q2");
    assert(Q3->getName() == "Q3");
    assert(Q4->getName() == "Q4");
    assert(Q5->getName() == "Q5");
    assert(complexFlowF->getName() == "Flow f");
    assert(complexFlowT->getName() == "Flow t");
    assert(complexFlowU->getName() == "Flow u");
    assert(complexFlowV->getName() == "Flow v");
    assert(complexFlowG->getName() == "Flow g");
    assert(complexFlowR->getName() == "Flow r");
    assert(complexModel->getName() == "Complex Model");
    cout << "NAMES PASSED" << endl;

    assert(abs(Q1->getValue() - 100.0) < 0.0001);
    assert(abs(Q2->getValue() - 0.0) < 0.0001);
    assert(abs(Q3->getValue() - 100.0) < 0.0001);
    assert(abs(Q4->getValue() - 0.0) < 0.0001);
    assert(abs(Q5->getValue() - 0.0) < 0.0001);
    assert(abs(complexModel->getTime() - 0.0) < 0.0001);
    cout << "VALUES PASSED" << endl;  

    complexModel->execute(0, 100, 1);

    assert(abs(Q1->getValue() - 31.8513) < 0.0001);
    assert(abs(Q2->getValue() - 18.4003) < 0.0001);
    assert(abs(Q3->getValue() - 77.1143) < 0.0001);
    assert(abs(Q4->getValue() - 56.1728) < 0.0001);
    assert(abs(Q5->getValue() - 16.4612) < 0.0001);
    assert(abs(complexModel->getTime() - 100.0) < 0.0001);
    cout << "EXECUTE PASSED" << endl;

    delete complexModel;
}