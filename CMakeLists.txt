cmake_minimum_required(VERSION 3.20)
project(EventBus)

set(CMAKE_CXX_STANDARD 17)

add_executable(EventBus main.cpp EventBus/IObservable.h EventBus/Event.h EventBus/EventBus.cpp EventBus/EventBus.h User/User.cpp User/User.h)
