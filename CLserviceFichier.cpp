#include "CLserviceFichier.h" 
#include "pch.h"


namespace NS_services
{
	using namespace System;

	CLserviceFichier::CLserviceFichier()
	{
		//this->fichier = gcnew NS_composants::CLfichier();
	}
	void CLserviceFichier::copier(array<String^>^ fichiersSources, String^ destination)
	{
		int i;
		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			NS_composants::CLfichier::copier(fichiersSources[i], destination);
		}
	}
	void CLserviceFichier::copierEffacer(array<String^>^ fichiersSources, String^ fichierDestination)
	{
		
		this->copier(fichiersSources, fichierDestination);
		this->effacer(fichiersSources);
	}

	void CLserviceFichier::effacer(array<String^>^ fichiersSources)
	{
		int i;
		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			NS_composants::CLfichier::effacer(fichiersSources[i]);
		}

	}
	array<String^>^ CLserviceFichier::explorer(String^ dossier)
	{
		return NS_composants::CLfichier::explorerUnDossier(dossier);
	}

}