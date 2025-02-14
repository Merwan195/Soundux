#pragma once
#include <chrono>
#include <map>
#include "../config/config.h"

namespace Soundux
{
    namespace Hooks
    {
        // Defined by linux/windows.h
        std::string getKeyName(const int key);

        namespace internal
        {
            inline std::map<int, bool> pressedKeys;

            inline bool translateHotkeys = false;
            inline std::vector<int> capturedKeyList;
            inline std::map<int, std::pair<bool, std::chrono::system_clock::time_point>> capturedKeyStates;

            void onKeyEvent(int key, bool down);
        } // namespace internal
    }     // namespace Hooks
} // namespace Soundux