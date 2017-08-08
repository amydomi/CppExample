#pragma once

#include <vector>

class Screen;	// ÀàÇ°ÖÃÉùÃ÷

class Window_mgr
{
public:
	std::vector<Screen> screens;
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
};
