#pragma once

/**
 * @file SharedData.hpp
 * @author Adrian Szczepanski
 * @date 30-05-2023
 */

#include <cstdint>

namespace h7::driver::common
{
    static constexpr uint32_t SHARED_ADDRESS = 0x30040000;

    struct SharedData 
    {
        unsigned color; 
        bool action;
    };
}