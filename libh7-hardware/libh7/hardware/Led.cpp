#include "Led.hpp"
#include <assert.h>

using namespace h7::hardware;

Led* Led::instance = nullptr;

Led* Led::getInstance()
{
    assert(instance);
    return instance;
}
