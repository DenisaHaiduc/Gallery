//
// Created by Denisa on 5/28/2024.
//

#ifndef UI_H
#define UI_H
#include "Service.h"


class UI {
private:
    Service s;
public:
    UI();
    UI(Service s);
    ~UI();
    void run();

};



#endif //UI_H
