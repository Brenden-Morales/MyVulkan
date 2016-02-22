#pragma once
#include <windows.h>
#include <iostream>


class WindowManager {
private :
	HWND window;
	HINSTANCE windowInstance;
	std::string title = "Vulkan Example";
	std::string name = "vulkanExample";
	uint32_t width = 1280;
	uint32_t height = 720;
	bool prepared = false;
	bool paused = false;
	float zoom = 0;

public:
	HWND setupWindow(HINSTANCE hinstance, WNDPROC wndproc);
	void handleMessages(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};