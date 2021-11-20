//
// Created by a.ershkov on 20.11.2021.
//

#ifndef EVENTBUS_IOBSERVABLE_H
#define EVENTBUS_IOBSERVABLE_H

#include "Event.h"

class IObservable {
public:
    virtual void update(Event event) = 0;
};

#endif //EVENTBUS_IOBSERVABLE_H
