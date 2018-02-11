#pragma once
#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <cstdint>
#include <cwchar>

namespace Config {

	static const wchar_t* CONFIG_FILE = L"config.cfg";
	static const wchar_t* EXCLUDE_FILE = L"dynamic-ws-exclude.csv";
	static const uint16_t CACHE_HIT_MAX = 500;

}

#endif // !CONFIG_HPP
