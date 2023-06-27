//
// Created by ale on 27/06/23.
//

#ifndef PALANO_ES4_ACTIVITY_H
#define PALANO_ES4_ACTIVITY_H


#include <string>

class Activity {
private:
    float ore;
    float durata;
    float kcal;
    std::string descrizione;
    float minObiettivo;
public:
    Activity(float ore, float durata, float kcal, const std::string &descrizione, float minObiettivo);

    float getDurata() const;

    float getKcal() const;

    float getOre() const;

    void setMinObiettivo(float minObiettivo);

    void incrementMinObiettivo(float increment);

public:

};


#endif //PALANO_ES4_ACTIVITY_H
