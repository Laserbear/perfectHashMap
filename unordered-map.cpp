#include "stdio.h"

stock_data look_up_key(const char* key, std::stize_t size) noexcept {
	auto it = keywords.find(std::string_view(key, size));
	if (it == keywords.end()) {
	    return;
	}
	return it->second;
}