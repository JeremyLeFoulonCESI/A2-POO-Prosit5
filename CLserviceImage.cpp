#include "CLserviceImage.h"
#include "pch.h"

using namespace System;

namespace NS_services
{

	CLserviceImage::CLserviceImage()
	{}

	System::Drawing::Bitmap^ CLserviceImage::lireImage(String^ image)
	{
		return NS_composants::CLimages::acquisitionImage(image);
	}
}