#pragma once

/**
 * @file Led.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-29
 */

namespace h7::hardware::cm4
{
	class Led
	{
	public:
        enum class Color
        {
            GREEN,
            YELLOW
        };

		virtual ~Led() {}

        virtual void turnOn(Color) = 0;
        virtual void turnOff(Color) = 0;

		static Led* getInstance();

	protected:
		static Led* instance;
	};
}
