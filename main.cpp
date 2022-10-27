#include "iostream"
#include "windows.h"

DWORD Jumping = 0x8E92CA50; //Change it to your memory address.
DWORD pid;

int detectJumping;
int airJumping;

using namespace std;

int main() {
	HWND hwnd = FindWindowA(0, ("Minecraft 1.8.9"));

	GetWindowThreadProcessId(hwnd, &pid);
	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

	while (true) {
		airJumping = 65537;
		WriteProcessMemory(pHandle, (LPVOID)Jumping, &airJumping, sizeof(int), 0); //Changes value to default one so it makes you able to jump in air.
	}

}