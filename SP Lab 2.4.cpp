#include <iostream>
#include <windows.h>


using namespace std;

int main() {
	char lpDirectory[] = "C:\\TEMP\\";
	ShellExecute(NULL, "open", NULL, NULL, lpDirectory, SW_SHOWNORMAL);

	/*
	HISTANCE ShellExecute(HWND hwnd, LPCTSTR lpOperation, LPCTSTR lpFile, LPCTSTR lpParameters, LPCTSTR lpDirectoty, UINT nShowCmd)

	HWND hwnd - дескриптор окна родительского приложения (можно задать равным NULL)
	LPCTSTR lpOperation - операционная строка, задающая действие выполняемое с файлом ("open" = NULL, "print", "explore").
	LPCTSTR lpFile - указатель на строку, содержащую имя файла.
	LPCTSTR lpParameters - указатель на строку, содержащую параметры командной строки (обычно NULL).
	LPCTSTR lpDirectoty - указатель на строку, содержащую текущий каталог для запускаемого приложения.
	UINT nShowCmd - способ отображения окна, совпадающий с константой для ShowWindow.
	*/
	return 0;
}