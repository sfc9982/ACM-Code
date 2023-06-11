#include <bits/stdc++.h>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    system("title Squad工具 By:sfc9982");
    cout << R"(Ver1.2



QwQ)";

    system("pause");
    char user[50];
    cout << endl
         << "输入用户名后回车:";
    gets(user);
    char *firstName = "C:/Users/";
    char *lastName  = "/AppData/Local/SquadGame/Saved/Config/WindowsNoEditor/Engine.ini";
    char *name      = (char *) malloc(strlen(firstName) + strlen(user) + strlen(lastName));
    strcpy(name, firstName);
    strcat(name, user);
    strcat(name, lastName);

    //	cout << name << endl;
    //	char* filepath = "%temp%/SquadGame/Saved/Config/WindowsNoEditor/Engine.ini";
    ofstream output;
    output.open(name);
    output << R"([Core.System]
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
FogDensity=0
r.ParticleMinTimeBetweenTicks=114514
r.AllowStaticLighting=0
r.IndirectLightingCache=0
r.SSS.Scale=0
r.SSS.SampleSet=0
r.SSS.Quality=0
r.SSGI.HalfRes=1
r.SSR.HalfResSceneColor=1
r.SSGI.Quality=0
r.SSS.HalfRes=1
r.SSS.Filter=0
r.SSS.Checkerboard=1
FX.FreezeGPUSimulation=1
r.ReflectionEnvironment=0
r.ParticleLightQuality=0
r.LightFunctionQuality=0
r.LightMaxDrawDistanceScale=0
r.DFTwoSidedMeshDistanceBias=0
r.LightShaftQuality=0
r.LightShaftDownSampleFactor=0
r.LightShaftFirstPassDistance=0
r.GenerateMeshDistanceFields=0
r.chaos.ReflectionCaptureStaticSceneOnly=1
r.Filter.SizeScale=0.6
r.SubsurfaceScattering=0
r.BlurGBuffer=0
p.RigidBodyLODThreshold=0
r.TemporalAAFilterSize=0;
r.TemporalAAPauseCorrect=1
r.TemporalAACurrentFrameWeight=1;
r.TemporalAA.R11G11B10History=1;--------------------------1 is EXPERIMENTAL
r.TemporalAA.Algorithm=1;--------------------------1 is EXPERIMENTAL
r.TemporalAA.Upsampling=0;--------------------------TAAU
r.TemporalAAUpsampleFiltered=1
r.Tonemapper.Sharpen=1
r.Tonemapper.Quality=2;
r.TonemapperFilm=1;
r.Upscale.Quality=0
r.Tonemapper.GrainQuantization=1;--------------------------FIGHTS 8 BIT COLOR BANDING default 1
r.Tonemapper.MergeWithUpscale.Mode=0;
r.EnableAsyncComputeTranslucencyLightingVolumeClear=1
r.MipMapLODBias=0
r.LandscapeLODBias=0
r.SkeletalMeshLODBias=0
r.ParticleLODBias=0
r.Streaming.PoolSize=1000
r.Streaming.UseFixedPoolSize=1
r.Streaming.LimitPoolSizeToVRAM=0
r.Streaming.FramesForFullUpdate=10
r.Streaming.HLODStrategy=0
r.Streaming.MipBias=16
r.Streaming.UsePerTextureBias=0
r.Streaming.AmortizeCPUToGPUCopy=1
r.Streaming.MaxNumTexturesToStreamPerFrame=1
r.Streaming.NumStaticComponentsProcessedPerFrame=10
r.Streaming.Boost=1
r.Streaming.FullyLoadUsedTextures=0
r.Streaming.MaxEffectiveScreenSize=0
r.Streaming.DefragDynamicBounds=1
r.ShadowQuality=0
r.MaterialQualityLevel=0
r.SupportMaterialLayers=0
r.DetailMode=0
r.ViewDistanceScale=0.6
r.ViewDistanceScale.FieldOfViewAffectsHLOD=0;
r.PostProcessAAQuality=2
r.DefaultFeature.AntiAliasing=2
r.SceneRenderTargetResizeMethod=0
r.GBufferFormat=1;--------------------------default 1
r.ClearCoatNormal=0;--------------------------0 for PERFORMANCE
r.MinScreenRadiusForLights=0.03;--------------------------default 0.03
r.MinScreenRadiusForDepthPrepass=0.03;--------------------------default 0.03
r.MinScreenRadiusForCSMDepth=0.01;
r.LensFlareQuality=0
r.TranslucencyVolumeBlur=0
r.TranslucencyLightingVolumeDim=16
r.TranslucencyLightingVolumeInnerDistance=10000
r.TranslucencyLightingVolumeOuterDistance=2000000000
r.EmitterSpawnRateScale=0.1
r.SeparateTranslucency=0
r.DefaultFeature.AutoExposure=0
r.EyeAdaptationQuality=0
r.CompileShadersForDevelopment=0
r.UsePreExposure=0
r.EyeAdaptation.PreExposureOverride=0
r.OptimizeForUAVPerformance=1
r.GenerateLandscapeGIData=0
r.DBuffer=0
r.EarlyZPass=2
r.EarlyZPassMovable=1
r.EarlyZPassOnlyMaterialMasking=1
r.AlsoUseSphereForFrustumCull=1
r.ClearSceneMethod=1
r.Shadow.PerObject=0
r.Shadow.FilterMethod=0
r.Shadow.CSM.MaxCascades=4
r.Shadow.ForceSingleSampleShadowingFromStationary=0
r.Shadow.MaxResolution=256
r.Shadow.MaxCSMResolution=256
r.Shadow.RadiusThreshold=0
r.Shadow.DistanceScale=0
r.Shadow.CSM.TransitionScale=0.8
r.Shadow.CSMDepthBias=15
r.Shadow.CachedShadowsCastFromMovablePrimitives=0
r.AllowLandscapeShadows=0
r.DistanceFieldShadowing=0
r.DFFullResolution=0
r.DFShadowQuality=0
r.ContactShadows=0
r.CapsuleShadows=0
r.DistanceFieldGI=0
grass.DisableDynamicShadow=1
FX.AllowGPUParticles=0
r.BloomQuality=0
r.MotionBlurQuality=0
r.DrawRectangleOptimization=1
r.DepthOfFieldQuality=0
r.DistanceFieldAO=0
r.AmbientOcclusion.Compute=0
r.AOApplyToStaticIndirect=0
r.AOQuality=0
r.HLOD=0
r.RHICmdBalanceParallelLists=0
r.D3D11.Depth24Bit=1

[TextureStreaming]
PoolSizeVRAMPercentage=50

[Core.Log]
Global=0

[Internationalization]
Culture=en-US
)" << endl;
    cout << R"(解压中...)" << endl;
    Sleep(2000);
    cout << R"(解压完成!
注入游戏文件...)"
         << endl;
    cout << R"(注入成功...
)" << endl;
    output.close();
    getchar();
    getchar();
    return 0;
}
