#ifndef MODEL_H
#define MODEL_H

#include "flow.h"

#include <vector>

class Model {
    protected:
        string name;
        double time;

        vector <System*> systems;
        vector <Flow*> flows;

    private:
        Model (const Model &model);

        void operator= (const Model &model);
    
    public:
        typedef vector<System*> :: iterator systemIterator;
        typedef vector<Flow*> :: iterator flowIterator;

        systemIterator beginSystems();
        systemIterator endSystems();
        flowIterator beginFlows();
        flowIterator endFlows();

        Model (string name = "", double time = 0);

        virtual ~Model();


        void execute (double start = 0, double final = 0, double increment = 1);

        void add (System *sys);
        void remove (System *sys);

        void add (Flow *flow);
        void remove (Flow *flow);


        void setName(string modelName);
        void setTime(double currentTime);

        string getName() const;
        double getTime() const;
        
        System* getSystem(int index);
        Flow* getFlow(int index);

        void incrementTime(double increment);


};      

#endif