#include "System.hpp"
#include <assert.h>

using namespace h7::hardware;

System* System::instance = nullptr;

System* System::getInstance()
{
    assert(instance);
    return instance;
}
