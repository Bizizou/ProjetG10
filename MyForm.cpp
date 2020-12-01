#include "MyForm.h"
#include<Windows.h>
// YAW ETFTEH AHAMOUDDA
using namespace ProjetG10;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew MyForm());

    return 0;
}