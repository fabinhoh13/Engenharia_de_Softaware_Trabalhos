#ifndef MODEL_INTERFACE_H
#define MODEL_INTERFACE_H

#include "flow_interface.h"
#include <vector>

class Model_Interface{
    public:
        typedef vector <System_Interface*> :: iterator systemIterator;
        typedef vector <Flow_Inteface*> :: iterator flowIterator;

        virtual systemIterator beginSystems() = 0;
        virtual systemIterator endSystems() = 0;

        virtual flowIterator beginFlows() = 0;
        virtual flowIterator endFlows() = 0;


        virtual ~Model_Interface() {}


        virtual void execute (double start, double final, double increment) = 0;

        virtual void add (System_Interface *sys) = 0;
        virtual void remove (System_Interface *sys) = 0;

        virtual void add (Flow_Inteface *flow) = 0;
        virtual void remove (Flow_Inteface *flow) = 0;

        // Getters
        virtual string getName() const = 0;

        virtual double getTime() const = 0;

        virtual System_Interface* getSystem (int index) = 0;

        virtual Flow_Inteface* getFlow (int index) = 0;

        // Setters
        virtual void setName (string modelName) = 0;

        virtual void setTime(double currentTime) = 0;


        virtual void incrementTime(double increment) = 0;
};
#endif