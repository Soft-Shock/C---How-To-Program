#include "Test.h"

using namespace std;

Test::Test()
{
}


Test::~Test()
{
}


const string data[] = { "NoFaceValueSet", "Ace", "2", "3",
"4", "5", "6", "7",
"8", "9", "10", "Jack",
"Queen", "King" };

const vector<string> Test::mvdFaces( begin( data ), end( data ) );
int Test::var = 76;

/* 
 Test::mvdFaces = from_array( data );
*/

/*
 int func( const string arrIn[] )
 {
     cout << arrIn[0];
     return 0;
 }
 int i = func( data );
 */

/*
 vector<string> init()
 {
     vector<string> v;
     v.push_back( "NoFaceValueSet" );
     v.push_back( "Ace" );
     v.push_back( "2" );
     return v;
 };

 const vector<string> Test::mvdFaces = init();
*/