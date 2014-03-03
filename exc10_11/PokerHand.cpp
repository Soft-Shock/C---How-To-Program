#include "PokerHand.h"

using namespace std;

int PokerHand::mNumOfHands = 0;

PokerHand::PokerHand( int maxHandSize )
    : mvHand(),
      mMaxHandSize( maxHandSize ),
      mHandID( ++mNumOfHands ),
      mNumOfCards ( 0 )
{
}


PokerHand::~PokerHand()
{
}

PokerHand &PokerHand::setCard( Card &card )
{
    if ( mvHand.size() <= mMaxHandSize )
    {
        mvHand.push_back( card );
        mNumOfCards++;
        //mIsSorted = false;
    }
    else
    {
        char prevFill = cout.fill( '0' );
        cout << "WARNING: Poker hand (ID " << setw( 4 ) << mHandID << " )cannot hold more than "
            << mMaxHandSize << " cards. Card \"" << card.toString() << "\" was not added to the hand.";
        cout.fill( prevFill );
    }
    return *this;
}

bool PokerHand::hasPair() const
{
    // Need 1 other card to have pair.
    for ( int i = 0; i < mMaxHandSize - 1; i++ )
    {
        for ( int j = ++i; j < mMaxHandSize; j++ )
        {
            // Does current card i match any card j in the remainder of the hand?
            if ( mvHand.at(i) == mvHand.at(j) )
            {
                return true;
            }

        }
    }
    return false;
}

bool PokerHand::has2Pair() const
{
    size_t numOfPairs = 0;
    vector<size_t> ignoreIndeces;
    
    // Need 3 other cards to have 2 pair.
    for ( size_t i = 0; i < mMaxHandSize - 3; i++ )
    {
        bool ignoreI = false;

        for ( size_t k = 0; k < ignoreIndeces.size(); k++ )
        {
            if ( i == ignoreIndeces.at(k) )
                ignoreI = true;
        }

        if ( ignoreI )
        {
            continue;
        }

        for ( size_t j = ++i; j < mMaxHandSize; j++ )
        {
            bool ignoreJ = false;

            for ( size_t k = 0; k < ignoreIndeces.size(); k++ )
            {

                if ( j == ignoreIndeces.at(k) )
                    ignoreJ = true;                        
            }

            if ( ignoreJ )
            {
                continue;
            }

            // Does current card i match any card j in the remainder of the hand?
            if ( mvHand.at(i) == mvHand.at(j) )
            {
                ignoreIndeces.push_back( i );
                ignoreIndeces.push_back( j );
                if ( ++numOfPairs == 2 )
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool PokerHand::has3OfAKind() const
{
    // Need 2 other cards to have 3 of a kind.
    for ( int i = 0; i < mMaxHandSize - 2; i++ )
    {
        size_t numOfMatches = 0;
        for ( int j = ++i; j < mMaxHandSize; j++ )
        {
            // Does current card i match any card j in the remainder of the hand?
            if ( mvHand.at(i) == mvHand.at(j) )
            {
                if ( ++numOfMatches == 2 )
                {
                    return true;
                }
            }

        }
    }
    return false;
}

bool PokerHand::has4OfAKind() const
{
    // Need 3 other cards to have 4 of a kind.
    for ( int i = 0; i < mMaxHandSize - 3; i++ )
    {
        size_t numOfMatches = 0;
        for ( int j = ++i; j < mMaxHandSize; j++ )
        {
            // Does current card i match any card j in the remainder of the hand?
            if ( mvHand.at(i) == mvHand.at(j) )
            {
                if ( ++numOfMatches == 3 )
                {
                    return true;
                }
            }

        }
    }
    return false;
}

bool PokerHand::hasFlush() const
{
    for ( size_t i = 1; i < mMaxHandSize; i++ )
    {
        if ( mvHand.at( 0 ).getSuit() != mvHand.at( i ).getSuit() )
        {
            return false;
        }
    }
    return true;
}

bool PokerHand::hasStraight() const
{
    //int cConsecFace = 0;
    //for ( size_t i = 1; i < mMaxHandSize; i++ )
    //{
    //    if ( mvHand.at( cConsecFace ).getFace() != mvHand.at( i ).getFace() )
    //    {
    //        return false;
    //    }
    //}
    return false;
}

bool PokerHand::handFull() const
{
    if ( mNumOfCards >= mMaxHandSize )
    {
        return true;
    }
    return false;
}

string PokerHand::toString() const
{
    string s = "";
    for ( size_t i = 0; i < mNumOfCards; i++ )
    {
        s += mvHand.at( i ).toString() + string( "\n" );
    }
    return s;
}

// Not implementing binary search.
//void PokerHand::sortIfNeeded()
//{
//    // If not sorted, sort the cards.
//    if ( !mIsSorted )
//    {
//
//    }
//}