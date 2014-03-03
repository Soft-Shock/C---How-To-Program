// exc10_10.cpp
// Create a deck of cards, shuffle, deal them.
#include <iostream>
#include <string>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
    DeckOfCards deck = DeckOfCards();
    Card card;

    deck.shuffle();

    cout << "Dealing cards:" << endl;

    while ( deck.moreCards() )
    {
        card = deck.dealCard();
        cout << card.toString() << endl;
    }
}