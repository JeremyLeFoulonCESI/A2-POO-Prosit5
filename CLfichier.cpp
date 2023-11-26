#include "pch.h"
#include "CLfichier.h"


namespace NS_composants

{
    using namespace System;
    using namespace System::IO;

    array<String^>^ CLfichier::explorerUnDossier(String^ dossier)

    {
        return Directory::GetFiles(dossier);
    }

    void CLfichier::effacer(String^ fichier)

    {

        File::Delete(fichier);

    }

    void CLfichier::copier(String^ fichierSource, String^ fichierDestination)

    {

        String^ nomDeFichierExtension;

        nomDeFichierExtension = Path::GetFileName(fichierSource);

        File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);

    }

}

