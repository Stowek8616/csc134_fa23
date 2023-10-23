#include <iostream>
#include <string>

using namespace std;

void main_menu();
void choice_front_door();
void choice_back_house();
void choice_go_home();
void choice_garden_shed();
void choice_living_room();
void choice_roof();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    string choice;
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_front_door();
    } else if (choice == "2") {
        choice_back_house();
    } else if (choice == "3") {
        choice_go_home();
    } else if (choice == "4") {
        cout << "Ok, quitting game" << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        main_menu();
    }
}

void choice_front_door() {
    string choice;
    cout << "Try the front door." << endl;
    cout << "It's locked." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_back_house();
    } else if (choice == "2") {
        choice_go_home();
    } else {
        cout << "You have to choose..." << endl;
        choice_front_door();
    }
}

void choice_back_house() {
    string choice;
    cout << "You walk around back and see and jump over the fence into the backyard." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the back door" << endl;
    cout << "2. Enter the garden shed" << endl;
    cin >> choice;
    if(choice == "1") {
        choice_living_room();
    } else if (choice == "2") {
        choice_garden_shed();
    } else {cout << "You have to choose..." << endl;
        choice_back_house();
    }
}

void choice_garden_shed() {
    string choice;
    cout << "Inside the Garden Shed you found a ladder." << endl;
    cout << "Do you want to use the ladder to get to the roof or go back and try the back door?" << endl;
    cout << "1. Go back and climb to the roof." << endl;
    cout << "2. Go back and try the back door." << endl;
    cin >> choice;
    if(choice == "1") {
        choice_roof();
    } else if (choice == "2") {
        choice_living_room();
    } else {cout << "You have to choose..." << endl;
        choice_garden_shed();
    }
}

void choice_living_room() {
cout << "TODO" << endl;
}

void choice_roof() {
cout << "TODO" << endl;
}
void choice_go_home() {
    cout << "You go home and have a boring, uneventful day." << endl;
}
