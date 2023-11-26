#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    testWin::MyForm monFormulaire;
    monFormulaire.Show();
    Application::Run();
    return 0;
}
