#include <iostream>


int main() {
// std::cout << "Enter Money Here: ";
// int Money;
// std::cin >> Money;
// double pi = 3.14;
// double MoneyPi = Money * 3.14;
// std::cout << "Money Times Pi: " << MoneyPi << std::endl;

std::cout << "A wild goblin approaches what do you do?" << std::endl
          << "(1. attack, 2. run, 3. hide 4. stats)" << std::endl
          << "Choose wisely: ";
int attack = 1;
int run = 2;
int hide = 3;
int stats = 4;
int choice;

double health = 200;
double defense = 0;
double hunger = 100;

double GoblinHP = 100;

std::cin >> choice;
if (choice == attack) {
  std::cout << "You chose to fight the wild goblin" << std::endl
            << "You lunge at the goblin and hit it in the chest" << std::endl
            << "The goblin loses 20hp" << std::endl;
  GoblinHP = GoblinHP - 20;
  choice = 0;

  std::cout << "What will you do now?"
            << "(1. attack, 2. run, 3. hide 4. stats)" << std::endl;
  std::cin >> choice;

  if (choice == attack) {
    std::cout << "You try to take another hit at the goblin but you miss and the goblin hits you instead" << std::endl
              << "You lose 20hp" << std::endl;
    health = health - 20;
    choice = 0;
    std::cout << "What will you do now?"
            << "(1. attack, 2. run, 3. hide 4. stats)" << std::endl;
    std::cin >> choice;

    if (choice = stats) {
      std::cout << "Health: " << health << std::endl
              << "Defense: " << defense << std::endl
              << "Hunger: " << hunger << std::endl;
      choice = 0;
    }
    
  } else if (choice == run) {

  } else if (choice == hide) {

  } else if (choice == stats) {
    std::cout << "Health: " << health << std::endl
              << "Defense: " << defense << std::endl
              << "Hunger: " << hunger << std::endl;
    choice = 0;
  }
  
  

} else if (choice == run) {
  std::cout << "You try to escape but as you run the goblin hits you with a rock from behind" << std::endl
            << "You escape successfully, yet you lose 25hp" << std::endl;
  health = health - 20;
  choice = 0;
} else if (choice == hide) {
  std::cout << "You hide behind a bush until the goblin walks away and you escape successfully" << std::endl;
  choice = 0;
} else if (choice == stats) {
  std::cout << "Health: " << health << std::endl
            << "Defense: " << defense << std::endl
            << "Hunger: " << hunger << std::endl;
  choice = 0;
} else {
  std::cout << "You sit and do nothing" << std::endl;
  choice = 0;
}

return 0;
}
