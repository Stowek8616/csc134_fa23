#include <iostream>

using namespace std;

int main()
{
int choice;

    cout << "You're trapped in a room with 3 doors. Behind the first door is a bloodthirsty wizard. Behind the second door is an army of angry roman soldiers. Behind the third door is a great 3 headed lion." << endl;
    cout << "Two doors will lead to your death, one will lead to your freedom. Make your choice." << endl;
    cout << "Type 1, 2 or 3." << endl;
    cin >> choice;

if (1 == choice) {
  	cout << "You chose the door with the wizard. He turns you into a frog and crushes you under his foot." << endl;
}
else if (2 == choice) {
  	cout << "You chose the door with the roman soldiers. They all impale you with their spears." << endl;
}
else if (3 == choice) {
  	cout << "You chose the door with the 3 headed lion. Luckily the beast was sleeping and you sneak past it. Congratulations!" << endl;
}

string choice2;
else {
  	cout << "You didn't choose a door, and instead looked around the room. You find a window near the top of a room and some loose bricks in the wall." << endl;
  	cout << "Do you want to try to climb up to the window or try to move the bricks?" << endl;
  	cout << "Type window or bricks." << endl;
    cin << choice2

if (window == choice2) {
    cout << "You climb up to the window, but as you climb you slip off the wall and fall down, breaking you neck and dying." << endl;
}
else if (bricks == choice2 ) {
    cout << "You move the loose bricks and it reveals a narrow passage. You crawl through the passage and it leads you outside. Congratulations!" << endl;
}
else {
    cout << "Your indecisiveness leads you sitting in the room and starving to death." << endl;
}
}
cout << "Thanks for playing!" << endl; // this runs no matter what they choose
return 0;
}
