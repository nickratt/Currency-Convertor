#include <iostream>
#include "convertor.h"
using namespace std;

void intro(){
  cout << "************************" << endl;
  cout << "***Currency Convertor***" << endl;
  cout << "************************" << endl;
}

void conversion(){
  cout << "Options for conversions" << endl;
  cout << "1. Pesos" << endl;
  cout << "2. Yen" << endl;
  cout << "3. Pound" << endl;
}

int main() {
  char ans;
  do{
  int input; 
  int usd;
  

  intro();
  conversion();

cout << "Which conversion would you like to do?" << endl;
cin >> input;

cout << "How much US Dollars would you like to convert?: " << flush;
cin >> usd;

switch(input){
  case 1:
  pesos(usd);
  cout << "This is the amount you have in pesos: " << pesos(usd) << endl;
  break;
  case 2:
  yen(usd);
  cout << "This is the amount you have in pesos: " << yen(usd) << endl;
  break;
  case 3:
  pound(usd);
  cout << "This is the amount you have in pesos: " << pound(usd) << endl;

}
cout << "Would you like to do another conversion? y/n: " << flush;
cin >> ans;
}
while (ans == 'y');

}



