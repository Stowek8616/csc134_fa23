#include <iostream>

using namespace std;

/*
CSC 134
Kyle Stowe
M4LAB1
*/

void drawHLine(int width) {
 for (int i = 0; i < width; i++) {
 cout << " *";
    }
 }

 void drawVLine(int height) {
 for (int i = 0; i < height; i++) {
   cout << " *";
    }
 }
int main()
{
  int width;
  cout << "Enter the width: ";
  cin >> width;
  drawHLine(width);
  cout << endl;

  int height;
  cout << "Enter the height: ";
  cin >> height;
  drawVLine(height);
  cout << endl;
  cout << endl;
  cout << endl;

  for (int i =0; i < height; i++ ) {
    for (int j = 0; j < width; j++) {
        cout << " *";
    }
    cout << endl;
  }
  return 0;
}


