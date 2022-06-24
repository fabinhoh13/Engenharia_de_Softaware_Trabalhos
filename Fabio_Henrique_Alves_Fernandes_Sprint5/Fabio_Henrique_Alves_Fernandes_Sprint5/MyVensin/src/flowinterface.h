#ifndef FLOW_INTERFACE_H
#define FLOW_INTERFACE_H

#include "systeminterface.h"

//! Class FlowInterface
/**
* This Class represents a flow in the General Systems Theory implemented in this code.
*/
class FlowInteface{
    public:
        // Classes Amigas
        // friend class ModelInterface; /*!< This Class represents a model in the General Systems Theory implemented in this code. */
        // friend class Model; /*!< This Class represents a model in the General Systems Theory implemented in this code. */
        // friend class UnitFlow; /*!< This Class is used to test the copy constructor and assignment operator of the FlowInterface class. */

        // Destrutor
        /*!
            This is the default destructor for the FlowInterface Class.
        */
        virtual ~FlowInteface() {}

        // Funçaõ que executa a equação
        /*!
            A pure virtual method that will be inherited by subclasses created by the user, and that will contain
            an equation that will be executed by the model.
        */
        virtual double execute() = 0;

        // Setters
        /*!
            Sets the name attribute in the FlowInterface Class.
            \param flowName which will be set to the current flow.
        */
        virtual void setName(string flowName) = 0;

        /*!
            Sets the source attribute in the FlowInterface Class. 
            \param sourceSys a pointer to the source target.
        */
        virtual void setSource(SystemInterface* sourceSys) = 0;

        /*!
            Sets the target attribute in the FlowInterface Class.   
            \param targetSys a pointer to the target system.
        */
        virtual void setTarget(SystemInterface* targetSys) = 0;

        // Getters
        /*!
            Returns the name attribute in the FlowInterface Class.
            \return string - the content name attribute.  
        */
        virtual string getName() const = 0;
        /*!
            Sets the source attribute in the FlowInterface Class. 
            \param sourceSys a pointer to the source target.
        */
        virtual SystemInterface* getSource() const = 0;
        /*!
            Returns the target attribute in the FlowInterface Class. 
            \return System* - the pointer of the target system. 
        */
        virtual SystemInterface* getTarget() const = 0;

        // Funções que limpam os fluxos de entrada e saída
        /*!
            Sets the pointer of the source attribute as NULL.
        */
        virtual void clearSource() = 0;
        /*!
            Sets the pointer of the target attribute as NULL.
        */
        virtual void clearTarget() = 0;
};  


#endif