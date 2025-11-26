#include "../PPP/PPPheaders.h"

int main() {
  string name;
  int age = -1;
  cout << "Enter your name and age:\n";
  cin >> name >> age;
  double ageInMonths = age * 12;

  cout << "Your age in months is: " << ageInMonths << "\n";
}