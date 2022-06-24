#ifndef MODEL_H
#define MODEL_H

#include "model_interface.h"

class Model : public Model_Interface{
    protected:
        string name;
        double time;

        vector <System_Interface*> systems;
        vector <Flow_Inteface*> flows;

    private:
        Model (const Model &model);

        void operator= (const Model &model);
    
    public:
        typedef vector<System_Interface*> :: iterator systemIterator;
        typedef vector<Flow_Inteface*> :: iterator flowIterator;

        systemIterator beginSystems();
        systemIterator endSystems();
        flowIterator beginFlows();
        flowIterator endFlows();

        Model (string name = "", double time = 0);

        virtual ~Model();


        void execute (double start = 0, double final = 0, double increment = 1);

        void add (System_Interface *sys);
        void remove (System_Interface *sys);

        void add (Flow_Inteface *flow);
        void remove (Flow_Inteface *flow);


        void setName(string modelName);
        void setTime(double currentTime);

        string getName() const;
        double getTime() const;
        
        System_Interface* getSystem(int index);
        Flow_Inteface* getFlow(int index);

        void incrementTime(double increment);


};      

#endif