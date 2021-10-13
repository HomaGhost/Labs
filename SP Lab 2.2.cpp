#include <iostream>
#include <windows.h>


using namespace std;

int main() {
	STARTUPINFO si;
	ZeroMemory(&si, sizeof(STARTUPINFO));

	PROCESS_INFORMATION pi;
	ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));

	char lpszAppName[] = "C:\\Windows\\system32\\cmd.exe";
	char lpCommandline[] = "Notepad";
	if (!CreateProcess(NULL, lpCommandline, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
	{
		int error = GetLastError();
		cerr << "Create process failed with code: " << error << endl;
		return -1;
	}

	return 0;
}