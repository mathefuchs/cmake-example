#include <iostream>

#include <libA/libApi.hpp>
#include <libB/libApi.hpp>

int main(int argc, char **argv)
{
    std::cout << "Hello, world!\n"
              << libA::foo(4, 5) << "\n"
              << libB::bar(3, 2) << std::endl;
}
