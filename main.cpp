#include "generated_file.h"
#include <iostream>

class Impl: public GeneratedClass
{
public:
    void GeneratedMethod() override
    {
        std::cout << "Hello world\n";
    }
};

int main()
{
    Impl impl;
    impl.GeneratedMethod();
}