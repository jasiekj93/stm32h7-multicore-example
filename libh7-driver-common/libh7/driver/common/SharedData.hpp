#pragma once

/**
 * @file SharedData.hpp
 * @author Adrian Szczepanski
 * @date 30-05-2023
 */

#include <cstdint>

namespace h7::driver::common
{
    struct SharedData 
    {
        unsigned color; 
        bool action;
    };

    extern SharedData __attribute__((section(".shared_ram"))) ledInfo;
}