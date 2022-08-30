#pragma once
#include "IElectronics.h"

namespace ElectronicsShop {
	class Device : virtual public IElectronics
	{
	public:
		Device(int);
		virtual void ShowSpec() override;
	protected:
		int _batteryLife;
	};
}