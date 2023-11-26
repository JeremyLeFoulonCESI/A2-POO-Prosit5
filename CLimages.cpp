#include "CLimages.h" 
#include "pch.h"


namespace NS_composants
{
	using namespace System;

	System::Drawing::Bitmap^ CLimages::acquisitionImage(String^ fichier)
	{
		return gcnew System::Drawing::Bitmap(fichier);
	}

}