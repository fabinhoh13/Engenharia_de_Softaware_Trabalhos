#ifndef MODEL_H
#define MODEL_H

#include "modelinterface.h"

//! Class Model
/**
* This Class represents a Model in the General Systems Theory implemented in this code.
*/
class Model : public ModelInterface{
    protected:
        string name; /*!< This attribute contains a name for the model. */
        double time; /*!< This attribute contains the current time in which the operations in the model is being executed. */

        vector <SystemInterface*> systems; /*!< This attribute stores pointers to the systems contained in the model. */
        vector <FlowInteface*> flows; /*!< This attribute stores pointers to the flows contained in the model. */   
        static vector<ModelInterface*> models;

    private:
        /*!
            This is the copy constructor for the Model Class.
            \param model the Model that is going to be cloned.
        */
        Model (const Model &model);

        /*!
            This is the overloaded assignment operator for the Model Class.
        */
        void operator= (const Model &model);
    
    public:
        typedef vector<SystemInterface*> :: iterator systemIterator;
        typedef vector<FlowInteface*> :: iterator flowIterator;

        systemIterator beginSystems(); /*!< Returns the iterator to the beginning of systems attribute. */
        systemIterator endSystems(); /*!< Returns the iterator to the end of systems attribute. */
        flowIterator beginFlows(); /*!< Returns the iterator to the beginning of flows attribute. */
        flowIterator endFlows(); /*!< Returns the iterator to the end of flows attribute. */

        /*!
            This is the default constructor for the Model Class. 
            \param name the name of the Model Class.
            \param time the time for the Model Class to run.
            \return Model - a Model Class object.
        */
        Model (string name = "", double time = 0);
        
        /*!
            This is the default destructor for the Model Class.
        */
        virtual ~Model();

        /*!
            Executes all the flows in the Model.
            \param start the initial time.
            \param final the final time.
            \param increment represents the iteration step.
        */
        void execute (double start = 0, double final = 0, double increment = 1);


        ModelInterface* createModel(string name, double time);

        SystemInterface* createSystem(string name, double value);


        /*!        
           Adds a system's pointer to the systems vector.
           \param sys the system to be added.
        */
        void add (SystemInterface *sys);
        /*!        
           Removes a system's pointer on the systems vector.
           \param sys which will be removed from the vector flows.  
        */
        void remove (SystemInterface *sys);

        /*!        
           Adds a flow's pointer to the flows vector. 
           \param flow the flow to be added.
        */
        void add (FlowInteface *flow);
        /*!
           Removes a flow's pointer on the flows vector.
           \param flow which will be removed from the vector flows. 
        */
        void remove (FlowInteface *flow);

        /*!
            Sets the name attribute in the Model Class.
            \param modelName which will be set to the current model.
        */
        void setName(string modelName);
        /*!
            Sets the time attribute in the Model Class.
            \param currentTime which will be set to the current model.
        */
        void setTime(double currentTime);

        /*!
            Returns the name attribute in the Model Class.
            \return string - the name attribute.
        */
        string getName() const;
        /*!
            Returns the time attribute in the Model Class.
            \return double - the time attribute.
        */
        double getTime() const;
        /*!
            Returns a system in the index-th position of the systems attribute Model Class.
            \return System* - a system in the index-th position of the systems attribute.
        */
        SystemInterface* getSystem(int index);
        /*!
            Returns a flow in the index-th position of the flows attribute Model Class.
            \return Flow* - a flow in the index-th position of the systems attribute.
        */
        FlowInteface* getFlow(int index);

        /*!
            This method increments the time attribute in the Model Class.
            \param increment which will define by how much time should increment.
        */
        void incrementTime(double increment);


};      

#endif