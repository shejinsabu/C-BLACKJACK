#include <iostream>
#include <ctime>
using namespace std;


int main() {
  srand(time(nullptr)); 
  int cardValuePlayer;
  int playerCount = 0;
  int cardValueHost;
  int hostCount = 0;
  string name;
  int randP3;
  int hostP3;
  const char myArray[13] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'K', 'Q', 'J', 'A'};
  cout << "Welcome to C++ Blackjack! Please enter your name to get started: " << endl;
  cin >> name;
  cout << endl;
  
  cout << "Welcome to the C(++)asino, " << name << "!!. I am your host, and I will now give you 2 cards, one face up and one face down. " << endl;
cout << endl;

  
//PLAYER FIRST CARD
  int RandIndex = rand() % 13; 

  cout << "Your card is: " << myArray[RandIndex];

  if(myArray[RandIndex] == 'K' || myArray[RandIndex] == 'Q' || myArray[RandIndex] == 'J' || myArray[RandIndex] == 'A'){
    cardValuePlayer = 10;
  }
  else{
    cardValuePlayer = myArray[RandIndex] - '0';
  }
  playerCount += cardValuePlayer;
  cout << endl;
  cout << endl;


   //HOST FIRST CARD
  cout << "Are you ready to see my first card? Y/N" << endl;
  string c1;
  cin >> c1;

  
  if(c1 == "Y" || c1 == "y" || c1 == "yes"){
  cout << "Now time to see my beginning card... " << endl;
  int ranInd = rand() % 13; 

  cout << "My card is: " << myArray[ranInd];

  if(myArray[ranInd] == 'K' || myArray[ranInd] == 'Q' || myArray[ranInd] == 'J' || myArray[ranInd] == 'A'){
    cardValueHost = 10;
  }
  else{
    cardValueHost = myArray[ranInd] - '0';
  }
  hostCount += cardValueHost;
  cout << endl;
  cout << endl;
  }



//PLAYER SECOND (FACEDOWN) CARD
  cout << "Are you ready to see your second card? Y/N" << endl;
  string c2;
  cin >> c2;

  if(c2 == "Y" || c2 == "y" || c2 == "yes"){
  cout << "Now it's time to flip your face-down card. " << endl;

  int RandIndex2 = rand() % 13;


  cout << "Your second card is: " << myArray[RandIndex2];

  if(myArray[RandIndex2] == 'K' || myArray[RandIndex2] == 'Q' || myArray[RandIndex2] == 'J' || myArray[RandIndex2] == 'A'){
    cardValuePlayer = 10;
  }
  else{
    cardValuePlayer = myArray[RandIndex2] - '0';
  }
  playerCount += cardValuePlayer;
  cout << endl;
  cout << endl;
  }
  
//HOST SECOND (FACEDOWN) CARD
  cout << "Are you ready to see my second card? Y/N" << endl;
  string c3;
  cin >> c3;

  if(c3 == "Y" || c3 == "y" || c3 == "yes"){
  cout << "Time to see my face-down card! " << endl;
  int ranInd2 = rand() % 13;

  cout << "My second card is: " << myArray[ranInd2];

  if(myArray[ranInd2] == 'K' || myArray[ranInd2] == 'Q' || myArray[ranInd2] == 'J' || myArray[ranInd2] == 'A'){
    cardValueHost = 10;
  }
  else{
    cardValueHost = myArray[ranInd2] - '0';
  }
  hostCount += cardValueHost;
  cout << endl;
  cout << endl;

  }
  
//TOTALS
  cout << "Here are the totals for me and you right now..." << endl;
  cout << name << ": " << playerCount << endl;
  cout << "Host: " << hostCount << endl;



  
//CHOOSING TO HIT
  string choice;
  cout << endl;
  cout << "Hit or no? Type YES or HIT" << endl;
  cin >> choice;

  if(choice == "YES" || choice == "HIT" || choice == "yes" || choice == "Y" || choice == "y"){
      randP3 = rand() % 13;

      cout << "Your second card is: " << myArray[randP3];

    if(myArray[randP3] == 'K' || myArray[randP3] == 'Q' || myArray[randP3] == 'J' || myArray[randP3] == 'A'){
    cardValuePlayer = 10;
  }
  else{
    cardValuePlayer = myArray[randP3] - '0';
  }
  playerCount += cardValuePlayer;
  cout << endl;
  cout << endl;

  
  if(playerCount > 21){
    cout << "Sorry loser you lost! Hahahaha!!!" << endl;
  }
  else{
    if(hostCount <= 15 || playerCount > hostCount){
      cout << "I will also choose to hit!" << endl;
      hostP3 = rand() % 13;
      cout << "My card is: " << myArray[hostP3] << endl;
      if(myArray[hostP3] == 'K' || myArray[hostP3] == 'Q' || myArray[hostP3] == 'J' || myArray[hostP3] == 'A'){
    cardValueHost = 10;
  }
  else{
    cardValueHost = myArray[hostP3] - '0';
  }
  hostCount += cardValueHost;
  cout << endl;
  cout << endl;
    }
    else{
      cout << "I am going to keep my cards and not hit." << endl;
    }
    cout << name << " card value: " << playerCount << endl;
    cout << "Host card value: " << hostCount << endl;
    if(playerCount > hostCount){
      cout << "Congrats!! YOU WON!!" << endl;
      if(playerCount == 21){
        cout << "YOU GOT A PERFECT 21!!!!" << endl;
      }
    }
    else if(hostCount > playerCount){
      cout << "YOU LOST!! LOSER!!" << endl;
      if(hostCount == 21){
        cout << "I GOT A PERFECT 21!!!!" << endl;
      }
    }
  }
    
  }
  //if choose to not hit
  else{
     if(hostCount <= 15 || playerCount > hostCount){
      cout << "I will choose to hit!" << endl;
      hostP3 = rand() % 13;
      cout << "My card is: " << myArray[hostP3] << endl;
      if(myArray[hostP3] == 'K' || myArray[hostP3] == 'Q' || myArray[hostP3] == 'J' || myArray[hostP3] == 'A'){
    cardValueHost = 10;
  }
  else{
    cardValueHost = myArray[hostP3] - '0';
  }
  hostCount += cardValueHost;
  cout << endl;
  cout << endl;
    }
       //editing else statement
    else{
      cout << "I would not like to hit either." << endl;
    }
    cout << name << " card value: " << playerCount << endl;
    cout << "Host card value: " << hostCount << endl;
    if(playerCount > hostCount){
      cout << "Congrats!! YOU WON!!" << endl;
      if(playerCount == 21){
        cout << "YOU GOT A PERFECT 21!!!!" << endl;
      }
    }
      //PROBLEM HERE
    else if(hostCount > playerCount || (hostCount > playerCount && hostCount >= 21)){
      cout << "YOU LOST!! LOSER!!" << endl;
      if(hostCount == 21){
        cout << "I GOT A PERFECT 21!!!!" << endl;
      }
    }


    
  }
  

  

  
  

  

  
}