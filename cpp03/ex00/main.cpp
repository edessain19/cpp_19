#include <iostream>
#include <unistd.h>
# include "FragTrap.hpp"

int		main(void)
{
    FragTrap pokemon("Salamèche");

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

    pokemon.vaulthunter_dot_exe("Rattata");
    sleep(1);
    pokemon.getEnergyPoints();
    pokemon.vaulthunter_dot_exe("Pikachu");
    sleep(1);
    pokemon.getEnergyPoints();
    pokemon.vaulthunter_dot_exe("Magicarpe");
    sleep(1);
    pokemon.getEnergyPoints();
    pokemon.vaulthunter_dot_exe("Ronflex");
    sleep(1);
    pokemon.getEnergyPoints();
    pokemon.vaulthunter_dot_exe("Arcanin");
}