// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Client : ModuleRules
{
	public Client(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" , "Sockets", "Networking" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		//protobuf
		{
			string libPath = "Libraries/libs/protobuf/libprotobuf.lib";
			string libFullPath = System.IO.Path.Combine(Target.ProjectFile.Directory.FullName, libPath);
			PublicAdditionalLibraries.Add(libFullPath);

			string includePath = "Libraries/include";
			string includeFullPath = System.IO.Path.Combine(Target.ProjectFile.Directory.FullName, includePath);
			PublicIncludePaths.Add(includeFullPath);
		}

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
