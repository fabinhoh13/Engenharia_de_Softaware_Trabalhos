#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_interface.h"

class System : public System_Interface{
    protected:
        string name;
        double value;

        System& operator=(const System& sys);
    
    public:

        friend class Flow; 
        friend class Model;
        friend class UnitSystem;
        
        // Construtor e Destrutor
        System (const System& sys);

        System (string name = "", double value = 0);

        virtual ~System();

        // Setters

        void setName(string sysName);

        void setValue(double sysValue);

        // Getters

        string getName() const;

        double getValue() const;

        // Sobrecarga de Operadores
        // Operador +
        double operator+(const System_Interface& sys);
        
        double operator+(const double& valueSys);

        //Operador -
        double operator-(const System_Interface& sys);
        
        double operator-(const double& valueSys);

        // Operador *
        double operator*(const System_Interface& sys);
        
        double operator*(const double& valueSys);

        // Operador /
        double operator/(const System_Interface& sys);
        
        double operator/(const double& valueSys);

        

};

double operator+(const double& valueSys, const System_Interface& sys);
double operator-(const double& valueSys, const System_Interface& sys);
double operator*(const double& valueSys, const System_Interface& sys);
double operator/(const double& valueSys, const System_Interface& sys);

#endif