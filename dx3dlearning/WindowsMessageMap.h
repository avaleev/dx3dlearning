#pragma once
#ifndef _WINDOWS_MESSAGE_MAP_H
#define _WINDOWS_MESSAGE_MAP_H

#include "DeviantWin.h"
#include <unordered_map>

class WindowsMessageMap {
public:
	WindowsMessageMap();
	std::string operator()(DWORD msg, LPARAM lp, WPARAM wp) const;
private:
	std::unordered_map<DWORD, std::string> map;
};

#endif
