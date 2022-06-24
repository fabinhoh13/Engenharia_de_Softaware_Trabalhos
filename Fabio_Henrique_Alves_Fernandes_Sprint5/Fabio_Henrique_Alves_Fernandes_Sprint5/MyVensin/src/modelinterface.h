#ifndef MODEL_INTERFACE_H
#define MODEL_INTERFACE_H

#include "flowinterface.h"
#include <vector>

//! Class ModelInterface
/**
* This Class represents a model in the General Systems Theory implemented in this code.
*/
class ModelInterface{
    public:
        typedef vector <SystemInterface*> :: iterator systemIterator;
        typedef vector <FlowInteface*> :: iterator flowIterator;

        virtual systemIterator beginSystems() = 0; /*!< Returns the iterator to the beginning of systems attribute. */
        virtual systemIterator endSystems() = 0; /*!< Returns the iterator to the end of systems attribute. */

        virtual flowIterator beginFlows() = 0; /*!< Returns the iterator to the beginning of flows attribute. */
        virtual flowIterator endFlows() = 0; /*!< Returns the iterator to the end of flows attribute. */

        /*!
            This is the default destructor for the ModelInterface Class.
        */
        virtual ~ModelInterface() {}

        /*!
            Executes all the flows in the model.
            \param start the initial time.
            \param final the final time.
            \param increment represents the iteration step.
        */
        virtual void execute (double start, double final, double increment) = 0;

        static ModelInterface* createModel(string name, double time);
        virtual SystemInterface* createSystem(string name, double value) = 0;
        template <typename T_FLOW>
        FlowInteface* createFlow(SystemInterface* source = nullptr, SystemInterface* destination = nullptr){
            FlowInteface* flow = new T_FLOW();
            flow->setSource(source);
            flow->setTarget(destination);
            add(flow);
            return flow;
        }


        /*!        
           Adds a system's pointer to the systems vector.
           \param sys the system to be added.
        */ 
        virtual void add (SystemInterface *sys) = 0;
        /*!        
           Removes a system's pointer on the systems vector.
           \param sys which will be removed from the vector flows.  
        */ 
        virtual void remove (SystemInterface *sys) = 0;

        /*!        
           Adds a flow's pointer to the flows vector. 
           \param flow the flow to be added.
        */ 
        virtual void add (FlowInteface *flow) = 0;
        /*!
           Removes a flow's pointer on the flows vector.
           \param flow which will be removed from the vector flows. 
        */
        virtual void remove (FlowInteface *flow) = 0;

        // Getters
        /*!
            Returns the name attribute in the ModelInterface Class.
            \return string - the name attribute.
        */
        virtual string getName() const = 0;
        /*!
            Returns the time attribute in the ModelInterface Class.
            \return double - the time attribute.
        */
        virtual double getTime() const = 0;
        /*!
            Returns a system in the index-th position of the systems attribute ModelInterface Class.
            \return System* - a system in the index-th position of the systems attribute.
        */
        virtual SystemInterface* getSystem (int index) = 0;
        /*!
            Returns a flow in the index-th position of the flows attribute ModelInterface Class.
            \return Flow* - a flow in the index-th position of the systems attribute.
        */
        virtual FlowInteface* getFlow (int index) = 0;

        // Setters
        /*!
            Sets the name attribute in the ModelInterface Class.
            \param modelName which will be set to the current model.
        */
        virtual void setName (string modelName) = 0;
        /*!
            Sets the time attribute in the ModelInterface Class.
            \param currentTime which will be set to the current model.
        */
        virtual void setTime(double currentTime) = 0;

        /*!
            This method increments the time attribute in the ModelInterface Class.
            \param increment which will define by how much time should increment.
        */
        virtual void incrementTime(double increment) = 0;
};
#endif