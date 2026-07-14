/*
This is practice material by Santiago Ugarte Salas

*/
#include "greeting.hpp"
#include "cards/cards.hpp"
#include <string>
#include <iostream>

int main() {

    greet(make_greeting());

    Card* newcard = new Card(Rank::Ace, Suit::CLUBS);

    std::cout << static_cast<int>(newcard->get_rank()) << " " << static_cast<int>(newcard->get_suit()) << '\n';
        std::cout << static_cast<std::string>(newcard->get_rank_name()) << " " << static_cast<std::string>(newcard->get_suit_name()) << '\n';



    return 0;
}