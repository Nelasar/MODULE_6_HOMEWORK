#include "Headphones.h"

namespace ElectronicsShop {
	Headphones::Headphones(bool isWireless, int power, int wireLength, std::string frequencyRange, std::string brand, std::string model) :
		_isWireless(isWireless), AudioEquipment(power, frequencyRange, brand, model) 
	{
		if (isWireless) {
			_wireLength = 0;
		}
		else {
			_wireLength = wireLength;
		}
	}
	void Headphones::ShowSpec() {
		std::cout << "Brand: " << _brand << std::endl;
		std::cout << "Model: " << _model << std::endl;
		std::cout << "Sensitivity: " << _power << " dB" << std::endl;
		std::cout << "Frequency Range: " << _frequencyRange << std::endl;

		if (_isWireless) {
			std::cout << "Wireless: Yes\nWire Length: N\\A" << std::endl;
		}
		else {
			std::cout << "Wireless: No\nWire Length: " << _wireLength << " sm" << std::endl;
		}
	}
}