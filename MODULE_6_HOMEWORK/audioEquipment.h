#pragma once
#include "IElectronics.h"

namespace ElectronicsShop {
	class AudioEquipment : virtual public IElectronics
	{
	public:
		AudioEquipment(int, std::string, std::string, std::string);
		void ShowSpec() override;
	protected:
		int _power;
		std::string _frequencyRange;
		std::string _brand;
		std::string _model;
	};
}