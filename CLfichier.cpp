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

    String^ CLfichier::effacer(String^ fichier)

    {
        try {
            File::Delete(fichier);
        }
        catch (System::Exception^ e) {
            return e->Message;
        }
        return nullptr;
    }

    String^ CLfichier::copier(String^ fichierSource, String^ fichierDestination)
    {
        String^ nomDeFichierExtension;

        nomDeFichierExtension = Path::GetFileName(fichierSource);
        try {
            File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
        }
        catch (System::IO::IOException^ e) {
            return e->Message;
        }
        return nullptr;
    }

}

