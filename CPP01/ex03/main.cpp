/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:34 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/31 13:04:03 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
    // {
    
    Weapon club = Weapon("crude spiked club");
    Humana bob("Bob", club);
    bob.attack();
    club.set_Type("some other type of club");
    bob.attack();
    // }
    // {
    // Weapon club = Weapon("crude spiked club");
    // Humanb jim("Jim");
    // jim.set_weapen(club);
    // jim.attack();
    // club.set_Type("some other type of club");
    // jim.attack();
    // }
    return 0;
}