//
// Created by a.ershkov on 20.11.2021.
//

#ifndef EVENTBUS_EVENTBUS_H
#define EVENTBUS_EVENTBUS_H

#include "IObservable.h"
#include <vector>

struct Subscriber {
    IObservable *sub;
    int type;
};

class EventBus {
public:
    void subscribe(IObservable *sub, int type);
    void unsubscribe(IObservable *sub, int type);

    void dispatch(int type, const Event& event);

private:
    std::vector<Subscriber> subscribers;
};


#endif //EVENTBUS_EVENTBUS_H
