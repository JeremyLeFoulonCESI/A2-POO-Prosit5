#pragma once 

#include "CLfichier.h" 


namespace NS_services

{
	using namespace System;

	ref class CLserviceFichier

	{

	private:

		//NS_composants::CLfichier^ fichier;

	public:

		CLserviceFichier();

		void copier(array<String^>^, String^);

		void copierEffacer(array<String^>^, String^);

		void effacer(array<String^>^);

		array<String^>^ explorer(String^);

	};

}