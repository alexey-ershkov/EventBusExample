//
// Created by a.ershkov on 20.11.2021.
//

#include "User.h"

void User::update(Event event) {
    if (event.type == user_moved) {
        x = event.user_moved.x;
        y = event.user_moved.y;
    }

    if (event.type == user_start_quest && event.user_start_quest.user_name == name) {
        quest_name = event.user_start_quest.quest_name;
    }
}

