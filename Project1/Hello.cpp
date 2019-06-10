
#include <windows.h>
#include <stdio.h>

int main()
{
	HANDLE hFile;
	LPCSTR fileName = "\\\\.\\C:";

	hFile = CreateFile(fileName,

		GENERIC_READ,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	if (hFile != INVALID_HANDLE_VALUE)
	{

		printf("File was open\n");
		system("pause");
		return 0;
	}
	else
	{
		printf("Could not open file (error %d)\n", GetLastError());
		system("pause");
		return 1;

	}
}