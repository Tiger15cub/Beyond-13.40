#include "Includes.h"
#include "Globals.h"
#include "Util.h"

#include "Inventory.h"
#include "Abilities.h"

#include "Hooks.h"

#define CONSOLE

DWORD WINAPI Main(LPVOID)
{
#ifdef CONSOLE
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);
#endif

    //SetConsoleTitleA("Server");

    MH_Initialize();

    Hooks::StartServer();

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

