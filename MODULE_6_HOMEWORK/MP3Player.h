#pragma once
#include "Device.h"
#include "audioEquipment.h"

namespace ElectronicsShop {
	class MP3Player final : public Device, AudioEquipment
	{
	public:
		MP3Player(int, int, std::string, std::string, std::string, int, std::string);
		void ShowSpec() override;
	protected:
		std::string _fileFormats;
		int _memory;
	};
}

