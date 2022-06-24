#ifndef FLOW_H
#define FLOW_H

#include "system.h"

#include <string>

class Flow {
    protected:
        string name;
        System *source;
        System *target;

        Flow (const Flow &flow);

        Flow& operator= (const Flow &flow);

    public:; 
        friend class Model;
        friend class UnitFlow;

        Flow (string name = "", System *source = NULL, System *target = NULL);

        virtual ~Flow ();

        virtual double execute () = 0;

        string getName () const;
        System* getSource () const;
        System* getTarget () const;

        void setName (string flowName);
        void setSource (System *sourceSys);
        void setTarget (System *targetSys);

        void clearSource ();
        void clearTarget ();

};


#endif