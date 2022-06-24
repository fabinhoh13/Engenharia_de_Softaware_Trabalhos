#ifndef SYSTEM_H
#define SYSTEM_H

#include "systeminterface.h"

//! Class System
/**
* This Class represents a System in the General Systems Theory implemented in this code.
*/
class System : public SystemInterface{
    protected:
        string name; /*!< This attribute contains a name for the System. */
        double value; /*!< This attribute contains the actual value of the System. */

        /*!
            This is the overloaded assignment operator for the System Class.
        */
        System& operator=(const System& sys);
    
    public:

        friend class Flow; /*!< This Class represents a flow in the General Systems Theory implemented in this code. */
        friend class Model; /*!< This Class represents a model in the General Systems Theory implemented in this code. */
        friend class UnitSystem; /*!< This Class is used to test the copy constructor and assignment operator of the System class. */
        
        // Construtor e Destrutor
        /*!
            This is the copy constructor for the System Class.
            \param sys the System that is going to be cloned.
        */
        System (const System& sys);

        /*!
            This is the default constructor for the System Class.
            \param name the name of the System.
            \param value the initial value of the System.
            \return System - a System Class object.
        */
        System (string name = "", double value = 0);

        /*!
            This is the default destructor for the System Class.
        */
        virtual ~System();

        // Setters
        /*!
            Sets the name attribute in the System Class.
            \param sysName which will be set to the current System.
        */
        void setName(string sysName);
        /*!
            Sets the value attribute in the System Class.
            \param sysValue which will be set to the current System.
        */
        void setValue(double sysValue);

        // Getters
        /*!
            Returns the name attribute in the System Class.
            \return string - the content name attribute.  
        */
        string getName() const;
        /*!
            Returns the value attribute in the System Class.
            \return double - the content value attribute.  
        */
        double getValue() const;

        // Sobrecarga de Operadores
        // Operador +
        /*!
            This is the overloaded "+" operator for the System Class.
        */
        double operator+(const SystemInterface& sys);
        /*!
            This is the overloaded "-" operator for the System Class.
        */
        double operator+(const double& valueSys);

        //Operador -
        /*!
            This is the overloaded "-" operator for the System Class.
        */
        double operator-(const SystemInterface& sys);
        /*!
            This is the overloaded "-" operator for the System Class.
        */
        double operator-(const double& valueSys);

        // Operador *
        /*!
            This is the overloaded "*" operator for the System Class.
        */
        double operator*(const SystemInterface& sys);
        /*!
            This is the overloaded "*" operator for the System Class.
        */
        double operator*(const double& valueSys);

        // Operador /
        /*!
            This is the overloaded "/" operator for the System Class.
        */
        double operator/(const SystemInterface& sys);
        /*!
            This is the overloaded "/" operator for the System Class.
        */
        double operator/(const double& valueSys);

        

};

double operator+(const double& valueSys, const SystemInterface& sys);
double operator-(const double& valueSys, const SystemInterface& sys);
double operator*(const double& valueSys, const SystemInterface& sys);
double operator/(const double& valueSys, const SystemInterface& sys);

#endif