//
//  main.cpp
//  ca9
//
//  Created by Andrea d Cazares on 9/15/24.
//

#include <iostream>
using namespace std;

bool citizenCheck(char userInput);
bool degreeCheck (char userInput1);
bool experienceCheck(char userInput2);

int main(){

    char userInput, userInput1,userInput2;
    cout << "Are you a US citizen? Please type Y/N \n"; //check
    cin >> userInput;
    if (!citizenCheck(userInput)) {
        return 0; //cancels
    }

    cout<< "Do you have a bachelors degree? \n"; //check
    cin>> userInput1;
    if (!degreeCheck (userInput1)){
        return 0;
    }
  

    cout<< "Do you have at least 2 years of experience?\n";
    cin>> userInput2;
   if (!experienceCheck(userInput2)) {
        return 0;  // Exit if not enough experience
    }

    cout<< "Congrats! you can now submit an application to this positiony.\n";//if y to all

 return 0;

}

bool citizenCheck(char userInput){
      if (userInput == 'y' || userInput == 'Y' ){
        cout << " You may continue with the application\n\n";
        return true;
    }
    else if (userInput == 'n' || userInput == 'N' ) {
        cout<< "Sorry you are ineligible for this position, you may exit the application now. \n\n";
        return false;
    }
    else {
        cout<< "Invalid. please type y or n \n\n";
        return false;
    }

}

bool degreeCheck (char userInput1){
    if (userInput1 == 'y' || userInput1 == 'Y' ){
        cout << " You may continue with the application\n\n";
        return true;
    }
    else if (userInput1 == 'n' || userInput1 == 'N' ) {
       cout<< "Sorry you are ineligible for this position, you may exit the application now. \n\n";
       return false;
    }
    else {
        cout<< "Invalid. please type y or n \n\n";
        return false;
    }
}

bool experienceCheck(char userInput2){
     if (userInput2 == 'y' || userInput2 == 'Y' ){
        cout << " You may continue with the application\n\n";
        return true;
    }
    else if (userInput2 == 'n' || userInput2 == 'N' ) {
        cout<< "Sorry you are ineligible for this position, you may exit the application now. \n\n";
        return false;
    }
    else {
        cout<< "Invalid. please type y or n \n\n";
        return false; //not allowed too
    }
}
