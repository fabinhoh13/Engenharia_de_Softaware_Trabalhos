#ifndef FLOW_INTERFACE_H
#define FLOW_INTERFACE_H

#include "system_interface.h"

class Flow_Inteface{
    public:
        // Classes Amigas
        friend class Model_Interface; 
        friend class Model;
        friend class UnitFlow;

        // Destrutor
        virtual ~Flow_Inteface() {}

        // Funçaõ que executa a equação
        virtual double execute() = 0;

        // Setters
        virtual void setName(string flowName) = 0;

        virtual void setSource(System_Interface* sourceSys) = 0;

        virtual void setTarget(System_Interface* targetSys) = 0;

        // Getters
        virtual string getName() const = 0;

        virtual System_Interface* getSource() const = 0;

        virtual System_Interface* getTarget() const = 0;

        // Funções que limpam os fluxos de entrada e saída
        virtual void clearSource() = 0;

        virtual void clearTarget() = 0;
};  


#endif