# QtStudy

Platform Toolset : Visual Studio 2017(v141) 
Window SDK Version : 10.0.17134.0

<How to use Qt 5.11.1 in visual studio without using qt creator or designer> 

project directory : (if the project name is "HelloWorld") ../HelloWorld/HelloWorld

1. add genQtMoc.bat under the project directory
  genQtMoc.bat :
    @ECHO OFF
    FOR %%f IN (*.h) DO moc.exe %%f -o moc_%%~nf.cpp

2. add moc.exe under the project directory 

  Everytime when you build the project moc.exe will generate moc_<headerFileName>.cpp 
  
  and you have to add that file previously to build without error.   
  
  For example, if you have temp.h, temp.cpp and stdafx.h in your project, you have to add moc_temp.cpp file to visual studio project first.
  
  Then when you build your project, moc.exe will take cake of the rest. 
  
  
Below is my project setting
  
  VC++ Directories/general/Include Directories: $(VC_IncludePath);$(WindowsSDK_IncludePath);C:\Qt\5.11.1\msvc2017_64\include;C:\Users\Jinho\Desktop\Project1\Project1\Codes\Header Files;
  VC++ Directories/general/Library Directories: $(VC_LibraryPath_x64);$(WindowsSDK_LibraryPath_x64);$(NETFXKitsDir)Lib\um\x64;C:\Qt\5.11.1\msvc2017_64\lib;
  VC++ Directories/general/Source Directories: $(VC_SourcePath);C:\Users\Jinho\Desktop\Project1\Project1\Codes\Source Files;
  
