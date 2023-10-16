//
// Created by Jhosh on 2023-10-14.
//

#include "declarations/UI.h"

void UI::welcomeView() {
    int choice;
    std::cout << "Welcome to Pantry!" << std::endl;
    std::cout << "\nPlease login or register" << std::endl;
    std::cout << "1. Login" << std::endl;
    std::cout << "2. Register" << std::endl;

    std::cin >> choice;

    if(choice == 1){
        loginView();
    }
    else if(choice == 2){
        registerView();
    }
    else{
        std::cout << "Invalid choice" << std::endl;
        welcomeView();
    }

}
void UI::loginView() {
    std:: string userName;
    std:: string password;

    std::cout << "Login View\n" << std::endl;
    std::cout << "Enter username:";
    std::cin >> userName;
    std::cout << "Enter password:";
    std::cin >> password;

    verifyUser(userName, password);


}
bool UI::verifyUser(std::string username, std::string password) {
    if(username == "admin" && password == "admin"){
        letUserIn = true;
        return true;
    }
    else{
        std::cout << "Invalid username or password" << std::endl;
    }
    letUserIn = false;
    loginView();
    return false;

}
void UI::registerView() {
    std::cout << "Register View" << std::endl;

}
void UI::mainView() {


    std::cout << "\nMenu View:" << std::endl;
    std::cout << "1. View Pantry Items" << std::endl;
    std::cout << "2. Add Pantry Item" << std::endl;
    std::cout << "3. Remove Pantry Item" << std::endl;
    std::cout << "4. Exit" << std::endl;


}
int UI::getUserChoice() {
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}
void UI::run() {
    bool letIn = false;

    welcomeView();


    while(letUserIn){
        mainView();
        int choice = getUserChoice();
        if(choice == 1){
            std::cout << "View Pantry Items" << std::endl;
        }
        else if(choice == 2){
            std::cout << "Add Pantry Item" << std::endl;
        }
        else if(choice == 3){
            std::cout << "Remove Pantry Item" << std::endl;
        }
        else if(choice == 4){
            std::cout << "Exit" << std::endl;
            break;
        }
        else{
            std::cout << "Invalid choice" << std::endl;
        }
    }
}