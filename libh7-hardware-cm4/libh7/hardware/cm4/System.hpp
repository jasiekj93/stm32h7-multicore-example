#pragma once

/**
 * @file System.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

namespace h7::hardware::cm4
{
	class System
	{
	public:
		virtual ~System() {}

        virtual void delay(unsigned ms) = 0;
        virtual void sleep() = 0;

		static System* getInstance();

	protected:
		static System* instance;
	};
}
