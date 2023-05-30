#pragma once

/**
 * @file LedImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

#include <libh7/hardware/Led.hpp>

namespace h7::driver::cm7
{
	class LedImpl : public hardware::Led
	{
	public:
		LedImpl();

        void turnOn(Color) override;
        void turnOff(Color) override;

	};
}
