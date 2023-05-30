#pragma once

/**
 * @file SystemImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

#include <libh7/hardware/System.hpp>

namespace h7::driver::cm7
{
	class SystemImpl : public hardware::System
	{
	public:
		SystemImpl();

        void delay(unsigned ms) override;

	};
}
