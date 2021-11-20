//
// Created by a.ershkov on 20.11.2021.
//

#ifndef EVENTBUS_EVENT_H
#define EVENTBUS_EVENT_H

#include <vector>
#include <string>

enum Types {
    user_moved,
    user_start_quest,
};

struct UserMovedEventData {
    int x;
    int y;
};

struct UserStartQuestData {
    std::string quest_name;
    std::string user_name;
};

struct Event {
    Types type;
    UserMovedEventData user_moved;
    UserStartQuestData user_start_quest;
};

#endif //EVENTBUS_EVENT_H
