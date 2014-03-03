#ifndef DECK_OF_CARDS_H
#define DECK_OF_CARDS_H

#include <vector>
#include <cstdlib>
#include <ctime>
#include "Card.h"

class DeckOfCards
{
public:
    DeckOfCards();
    ~DeckOfCards();

    DeckOfCards &setDeck();
    DeckOfCards &shuffle();
    Card dealCard();
    const bool moreCards() const;
private:
    std::vector<Card> mvDeck;
    int mCurrentCard;
};

#endif