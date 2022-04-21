
project(c_sharp_executable VERSION 1.0  LANGUAGES CSharp)


include(CSharpUtilities)

add_executable(c_sharp_executable 
	src/Program.cs
    src/App.config
    properties/AssemblyInfo.cs

)


set_property(TARGET c_sharp_executable PROPERTY VS_DOTNET_TARGET_FRAMEWORK_VERSION "v4.6.1")
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