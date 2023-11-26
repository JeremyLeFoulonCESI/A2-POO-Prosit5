#pragma once

using namespace System;



namespace NS_composants

{

	ref class CLfichier
	{

	public:

		static array<String^>^ explorerUnDossier(String^);

		static void effacer(String^);

		static void copier(String^, String^);

	};

}

