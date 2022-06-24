#ifndef SYSTEM_INTERFACE_H
#define SYSTEM_INTERFACE_H

#include <iostream>
#include <string>
#include <ios>
#include <fstream>

using namespace std;

class System_Interface {

    public:
        // Destrutor
        virtual ~System_Interface(){}

        //Setters
        virtual void setName(string sysName) = 0;

        virtual void setValue(double sysValue) = 0;

        // Getters
        virtual string getName() const = 0;

        virtual double getValue() const = 0;

        // Sobrecargas
        //Operador +
        virtual double operator+(const System_Interface& sys) = 0;
        
        virtual double operator+(const double& valueSys) = 0;

        // Operador -
        virtual double operator-(const System_Interface& sys) = 0;

        virtual double operator-(const double& valueSys) = 0;

        // Operador *
        virtual double operator*(const System_Interface& sys) = 0;

        virtual double operator*(const double& valueSys) = 0;

        // Operador /
        virtual double operator/(const System_Interface& sys) = 0;

        virtual double operator/(const double& valueSys) = 0;


};


#endif