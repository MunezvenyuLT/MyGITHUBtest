#include <iostream>
using namespace std;

//declaring functions
void getData();
int calculateVolume();
void displayOutput();
//declaring goblal variable
int theHeight, theWidth,theLength;

int main() {
  for (int i = 0; i < 5; i++) {
    getData();
    displayOutput();
  }
   return 0;
}
void getData() {
  cout << "Please enter the height of the room : ";
  cin >> theHeight;
  cout << "Please enter the width of the room : ";
  cin >> theWidth;
  cout << "Please enter the length of the room : ";
  cin >> theLength;
}
int calculateVolume(){
  int volume;
  volume = theHeight * theWidth * theLength;
  return volume;
}
void displayOutput() {
  int volume =calculateVolume();
  if (volume<100) {
  cout << "The volume of a room with height "<< theHeight<<"  width  "<< theWidth << " and lenght  "<< theLength<<" is "<<volume<<". Size : Small"<<"\n";
} else if (volume>=100&&volume<=500) {
  cout << "The volume of a room with height "<< theHeight<<"  width  "<< theWidth << " and lenght  "<< theLength<<" is "<<volume<<". Size : Meduim"<<"\n";
  } else {
  cout << "The volume of a room with height "<< theHeight<<"  width  "<< theWidth << " and lenght  "<< theLength<<" is "<<volume<<". Size : Large"<<"\n";
  }

}
