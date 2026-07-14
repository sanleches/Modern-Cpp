#include "cards/deck.hpp"
#include <random>
#include <algorithm>

Deck::Deck(){
    //for all suits while the suit is under spades(last)
    for (int suit = Suit::HEARTS; suit <= Suit::SPADES; ++suit) {

            // for all ranks from ace(1) to King (13)
            for (int rank = Rank::Ace; rank <= Rank::King; ++rank) {
                // use vector specific functrion push_back 
                cards_deck_.push_back(
                    //build a card with the current Rank and suit and assign it to a unique pointer
                    std::make_unique<Card>(static_cast<Rank>(rank), static_cast<Suit>(suit))
                );
            }
        }
}

void Deck::shuffle_deck(){
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards_deck_.begin(), cards_deck_.end(), g);

    return;
}