#pragma once
#include <string>

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

enum class Suit {
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES
};

//
class Card {
public:
    Card(Rank rank, Suit suit);

    Rank get_rank() const;
    Suit get_suit() const;

    std::string get_rank_name() const;
    std::string get_suit_name() const;

private:
    Rank rank_;
    Suit suit_;
};