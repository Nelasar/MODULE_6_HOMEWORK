#include "PortableSpeaker.h"

namespace ElectronicsShop {
	PortableSpeaker::PortableSpeaker(int batteryLife, int power, std::string frequencyRange, std::string brand, std::string model, std::string color, std::string USBPort) :
										Device(batteryLife), AudioEquipment(power, frequencyRange, brand, model), _color(color), _USBPort(USBPort){}
	void PortableSpeaker::ShowSpec() {
		Device::ShowSpec();
		std::cout << "Brand: " << _brand << std::endl;
		std::cout << "Model: " << _model << std::endl;
		std::cout << "USB port type: " << _USBPort << std::endl;
	}
}