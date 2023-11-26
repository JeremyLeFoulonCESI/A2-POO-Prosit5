#include "CLserviceFichier.h" 
#include "pch.h"


namespace NS_services
{
	using namespace System;
	String^ CLserviceFichier::copier(array<String^>^ fichiersSources, String^ destination)
	{
		int i;
		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			String^ res = NS_composants::CLfichier::copier(fichiersSources[i], destination);
			if (res != nullptr)
				return res;
		}
		return nullptr;
	}
	String^ CLserviceFichier::copierEffacer(array<String^>^ fichiersSources, String^ fichierDestination)
	{
		
		String^ res = copier(fichiersSources, fichierDestination);
		if (res != nullptr)
			return res;
		res = effacer(fichiersSources);
		return res;
	}

	String^ CLserviceFichier::effacer(array<String^>^ fichiersSources)
	{
		int i;
		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			String^ res = NS_composants::CLfichier::effacer(fichiersSources[i]);
			if (res != nullptr)
				return res;
		}
		return nullptr;
	}
	array<String^>^ CLserviceFichier::explorer(String^ dossier)
	{
		return NS_composants::CLfichier::explorerUnDossier(dossier);
	}

}