#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i) {
        harl.complain(levels[i]);
    }
}