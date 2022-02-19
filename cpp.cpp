#include <bits/stdc++.h>
#include <windows.h>
#include <ctime> 
using namespace std;

int main()
{
	system("title Squad工具 By:sfc9982");
	cout << R"(Ver1.2



QwQ)";

	system("pause");
	char user[50];
	cout << endl << "输入用户名后回车:";
	gets(user); 
	char *firstName = "C:/Users/";
    char *lastName = "/AppData/Local/SquadGame/Saved/Config/WindowsNoEditor/Engine.ini";
    char *name = (char *) malloc(strlen(firstName) + strlen(user) +strlen(lastName));
    strcpy(name, firstName);
    strcat(name, user);
    strcat(name, lastName);
	
//	cout << name << endl;
//	char* filepath = "%temp%/SquadGame/Saved/Config/WindowsNoEditor/Engine.ini";  
    ofstream output;
    output.open(name);
    output <<R"([Core.System]
Paths=../../../Engine/Content
Paths=%GAMEDIR%Content
Paths=../../../SquadGame/Plugins/OffworldCore/Squad/Content
Paths=../../../SquadGame/Plugins/OffworldCore/Systems/Modding/Content
Paths=../../../SquadGame/Plugins/OffworldCore/ThirdParty/DiscordRPC/Content
Paths=../../../SquadGame/Plugins/PrefabTool/Content
Paths=../../../SquadGame/Plugins/AssetsCleaner/Content
Paths=../../../SquadGame/Plugins/MultiPacker/Content
Paths=../../../SquadGame/Plugins/Mods/CanadianArmedForces/Content
Paths=../../../Engine/Plugins/Developer/AnimationSharing/Content
Paths=../../../Engine/Plugins/Editor/CryptoKeys/Content
Paths=../../../Engine/Plugins/Editor/CurveEditorTools/Content
Paths=../../../Engine/Plugins/Enterprise/DatasmithContent/Content
Paths=../../../Engine/Plugins/Experimental/AutomationUtils/Content
Paths=../../../Engine/Plugins/Media/MediaCompositing/Content
Paths=../../../SquadGame/Plugins/Viewster/Content
Paths=../../../SquadGame/Plugins/ImpostorBaker/Content
Paths=../../../Engine/Plugins/Editor/BlueprintMaterialTextureNodes/Content
Paths=../../../SquadGame/Plugins/OffworldCore/ThirdParty/SteelSeriesGameSense/Content
Paths=../../../SquadGame/Plugins/Expansions/BlackCoast/Content
Paths=../../../SquadGame/Plugins/Expansions/Harju/Content
Paths=../../../SquadGame/Plugins/Expansions/EastAsia/Content
Paths=../../../SquadGame/Plugins/Expansions/Haiyan/Content
Paths=../../../SquadGame/Plugins/Expansions/SanxianIslands/Content
Paths=../../../SquadGame/Plugins/OWI_EditorEnhancements/Content
Paths=../../../Engine/Plugins/Experimental/PythonScriptPlugin/Content


[SystemSettings]
grass.DensityScale=0.6
foliage.DensityScale=0.6
r.Mobile.DisableVertexFog=1
r.FastVRam.VolumetricFog=0
r.VSync=1
r.AllowHDR=1
r.OneFrameThreadLag=1
r.FullScreenMode=0
r.GTSyncType=0
r.RHICmdBypass=0
r.GPUCrashDebugging=0
r.CreateShadersOnLoad=1
Compat.UseDXT5NormalMaps=0
r.MSAA.CompositingSampleCount=1
r.SceneColorFormat=3
r.SubsurfaceScattering=1
r.SSS.Scale=1
r.SSS.SampleSet=1
r.SSS.Quality=0
r.SSS.HalfRes=1
r.SSS.Filter=1
r.SSS.Checkerboard=1
r.VirtualTexture=1
r.RenderTargetPoolMin=400
ShowFlag.Tessellation=0
r.TessellationAdaptivePixelsPerTriangle=9999999
r.MipMapLODBias=0
r.LandscapeLODBias=0
r.SkeletalMeshLODBias=0
r.ParticleLODBias=0
r.TextureStreaming=1
r.Streaming.LimitPoolSizeToVRAM=1
r.Streaming.UseFixedPoolSize=0
r.Streaming.PoolSize=512
r.Streaming.HLODStrategy=0
r.Streaming.MipBias=16
r.Streaming.UsePerTextureBias=0
r.Streaming.AmortizeCPUToGPUCopy=1
r.Streaming.MaxNumTexturesToStreamPerFrame=0
r.Streaming.NumStaticComponentsProcessedPerFrame=50
r.Streaming.Boost=1
r.Streaming.FullyLoadUsedTextures=0
r.Streaming.MaxEffectiveScreenSize=0
r.Streaming.DefragDynamicBounds=1
r.ShadowQuality=1
r.Shadow.PerObject=1
r.Shadow.FilterMethod=0
r.Shadow.CSM.MaxCascades=4
r.Shadow.ForceSingleSampleShadowingFromStationary=0
r.Shadow.MaxResolution=512
r.Shadow.MaxCSMResolution=512
r.Shadow.RadiusThreshold=0.03
r.Shadow.DistanceScale=0.4
r.Shadow.CSM.TransitionScale=0.8
r.Shadow.CSMDepthBias=15
r.Shadow.CachedShadowsCastFromMovablePrimitives=0
r.AllowLandscapeShadows=1
r.DistanceFieldShadowing=0
r.DFFullResolution=0
r.DFShadowQuality=0
r.ContactShadows=0
r.CapsuleShadows=0
r.AllowStaticLighting=0
r.IndirectLightingCache=0
r.ScreenPercentage=100
r.SceneRenderTargetResizeMethod=0
r.Upscale.Quality=0
r.TemporalAASamples=4
r.TemporalAACurrentFrameWeight=0.2
r.TemporalAA.AllowDownsampling=0
r.TemporalAA.Upsampling=0
r.TemporalAAUpsampleFiltered=0
r.Filter.SizeScale=1
r.Tonemapper.Quality=2
r.Tonemapper.MergeWithUpscale.Mode=1
r.TonemapperFilm=1
r.Tonemapper.GrainQuantization=0
r.GenerateMeshDistanceFields=1
r.DistanceFieldGI=0
r.GenerateLandscapeGIData=1
r.AmbientOcclusion.Compute=0
r.AOSpecularOcclusionMode=1
r.AOApplyToStaticIndirect=1
r.DistanceFieldAO=0
r.AOQuality=0
r.ReflectionEnvironment=1
r.ReflectionEnvironmentLightmapMixBasedOnRoughness=1
r.ReflectionEnvironmentLightmapMixing=1
r.ReflectionEnvironmentLightmapMixLargestWeight=1000
r.DepthOfFieldQuality=0
r.ViewDistanceScale=1
r.ViewDistanceScale.FieldOfViewAffectsHLOD=0
r.HLOD=0
r.HLOD.MaximumLevel=-1
r.HLOD.DistanceScale=1
r.HLOD.DistanceOverride=5000
r.SupportSimpleForwardShading=0
r.SimpleForwardShading=0
r.LightFunctionQuality=1
r.LightMaxDrawDistanceScale=0.8
r.LightShaftQuality=1
r.LightShaftDownSampleFactor=0
r.LightShaftFirstPassDistance=0.1
r.BloomQuality=0
r.SceneColorFringeQuality=0
r.SceneColorFringe.Max=0.25
r.SSR.Quality=0
r.VolumetricFog=0
r.MotionBlurQuality=0
r.MaterialQualityLevel=0
r.SupportMaterialLayers=0
r.RefractionQuality=0
r.DetailMode=1
r.ParticleLightQuality=0
r.LensFlareQuality=0
r.Atmosphere=0
grass.DensityScale=1
foliage.DensityScale=1
r.TranslucencyVolumeBlur=1
r.TranslucencyLightingVolumeDim=64
r.TranslucencyLightingVolumeInnerDistance=1500
r.TranslucencyLightingVolumeOuterDistance=5000
r.EmitterSpawnRateScale=0.5
r.MinTimeBetweenTicks=8
r.ParticleMinTimeBetweenTicks=8
r.SeparateTranslucency=0
r.MinScreenRadiusForLights=0.300000
r.MinScreenRadiusForDepthPrepass=0.300000
r.MinScreenRadiusForCSMDepth=0.300000
r.DefaultFeature.AutoExposure=1
r.EyeAdaptationQuality=0
r.DefaultFeature.AutoExposure.Method=1

[TextureStreaming]
PoolSizeVRAMPercentage=50

[Core.Log]
Global=0

[Internationalization]
Culture=en-US
)"<<endl;
	cout<<R"(解压中...)"<<endl;
	Sleep(2000);
	cout<<R"(解压完成!
注入游戏文件...)"<<endl;
cout<<R"(注入成功...
)"<<endl;
    output.close();
    getchar();
    getchar();
    return 0;
}
