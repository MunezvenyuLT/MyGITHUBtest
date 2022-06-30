#include <iostream>
using namespace std;

//declaring variable
string name, addr1, addr2, postalCode;

void inputData();
void displayData();
int main() {
  inputData();
  displayData();
   return 0;
}
void inputData() {
  cout << "Enter Your Fullname: " << '\n';
  getline(cin,name);
  cout << "Enter Your House Number: " << '\n';
  getline(cin,addr1);
  cout << "Enter Your City: " << '\n';
  getline(cin,addr2);
  cout << "Enter Your Postal Code: " << '\n';
  getline(cin,postalCode);
}
void displayData() {
  cout << name << '\n';
  cout << "P.O. Box" << '\n';
  cout << postalCode << '\n';
  cout << addr2 << '\n';
  cout << addr1 << '\n';
}
