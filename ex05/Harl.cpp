

#include "Harl.hpp"

Harl::Harl(void) { std::cout << "Harl constructor called\n"; }

Harl::~Harl(void) { std::cout << "Harl destructo called\n"; }

void Harl::debug(void) { std::cout << DEBUG_MSG; }

void Harl::info(void) { std::cout << INFO_MSG; }

void Harl::warning(void) { std::cout << WARNING_MSG; }

void Harl::error(void) { std::cout << ERROR_MSG; }

void Harl::complain(std::string level) {
  std::string const key[] = {"info", "warning", "error", "debug"};
  void (Harl::*func[])() = {&Harl::info, &Harl::warning, &Harl::error,
                            &Harl::debug};

  for (int i = 0; i < 4; i++) {
    if (level == key[i]) {
      (this->*func[i])();
      return;
    }
  }
}