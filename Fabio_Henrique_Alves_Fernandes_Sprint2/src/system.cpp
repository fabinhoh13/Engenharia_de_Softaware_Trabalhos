#include "system.h"

System :: System (const System& sys){
    if (this != &sys){
        name = sys.getName();
        value = sys.getValue();
    }   
}

System& System :: operator= (const System& sys){
    if (this != &sys){
        setName(sys.getName());
        setValue(sys.getValue()); 
    }
    return *this;
}

System :: System(string name, double value): 
    name(name), value(value){}

System :: ~System() {}


void System :: setName(string sysName){
    name = sysName;
}

void System :: setValue(double sysValue){
    value = sysValue;
}

string System :: getName() const {
    return name;
}   

double System :: getValue() const{
    return value;
}


double System :: operator+(const System& sys){
    if (this == &sys){
        return 2.0 * this->value;
    }

    return this->value + sys.getValue();
}

double System :: operator+(const double& valueSys){
    return valueSys + this->value;
}

double  System :: operator-(const System& sys){
    if (this == &sys){
        return 0.0;
    }

    return this->value - sys.getValue();
}

double System :: operator-(const double& valueSys){
    return this->value - valueSys;
}

double System :: operator*(const System& sys){
    if (this == &sys){
        return this->value * sys.getValue();
    }

    return this->value * sys.getValue();
}

double System :: operator*(const double& valueSys){
    return this->value * valueSys;
}


double System :: operator/(const System& sys){
    if (this == &sys){
        return 1.0;
    }

    return this->value / sys.getValue();
}

double System :: operator/(const double& valueSys){
    return this->value / valueSys;
}


//-----------------------------------------------------


double operator+(const double& valueSys, const System& sys){
    return sys.getValue() + valueSys;
}

double operator-(const double& valueSys, const System& sys){
    return valueSys - sys.getValue();
}

double operator*(const double& valueSys, const System& sys){
    return valueSys * sys.getValue();
}

double operator/(const double& valueSys, const System& sys){
    return valueSys / sys.getValue();
}