#pragma once 

#include "CLfichier.h" 


namespace NS_services

{
	using namespace System;

	ref class CLserviceFichier
	{
	public:
		static String^ copier(array<String^>^, String^);

		static String^ copierEffacer(array<String^>^, String^);

		static String^ effacer(array<String^>^);

		static array<String^>^ explorer(String^);

	};

}