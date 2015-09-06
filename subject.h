#ifndef SUBJECT
#define SUBJECT
#include <vector>
#include "abstractobserver.h"
using namespace std;

class abstractSubject{
public:
     virtual ~abstractSubject(){}

public:
    virtual void registerObserver(abstractObserver* ob) = 0;
    virtual void removeObserver(abstractObserver* ob) = 0;
};

class subject : public abstractSubject{
public:
    subject(){}
    ~subject(){}

public:
    virtual void registerObserver(abstractObserver* ob){
        observers.push_back (ob);
    }

    virtual void removeObserver(abstractObserver* ob){
        // delete observers;
        for (vector<abstractObserver*>::iterator it = observers.begin ();
             it != observers.end (); ++it)
        {
            if (*it == ob)
            {
                observers.erase (it);
            }
        }
    }

    void setState(int st){
        cout<<"--------setState"<<endl;
        status = st;
        notifyObservers ();
    }

protected:
    void notifyObservers(){
        for (int i = 0; i < observers.size (); ++i)
        {
            observers.at (i)->update();
        }
    }

private:
    int status;
    vector<abstractObserver*> observers;
};

#endif // SUBJECT

