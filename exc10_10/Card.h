#ifndef CARD_H
#define CARD_H
#include <string>
#include <vector>

class Card
{
public:
    Card::Card( const int cFace = 0, const int cSuit = 0 );
    ~Card();

    Card &Card::setFace( const int cFace );
    Card &Card::setSuit( const int cSuit );

    std::string Card::toString() const;


private:
    int mcFace;
    int mcSuit;
    const static std::vector<std::string> mvdFaces;
    const static std::vector<std::string> mvdSuits;
};

#endif