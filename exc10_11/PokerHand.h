#ifndef POKER_HAND_H
#define POKER_HAND_H

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include "Card.h"

class PokerHand
{
public:
    PokerHand( int maxHandSize = 5 );
    ~PokerHand();

    PokerHand &setCard( Card &card );
    bool hasPair() const;
    bool has2Pair() const;
    bool has3OfAKind() const;
    bool has4OfAKind() const;
    bool hasFlush() const;
    bool hasStraight() const;
    bool handFull() const;
    std::string toString() const;
    const int mMaxHandSize;
    const int mHandID;

private:
    std::vector<Card> mvHand;
    int mNumOfCards;
    static int mNumOfHands;
};

#endif