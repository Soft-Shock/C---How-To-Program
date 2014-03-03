#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

class Card
{
public:
    const static std::vector<std::string> mvdFaces;
    const static std::vector<std::string> mvdSuits;

    Card( const int cFace = 0, const int cSuit = 0 );
    ~Card();

    Card &setFace( const int cFace );
    Card &setSuit( const int cSuit );

    std::string toString() const;

private:
    int mcFace;
    int mcSuit;

};

#endif