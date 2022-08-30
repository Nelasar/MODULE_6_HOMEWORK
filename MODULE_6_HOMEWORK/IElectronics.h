#pragma once
#pragma once
#include <iostream>
#include <string>

namespace ElectronicsShop {
	class IElectronics
	{
	public:
		virtual void ShowSpec() = 0;
		virtual ~IElectronics() = default;
	};

	//IElectronics::~IElectronics() = default;
}