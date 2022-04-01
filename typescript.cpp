
#include <iostream>
#include <math.h>

using namespace std;

namespace TypeScript
{
    namespace Math{
        auto sin(auto a){
            return std::sin(a);
        }
        auto cos(auto a){
            return std::cos(a);
        }
        auto tan(auto a){
            return std::tan(a);
        }
    }
}

int main()
{
    cout<<TypeScript::Math::sin(3);

    return 0;
}
