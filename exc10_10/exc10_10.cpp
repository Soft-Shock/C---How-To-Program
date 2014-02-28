// exc10_10.cpp
// Create a deck of cards, shuffle, deal them.
#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Card c1 = Card( 1, 1 );
    Card c2 = Card( 2, 2 );
    Card c3 = Card();

    string s1 = c1.toString();
    string s2 = c2.toString( );
    string s3 = c3.toString( );
    cout << s1 << "\n" << s2 << "\n" << s3 << endl;

}