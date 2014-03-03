//exc10_11 deal poker hands and display them

#include <vector>
#include "Card.h"
#include "DeckOfCards.h"
#include "PokerHand.h"

using namespace std;

int main()
{
    DeckOfCards deck;
    vector<PokerHand> vPokerHands;
    vPokerHands.push_back( PokerHand() );
    vPokerHands.push_back( PokerHand() );

    deck.shuffle();

    cout << "Dealing cards:" << endl;

    // dealing same number of cards to each hand, so check if only one hand is full.
    while ( deck.moreCards() && !vPokerHands.at(0).handFull() )
    {
        vPokerHands.at(0).setCard( deck.dealCard() );
        vPokerHands.at(1).setCard( deck.dealCard() );
    }

    cout << "ph1:\n" << setw(15) << vPokerHands.at(0).toString() << endl;
    cout << "ph2:\n" << setw(15) << vPokerHands.at(1).toString() << endl;

    cout << boolalpha;
    for ( size_t i = 0; i < vPokerHands.size(); i++ )
    {
        cout << "Stats for Poker Hand (ID " << vPokerHands.at( i ).mHandID << " ):" << endl;
        cout << "Has pair?: " << vPokerHands.at( i ).hasPair() << endl;
        cout << "Has two pairs?: " << vPokerHands.at( i ).has2Pair() << endl;
        cout << "Has three of a kind?: " << vPokerHands.at( i ).has3OfAKind() << endl;
        cout << "Has four of a kind?: " << vPokerHands.at( i ).has4OfAKind() << endl;
        cout << "Has flush?: " << vPokerHands.at( i ).hasFlush() << endl;
        cout << "Has straight (not implemented, always false): " << vPokerHands.at( i ).hasStraight() << endl;
        cout << endl;
    }
    
}