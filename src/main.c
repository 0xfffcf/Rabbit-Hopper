#include "ui/ui.h"
#include "process/process.h"
#include "config/offsets.h"

#include <stdio.h>

int main(void) {
	modifyUI();

	getProcessInfo("csgo.exe");
	const uintptr_t client = getModuleAddress("client.dll");

	DWORD dwExit = 0;
	while (GetExitCodeProcess(process.hProcess, &dwExit) && dwExit == STILL_ACTIVE) {
		const uintptr_t localPlayer = read(client + DW_LOCAL_PLAYER);

		if (localPlayer) {
			const BOOL isOnGround = read(localPlayer + M_F_FLAGS);

			if (GetAsyncKeyState(VK_SPACE) && isOnGround & (1 << 0)) {
				write(client + DW_FORCE_JUMP, 5);
			} else {
				write(client + DW_FORCE_JUMP, 4);
			}
		}
		Sleep(10);
	}
	CloseHandle(process.hProcess);
	
	return 0;
}