#include "Card.h"
#include <string>
#include <vector>

using namespace std;
/*
    Data Members
    int mcFaceCd;
    int mcSuitCd;
    static const vector<int> mdFaces( 13 );
    static vector<int> mdSuits( 4 );
*/
const vector<string> Card::mvdFaces(13);
const vector<string> Card::mvdFaces =
    { "2", "3", "4", "5",
    "6", "7", "8", "9",
    "10", "Jack", "Queen", "King", "Ace" };
const vector<int> mvdSuits =
    { "Diamonds", "Clubs", "Hearts", "Spades" };

Card::Card(int mFace, int mSuit)
{
}

string Card::toString() const
{
}

Card::~Card()
{
}
