#include <iostream>
#include <unistd.h>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

int		main()
{
	ScavTrap pokemon("Salamèche");
	FragTrap pokemon2("Salamèche");

    pokemon.getHitPoints();
    pokemon.rangeAttack("Chrysacier");
    pokemon.meleeAttack("Paras");
    pokemon.takeDamage(110);

    pokemon.getHitPoints();
    pokemon.beRepaired(110);
    pokemon.getHitPoints();

    pokemon.takeDamage(4);
    pokemon.getHitPoints();
    pokemon.takeDamage(90);
    pokemon.getHitPoints();

    pokemon.challengeNewcomer();
    sleep(1);
	pokemon.challengeNewcomer();
	std::cout << "____________________________________________\n";
    pokemon2.getHitPoints();
    pokemon2.rangeAttack("Chrysacier");
    pokemon2.meleeAttack("Paras");
    pokemon2.takeDamage(110);

    pokemon2.getHitPoints();
    pokemon2.beRepaired(110);
    pokemon2.getHitPoints();

    pokemon2.takeDamage(4);
    pokemon2.getHitPoints();
    pokemon2.takeDamage(90);
    pokemon2.getHitPoints();

    pokemon2.vaulthunter_dot_exe("Rattata");
    sleep(1);
    pokemon2.getEnergyPoints();
    pokemon2.vaulthunter_dot_exe("Pikachu");
    sleep(1);
    pokemon2.getEnergyPoints();
    pokemon2.vaulthunter_dot_exe("Magicarpe");
    sleep(1);
    pokemon2.getEnergyPoints();
    pokemon2.vaulthunter_dot_exe("Ronflex");
    sleep(1);
    pokemon2.getEnergyPoints();
    pokemon2.vaulthunter_dot_exe("Arcanin");

    std::cout << "___________TEST NinjaTrap_____________" << std::endl;
    // ClapTrap starWars("--ClapTrap--");
    FragTrap sith2("--FragTrap--");
    ScavTrap jedi2("--ScavTrap--");
    NinjaTrap ninja("--NinjaTrap--");

    ninja.getHitPoints();
    ninja.rangeAttack("Obi One");
    ninja.meleeAttack("Yoda");
    ninja.takeDamage(110);

    ninja.getHitPoints();
    ninja.beRepaired(110);
    ninja.getHitPoints();

    ninja.takeDamage(4);
    ninja.getHitPoints();
    ninja.takeDamage(90);
    ninja.getHitPoints();

    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(sith2);
    ninja.ninjaShoebox(jedi2);
    // ninja.ninjaShoebox(starWars);

	return (0);
}