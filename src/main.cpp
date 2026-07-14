/*
This is practice material by Santiago Ugarte Salas

*/
#include "greeting.hpp"
#include "cards/cards.hpp"
#include <string>
#include <iostream>

int main() {

    greet(make_greeting());

    std::unique_ptr<Card> newcarduniqueptr = std::make_unique<Card>(Rank::Eight, Suit::HEARTS);


    std::cout << static_cast<int>(newcarduniqueptr->get_rank()) << " " << static_cast<int>(newcarduniqueptr->get_suit()) << '\n';
    std::cout << static_cast<std::string>(newcarduniqueptr->get_rank_name()) << " " << static_cast<std::string>(newcarduniqueptr->get_suit_name()) << '\n';



    return 0;
}