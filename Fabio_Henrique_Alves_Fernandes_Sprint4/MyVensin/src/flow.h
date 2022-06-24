#ifndef FLOW_H
#define FLOW_H

#include "flow_interface.h"

class Flow : public Flow_Inteface {
    protected:
        string name;
        System_Interface *source;
        System_Interface *target;

        Flow (const Flow_Inteface &flow);

        Flow& operator= (const Flow_Inteface &flow);

    public:
        friend class Model_Interface; 
        friend class Model;
        friend class UnitFlow;

        Flow (string name = "", System_Interface *source = NULL, System_Interface *target = NULL);

        virtual ~Flow ();

        virtual double execute () = 0;

        string getName () const;
        System_Interface* getSource () const;
        System_Interface* getTarget () const;

        void setName (string flowName);
        void setSource (System_Interface *sourceSys);
        void setTarget (System_Interface *targetSys);

        void clearSource ();
        void clearTarget ();

};


#endif