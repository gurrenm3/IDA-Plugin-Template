#define _SILENCE_CXX20_IS_POD_DEPRECATION_WARNING

#include <windows.h>
#include <ida.hpp>
#include <idp.hpp>
#include <loader.hpp>


// Define the plugin entry point
plugmod_t* idaapi init() {
    // Your initialization code here
    return PLUGIN_OK;
}

void idaapi term() {
    // Your cleanup code here
}

bool idaapi run(size_t arg) {
    // Your plugin's main functionality here

    msg("My Plugin Template started!");
    
    return true;
}

// Plugin description
__declspec(dllexport) plugin_t PLUGIN = {
    IDP_INTERFACE_VERSION,
    PLUGIN_PROC,         // Plugin flags
    init,               // Initialization function
    term,               // Cleanup function
    run,                // Main function
    "Description",
    "Help",
    "Plugin Template",
    "Wanted_Hotkey" // Example: "Ctrl-Alt-S"
};

