#include <iostream>
using namespace std;

//declaring function
int cube(int Input);
void calcSumAndDiff(int n1, int n2, int& sum, int& diff);
void rectangle(int w, int h);
float computePrice(char Size, int Topping);

//declaring variable

int main() {
cout << cube(5)  << '\n';
int sum;
int diff;
int& sumRef = sum;
int& diffRef = diff;
calcSumAndDiff(1, 2,sumRef,diffRef);
cout << sum  << '\n';
cout << diff  << '\n';
rectangle(5, 3);
float Pizza = computePrice('M', 4);
cout << Pizza << '\n';
   return 0;
}

int cube(int Input) {
  int TheCube;
  TheCube = (Input*Input*Input);
  return TheCube;
}

void calcSumAndDiff(int n1, int n2, int& sum, int& diff) {
  sum = (n1 + n2);
  if (n1 > n2) {
    diff = (n1 - n2);
  } else {
    diff = (n2 - n1);
  }
}

 void rectangle(int w, int h) {
   w-=1;
   h-=1;
   for (int i = 0; i <= h; i++) {
     for (int j = 0; j <= w; j++) {
       if (i==0 ||j==0||i==h||j== w) {
         cout << '*';
       } else {
         cout << ' ';
       }
     }
    cout << '\n';
   }
}
float computePrice(char Size, int Topping) {
  float Cost;
  if (Size=='S') {
    Cost = 50 + (5.50*Topping);
  } else if (Size=='M') {
    Cost = 70 + (6.50*Topping);
  } else {
    Cost = 90 + (7.50*Topping);
  }
  return Cost;
}
