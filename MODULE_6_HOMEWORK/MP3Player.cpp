#include "MP3Player.h"

namespace ElectronicsShop {
	MP3Player::MP3Player(int batteryLife, int power, std::string frequencyRange, std::string brand, std::string model, int memory, std::string fileFormats) :
		Device(batteryLife), AudioEquipment(power, frequencyRange, brand, model), _memory(memory), _fileFormats(fileFormats) { }
	void MP3Player::ShowSpec() {
		std::cout << "Brand: " << _brand << std::endl;
		std::cout << "Model: " << _model << std::endl;
		Device::ShowSpec();
		std::cout << "Memory: " << _memory << " Gb" << std::endl;
		std::cout << "File Formats: " << _fileFormats << std::endl;
	}
}