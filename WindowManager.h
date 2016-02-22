#pragma once
#include <windows.h>
#include <iostream>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


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
	float zoomSpeed = 1.0f;
	float rotationSpeed = 1.0f;
	glm::vec3 rotation = glm::vec3();
	glm::vec2 mousePos;

public:
	HWND setupWindow(HINSTANCE hinstance, WNDPROC wndproc);
	void handleMessages(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};