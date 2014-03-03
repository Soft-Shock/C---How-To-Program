#include "Card.h"

using namespace std;

const string mvdFacesData[] = { "NoFaceValueSet", "Ace", "2", "3",
"4", "5", "6", "7",
"8", "9", "10", "Jack",
"Queen", "King" };
const vector<string> Card::mvdFaces( begin( mvdFacesData ), end( mvdFacesData ) );

const string mvdSuitsData[] = { "NoSuitValueSet", "Diamonds", "Clubs", "Hearts", "Spades" };
const vector<string> Card::mvdSuits( begin( mvdSuitsData ), end( mvdSuitsData ) );

//// C++11 Initializer
//const vector<string> Card::mvdFaces =
//    { "NoFaceValueSet", "Ace", "2", "3",
//    "4", "5", "6", "7",
//    "8", "9", "10", "Jack",
//    "Queen", "King" };
//const vector<string> Card::mvdSuits =
//    { "NoSuitValueSet", "Diamonds", "Clubs", "Hearts", "Spades" };

Card::Card( const int cFace, const int cSuit )
{
    setFace(cFace).setSuit(cSuit);
}

Card &Card::setFace( const int cFace )
{
    if ( cFace >= 0 && static_cast<size_t> ( cFace ) < mvdFaces.size() )
    {
        mcFace = cFace;
    }
    else
    {
        mcFace = 0;
    }

    return *this;
}

Card &Card::setSuit( const int cSuit )
{
    if ( cSuit >= 0 && static_cast<size_t> ( cSuit ) < mvdSuits.size( ) )
    {
        mcSuit = cSuit;
    }
    else
    {
        mcSuit = 0;
    }

    return *this;
}

string Card::toString() const
{
    return mvdFaces[mcFace] +string( " of " ) + mvdSuits[mcSuit];
}

Card::~Card()
{
}
