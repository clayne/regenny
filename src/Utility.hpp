#pragma once

#include <cstdint>
#include <string>
#include <variant>

struct ModuleOffset {
    std::string name{};
    uintptr_t offset{};
};

std::variant<std::monostate, uintptr_t, ModuleOffset> parse_address(const std::string& str);