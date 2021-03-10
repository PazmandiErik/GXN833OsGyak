#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <tchar.h>

int main(int argc, TCHAR *argv[])
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );

    if (!CreateProcess(
           NULL,
           "child.exe",
           NULL,
           NULL,
           FALSE,
           0,
           NULL,
           NULL,
           &si,
           &pi)
        )
    {
        printf("CreateProcess failed (%d). \n", GetLastError() );
    }

    WaitForSingleObject(pi.hProcess, INFINITE);

    CloseHandle( pi.hProcess );
    CloseHandle( pi.hThread );

    return 0;
}
