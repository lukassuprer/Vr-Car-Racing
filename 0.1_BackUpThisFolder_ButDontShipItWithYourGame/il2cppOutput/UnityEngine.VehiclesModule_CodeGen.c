#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Vector3 UnityEngine.WheelHit::get_point()
extern void WheelHit_get_point_m9F7E614D1E1C6BAAF3392D3E21FF98FB9C9E370C (void);
// 0x00000002 System.Single UnityEngine.WheelCollider::get_radius()
extern void WheelCollider_get_radius_m68CC3DE301E0C6226E85F99D853365DA1244CD1F (void);
// 0x00000003 System.Single UnityEngine.WheelCollider::get_suspensionDistance()
extern void WheelCollider_get_suspensionDistance_mD1EE97B03FB1E744BCF24DC988806F52AE98A55F (void);
// 0x00000004 System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern void WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8 (void);
// 0x00000005 System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern void WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB (void);
// 0x00000006 System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern void WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3 (void);
// 0x00000007 System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern void WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890 (void);
// 0x00000008 System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern void WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	WheelHit_get_point_m9F7E614D1E1C6BAAF3392D3E21FF98FB9C9E370C,
	WheelCollider_get_radius_m68CC3DE301E0C6226E85F99D853365DA1244CD1F,
	WheelCollider_get_suspensionDistance_mD1EE97B03FB1E744BCF24DC988806F52AE98A55F,
	WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8,
	WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB,
	WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3,
	WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890,
	WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2,
};
extern void WheelHit_get_point_m9F7E614D1E1C6BAAF3392D3E21FF98FB9C9E370C_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000001, WheelHit_get_point_m9F7E614D1E1C6BAAF3392D3E21FF98FB9C9E370C_AdjustorThunk },
};
static const int32_t s_InvokerIndices[8] = 
{
	6588,
	6524,
	6524,
	5271,
	5271,
	5271,
	2452,
	4369,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule = 
{
	"UnityEngine.VehiclesModule.dll",
	8,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
