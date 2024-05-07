#include <iostream>

int main() {
  srand(static_cast<unsigned int>(time(0))); // seed random number generator
  int daysUntilExpiration = rand() % 12; // generate random number between 0 and 11

  switch (daysUntilExpiration) {
    case 0:
      std::cout << "Your subscription has expired." << std::endl;
      break;
    case 1:
      std::cout << "Your subscription expires within a day! Renew now and save 20%!" << std::endl;
      break;// break statements at the end of each case prevents fallthrough
    case 2: case 3: case 4: case 5: // case 2 has been combined with case 2-5 because they give the same output
      std::cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << std::endl;
      break;
    case 6: case 7: case 8: case 9: case 10:
      std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
      break;
    default:
      std::cout << "You have an active subscription." << std::endl;
  }

  return 0;
}

