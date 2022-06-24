#ifndef SYSTEM_INTERFACE_H
#define SYSTEM_INTERFACE_H

#include <iostream>
#include <string>
#include <ios>
#include <fstream>

using namespace std;


//! Class SystemInterface
/**
* This Class represents a system in the General Systems Theory implemented in this code.
*/
class SystemInterface {

    public:
        // Destrutor
        /*!
            This is the default destructor for the SystemInterface Class.
        */
        virtual ~SystemInterface(){}

        //Setters
        /*!
            Sets the name attribute in the SystemInterface Class.
            \param sysName which will be set to the current system.
        */
        virtual void setName(string sysName) = 0;
        /*!
            Sets the value attribute in the SystemInterface Class.
            \param sysValue which will be set to the current system.
        */
        virtual void setValue(double sysValue) = 0;

        // Getters
        /*!
            Returns the name attribute in the SystemInterface Class.
            \return string - the content name attribute.  
        */
        virtual string getName() const = 0;
        /*!
            Returns the value attribute in the SystemInterface Class.
            \return double - the content value attribute.  
        */
        virtual double getValue() const = 0;

        // Sobrecargas
        //Operador +
        /*!
            This is the overloaded "+" operator for the SystemInterface Class.
        */
        virtual double operator+(const SystemInterface& sys) = 0;
        /*!
            This is the overloaded "+" operator for the SystemInterface Class.
        */
        virtual double operator+(const double& valueSys) = 0;

        // Operador -
        /*!
            This is the overloaded "-" operator for the SystemInterface Class.
        */
        virtual double operator-(const SystemInterface& sys) = 0;
        /*!
            This is the overloaded "-" operator for the SystemInterface Class.
        */
        virtual double operator-(const double& valueSys) = 0;

        // Operador *
        /*!
            This is the overloaded "*" operator for the SystemInterface Class.
        */
        virtual double operator*(const SystemInterface& sys) = 0;
        /*!
            This is the overloaded "*"" operator for the SystemInterface Class.
        */
        virtual double operator*(const double& valueSys) = 0;

        // Operador /
        /*!
            This is the overloaded "/" operator for the SystemInterface Class.
        */
        virtual double operator/(const SystemInterface& sys) = 0;
        /*!
            This is the overloaded "/" operator for the SystemInterface Class.
        */
        virtual double operator/(const double& valueSys) = 0;


};


#endif