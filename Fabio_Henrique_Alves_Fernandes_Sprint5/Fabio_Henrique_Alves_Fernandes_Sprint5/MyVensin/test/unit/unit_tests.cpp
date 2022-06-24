#include "unit_tests.h"
#include <cassert>

using namespace std;

// Function for System class' "+" global operator unit test.
void unit_test_global_sumOperator(){
    SystemInterface* sys = new System("Population", 10.0);

    cout << "TEST 1 - System class sum global operator" << endl;
    assert((20.0 + (*sys)) == 30);

    cout << GREEN << "OK!" << RESET << endl;
}

// Function for System class' "-" global operator unit test.
void unit_test_global_minusOperator(){
    SystemInterface* sys = new System("Population", 10.0);

    cout << "TEST 2 - System class subtraction global operator" << endl;
    assert((20.0 - (*sys)) == 10);

    cout << GREEN << "OK!" << RESET << endl;
}

// Function for System class' "*" global operator unit test.
void unit_test_global_timesOperator(){
    SystemInterface* sys = new System("Population", 10.0);

    cout << "TEST 3 - System class multiplication global operator" << endl;
    assert((20.0 * (*sys)) == 200);

    cout << GREEN << "OK!" << RESET << endl;
}

// Function for System class' "/" global operator unit test.
void unit_test_global_divisionOperator(){
    SystemInterface* sys = new System("Population", 10.0);

    cout << "TEST 4 - System class division global operator" << endl;
    assert((20.0 / (*sys)) == 2);

    cout << GREEN << "OK!" << RESET << endl;
}

// Function to run all the global unit tests.
void run_unit_tests_globals(){
    unit_test_global_sumOperator();
    unit_test_global_minusOperator();
    unit_test_global_timesOperator();
    unit_test_global_divisionOperator();
}