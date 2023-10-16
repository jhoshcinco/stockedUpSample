//
// Created by Jhosh on 2023-10-14.
//

#ifndef STOCKEDUPSAMPLE_UI_H
#define STOCKEDUPSAMPLE_UI_H
#include <string>
#include <iostream>



class UI {

public:
    void welcomeView();
    void loginView();
    void registerView();
    void mainView();
    int getUserChoice();
    void run();
    bool verifyUser(std::string username, std::string password);
    bool letUserIn;



};


#endif //STOCKEDUPSAMPLE_UI_H
