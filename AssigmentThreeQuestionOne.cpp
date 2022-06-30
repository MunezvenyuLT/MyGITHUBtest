#include <iostream>
using namespace std;
 // declaring varaible
double weight;
double height;
double bmi;

// function declaration
void getData();
void calcBMI();
void displayFitnessResults();

int main() {
  getData();
  calcBMI();
  displayFitnessResults();
   return 0;
}

void getData() {
  cout << "Pleas enter your weight: ";
  cin >> weight;
  cout << "Pleas enter your height: ";
  cin >> height;
}
void calcBMI() {
  bmi=weight/(height*height);
}

void displayFitnessResults() {
  if (  bmi >= 30.0) {
    cout << "Your BMI is : "<< bmi << " so your weight status is obese ";
  } else if (bmi < 30.0 && bmi >= 25.0 ) {
    cout << "Your BMI is : "<< bmi << " so your weight status is overweight ";
  }else if (bmi < 25.0 && bmi >= 18.5 ) {
    cout << "Your BMI is : "<< bmi << " so your weight status is healthy ";
  }else if (bmi < 18.5 ) {
    cout << "Your BMI is : "<< bmi << " so your weight status is underweight ";
  }
}
