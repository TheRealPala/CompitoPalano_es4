//
// Created by ale on 27/06/23.
//

#include "Activity.h"

Activity::Activity(float ore, float durata, float kcal, const std::string &descrizione, float minObiettivo) : ore(ore),
                                                                                                              durata(durata),
                                                                                                              kcal(kcal),
                                                                                                              descrizione(descrizione),
                                                                                                              minObiettivo(minObiettivo) {}

void Activity::setMinObiettivo(float minObiettivo) {
    Activity::minObiettivo = minObiettivo;
}

float Activity::getOre() const {
    return ore;
}

float Activity::getDurata() const {
    return durata;
}

float Activity::getKcal() const {
    return kcal;
}

void Activity::incrementMinObiettivo(float increment) {
    this->minObiettivo += increment;
}

bool Activity::operator==(const Activity &rhs) const {
    return ore == rhs.ore &&
           durata == rhs.durata &&
           kcal == rhs.kcal &&
           descrizione == rhs.descrizione &&
           minObiettivo == rhs.minObiettivo;
}

bool Activity::operator!=(const Activity &rhs) const {
    return !(rhs == *this);
}
