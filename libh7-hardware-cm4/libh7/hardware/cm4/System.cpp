#include "System.hpp"
#include <assert.h>

using namespace h7::hardware::cm4;

System* System::instance = nullptr;

System* System::getInstance()
{
    assert(instance);
    return instance;
}
