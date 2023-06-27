//
// Created by ale on 27/06/23.
//

#ifndef PALANO_ES4_ACTIVITYREGISTER_H
#define PALANO_ES4_ACTIVITYREGISTER_H


#include <vector>
#include "Activity.h"

class ActivityRegister {
private:
    float oreTotali;
    float durataTotale;
    float calorieTotali;
    std::vector<Activity> activities;
public:
    ActivityRegister(){
        oreTotali = 0;
        durataTotale = 0;
        calorieTotali = 0;
    }
    void addActivity(const Activity& activity);
    void removeActivity(const Activity& activity);
    void getStatus();
};


#endif //PALANO_ES4_ACTIVITYREGISTER_H
