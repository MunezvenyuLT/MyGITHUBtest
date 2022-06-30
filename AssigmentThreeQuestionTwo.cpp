#include <iostream>
using namespace std;

//declaring my global varaible here
string studentName;
string studentSurname;
string schoolName;
string subjectSymbol;
int subjectCode;
int Marks[6];
int subjectPassed;
string myResult;
string SubjectsWithDistinction;
int Min;
int Max;



// function declaration
void studentDetails();
int getMarks();
int calcAverageYearMark(int English, int Mathematics, int LifeOrientation, int History, int Computerliteracy, int Art );
void minMax(int inputMinMax[]);
string passOrFail(int Marks[6],int English, int subjectPassed);
string awardDistinction(int English, int Mathematics, int LifeOrientation, int History, int Computerliteracy, int Art );
void codeSymbol(int Subject, string subjectSymbol, int subjectCode);
void displayReport(int English, int Mathematics, int LifeOrientation, int History, int Computerliteracy,  int Art);

int main() {

  //declaring my varaible here
  int English;
  int Mathematics;
  int LifeOrientation;
  int History;
  int Computerliteracy;
  int Art;

  studentDetails();

  cout << "Please enter your marks of English: ";
  English = getMarks();
  cout << "Please enter your marks of Mathematics: ";
  Mathematics = getMarks();
  cout << "Please enter your marks of Life Orientation: ";
  LifeOrientation = getMarks();
  cout << "Please enter your marks of History: ";
  History = getMarks();
  cout << "Please enter your marks of Computer literacy: ";
  Computerliteracy = getMarks();
  cout << "Please enter your marks of Art: ";
  Art = getMarks();


   Marks[0] = English;
   Marks[1] = Mathematics;
   Marks[2] = LifeOrientation;
   Marks[3] = History;
   Marks[4] = Computerliteracy;
   Marks[5] = Art;

   SubjectsWithDistinction = awardDistinction (English, Mathematics, LifeOrientation, History, Computerliteracy, Art);
   displayReport(English, Mathematics,LifeOrientation,History, Computerliteracy, Art);
   return 0;
}

void studentDetails() {
  cout << "Please enter your name: ";
  cin >> studentName;
  cout << "Please enter your surname: ";
  cin >> studentSurname;
  cout << "Please enter the name of your school: ";
  cin.get();
  getline(cin,schoolName);
}

int getMarks() {
    int Marks;
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

int calcAverageYearMark(int English, int Mathematics, int LifeOrientation, int History, int Computerliteracy, int Art ) {
  int Average;
  Average = ((English + Mathematics + LifeOrientation + History + Computerliteracy + Art)/6);
  return Average;
}

void minMax(int inputMinMax[]) {
  Min = inputMinMax[0];
  Max = inputMinMax[0];
  for (int i = 0; i < 6; i++) {
    if (Max < inputMinMax[i] ) {
        Max = inputMinMax[i];
    }
  }
  for (int i = 0; i < 6; i++) {
    if (Min > inputMinMax[i] ) {
        Min = inputMinMax[i];
    }
  }
}

void passOrFail(int English) {
  for (int i = 0; i < 6; i++) {
    if ( Marks[i] > 49 ) {
      subjectPassed += 1;
    }
  }
  if (English > 49 && subjectPassed >3 ) {
    myResult ="Passed";
  } else {
    myResult ="Failed";
  }
}

string awardDistinction(int English, int Mathematics, int LifeOrientation, int History, int Computerliteracy, int Art ) {
    string SubjectsWithDistinction;
    if (English > 74) {
      SubjectsWithDistinction += " English ";
    }
    if (Mathematics > 74) {
        SubjectsWithDistinction += " Mathematics ";
    }
    if (LifeOrientation > 74) {
      SubjectsWithDistinction += " Life Orientation ";
    }
    if (History > 74) {
        SubjectsWithDistinction += " History ";
    }
    if (Computerliteracy > 74) {
        SubjectsWithDistinction += " Computer literacy ";
    }
    if (Art > 74) {
        SubjectsWithDistinction += " Art ";
    }

  return SubjectsWithDistinction;
}

 void codeSymbol(int Subject) {
   if (Subject >= 80) {
     subjectSymbol ="A";
     subjectCode = 7;
   } else if (Subject <= 79 && Subject >= 70 ) {
     subjectSymbol ="B";
     subjectCode = 6;
   } else if (Subject >= 60 && Subject <= 79 ) {
     subjectSymbol ="C";
     subjectCode = 5;
   }else if (Subject >= 50 && Subject <= 59 ) {
     subjectSymbol ="D";
     subjectCode = 4;
   }else if (Subject >= 40 && Subject <= 49 ) {
     subjectSymbol ="E";
     subjectCode = 3;
   }else if (Subject >= 30 && Subject <= 39 ) {
     subjectSymbol ="F";
     subjectCode = 2;
   } else {
     subjectSymbol ="FF";
     subjectCode = 1;
   }
 }

 void displayReport(int English, int Mathematics, int LifeOrientation, int History, int Computerliteracy,  int Art ) {
   int Average;
   cout << "\n**********************************************************************************" << '\n';
   cout << "\t**** STUDENT ACADEMIC RECORD **** " << '\n';
   cout << "This program inputs the learner marks of matric " << '\n';
   cout << "level subjects and prints the student final report. " << '\n';
   cout << "**********************************************************************************" << '\n';
   cout << "\nName: " << studentName << ' ' << studentSurname << " \t School: "<<schoolName<<"\n";
   cout << "\nSubject \t\t Mark \t Symbol \t Code " << '\n';
   codeSymbol(English);
   cout << "English \t\t " << English << "%" <<"\t  " << subjectSymbol<<" \t \t " << subjectCode << '\n';
   codeSymbol(Mathematics);
   cout << "Mathematics \t\t " << Mathematics << "%" <<"\t  " << subjectSymbol<<" \t \t " << subjectCode << '\n';
   codeSymbol(LifeOrientation);
   cout << "Life Orientation  \t" << LifeOrientation << "%" <<"\t  " << subjectSymbol<<" \t \t " << subjectCode << '\n';
   codeSymbol(History);
   cout << "History \t\t " << History << "%" <<"\t  " << subjectSymbol<<" \t \t " << subjectCode << '\n';
   codeSymbol(Computerliteracy);
   cout << "Computer literacy \t" << Computerliteracy << "%" <<"\t  " << subjectSymbol<<" \t \t " << subjectCode << '\n';
   codeSymbol(Art);
   cout << "Art \t\t\t " << Art << "%" <<"\t  " << subjectSymbol<<" \t \t " << subjectCode << '\n';
   Average = calcAverageYearMark(English, Mathematics, LifeOrientation, History, Computerliteracy, Art );
   codeSymbol(Average);
   cout << "\nAverage Year Mark: " << Average << " with Symbol: "<<subjectSymbol<< " Code: "<< subjectCode<<"\n";
   passOrFail(English);
   cout << "Outcome: "<<myResult<<"\n";
   minMax(Marks);
   cout << "The highest mark was: "<<Max<<"\n";
   cout << "The lowest mark was: "<<Min<<"\n";
   cout << "**********************************************************************************" << '\n';
 }
