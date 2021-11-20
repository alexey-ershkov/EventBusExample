#include <iostream>
#include "EventBus/EventBus.h"
#include "User/User.h"

void print_user_params(const User &user) {
    std::cout << "Coordinates: x = " << user.x << ", y = " << user.y << std::endl;
    std::cout << "Quest name: " << user.quest_name << std::endl;
}

int main() {
    auto event_bus = EventBus();
    auto user_pit = User("Pete");
    event_bus.subscribe(&user_pit, user_moved);
    event_bus.subscribe(&user_pit, user_start_quest);

    while (true) {
        print_user_params(user_pit);

        int type = -1;
        std::cin >> type;


        switch (type) {
            case user_moved: {
                Event user_moved_event;
                user_moved_event.type = user_moved;
                user_moved_event.user_moved = {.x = 10, .y = 20};
                event_bus.dispatch(user_moved, user_moved_event);
                break;
            }
            case user_start_quest: {
                Event user_quest_event;
                user_quest_event.type = user_start_quest;
                user_quest_event.user_start_quest = {.quest_name = "Quest with id 1", .user_name="Pete"};
                event_bus.dispatch(user_start_quest, {user_quest_event});
                break;
            }
            default:
                break;
        }
    }


    return 0;
}
