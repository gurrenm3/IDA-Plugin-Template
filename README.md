# Ida Plugin Template
A basic C++ Plugin template for creating new IDA Plugins.

Based on: https://github.com/kweatherman/sigmakerex


# Building

Tested with Visual Studio 2022 and Rider on Windows 11. Only dependency being the official IDA Pro C/C++ SDK. 
To build the project you'll need to create a new environment variable and call it _IDADIR. It should point to the folder where the IDA SDK is located, and expects to find a "idasdk/include" and "idasdk/lib" folder there.

Example: 
If you had your "idasdk" folder located at "C:\PathToMyIdaFolder", your new environment variable should be:
_IDADIR = "C:\PathToMyIdaFolder"
