

#include "Harl.hpp"

Harl::Harl( std::string min_level ) : min_level(min_level){ std::cout << "Harl constructor called\n"; }

Harl::~Harl(void) { std::cout << "Harl destructo called\n"; }

void    Harl::debug( void ) { std::cout << DEBUG_MSG; }

void    Harl::info( void ) { std::cout << INFO_MSG; }

void    Harl::warning( void ) { std::cout << WARNING_MSG; }

void    Harl::error( void ) { std::cout << ERROR_MSG; }

void    Harl::complain( void ) {
    std::string const key[] = {"error", "warning", "info", "debug"};
    void        (Harl::*func[])() = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
    bool        filtered = true;

    for (int i = 0; i < 4; i ++) {
        if (key[i] == min_level)
            filtered = false;
        if (!filtered)
            ((this->*func[i])());
    }
}
