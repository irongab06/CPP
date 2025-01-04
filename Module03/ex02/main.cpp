#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	hero("Ironman");
	ClapTrap	enemy("Thanos");
	ScavTrap	new_hero("Spiderman");
	FragTrap	new_enemy("loki");

	while (hero.getEp() > 0)
		hero.attack(enemy.getName());
	hero.takeDamage(5);
	hero.beRepaired(5);
	enemy.attack("spiderman");
	new_hero.attack("Thanos");
	enemy.takeDamage(20);
	enemy.beRepaired(10);
	new_enemy.highFivesGuys();
	new_enemy.attack("spiderman");
	new_hero.takeDamage(30);
	new_hero.beRepaired(30);
	new_hero.guardGate();
	while (new_enemy.getHp() > 0 && new_hero.getEp() > 0)
	{
		new_hero.attack("loki");
		new_enemy.takeDamage(20);
	}
	new_enemy.beRepaired(10);
	return (0);
}