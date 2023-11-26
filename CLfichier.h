#pragma once

using namespace System;



namespace NS_composants

{

	ref class CLfichier
	{

	public:

		static array<String^>^ explorerUnDossier(String^);

		static String^ effacer(String^);

		static String^ copier(String^, String^);

	};

}

