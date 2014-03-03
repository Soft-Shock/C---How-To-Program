#include "DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards()
: mCurrentCard( 0 ),
  mvDeck()
{
    srand( time( 0 ) );
    setDeck();
}

DeckOfCards &DeckOfCards::setDeck()
{
    // Add all cards to deck
    for ( size_t i = 1; i <= Card::mvdFaces.size() - 1
        /* Size - 1 because first array element is error code */; i++ )
    {
        for ( size_t j = 1; j <= Card::mvdSuits.size() - 1; j++ )
        {
            mvDeck.push_back(Card( i, j ));
        }
    }
    return *this;
}

DeckOfCards &DeckOfCards::shuffle()
{
    const size_t deckSize = mvDeck.size();
    for ( size_t i = 0; i < deckSize; i++ )
    {
        // loop through each card and swap with a random card in the deck
        int randomIndex = rand() % deckSize;
        Card currentCard = mvDeck[i];
        mvDeck[i] = mvDeck[randomIndex];
        mvDeck[randomIndex] = currentCard;
    }
    return *this;
}


Card DeckOfCards::dealCard()
{
    Card card = mvDeck.back();
    mvDeck.pop_back();
    mCurrentCard++;
    return card;
}

const bool DeckOfCards::moreCards() const
{
    return !mvDeck.empty();
}

DeckOfCards::~DeckOfCards()
{
}
