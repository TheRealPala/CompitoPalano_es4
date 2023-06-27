#include <iostream>
#include "ActivityRegister.h"

int main() {
    ActivityRegister ar;
    Activity a1 = Activity(2, 1.5, 350, "Activity 1", 10);
    ar.addActivity(a1);
    ar.getStatus();
    std::cout << std::endl;
    Activity a2 = Activity(3, 2, 480, "Activity 2", 20);
    ar.addActivity(a2);
    ar.getStatus();
    std::cout << std::endl;
    ar.removeActivity(a1);
    ar.getStatus();
    return 0;
}
