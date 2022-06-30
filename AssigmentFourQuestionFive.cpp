#include <iostream>
using namespace std;



//declaring functions
int getScore();
int findLowest(int Mark1, int Mark2, int Mark3, int Mark4, int Mark5);
float calcAverage(int Mark1, int Mark2, int Mark3, int Mark4, int Mark5);
void displayOutput(float average);


int main() {
  //declaring variables
  int Mark1, Mark2, Mark3, Mark4, Mark5;
  float average;

  Mark1=getScore();
  Mark2=getScore();
  Mark3=getScore();
  Mark4=getScore();
  Mark5=getScore();
  average = calcAverage(Mark1, Mark2, Mark3, Mark4, Mark5);
  displayOutput(average);
   return 0;
}

int getScore() {
  int Marks;
  cout << "Enter Your Marks: ";
  cin >> Marks;
  while (Marks < 0 || Marks > 100 ) {
    cout << "Incorrect Percentage ! Enter again: ";
    cin >> Marks;
  }
  while (!cin) {
      cout << "Incorrect Percentage ! Enter again: ";
      cin.clear();
      cin.ignore();
      cin >> Marks;
  }
  return Marks;
}

int findLowest(int Mark1, int Mark2, int Mark3, int Mark4, int Mark5) {
  int lowestMark;
  int allMarks[5] ={Mark1,Mark2,Mark3,Mark4,Mark5};
  lowestMark = allMarks[0];
  for (int i = 0; i < 5; i++) {
    if (lowestMark > allMarks[i] ) {
        lowestMark = allMarks[i];
    }
  }
  return lowestMark;
}

float calcAverage(int Mark1, int Mark2, int Mark3, int Mark4, int Mark5) {
  float average;
  int lowestMark =findLowest(Mark1, Mark2, Mark3, Mark4, Mark5);
  if (lowestMark == Mark1 ) {
    average = ((Mark2+Mark3+Mark4+Mark5)/4);
  } else if (lowestMark == Mark2 ) {
    average = ((Mark1+Mark3+Mark4+Mark5)/4);
  } else if (lowestMark == Mark3 ) {
    average = ((Mark1+Mark2+Mark4+Mark5)/4);
  } else if (lowestMark == Mark4 ) {
    average = ((Mark1+Mark2+Mark3+Mark5)/4);
  } else if (lowestMark == Mark5 ) {
    average = ((Mark1+Mark3+Mark4+Mark2)/4);
  }
  return average;
}

void displayOutput(float average) {
 cout.precision(2);
 cout<<average;
}
