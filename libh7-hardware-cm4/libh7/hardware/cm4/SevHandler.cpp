#include "SevHandler.hpp"
#include <assert.h>

using namespace h7::hardware::cm4;

SevHandler* SevHandler::instance = nullptr;

SevHandler* SevHandler::getInstance()
{
    assert(instance);
    return instance;
}
