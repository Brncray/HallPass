#include <iostream>
#include <fstream>
#include <chrono> 
int cards[4] = { 3234, 4200, 1234, 4021 };
void check_id(int card_id_input);
void checkout();
bool cardExists = false; 
bool studentLeft = false; 


int main() {
  std::cout << "Enter student id\n";
  
  int card_id_input;
  
  std::cin >> card_id_input;
  
  check_id(card_id_input);


}
void checkout() {
  if (cardExists = true)
  {
    std::cout << "Checking out...\nTimer starting\n";
    
    
  } else if (cardExists = false){
    std::cout << "Card doesn't exist. Check ID\n";
    
  }
  std::cout << "Bye bye.\n";
}







void check_id(int card_id_input)
{
  for (int i=0; i<4;i++)
    {
     if (cards[i] == card_id_input)
     {
       bool cardExists = true; 
       checkout();
     } else 
     {
       bool cardExists = false; 

       
     }
    }
}

