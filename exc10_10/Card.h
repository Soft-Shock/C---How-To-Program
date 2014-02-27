#ifndef CARD_H
#define CARD_H
#include <string>
#include <vector>

class Card
{
public:
    Card::Card(int mFace, int mSuit);
    ~Card();
private:
    int mcFace;
    int mcSuit;
    const static std::vector<std::string> mvdFaces;
    const static std::vector<std::string> mvdSuits;
};

#endif