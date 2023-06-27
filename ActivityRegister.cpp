//
// Created by ale on 27/06/23.
//

#include <algorithm>
#include <iostream>
#include "ActivityRegister.h"

void ActivityRegister::addActivity(const Activity &activity) {
    activities.push_back(activity);
    oreTotali += activity.getOre();
    durataTotale += activity.getDurata();
    calorieTotali += activity.getKcal();
}

void ActivityRegister::removeActivity(const Activity& activity) {
    activities.erase(std::remove(activities.begin(), activities.end(), activity), activities.end());
    oreTotali -= activity.getOre();
    durataTotale -= activity.getDurata();
    calorieTotali -= activity.getKcal();
}

void ActivityRegister::getStatus() {
    std::cout << "Ore totali sveglio: " << oreTotali << std::endl;
    std::cout << "Durata totale attivita': " << durataTotale << std::endl;
    std::cout << "Calorie totali bruciate : " << calorieTotali << std::endl;
}
