#ifndef TEST_H
#define TEST_H
#include <string>
#include <vector>
#include <iostream>

class Test
{
public:
    Test();
    ~Test();
    static int var;
private:
    const static std::vector<std::string> mvdFaces;
};

#endif

//template<typename T, int n>
//std::vector<T> from_array(const T( &v )[n] )
//{
//    return std::vector<T>( v, v + n );
//}