#pragma once
#include "Device.h"
#include "audioEquipment.h"

namespace ElectronicsShop {
	class PortableSpeaker final : public Device, AudioEquipment
	{
	public:
		PortableSpeaker(int, int, std::string, std::string, std::string,std::string, std::string );
		void ShowSpec() override;
	protected:
		std::string _color;
		std::string _USBPort;
	};
}