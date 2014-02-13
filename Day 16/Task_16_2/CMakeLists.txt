project(task_16_2)

add_executable(task_16_2 stringer.h client.cpp)

install(TARGETS task_16_2 RUNTIME DESTINATION bin)
