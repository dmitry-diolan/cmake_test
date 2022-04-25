
#set_property(TARGET c_sharp_executable PROPERTY  CMAKE_DOTNET_TARGET_FRAMEWORK_VERSION "v4.8")

#set_property(TARGET c_sharp_executable PROPERTY  CMAKE_VS_TARGET_FRAMEWORK_VERSION "v4.8")
#set_property(TARGET c_sharp_executable PROPERTY VS_DOTNET_TARGET_FRAMEWORK_VERSION "v4.8")

#SET(CMAKE_DOTNET_TARGET_FRAMEWORK_VERSION "v4.8")
#set(CMAKE_DOTNET_TARGET_FRAMEWORK "net48")

project(c_sharp_executable VERSION 1.0  LANGUAGES CSharp)
#project(c_sharp_executable VERSION 1.0  )

#set_property(TARGET c_sharp_executable PROPERTY  CMAKE_DOTNET_TARGET_FRAMEWORK_VERSION ".NET 6")
#set_property(TARGET c_sharp_executable PROPERTY  DOTNET_TARGET_FRAMEWORK_VERSION ".NET 6")
#set_property(TARGET c_sharp_executable PROPERTY  CMAKE_DOTNET_TARGET_FRAMEWORK ".NET 6")


#set_property(TARGET c_sharp_executable PROPERTY  CMAKE_VS_TARGET_FRAMEWORK_VERSION ".NET 6")
#set_property(TARGET c_sharp_executable PROPERTY VS_DOTNET_TARGET_FRAMEWORK_VERSION ".NET 6")

include(CSharpUtilities)

add_executable(c_sharp_executable 
	src/Program.cs
    src/App.config
    properties/AssemblyInfo.cs

)

#set_property(TARGET c_sharp_executable PROPERTY WIN32_EXECUTABLE TRUE)
set_property(TARGET c_sharp_executable PROPERTY VS_DOTNET_REFERENCES
    "Microsoft.CSharp"
    "System"
    "System.Core"
    "System.Data"
    "System.Data.DataSetExtensions"
    "System.Net.Http"
    "System.Xml"
    "System.Xml.Linq"
)



#target_include_directories(static_lib PUBLIC
#	  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
#)