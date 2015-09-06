#ifndef ABSTRACTOBSERVE
#define ABSTRACTOBSERVE
#include <iostream>
using namespace std;

class abstractObserver{

public:
    abstractObserver(){}
    virtual ~abstractObserver(){}

public:
    virtual void update() = 0;
};

class Observer : public abstractObserver{
public:
    Observer(){}
    virtual ~Observer(){}

public:
    virtual void update(){
     cout<<"update------------Observer"<<endl;
    }
};

class ObserverEx: public abstractObserver{

public:
    virtual void update(){
        cout<<"update-------ObserverEx"<<endl;
    }
};

#endif // ABSTRACTOBSERVE

