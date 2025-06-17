project "Client Launcher"
	language "C++"
	kind "WindowedApp"
	targetname "Iran Multi Player"
	targetdir(buildpath("."))
	debugdir(buildpath("."))

	includedirs {
		"../../Shared/sdk",
		"../sdk",
	}

	pchheader "StdInc.h"
	pchsource "StdInc.cpp"

	entrypoint "WinMainCRTStartup"

	vpaths {
		["Headers/*"] = "**.h",
		["Sources/*"] = "**.cpp",
		["Resources/*"] = {"*.rc", "**.ico", "**.xml", "**.manifest"},
		["*"] = "premake5.lua"
	}

	files {
		"premake5.lua",
		"*.h",
		"*.cpp"
	}

	filter "system:windows"
		staticruntime "On"
		files {
			"NEU/gameicon_NEU.ico",
			"NEU/Iran Multi Player.gdf.xml",
			"launch.rc",
			"Iran Multi Player.rc",
			"Iran Multi Player.manifest",
			"resource/mtaicon.ico"
		}

	filter "architecture:not x86"
		flags { "ExcludeFromBuild" }

	filter "system:not windows"
		flags { "ExcludeFromBuild" }
