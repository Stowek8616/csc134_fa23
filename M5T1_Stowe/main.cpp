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
void choice_doll();
void choice_hallway();
void choice_kitchen();
void choice_run();
void choice_fight();
void choice_altar();

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
    cout << "Do you:" << endl;
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
    string choice;
    cout << "You approach the back door and open it without resistance. " << endl;
    cout << "As you walk into the dim living room you see a set of stairs leading up to the 2nd floor and a doorway leading into the kitchen." << endl;
    cout << "From the kitchen you hear something boiling and the smell of fresh stew." << endl;
    cout << "Do you:" << endl;
    cout << "1. Ignore the smell of food and head upstairs." << endl;
    cout << "2. Walk into the kitchen and find something to eat." << endl;
    cin >> choice;
    if(choice == "1") {
        choice_hallway();
    } else if (choice == "2") {
        choice_kitchen();
    } else {cout << "You have to choose..." << endl;
        choice_living_room();
    }
}

void choice_roof() {
    string choice;
    cout << "You climb onto the roof and find an open window that leads onto the 2nd floor." << endl;
    cout << "You crawl through the window and find yourself in a child's bedroom. You look around and see a door and a doll in the corner." << endl;
    cout << "Do you:" << endl;
    cout << "1. Open the door and go into the hallway." << endl;
    cout << "2. Investigate the little doll." << endl;
    cin >> choice;
    if(choice == "1") {
        choice_hallway();
    } else if (choice == "2") {
        choice_doll();
    } else {cout << "You have to choose..." << endl;
        choice_roof();
    }
}

void choice_hallway() {
    string choice;
    cout << "You walk into the hallway and look around, but you soon realize that the way you came from is gone, and the only thing in the hallway is an ornate door standing there." << endl;
    cout << "The door opens, and a tall, thin, woman with a butchers knife appears. Brandishing the knife, she charges at you." << endl;
    cout << "Do you:" << endl;
    cout << "1. Attack the woman and try to wrestle the knife from her hands." << endl;
    cout << "2. Try  to run past the woman and run through the ornate door." << endl;
    cin >> choice;
    if(choice == "1") {
        choice_fight();
    } else if (choice == "2") {
        choice_run();
    } else {cout << "You have to choose..." << endl;
        choice_hallway();
    }
}

void choice_fight() {
    string choice;
    cout << "You let the woman charge at you and grab at her knife at the last moment." << endl;
    cout << "But despite her thin frame, she is surprisingly strong and simply plunges the knife into you, killing you." << endl;
}

void choice_run() {
    string choice;
    cout << "You spring past the woman and quickly scurry into the room, slamming the door shut behind you." << endl;
    cout << "You quickly barricade the door with a chair as the woman smashing into it, trying to get in." << endl;
    cout << "You quickly survey the room looking for something to fight back with." << endl;
    cout << "At the back of the room you see a shrine, atop it is a human skull." << endl;
    cout << "Do you:" << endl;
    cout << "1. Smash the Altar." << endl;
    cout << "2. Smash the Altar." << endl;
    cin >> choice;
    if(choice == "1") {
        choice_altar();
    } else if (choice == "2") {
        choice_altar();
    } else {cout << "You have to choose..." << endl;
        choice_run();
    }
}

void choice_altar() {
    cout << "The woman breaks the door down and gets into the room as you pick up the skull and smash it into the altar." << endl;
    cout << "As the altar crumbles, the woman screams and falls to the floor turning to dust." << endl;
    cout << "You step outside of the room to find the hallway returned to normal and the way out visible." << endl;
    cout << "It seems the haunted house and the woman was connected to that altar and destroying it ended the nightmare." << endl;
    cout << "You leave the house and vow never to enter an abandoned building ever again." << endl;
}
void choice_kitchen() {
    cout << "You walk into the kitchen and see a pot of stew sitting on the stove." << endl;
    cout << "You approach the stew and as you stand there looking at it you feel a knife cut into your back." << endl;
    cout << "You look down and see the knife sticking through your chest as you fade out and die." << endl;
}
void choice_doll() {
    cout << "You investigate the doll and as you approach it the doll lunges out at you and kills you instantly." << endl;
}
void choice_go_home() {
    cout << "You go home and have a boring, uneventful day." << endl;
}
