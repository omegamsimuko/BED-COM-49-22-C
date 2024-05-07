#include <iostream>
int main() {
  srand(static_cast<unsigned int>(time(0))); 
  int daysUntilExpiration = rand() % 12;
  if (daysUntilExpiration <= 0) {
    std::cout << "Your subscription has expired." << std::endl;
  } else if (daysUntilExpiration == 1) {
    std::cout << "Your subscription expires within a day! Renew now a 20%!" << std::endl;
  } else if (daysUntilExpiration <= 5) {
    std::cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew nond savew and save 10%!" << std::endl;
  } else if (daysUntilExpiration <= 10) {
    std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
  } else {
    std::cout << "You have an active subscription." << std::endl;
  }
  return 0;
}