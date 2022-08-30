#include "Device.h"

namespace ElectronicsShop {
	Device::Device(int batteryLife) : _batteryLife(batteryLife) {}
	void Device::ShowSpec() {
		std::cout << "Battery Life: " << _batteryLife << " hours" << std::endl;
	}
}