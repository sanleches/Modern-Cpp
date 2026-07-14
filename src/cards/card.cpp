#include "cards/card.hpp"

Card::Card(Rank rank, Suit suit)
    : rank_(rank), suit_(suit) {}
    
Rank Card::get_rank() const {
    return rank_;
}

Suit Card::get_suit() const {
    return suit_;
}

std::string Card::get_rank_name() const {
    switch (rank_) {
        case Rank::Ace: return "Ace";
        case Rank::Two: return "Two";
        case Rank::Three: return "Three";
        case Rank::Four: return "Four";
        case Rank::Five: return "Five";
        case Rank::Six: return "Six";
        case Rank::Seven: return "Seven";
        case Rank::Eight: return "Eight";
        case Rank::Nine: return "Nine";
        case Rank::Ten: return "Ten";
        case Rank::Jack: return "Jack";
        case Rank::Queen: return "Queen";
        case Rank::King: return "King";
    }
    return "Unknown";
}

std::string Card::get_suit_name() const {
    switch (suit_) {
        case Suit::HEARTS: return "Hearts";
        case Suit::DIAMONDS: return "Diamonds";
        case Suit::CLUBS: return "Clubs";
        case Suit::SPADES: return "Spades";
    }
    return "Unknown";
}