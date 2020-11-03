#include <libB/libApi.hpp>
#include <libA/libApi.hpp>

int libB::bar(int a, int b)
{
    return libA::foo(a, b) + 5;
}
