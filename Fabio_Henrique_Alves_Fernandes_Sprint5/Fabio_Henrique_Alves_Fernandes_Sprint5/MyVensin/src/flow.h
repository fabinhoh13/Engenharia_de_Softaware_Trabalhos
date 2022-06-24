#ifndef FLOW_H
#define FLOW_H

#include "flowinterface.h"

//! Class Flow
/**
* This Class represents a flow in the General Systems Theory implemented in this code.
*/

class Flow : public FlowInteface {
    protected:
        string name; /*!< This attribute contains a name for the flow. */
        SystemInterface *source; /*!< This attribute stores a pointer to the source system of a flow. */
        SystemInterface *target; /*!< This attribute stores a pointer to the target system of a flow. */

        /*!
            This is the copy constructor for the Flow Class.
            \param flow the flow that is going to be cloned.
        */
        Flow (const FlowInteface &flow);

        /*!
            This is the overloaded assignment operator for the Flow Class.
        */
        Flow& operator= (const FlowInteface &flow);

    public:
        friend class ModelInterface; /*!< This Class represents a model in the General Systems Theory implemented in this code. */
        friend class Model; /*!< This Class represents the implementation of a model in the General Systems Theory implemented in this code. */
        friend class UnitFlow; /*!< This Class is used to test the copy constructor and assignment operator of the Flow class. */

        /*!
            This is the default constructor for the Flow Class.
            \param name the name of the Flow.
            \param source a pointer to the source system of the Flow.
            \param target a pointer to the target system of the Flow.
            \return Flow - a Flow Class object, with it's isCopy attribute set to false.
        */
        Flow (string name = "", SystemInterface *source = NULL, SystemInterface *target = NULL);

        /*!
            This is the default destructor for the Flow Class.
        */
        virtual ~Flow ();

        /*!
            A pure virtual method that will be inherited by subclasses created by the user, and that will contain
            an equation that will be executed by the model.
        */
        virtual double execute () = 0;

        /*!
            Returns the name attribute in the Flow Class.
            \return string - the content name attribute.  
        */
        string getName () const;
        /*!
            Returns the source attribute in the Flow Class.  
            \return System* - the pointer of the source system. 
        */
        SystemInterface* getSource () const;
        /*!
            Returns the target attribute in the Flow Class. 
            \return System* - the pointer of the target system. 
        */
        SystemInterface* getTarget () const;

        /*!
            Sets the name attribute in the Flow Class.
            \param flowName which will be set to the current flow.
        */
        void setName (string flowName);
        /*!
            Sets the source attribute in the Flow Class. 
            \param sourceSys a pointer to the source target.
        */
        void setSource (SystemInterface *sourceSys);
        /*!
            Sets the target attribute in the Flow Class.   
            \param targetSys a pointer to the target system.
        */
        void setTarget (SystemInterface *targetSys);

        /*!
            Sets the pointer of the source attribute as NULL.
        */
        void clearSource ();
        /*!
            Sets the pointer of the target attribute as NULL.
        */
        void clearTarget ();

};


#endif