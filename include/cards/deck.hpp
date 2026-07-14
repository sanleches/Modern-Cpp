#include <vector>
#include <memory>
#include "cards/card.hpp"

class Deck {
public:
    Deck();

    void shuffle_deck();
    std::unique_ptr<Card> draw_card();

private:
    //vector of unique pointers of cards
    std::vector<std::unique_ptr<Card> > cards_deck_;

};