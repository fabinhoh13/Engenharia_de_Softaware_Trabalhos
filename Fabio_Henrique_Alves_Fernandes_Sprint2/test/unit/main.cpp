#include "unit_tests.h"

int main() {
    cout << "-----Flow Test-----" << endl;
    testFlow();
    cout << "-----System Test-----" << endl;
    testSystem();
    cout << "-----Model Test-----" << endl;
    testModel();

    return 0;
}