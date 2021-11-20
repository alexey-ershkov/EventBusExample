//
// Created by a.ershkov on 20.11.2021.
//

#ifndef EVENTBUS_USER_H
#define EVENTBUS_USER_H


#include <string>

#include "../EventBus/IObservable.h"
#include "../EventBus/Event.h"

class User : public IObservable {
public:
    std::string name;
    int x;
    int y;
    std::string quest_name;

    User(std::string user_name) {
        name = user_name;
        quest_name = "";
        x = 0;
        y = 0;
    }

    void update(std::vector<Event> event) override;
    void update(Event event) override;
};


#endif //EVENTBUS_USER_H
