#include <iostream>
#include "abstractobserver.h"
#include "subject.h"
using namespace std;

int main()
{

    subject* s = new subject();
    Observer* ob1 = new Observer();
    ObserverEx* ob2 = new ObserverEx();
    s->registerObserver(ob1);
    s->registerObserver(ob2);
    s->setState (10);

    cout<<"开始反注册观察者对象"<<endl;
    s->removeObserver(ob1);
    //s->registerObserver(ob2);
    s->setState (12);

    return 0;
}

