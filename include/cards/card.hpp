#pragma once
#include <string>

class Card {
public:
    Card(Rank rank, Suit suit);

    Rank get_rank();
    Suit get_suit();

private:
    Rank rank_;//
    Suit suit_;//  
};

//CARD Enums

//Enum to map all possible card values
enum class Rank : int {
    Ace = 1,
    Two = 2,
    Three = 3,
    Four = 4,
    Five = 5,
    Six = 6,
    Seven = 7,
    Eight = 8,
    Nine = 9,
    Ten = 10,
    Jack = 11,
    Queen = 12,
    King = 13
};

//Enum for Card Suit
enum class Suit{
    HEARTS, DIAMONDS, CLUBS, SPADES
};