#pragma once 

#include "CLimages.h"

using namespace System;

namespace NS_services
{

	ref class CLserviceImage
	{

	public:

		CLserviceImage();

		System::Drawing::Bitmap^ lireImage(String^);

	};

}