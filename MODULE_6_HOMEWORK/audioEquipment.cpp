#include "audioEquipment.h"

namespace ElectronicsShop{
	AudioEquipment::AudioEquipment(int power, std::string frequencyRange, std::string brand, std::string model) : _power(power), 
															_frequencyRange(frequencyRange), _brand(brand), _model(model) {}
	void AudioEquipment::ShowSpec() {
		std::cout << "Brand: " << _brand << std::endl;
		std::cout << "Model: " << _model << std::endl;
		std::cout << "Power: " << _power << " Watt" << std::endl;
		std::cout << "Frequency Range: " << _frequencyRange << std::endl;	
	}
}