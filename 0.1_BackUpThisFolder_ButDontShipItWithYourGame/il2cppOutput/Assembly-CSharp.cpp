#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<Unity.MLAgents.Agent>
struct Action_1_t248C358C58AC92ADAACF9BD40327A36AF107FD61;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// System.Collections.Generic.ISet`1<Unity.MLAgents.Demonstrations.DemonstrationWriter>
struct ISet_1_t856DE1F90778AF82E616B77DFC9B57E46E6D7414;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62;
// System.Collections.Generic.List`1<AxleInfo>
struct List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC;
// System.Collections.Generic.List`1<CheckpointSingle>
struct List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Unity.MLAgents.Sensors.ISensor>
struct List_1_t5D8B62639094769074FE1FAEFB047FB0F744512D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>
struct List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct RegistrationList_1_t4CFD9E29B57A81B6DFE2C016746F640843506138;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct RegistrationList_1_t3C57B4669121D753FC5E6447930968A297EE0630;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// AxleInfo[]
struct AxleInfoU5BU5D_tDA0EA5C26CB7AAE5E451546DAE1A2695AD151176;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// CheckpointSingle[]
struct CheckpointSingleU5BU5D_tCD27A7A73DE71758A7F2640912DAF94A30BB31F9;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40;
// Unity.MLAgents.Actuators.ActuatorManager
struct ActuatorManager_t038F2BEDE905EA66170B4B374210F6F2BCCC3046;
// Unity.MLAgents.Agent
struct Agent_tB1CB95DC698898AFFCE4081DB96E6D4ADC39229F;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AntiRollBar
struct AntiRollBar_tB5E4A55CD135700EF657F161EEF025A5FFF53B07;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// AxleInfo
struct AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9;
// Unity.MLAgents.Policies.BehaviorParameters
struct BehaviorParameters_t9F72A035B58888114F02CF4F4F135CB627970823;
// BrakeScript
struct BrakeScript_tEFD0646361E056B5923FE8A14C02F695B9F0DE46;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CarController
struct CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5;
// CarDriverAgent
struct CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B;
// CheckpointSingle
struct CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DebugLogPanel
struct DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HandPresence
struct HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E;
// UnityEngine.HingeJoint
struct HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// Unity.MLAgents.Actuators.IActuator
struct IActuator_t3C5AA55B8FC7BB1F845E648FE17E8C2C73618CF1;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Unity.MLAgents.Policies.IPolicy
struct IPolicy_tDC5B2FB199CB9E8B6B1AF5A170CC5E5CD0D83010;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Unity.MLAgents.RecursionChecker
struct RecursionChecker_t3DB74EBA1705B013902E9422C211295342425B16;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// Unity.MLAgents.Sensors.StackingSensor
struct StackingSensor_tD08FB15428C271044CAFF097CE3687A7619F9178;
// SteeringWheelController
struct SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TrackCheckpoints
struct TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor
struct TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Unity.MLAgents.Sensors.VectorSensor
struct VectorSensor_tBC68DFE8028E01559AEC4DEB88FCDD74D6BB0B68;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Wall
struct Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334;
// UnityEngine.WheelCollider
struct WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// CarDriverAgent/<CarStopped>d__5
struct U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral37BCD4F8FC9290E188FF71892267B1A8A19BA95E;
IL2CPP_EXTERN_C String_t* _stringLiteral384BBCEE9A0C28D6BD8E2CF3AF8AE75B13DC7672;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F;
IL2CPP_EXTERN_C String_t* _stringLiteral781F319632B95F69BBD1EFE0C6915C6C37AB28D5;
IL2CPP_EXTERN_C String_t* _stringLiteral8B711D23D0BE79BD5BB70178EF41AC78B900EE76;
IL2CPP_EXTERN_C String_t* _stringLiteral91F6ADE7A9802927EFAE75DA40F816DC7177D1F0;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralD65F8A1CBDAF590FF16F324EAFF26306AA5CE940;
IL2CPP_EXTERN_C String_t* _stringLiteralFEDE3ABFA134C843BB78F1850F9844620BD47E59;
IL2CPP_EXTERN_C String_t* _stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A;
IL2CPP_EXTERN_C const RuntimeMethod* ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m27C75029B4773496FE7C8FFA59CF9C8417638AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3_m6CD64B37564E296F3809C369637E161831DE14FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m383C805187F4803BA4EDE1CEE43A341B74F0683D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisXRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_m44ADDC8C2C50FFD02D9A92D911E0CB7F477CF459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugLogPanel_Application_logMessageReceivedThreaded_mED3AF5264AD8E306E9A21D9AA0E6ACC6A362FCC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E_m9AAE1F14F219C4F79DBCB4D8E0D97892449DB79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_m6021DC774F04F238AC0E4DB3E163773F0C884781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandPresence_U3CTryInitializeU3Eb__13_0_mCF958A422EFDB54CD17E37B2778770C67A412F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE89A719B0F220B5EC35B1ED65415D64D6B7C5505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m81A3F84ADF79DAA3AF57A7000507C77E5F372AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m4F76708D26948C7968F5E6AB83DA8E2B6584F410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAC5F910551A416276D418C294E0215E1C4789E31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF25F81A50B5329552D8F5EA25903117F3F6080C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m625296BA9D3BA084AC1FEE539E822F448C705793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_mB42EFE81A34E66C6C35D538DE62D5D603D107BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_ToArray_mD041F9B63713BA7AFA105AFE468BFC3F55CDDB7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCarStoppedU3Ed__5_System_Collections_IEnumerator_Reset_mC40D3C04360F63B3520CE8574BDC25BB1E33B548_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<AxleInfo>
struct List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AxleInfoU5BU5D_tDA0EA5C26CB7AAE5E451546DAE1A2695AD151176* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AxleInfoU5BU5D_tDA0EA5C26CB7AAE5E451546DAE1A2695AD151176* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CheckpointSingle>
struct List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CheckpointSingleU5BU5D_tCD27A7A73DE71758A7F2640912DAF94A30BB31F9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CheckpointSingleU5BU5D_tCD27A7A73DE71758A7F2640912DAF94A30BB31F9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// AxleInfo
struct AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9  : public RuntimeObject
{
	// UnityEngine.WheelCollider AxleInfo::leftWheel
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___leftWheel_0;
	// UnityEngine.WheelCollider AxleInfo::rightWheel
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___rightWheel_1;
	// System.Boolean AxleInfo::motor
	bool ___motor_2;
	// System.Boolean AxleInfo::steering
	bool ___steering_3;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CarDriverAgent/<CarStopped>d__5
struct U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492  : public RuntimeObject
{
	// System.Int32 CarDriverAgent/<CarStopped>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CarDriverAgent/<CarStopped>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CarDriverAgent CarDriverAgent/<CarStopped>d__5::<>4__this
	CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* ___U3CU3E4__this_2;
};

// Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>
struct ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 
{
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Offset
	int32_t ___Offset_0;
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Length
	int32_t ___Length_1;
	// T[] Unity.MLAgents.Actuators.ActionSegment`1::<Array>k__BackingField
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CArrayU3Ek__BackingField_3;
};

struct ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7_StaticFields
{
	// Unity.MLAgents.Actuators.ActionSegment`1<T> Unity.MLAgents.Actuators.ActionSegment`1::Empty
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 ___Empty_2;
};

// Unity.MLAgents.Actuators.ActionSegment`1<System.Single>
struct ActionSegment_1_t803AC3826AD3AD0F72FFF1DC6D51BDF330065B78 
{
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Offset
	int32_t ___Offset_0;
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Length
	int32_t ___Length_1;
	// T[] Unity.MLAgents.Actuators.ActionSegment`1::<Array>k__BackingField
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CArrayU3Ek__BackingField_3;
};

struct ActionSegment_1_t803AC3826AD3AD0F72FFF1DC6D51BDF330065B78_StaticFields
{
	// Unity.MLAgents.Actuators.ActionSegment`1<T> Unity.MLAgents.Actuators.ActionSegment`1::Empty
	ActionSegment_1_t803AC3826AD3AD0F72FFF1DC6D51BDF330065B78 ___Empty_2;
};

// System.Collections.Generic.List`1/Enumerator<AxleInfo>
struct Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// Unity.MLAgents.InplaceArray`1<System.Int32>
struct InplaceArray_1_t8D7DCBD16D79723479C03C6BBDEF1C0B1159D9C0 
{
	// System.Int32 Unity.MLAgents.InplaceArray`1::m_Length
	int32_t ___m_Length_1;
	// T Unity.MLAgents.InplaceArray`1::m_Elem0
	int32_t ___m_Elem0_2;
	// T Unity.MLAgents.InplaceArray`1::m_Elem1
	int32_t ___m_Elem1_3;
	// T Unity.MLAgents.InplaceArray`1::m_Elem2
	int32_t ___m_Elem2_4;
	// T Unity.MLAgents.InplaceArray`1::m_Elem3
	int32_t ___m_Elem3_5;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Unity.MLAgents.Agent/AgentParameters
struct AgentParameters_t0C9A00D6EAF2773CB78EE2772558901465C273E3 
{
	// System.Int32 Unity.MLAgents.Agent/AgentParameters::maxStep
	int32_t ___maxStep_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40 
{
	// Unity.MLAgents.Actuators.ActionSegment`1<System.Single> Unity.MLAgents.Actuators.ActionBuffers::<ContinuousActions>k__BackingField
	ActionSegment_1_t803AC3826AD3AD0F72FFF1DC6D51BDF330065B78 ___U3CContinuousActionsU3Ek__BackingField_1;
	// Unity.MLAgents.Actuators.ActionSegment`1<System.Int32> Unity.MLAgents.Actuators.ActionBuffers::<DiscreteActions>k__BackingField
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 ___U3CDiscreteActionsU3Ek__BackingField_2;
};

struct ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40_StaticFields
{
	// Unity.MLAgents.Actuators.ActionBuffers Unity.MLAgents.Actuators.ActionBuffers::Empty
	ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40 ___Empty_0;
};
// Native definition for P/Invoke marshalling of Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40_marshaled_pinvoke
{
	ActionSegment_1_t803AC3826AD3AD0F72FFF1DC6D51BDF330065B78 ___U3CContinuousActionsU3Ek__BackingField_1;
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 ___U3CDiscreteActionsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40_marshaled_com
{
	ActionSegment_1_t803AC3826AD3AD0F72FFF1DC6D51BDF330065B78 ___U3CContinuousActionsU3Ek__BackingField_1;
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 ___U3CDiscreteActionsU3Ek__BackingField_2;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// UnityEngine.XR.CommonUsages
struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1  : public RuntimeObject
{
};

struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___thumbTouch_58;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Unity.MLAgents.Sensors.DimensionProperty
struct DimensionProperty_t068C7814D0D6A38B63891C2EAED8C5BE445A395E 
{
	// System.Int32 Unity.MLAgents.Sensors.DimensionProperty::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t7BD1A06C6AE9FBD26F4FC105269861694217BD82 
{
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.LogType
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;
};

// TMPro.MaskingTypes
struct MaskingTypes_tF4913BE3D6A47C3AD642902F83C6C52B4A39D2B5 
{
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.MLAgents.Sensors.ObservationType
struct ObservationType_t721B9B5928B612E7D0F09EE31E30021114430F7C 
{
	// System.Int32 Unity.MLAgents.Sensors.ObservationType::value__
	int32_t ___value___2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.WheelHit
struct WheelHit_t15D44A463BF2792AD26161787B98CB5698519455 
{
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_ForwardDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ForwardDir_2;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_SidewaysDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SidewaysDir_3;
	// System.Single UnityEngine.WheelHit::m_Force
	float ___m_Force_4;
	// System.Single UnityEngine.WheelHit::m_ForwardSlip
	float ___m_ForwardSlip_5;
	// System.Single UnityEngine.WheelHit::m_SidewaysSlip
	float ___m_SidewaysSlip_6;
	// UnityEngine.Collider UnityEngine.WheelHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.WheelHit
struct WheelHit_t15D44A463BF2792AD26161787B98CB5698519455_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ForwardDir_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_7;
};
// Native definition for COM marshalling of UnityEngine.WheelHit
struct WheelHit_t15D44A463BF2792AD26161787B98CB5698519455_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ForwardDir_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_7;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType
struct InputTriggerType_t51135E1379C18C54A1E915651CF09F06545F2E10 
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType::value__
	int32_t ___value___2;
};

// Unity.MLAgents.InplaceArray`1<Unity.MLAgents.Sensors.DimensionProperty>
struct InplaceArray_1_t3BCF76794FED10F48DF48ED3FDF2C7B3A2656FFA 
{
	// System.Int32 Unity.MLAgents.InplaceArray`1::m_Length
	int32_t ___m_Length_1;
	// T Unity.MLAgents.InplaceArray`1::m_Elem0
	int32_t ___m_Elem0_2;
	// T Unity.MLAgents.InplaceArray`1::m_Elem1
	int32_t ___m_Elem1_3;
	// T Unity.MLAgents.InplaceArray`1::m_Elem2
	int32_t ___m_Elem2_4;
	// T Unity.MLAgents.InplaceArray`1::m_Elem3
	int32_t ___m_Elem3_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Unity.MLAgents.AgentInfo
struct AgentInfo_tA977C305542AEB3C9835D8FAEDA1278F5EAD47F5 
{
	// Unity.MLAgents.Actuators.ActionBuffers Unity.MLAgents.AgentInfo::storedActions
	ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40 ___storedActions_0;
	// System.Boolean[] Unity.MLAgents.AgentInfo::discreteActionMasks
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___discreteActionMasks_1;
	// System.Single Unity.MLAgents.AgentInfo::reward
	float ___reward_2;
	// System.Single Unity.MLAgents.AgentInfo::groupReward
	float ___groupReward_3;
	// System.Boolean Unity.MLAgents.AgentInfo::done
	bool ___done_4;
	// System.Boolean Unity.MLAgents.AgentInfo::maxStepReached
	bool ___maxStepReached_5;
	// System.Int32 Unity.MLAgents.AgentInfo::episodeId
	int32_t ___episodeId_6;
	// System.Int32 Unity.MLAgents.AgentInfo::groupId
	int32_t ___groupId_7;
};
// Native definition for P/Invoke marshalling of Unity.MLAgents.AgentInfo
struct AgentInfo_tA977C305542AEB3C9835D8FAEDA1278F5EAD47F5_marshaled_pinvoke
{
	ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40_marshaled_pinvoke ___storedActions_0;
	int32_t* ___discreteActionMasks_1;
	float ___reward_2;
	float ___groupReward_3;
	int32_t ___done_4;
	int32_t ___maxStepReached_5;
	int32_t ___episodeId_6;
	int32_t ___groupId_7;
};
// Native definition for COM marshalling of Unity.MLAgents.AgentInfo
struct AgentInfo_tA977C305542AEB3C9835D8FAEDA1278F5EAD47F5_marshaled_com
{
	ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40_marshaled_com ___storedActions_0;
	int32_t* ___discreteActionMasks_1;
	float ___reward_2;
	float ___groupReward_3;
	int32_t ___done_4;
	int32_t ___maxStepReached_5;
	int32_t ___episodeId_6;
	int32_t ___groupId_7;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.MLAgents.Sensors.ObservationSpec
struct ObservationSpec_t03F07E4C9C7B4586FBAF9E696DE12C8B3F57712A 
{
	// Unity.MLAgents.InplaceArray`1<System.Int32> Unity.MLAgents.Sensors.ObservationSpec::m_Shape
	InplaceArray_1_t8D7DCBD16D79723479C03C6BBDEF1C0B1159D9C0 ___m_Shape_0;
	// Unity.MLAgents.InplaceArray`1<Unity.MLAgents.Sensors.DimensionProperty> Unity.MLAgents.Sensors.ObservationSpec::m_DimensionProperties
	InplaceArray_1_t3BCF76794FED10F48DF48ED3FDF2C7B3A2656FFA ___m_DimensionProperties_1;
	// Unity.MLAgents.Sensors.ObservationType Unity.MLAgents.Sensors.ObservationSpec::m_ObservationType
	int32_t ___m_ObservationType_2;
};
// Native definition for P/Invoke marshalling of Unity.MLAgents.Sensors.ObservationSpec
struct ObservationSpec_t03F07E4C9C7B4586FBAF9E696DE12C8B3F57712A_marshaled_pinvoke
{
	InplaceArray_1_t8D7DCBD16D79723479C03C6BBDEF1C0B1159D9C0 ___m_Shape_0;
	InplaceArray_1_t3BCF76794FED10F48DF48ED3FDF2C7B3A2656FFA ___m_DimensionProperties_1;
	int32_t ___m_ObservationType_2;
};
// Native definition for COM marshalling of Unity.MLAgents.Sensors.ObservationSpec
struct ObservationSpec_t03F07E4C9C7B4586FBAF9E696DE12C8B3F57712A_marshaled_com
{
	InplaceArray_1_t8D7DCBD16D79723479C03C6BBDEF1C0B1159D9C0 ___m_Shape_0;
	InplaceArray_1_t3BCF76794FED10F48DF48ED3FDF2C7B3A2656FFA ___m_DimensionProperties_1;
	int32_t ___m_ObservationType_2;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.MLAgents.Sensors.VectorSensor
struct VectorSensor_tBC68DFE8028E01559AEC4DEB88FCDD74D6BB0B68  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Single> Unity.MLAgents.Sensors.VectorSensor::m_Observations
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___m_Observations_0;
	// Unity.MLAgents.Sensors.ObservationSpec Unity.MLAgents.Sensors.VectorSensor::m_ObservationSpec
	ObservationSpec_t03F07E4C9C7B4586FBAF9E696DE12C8B3F57712A ___m_ObservationSpec_1;
	// System.String Unity.MLAgents.Sensors.VectorSensor::m_Name
	String_t* ___m_Name_2;
};

// UnityEngine.WheelCollider
struct WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// Unity.MLAgents.Agent
struct Agent_tB1CB95DC698898AFFCE4081DB96E6D4ADC39229F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.MLAgents.Policies.IPolicy Unity.MLAgents.Agent::m_Brain
	RuntimeObject* ___m_Brain_4;
	// Unity.MLAgents.Policies.BehaviorParameters Unity.MLAgents.Agent::m_PolicyFactory
	BehaviorParameters_t9F72A035B58888114F02CF4F4F135CB627970823* ___m_PolicyFactory_5;
	// Unity.MLAgents.Agent/AgentParameters Unity.MLAgents.Agent::agentParameters
	AgentParameters_t0C9A00D6EAF2773CB78EE2772558901465C273E3 ___agentParameters_6;
	// System.Boolean Unity.MLAgents.Agent::hasUpgradedFromAgentParameters
	bool ___hasUpgradedFromAgentParameters_7;
	// System.Int32 Unity.MLAgents.Agent::MaxStep
	int32_t ___MaxStep_8;
	// Unity.MLAgents.AgentInfo Unity.MLAgents.Agent::m_Info
	AgentInfo_tA977C305542AEB3C9835D8FAEDA1278F5EAD47F5 ___m_Info_9;
	// System.Single Unity.MLAgents.Agent::m_Reward
	float ___m_Reward_10;
	// System.Single Unity.MLAgents.Agent::m_GroupReward
	float ___m_GroupReward_11;
	// System.Single Unity.MLAgents.Agent::m_CumulativeReward
	float ___m_CumulativeReward_12;
	// System.Boolean Unity.MLAgents.Agent::m_RequestAction
	bool ___m_RequestAction_13;
	// System.Boolean Unity.MLAgents.Agent::m_RequestDecision
	bool ___m_RequestDecision_14;
	// System.Int32 Unity.MLAgents.Agent::m_StepCount
	int32_t ___m_StepCount_15;
	// System.Int32 Unity.MLAgents.Agent::m_CompletedEpisodes
	int32_t ___m_CompletedEpisodes_16;
	// System.Int32 Unity.MLAgents.Agent::m_EpisodeId
	int32_t ___m_EpisodeId_17;
	// System.Boolean Unity.MLAgents.Agent::m_Initialized
	bool ___m_Initialized_18;
	// System.Collections.Generic.ISet`1<Unity.MLAgents.Demonstrations.DemonstrationWriter> Unity.MLAgents.Agent::DemonstrationWriters
	RuntimeObject* ___DemonstrationWriters_19;
	// System.Collections.Generic.List`1<Unity.MLAgents.Sensors.ISensor> Unity.MLAgents.Agent::sensors
	List_1_t5D8B62639094769074FE1FAEFB047FB0F744512D* ___sensors_20;
	// Unity.MLAgents.Sensors.VectorSensor Unity.MLAgents.Agent::collectObservationsSensor
	VectorSensor_tBC68DFE8028E01559AEC4DEB88FCDD74D6BB0B68* ___collectObservationsSensor_21;
	// Unity.MLAgents.Sensors.StackingSensor Unity.MLAgents.Agent::stackedCollectObservationsSensor
	StackingSensor_tD08FB15428C271044CAFF097CE3687A7619F9178* ___stackedCollectObservationsSensor_22;
	// Unity.MLAgents.RecursionChecker Unity.MLAgents.Agent::m_CollectObservationsChecker
	RecursionChecker_t3DB74EBA1705B013902E9422C211295342425B16* ___m_CollectObservationsChecker_23;
	// Unity.MLAgents.RecursionChecker Unity.MLAgents.Agent::m_OnEpisodeBeginChecker
	RecursionChecker_t3DB74EBA1705B013902E9422C211295342425B16* ___m_OnEpisodeBeginChecker_24;
	// Unity.MLAgents.Actuators.ActuatorManager Unity.MLAgents.Agent::m_ActuatorManager
	ActuatorManager_t038F2BEDE905EA66170B4B374210F6F2BCCC3046* ___m_ActuatorManager_25;
	// Unity.MLAgents.Actuators.IActuator Unity.MLAgents.Agent::m_VectorActuator
	RuntimeObject* ___m_VectorActuator_26;
	// System.Int32 Unity.MLAgents.Agent::m_GroupId
	int32_t ___m_GroupId_27;
	// System.Action`1<Unity.MLAgents.Agent> Unity.MLAgents.Agent::OnAgentDisabled
	Action_1_t248C358C58AC92ADAACF9BD40327A36AF107FD61* ___OnAgentDisabled_28;
};

// AntiRollBar
struct AntiRollBar_tB5E4A55CD135700EF657F161EEF025A5FFF53B07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.WheelCollider AntiRollBar::WheelL
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___WheelL_4;
	// UnityEngine.WheelCollider AntiRollBar::WheelR
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___WheelR_5;
	// System.Single AntiRollBar::antiRoll
	float ___antiRoll_6;
	// UnityEngine.Rigidbody AntiRollBar::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BrakeScript
struct BrakeScript_tEFD0646361E056B5923FE8A14C02F695B9F0DE46  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CarController BrakeScript::carController
	CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* ___carController_4;
	// UnityEngine.HingeJoint BrakeScript::hinge
	HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* ___hinge_5;
	// UnityEngine.Vector3 BrakeScript::carPostion
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___carPostion_6;
};

// CarController
struct CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<AxleInfo> CarController::axleInfos
	List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* ___axleInfos_4;
	// System.Single CarController::maxMotorTorque
	float ___maxMotorTorque_5;
	// System.Single CarController::maxSteeringAngle
	float ___maxSteeringAngle_6;
	// System.Single CarController::breakPower
	float ___breakPower_7;
	// UnityEngine.Rigidbody CarController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_8;
	// TMPro.TextMeshProUGUI CarController::speedometer
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___speedometer_9;
	// SteeringWheelController CarController::steeringWheelController
	SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* ___steeringWheelController_10;
};

// CheckpointSingle
struct CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TrackCheckpoints CheckpointSingle::trackCheckpoints
	TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* ___trackCheckpoints_4;
};

// DebugLogPanel
struct DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LogType DebugLogPanel::LogLevel
	int32_t ___LogLevel_4;
	// System.Int32 DebugLogPanel::maxNumberOfMessages
	int32_t ___maxNumberOfMessages_5;
	// System.Boolean DebugLogPanel::includeStackTrace
	bool ___includeStackTrace_6;
	// System.Boolean DebugLogPanel::playSoundOnMessage
	bool ___playSoundOnMessage_7;
	// System.Boolean DebugLogPanel::newMessageArrived
	bool ___newMessageArrived_8;
	// TMPro.TextMeshPro DebugLogPanel::debugText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___debugText_9;
	// System.Collections.Generic.Queue`1<System.String> DebugLogPanel::messageQueue
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ___messageQueue_10;
	// UnityEngine.AudioSource DebugLogPanel::messageSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___messageSound_11;
};

// HandPresence
struct HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean HandPresence::showController
	bool ___showController_4;
	// UnityEngine.XR.InputDeviceCharacteristics HandPresence::controllerCharacteristics
	uint32_t ___controllerCharacteristics_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HandPresence::controllerPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___controllerPrefabs_6;
	// UnityEngine.GameObject HandPresence::handModelPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handModelPrefab_7;
	// UnityEngine.GameObject HandPresence::spawnedController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedController_8;
	// UnityEngine.XR.InputDevice HandPresence::targetDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___targetDevice_9;
	// UnityEngine.GameObject HandPresence::spawnedHandModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedHandModel_10;
	// UnityEngine.Animator HandPresence::handAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___handAnimator_11;
	// UnityEngine.Vector2 HandPresence::axis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___axis_12;
	// UnityEngine.Vector2 HandPresence::axis2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___axis2_13;
	// CarController HandPresence::carController
	CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* ___carController_14;
};

// SteeringWheelController
struct SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SteeringWheelController::rightHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightHand_4;
	// UnityEngine.Transform SteeringWheelController::rightHandOriginalParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHandOriginalParent_5;
	// System.Boolean SteeringWheelController::rightHandOnWheel
	bool ___rightHandOnWheel_6;
	// UnityEngine.GameObject SteeringWheelController::leftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftHand_7;
	// UnityEngine.Transform SteeringWheelController::leftHandOriginalParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftHandOriginalParent_8;
	// System.Boolean SteeringWheelController::leftHandOnWheel
	bool ___leftHandOnWheel_9;
	// UnityEngine.Transform[] SteeringWheelController::snapPositions
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___snapPositions_10;
	// System.Single SteeringWheelController::currentSteeringWheelRotation
	float ___currentSteeringWheelRotation_11;
	// UnityEngine.Transform SteeringWheelController::directionalObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___directionalObject_12;
	// System.Boolean SteeringWheelController::handsFound
	bool ___handsFound_13;
	// HandPresence SteeringWheelController::leftHandPresence
	HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* ___leftHandPresence_14;
	// HandPresence SteeringWheelController::rightHandPresence
	HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* ___rightHandPresence_15;
	// CarController SteeringWheelController::carController
	CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* ___carController_16;
};

// TrackCheckpoints
struct TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.EventHandler TrackCheckpoints::OnCarCorrectCheckpoint
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnCarCorrectCheckpoint_4;
	// System.EventHandler TrackCheckpoints::OnCarWrongCheckpoint
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnCarWrongCheckpoint_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> TrackCheckpoints::carTransformList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___carTransformList_6;
	// System.Collections.Generic.List`1<CheckpointSingle> TrackCheckpoints::checkpointSingleList
	List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* ___checkpointSingleList_7;
	// System.Collections.Generic.List`1<System.Int32> TrackCheckpoints::nextCheckPointIndexList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___nextCheckPointIndexList_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Wall
struct Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_16;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_22;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_23;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_24;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_25;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_26;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_27;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_28;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_29;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_34;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_35;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_30;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorRegistered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___interactorRegistered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorUnregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___interactorUnregistered_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableRegistered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___interactableRegistered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableUnregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___interactableUnregistered_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToInteractableMap
	Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5* ___m_ColliderToInteractableMap_9;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactors
	RegistrationList_1_t3C57B4669121D753FC5E6447930968A297EE0630* ___m_Interactors_10;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactables
	RegistrationList_1_t4CFD9E29B57A81B6DFE2C016746F640843506138* ___m_Interactables_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___m_CurrentHovered_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___m_CurrentSelected_13;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_UnorderedValidTargets
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___m_UnorderedValidTargets_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractors
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___m_ScratchInteractors_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ScratchInteractables_18;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectEnterEventArgs
	LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67* ___m_SelectEnterEventArgs_19;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectExitEventArgs
	LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62* ___m_SelectExitEventArgs_20;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverEnterEventArgs
	LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD* ___m_HoverEnterEventArgs_21;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverExitEventArgs
	LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F* ___m_HoverExitEventArgs_22;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorRegisteredEventArgs
	LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F* ___m_InteractorRegisteredEventArgs_23;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorUnregisteredEventArgs
	LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0* ___m_InteractorUnregisteredEventArgs_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableRegisteredEventArgs
	LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B* ___m_InteractableRegisteredEventArgs_25;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableUnregisteredEventArgs
	LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE* ___m_InteractableUnregisteredEventArgs_26;
};

struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<activeInteractionManagers>k__BackingField
	List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B* ___U3CactiveInteractionManagersU3Ek__BackingField_8;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_PreprocessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_PreprocessInteractorsMarker_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractorsMarker_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractablesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractablesMarker_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_GetValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_GetValidTargetsMarker_30;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FilterRegisteredValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FilterRegisteredValidTargetsMarker_31;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidSelectionsMarker_32;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidHoversMarker_33;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidSelectionsMarker_34;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidHoversMarker_35;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectEnterMarker_36;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectExitMarker_37;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverEnterMarker_38;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverExitMarker_39;
};

// CarDriverAgent
struct CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B  : public Agent_tB1CB95DC698898AFFCE4081DB96E6D4ADC39229F
{
	// TrackCheckpoints CarDriverAgent::trackCheckpoints
	TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* ___trackCheckpoints_29;
	// UnityEngine.Transform CarDriverAgent::spawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPosition_30;
	// CarController CarDriverAgent::carController
	CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* ___carController_31;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_37;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_38;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_39;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_40;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_41;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_42;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_43;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_44;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_45;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_46;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_47;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_48;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_49;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_50;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_51;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_52;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_53;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_54;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_55;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_56;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_57;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_58;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_60;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_61;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_64;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_65;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_67;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_69;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_70;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_71;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_75;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_76;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_77;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_78;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_73;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::<unsortedValidTargets>k__BackingField
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___U3CunsortedValidTargetsU3Ek__BackingField_79;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_StayedColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_StayedColliders_80;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_TriggerContactMonitor
	TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2* ___m_TriggerContactMonitor_81;
};

struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_StaticFields
{
	// UnityEngine.WaitForFixedUpdate UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::s_WaitForFixedUpdate
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___s_WaitForFixedUpdate_82;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.Queue`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D_gshared (ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D_gshared (ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.Queue`1<System.String>::.ctor()
inline void Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceivedThreaded_mCD24570CD0E4C045B514CA0D12C6E958267F392A (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.String>::Enqueue(T)
inline void Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, String_t*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.String>::get_Count()
inline int32_t Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.String>::Dequeue()
inline String_t* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceivedThreaded_m567C4573D62951D08A1221DDF35B9693E4EADDD9 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.Queue`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Queue_1_ToArray_mD041F9B63713BA7AFA105AFE468BFC3F55CDDB7C (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared)(__this, method);
}
// System.Void DebugLogPanel::PrintQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogPanel_PrintQueue_mC5F72215D047C9C70CCA843D8A89C19AE0A60F78 (DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, WheelHit_t15D44A463BF2792AD26161787B98CB5698519455* ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.WheelHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WheelHit_get_point_m9F7E614D1E1C6BAAF3392D3E21FF98FB9C9E370C (WheelHit_t15D44A463BF2792AD26161787B98CB5698519455* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.WheelCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_radius_m68CC3DE301E0C6226E85F99D853365DA1244CD1F (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.WheelCollider::get_suspensionDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_suspensionDistance_mD1EE97B03FB1E744BCF24DC988806F52AE98A55F (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_mA4226D0A30E0B55CB0CAD2A956EA16C546505965 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___quat1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<AxleInfo>::GetEnumerator()
inline Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098 (List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 (*) (List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<AxleInfo>::Dispose()
inline void Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4 (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<AxleInfo>::get_Current()
inline AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_inline (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712* __this, const RuntimeMethod* method)
{
	return ((  AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* (*) (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void CarController::ApplyLocalPositionToVisuals(UnityEngine.WheelCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_ApplyLocalPositionToVisuals_m729E5046448D889DB8AD206142433A72D556C58C (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___collider0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<AxleInfo>::MoveNext()
inline bool Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274 (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void CarController::SetInputs(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_SetInputs_mE7CDEBDC6C1EB32F8A138B85858A3665DAB7DED6 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, float ___forwardAmount0, float ___turnAround1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CarController>()
inline CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* Component_GetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m27C75029B4773496FE7C8FFA59CF9C8417638AAC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CarDriverAgent::CarStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CarDriverAgent_CarStopped_m24126AE69F0144D95F31401260F207F73122877B (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Unity.MLAgents.Agent::AddReward(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15 (Agent_tB1CB95DC698898AFFCE4081DB96E6D4ADC39229F* __this, float ___increment0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void CarDriverAgent/<CarStopped>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCarStoppedU3Ed__5__ctor_m7D7CA3E6E43097529B29A2B5BCD1A144E693244A (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void TrackCheckpoints::ResetCheckpoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_ResetCheckpoint_m167F47EBAB17CC216B01BCE43FD66B68794A6AC7 (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___carTransform0, const RuntimeMethod* method) ;
// System.Void CarController::InstaStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_InstaStop_mBC4FF00B04FE0BF217BE1CC310A4EB8583444C86 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform TrackCheckpoints::GetNextCheckpointDirection(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TrackCheckpoints_GetNextCheckpointDirection_m948776C5199B8394E4ADE6379AC8BFBA8929216A (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___carTransform0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void Unity.MLAgents.Sensors.VectorSensor::AddObservation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_m304D78200B87B8EC65E91AAF7FD6B93AA9519A13 (VectorSensor_tBC68DFE8028E01559AEC4DEB88FCDD74D6BB0B68* __this, float ___observation0, const RuntimeMethod* method) ;
// Unity.MLAgents.Actuators.ActionSegment`1<System.Int32> Unity.MLAgents.Actuators.ActionBuffers::get_DiscreteActions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 ActionBuffers_get_DiscreteActions_m4608D9D4A8CA69A1334C2A5C3EC949A06BCFE12B_inline (ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40* __this, const RuntimeMethod* method) ;
// T Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>::get_Item(System.Int32)
inline int32_t ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D (ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7*, int32_t, const RuntimeMethod*))ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D_gshared)(__this, ___index0, method);
}
// System.Void CarController::SetBrake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_SetBrake_mA5363BE16C45AF9FE81C1B27D9306833C7BEE966 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, bool ___brake0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>::set_Item(System.Int32,T)
inline void ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D (ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7*, int32_t, int32_t, const RuntimeMethod*))ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Unity.MLAgents.Agent::EndEpisode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_EndEpisode_m3A98436E029FF1B4174FC63994D480E2869AEDDF (Agent_tB1CB95DC698898AFFCE4081DB96E6D4ADC39229F* __this, const RuntimeMethod* method) ;
// System.Void Unity.MLAgents.Agent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent__ctor_mF3EB2AAC5EC19B12FD08EFA28B2DD6B903F58543 (Agent_tB1CB95DC698898AFFCE4081DB96E6D4ADC39229F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<CarController>(T&)
inline bool Component_TryGetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m383C805187F4803BA4EDE1CEE43A341B74F0683D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void TrackCheckpoints::CarThroughCheckPoint(CheckpointSingle,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_CarThroughCheckPoint_m236D02425814C08DA22916E3072B193A2045CC02 (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* ___checkpointSingle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___carTransform1, const RuntimeMethod* method) ;
// System.Void HandPresence::TryInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_TryInitialize_mC9F75E11B29DA4D04784520945D5EDD1603DC8BF (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline)(__this, method);
}
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, int32_t, const RuntimeMethod*))List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared)(__this, ___index0, method);
}
// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mA6DFC557EC23A389E927DA976D39231E29AA5B5E (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::Find(System.Predicate`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_Find_m81A3F84ADF79DAA3AF57A7000507C77E5F372AAD (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* ___match0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor>()
inline XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* GameObject_GetComponent_TisXRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_m6021DC774F04F238AC0E4DB3E163773F0C884781 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>(T&)
inline bool Component_TryGetComponent_TisXRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_m44ADDC8C2C50FFD02D9A92D911E0CB7F477CF459 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___usage0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<CarController>()
inline CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* Object_FindObjectOfType_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_mB42EFE81A34E66C6C35D538DE62D5D603D107BBB (const RuntimeMethod* method)
{
	return ((  CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void HandPresence::UpdateHandAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_UpdateHandAnimation_mED4B75D80EEE0130B7EA08AAFA5C1A6E7E06182D (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) ;
// System.Void HandPresence::MoveCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_MoveCar_m251802246D50CCDA7714D81F75AD796C4814C04A (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) ;
// System.Void CarController::Brake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_Brake_mC03319E02C2765FA725A9D6D3B66885D7D3F57AC (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, bool ___brake0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<HandPresence>()
inline HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* GameObject_GetComponent_TisHandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E_m9AAE1F14F219C4F79DBCB4D8E0D97892449DB79E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SteeringWheelController::FindHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_FindHands_mA02409A9CD9DEBF864B83A13A8A3613BCE4F4B44 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void SteeringWheelController::PlaceHandOnWheel(UnityEngine.GameObject&,UnityEngine.Transform&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_PlaceHandOnWheel_m842BD81C53247F10E0B72E5A0EF6A86B65BF8732 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___hand0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___originalParent1, bool* ___handOnWheel2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CheckpointSingle>::.ctor()
inline void List_1__ctor_mAC5F910551A416276D418C294E0215E1C4789E31 (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CheckpointSingle>()
inline CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* Component_GetComponent_TisCheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3_m6CD64B37564E296F3809C369637E161831DE14FC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CheckpointSingle::SetTrackCheckpoints(TrackCheckpoints)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckpointSingle_SetTrackCheckpoints_mE8FA96A5F6846F7AA1F2F279F826299E3A1C4073_inline (CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* __this, TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* ___trackCheckpoints0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CheckpointSingle>::Add(T)
inline void List_1_Add_mE89A719B0F220B5EC35B1ED65415D64D6B7C5505_inline (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* __this, CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317*, CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::IndexOf(T)
inline int32_t List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<CheckpointSingle>::IndexOf(T)
inline int32_t List_1_IndexOf_m4F76708D26948C7968F5E6AB83DA8E2B6584F410 (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* __this, CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317*, CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<CheckpointSingle>::get_Count()
inline int32_t List_1_get_Count_mF25F81A50B5329552D8F5EA25903117F3F6080C9_inline (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<CarDriverAgent>(T&)
inline bool Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void CarDriverAgent::CorrectCheckpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_CorrectCheckpoint_m197D41B0FC181739F7A05AB578CF72C04A235D2B (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) ;
// System.Void CarDriverAgent::WrongCheckpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_WrongCheckpoint_mD2F1F06D7469AFA3EE902D897CB99A61F133D475 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CheckpointSingle>::get_Item(System.Int32)
inline CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* List_1_get_Item_m625296BA9D3BA084AC1FEE539E822F448C705793 (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* (*) (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void CarDriverAgent::WallCollisionEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_WallCollisionEnter_mFBECE74D4A17027E92F23AC94CF36557D50C34F8 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Normalize(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DebugLogPanel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogPanel_OnEnable_m4C489B5C608B75CE479F870BB6FE1164649B82DF (DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogPanel_Application_logMessageReceivedThreaded_mED3AF5264AD8E306E9A21D9AA0E6ACC6A362FCC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messageQueue = new Queue<string>();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_0 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)il2cpp_codegen_object_new(Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE(L_0, Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		__this->___messageQueue_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageQueue_10), (void*)L_0);
		// debugText = GetComponent<TextMeshPro>();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1;
		L_1 = Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E(__this, Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		__this->___debugText_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugText_9), (void*)L_1);
		// Application.logMessageReceivedThreaded += Application_logMessageReceivedThreaded;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_2 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_2, __this, (intptr_t)((void*)DebugLogPanel_Application_logMessageReceivedThreaded_mED3AF5264AD8E306E9A21D9AA0E6ACC6A362FCC1_RuntimeMethod_var), NULL);
		Application_add_logMessageReceivedThreaded_mCD24570CD0E4C045B514CA0D12C6E958267F392A(L_2, NULL);
		// messageSound = this.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___messageSound_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageSound_11), (void*)L_3);
		// }
		return;
	}
}
// System.Void DebugLogPanel::Application_logMessageReceivedThreaded(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogPanel_Application_logMessageReceivedThreaded_mED3AF5264AD8E306E9A21D9AA0E6ACC6A362FCC1 (DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781F319632B95F69BBD1EFE0C6915C6C37AB28D5);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// if (type == LogLevel)
		int32_t L_0 = ___type2;
		int32_t L_1 = __this->___LogLevel_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_009d;
		}
	}
	{
		// if (messageSound!=null && playSoundOnMessage)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___messageSound_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		bool L_4 = __this->___playSoundOnMessage_7;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// messageSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___messageSound_11;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
	}

IL_002d:
	{
		// newMessageArrived = true;
		__this->___newMessageArrived_8 = (bool)1;
		// StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		// stringBuilder.Append("\n");
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// stringBuilder.Append(condition);
		StringBuilder_t* L_9 = V_0;
		String_t* L_10 = ___condition0;
		NullCheck(L_9);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_10, NULL);
		// if (includeStackTrace)
		bool L_12 = __this->___includeStackTrace_6;
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// stringBuilder.Append("\nStackTrace: ");
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral781F319632B95F69BBD1EFE0C6915C6C37AB28D5, NULL);
		// stringBuilder.Append(stackTrace);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = ___stackTrace1;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
	}

IL_006a:
	{
		// condition = stringBuilder.ToString();
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		___condition0 = L_19;
		// messageQueue.Enqueue(condition);
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_20 = __this->___messageQueue_10;
		String_t* L_21 = ___condition0;
		NullCheck(L_20);
		Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832(L_20, L_21, Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		// if (messageQueue.Count > maxNumberOfMessages)
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_22 = __this->___messageQueue_10;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_22, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		int32_t L_24 = __this->___maxNumberOfMessages_5;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_009d;
		}
	}
	{
		// messageQueue.Dequeue();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_25 = __this->___messageQueue_10;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB(L_25, Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void DebugLogPanel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogPanel_OnDisable_mB378570D5DDA5D25E0570E86D9E34AE7B8F7A81B (DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogPanel_Application_logMessageReceivedThreaded_mED3AF5264AD8E306E9A21D9AA0E6ACC6A362FCC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceivedThreaded -= Application_logMessageReceivedThreaded;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)DebugLogPanel_Application_logMessageReceivedThreaded_mED3AF5264AD8E306E9A21D9AA0E6ACC6A362FCC1_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceivedThreaded_m567C4573D62951D08A1221DDF35B9693E4EADDD9(L_0, NULL);
		// }
		return;
	}
}
// System.Void DebugLogPanel::PrintQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogPanel_PrintQueue_mC5F72215D047C9C70CCA843D8A89C19AE0A60F78 (DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_ToArray_mD041F9B63713BA7AFA105AFE468BFC3F55CDDB7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// string[] messageList = messageQueue.ToArray();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_1 = __this->___messageQueue_10;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Queue_1_ToArray_mD041F9B63713BA7AFA105AFE468BFC3F55CDDB7C(L_1, Queue_1_ToArray_mD041F9B63713BA7AFA105AFE468BFC3F55CDDB7C_RuntimeMethod_var);
		V_1 = L_2;
		// for (int i = 0; i < messageList.Length; i++) {
		V_3 = 0;
		goto IL_0030;
	}

IL_0016:
	{
		// stringBuilder.Append(messageList[i]);
		StringBuilder_t* L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_7, NULL);
		// stringBuilder.Append("\n");
		StringBuilder_t* L_9 = V_0;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// for (int i = 0; i < messageList.Length; i++) {
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < messageList.Length; i++) {
		int32_t L_12 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// string message = stringBuilder.ToString();
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_2 = L_15;
		// debugText.text = message;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_16 = __this->___debugText_9;
		String_t* L_17 = V_2;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_17);
		// }
		return;
	}
}
// System.Void DebugLogPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogPanel_Update_mDDB12F07B0B531E038521F191E231D597CD38E1C (DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E* __this, const RuntimeMethod* method) 
{
	{
		// if (newMessageArrived)
		bool L_0 = __this->___newMessageArrived_8;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PrintQueue();
		DebugLogPanel_PrintQueue_mC5F72215D047C9C70CCA843D8A89C19AE0A60F78(__this, NULL);
		// newMessageArrived = false;
		__this->___newMessageArrived_8 = (bool)0;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void DebugLogPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogPanel__ctor_m08C1E7E6BFC481B8AD8F58C93F32ADC5858E4749 (DebugLogPanel_t8E442419B6979E7DCF12A22C1CE0F33DBB93C85E* __this, const RuntimeMethod* method) 
{
	{
		// private int maxNumberOfMessages=15;
		__this->___maxNumberOfMessages_5 = ((int32_t)15);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AntiRollBar::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiRollBar_FixedUpdate_m52EF503E133886A7B2CA59230D253C344D3A1B14 (AntiRollBar_tB5E4A55CD135700EF657F161EEF025A5FFF53B07* __this, const RuntimeMethod* method) 
{
	WheelHit_t15D44A463BF2792AD26161787B98CB5698519455 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	bool G_B6_0 = false;
	bool G_B5_0 = false;
	{
		// float travelL = 1.0f;
		V_1 = (1.0f);
		// float travelR = 1.0f;
		V_2 = (1.0f);
		// var groundedL = WheelL.GetGroundHit(out hit);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_0 = __this->___WheelL_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2(L_0, (&V_0), NULL);
		V_3 = L_1;
		// if (groundedL)
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// travelL = (-WheelL.transform.InverseTransformPoint(hit.point).y - WheelL.radius) / WheelL.suspensionDistance;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_3 = __this->___WheelL_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = WheelHit_get_point_m9F7E614D1E1C6BAAF3392D3E21FF98FB9C9E370C((&V_0), NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_4, L_5, NULL);
		float L_7 = L_6.___y_3;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_8 = __this->___WheelL_4;
		NullCheck(L_8);
		float L_9;
		L_9 = WheelCollider_get_radius_m68CC3DE301E0C6226E85F99D853365DA1244CD1F(L_8, NULL);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_10 = __this->___WheelL_4;
		NullCheck(L_10);
		float L_11;
		L_11 = WheelCollider_get_suspensionDistance_mD1EE97B03FB1E744BCF24DC988806F52AE98A55F(L_10, NULL);
		V_1 = ((float)(((float)il2cpp_codegen_subtract(((-L_7)), L_9))/L_11));
	}

IL_0053:
	{
		// var groundedR = WheelR.GetGroundHit(out hit);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_12 = __this->___WheelR_5;
		NullCheck(L_12);
		bool L_13;
		L_13 = WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2(L_12, (&V_0), NULL);
		// if (groundedR)
		bool L_14 = L_13;
		G_B3_0 = L_14;
		if (!L_14)
		{
			G_B4_0 = L_14;
			goto IL_0099;
		}
	}
	{
		// travelR = (-WheelR.transform.InverseTransformPoint(hit.point).y - WheelR.radius) / WheelR.suspensionDistance;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_15 = __this->___WheelR_5;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = WheelHit_get_point_m9F7E614D1E1C6BAAF3392D3E21FF98FB9C9E370C((&V_0), NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_16, L_17, NULL);
		float L_19 = L_18.___y_3;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_20 = __this->___WheelR_5;
		NullCheck(L_20);
		float L_21;
		L_21 = WheelCollider_get_radius_m68CC3DE301E0C6226E85F99D853365DA1244CD1F(L_20, NULL);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_22 = __this->___WheelR_5;
		NullCheck(L_22);
		float L_23;
		L_23 = WheelCollider_get_suspensionDistance_mD1EE97B03FB1E744BCF24DC988806F52AE98A55F(L_22, NULL);
		V_2 = ((float)(((float)il2cpp_codegen_subtract(((-L_19)), L_21))/L_23));
		G_B4_0 = G_B3_0;
	}

IL_0099:
	{
		// float antiRollForce = (travelL - travelR) * antiRoll;
		float L_24 = V_1;
		float L_25 = V_2;
		float L_26 = __this->___antiRoll_6;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_25)), L_26));
		// if (groundedL)
		bool L_27 = V_3;
		G_B5_0 = G_B4_0;
		if (!L_27)
		{
			G_B6_0 = G_B4_0;
			goto IL_00db;
		}
	}
	{
		// rb.AddForceAtPosition(WheelL.transform.up * -antiRollForce,
		//     WheelL.transform.position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = __this->___rb_7;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_29 = __this->___WheelL_4;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_30, NULL);
		float L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, ((-L_32)), NULL);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_34 = __this->___WheelL_4;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		NullCheck(L_28);
		Rigidbody_AddForceAtPosition_mA4226D0A30E0B55CB0CAD2A956EA16C546505965(L_28, L_33, L_36, NULL);
		G_B6_0 = G_B5_0;
	}

IL_00db:
	{
		// if (groundedR)
		if (!G_B6_0)
		{
			goto IL_010f;
		}
	}
	{
		// rb.AddForceAtPosition(WheelR.transform.up * antiRollForce,
		//     WheelR.transform.position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37 = __this->___rb_7;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_38 = __this->___WheelR_5;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_39, NULL);
		float L_41 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_41, NULL);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_43 = __this->___WheelR_5;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		NullCheck(L_37);
		Rigidbody_AddForceAtPosition_mA4226D0A30E0B55CB0CAD2A956EA16C546505965(L_37, L_42, L_45, NULL);
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Void AntiRollBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiRollBar__ctor_mB0F08B8EA444F3FDA07A1270A11BC090FF3B4688 (AntiRollBar_tB5E4A55CD135700EF657F161EEF025A5FFF53B07* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float antiRoll = 5000.0f;
		__this->___antiRoll_6 = (5000.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BrakeScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrakeScript_Start_mA251E852F60AED4038D6EFCFDEDFE94D922DC88F (BrakeScript_tEFD0646361E056B5923FE8A14C02F695B9F0DE46* __this, const RuntimeMethod* method) 
{
	{
		// carPostion = carController.transform.position - transform.position;
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_0 = __this->___carController_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		__this->___carPostion_6 = L_5;
		// }
		return;
	}
}
// System.Void BrakeScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrakeScript_Update_m4E61B93F9B0C4ED011F7D1BAA9C89EE4D6486DBA (BrakeScript_tEFD0646361E056B5923FE8A14C02F695B9F0DE46* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = carController.transform.position - carPostion;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_1 = __this->___carController_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___carPostion_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void BrakeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrakeScript__ctor_mFA39C5F1387E86669151A4FF004865ABCE98A116 (BrakeScript_tEFD0646361E056B5923FE8A14C02F695B9F0DE46* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxleInfo__ctor_m6AEBB35270D53694D8D51B412507D9A53E7CFC08 (AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarController::ApplyLocalPositionToVisuals(UnityEngine.WheelCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_ApplyLocalPositionToVisuals_m729E5046448D889DB8AD206142433A72D556C58C (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___collider0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (collider.transform.childCount == 0)
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_0 = ___collider0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var visualWheel = collider.transform.GetChild(0);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_3 = ___collider0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		// collider.GetWorldPose(out position, out rotation);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_6 = ___collider0;
		NullCheck(L_6);
		WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890(L_6, (&V_0), (&V_1), NULL);
		// visualWheel.transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// visualWheel.transform.rotation = rotation;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void CarController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_FixedUpdate_mDD68416C9FFF2FE776131D6365AE9C585C973405 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CarController::SetInputs(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_SetInputs_mE7CDEBDC6C1EB32F8A138B85858A3665DAB7DED6 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, float ___forwardAmount0, float ___turnAround1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384BBCEE9A0C28D6BD8E2CF3AF8AE75B13DC7672);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* V_4 = NULL;
	{
		// var motor = forwardAmount * maxMotorTorque;
		float L_0 = ___forwardAmount0;
		float L_1 = __this->___maxMotorTorque_5;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// rb.AddForce(transform.forward * motor);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		NullCheck(L_2);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_2, L_6, NULL);
		// speedometer.text = string.Format("motor {0:N0}\n{1:N0} mph", motor, rb.velocity.magnitude);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___speedometer_9;
		float L_8 = V_0;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb_8;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_11, NULL);
		V_2 = L_12;
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral384BBCEE9A0C28D6BD8E2CF3AF8AE75B13DC7672, L_10, L_15, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_16);
		// var steering = turnAround * maxSteeringAngle;
		float L_17 = ___turnAround1;
		float L_18 = __this->___maxSteeringAngle_6;
		V_1 = ((float)il2cpp_codegen_multiply(L_17, L_18));
		// foreach (AxleInfo axleInfo in axleInfos)
		List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* L_19 = __this->___axleInfos_4;
		NullCheck(L_19);
		Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 L_20;
		L_20 = List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098(L_19, List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		V_3 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ef:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4((&V_3), Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e4_1;
			}

IL_006f_1:
			{
				// foreach (AxleInfo axleInfo in axleInfos)
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_21;
				L_21 = Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_inline((&V_3), Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
				V_4 = L_21;
				// if (axleInfo.steering)
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_22 = V_4;
				NullCheck(L_22);
				bool L_23 = L_22->___steering_3;
				if (!L_23)
				{
					goto IL_00a7_1;
				}
			}
			{
				// axleInfo.leftWheel.steerAngle = steering;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_24 = V_4;
				NullCheck(L_24);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_25 = L_24->___leftWheel_0;
				float L_26 = V_1;
				NullCheck(L_25);
				WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3(L_25, L_26, NULL);
				// axleInfo.rightWheel.steerAngle = steering;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_27 = V_4;
				NullCheck(L_27);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_28 = L_27->___rightWheel_1;
				float L_29 = V_1;
				NullCheck(L_28);
				WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3(L_28, L_29, NULL);
				// steeringWheelController.currentSteeringWheelRotation = steering;
				SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* L_30 = __this->___steeringWheelController_10;
				float L_31 = V_1;
				NullCheck(L_30);
				L_30->___currentSteeringWheelRotation_11 = L_31;
			}

IL_00a7_1:
			{
				// if (axleInfo.motor)
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_32 = V_4;
				NullCheck(L_32);
				bool L_33 = L_32->___motor_2;
				if (!L_33)
				{
					goto IL_00ca_1;
				}
			}
			{
				// axleInfo.leftWheel.motorTorque = motor;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_34 = V_4;
				NullCheck(L_34);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_35 = L_34->___leftWheel_0;
				float L_36 = V_0;
				NullCheck(L_35);
				WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8(L_35, L_36, NULL);
				// axleInfo.rightWheel.motorTorque = motor;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_37 = V_4;
				NullCheck(L_37);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_38 = L_37->___rightWheel_1;
				float L_39 = V_0;
				NullCheck(L_38);
				WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8(L_38, L_39, NULL);
			}

IL_00ca_1:
			{
				// ApplyLocalPositionToVisuals(axleInfo.leftWheel);
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_40 = V_4;
				NullCheck(L_40);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_41 = L_40->___leftWheel_0;
				CarController_ApplyLocalPositionToVisuals_m729E5046448D889DB8AD206142433A72D556C58C(__this, L_41, NULL);
				// ApplyLocalPositionToVisuals(axleInfo.rightWheel);
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_42 = V_4;
				NullCheck(L_42);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_43 = L_42->___rightWheel_1;
				CarController_ApplyLocalPositionToVisuals_m729E5046448D889DB8AD206142433A72D556C58C(__this, L_43, NULL);
			}

IL_00e4_1:
			{
				// foreach (AxleInfo axleInfo in axleInfos)
				bool L_44;
				L_44 = Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274((&V_3), Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_00fd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void CarController::Brake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_Brake_mC03319E02C2765FA725A9D6D3B66885D7D3F57AC (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, bool ___brake0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* V_1 = NULL;
	{
		// foreach (var axleInfo in axleInfos)
		List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* L_0 = __this->___axleInfos_4;
		NullCheck(L_0);
		Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 L_1;
		L_1 = List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098(L_0, List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0088:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4((&V_0), Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d_1;
			}

IL_000e_1:
			{
				// foreach (var axleInfo in axleInfos)
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_2;
				L_2 = Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_inline((&V_0), Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
				V_1 = L_2;
				// if (brake)
				bool L_3 = ___brake0;
				if (!L_3)
				{
					goto IL_004d_1;
				}
			}
			{
				// axleInfo.leftWheel.brakeTorque = breakPower;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_4 = V_1;
				NullCheck(L_4);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_5 = L_4->___leftWheel_0;
				float L_6 = __this->___breakPower_7;
				NullCheck(L_5);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_5, L_6, NULL);
				// axleInfo.rightWheel.brakeTorque = breakPower;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_7 = V_1;
				NullCheck(L_7);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_8 = L_7->___rightWheel_1;
				float L_9 = __this->___breakPower_7;
				NullCheck(L_8);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_8, L_9, NULL);
				// rb.drag = 1;
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_8;
				NullCheck(L_10);
				Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_10, (1.0f), NULL);
				goto IL_007d_1;
			}

IL_004d_1:
			{
				// axleInfo.leftWheel.brakeTorque = 0;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_11 = V_1;
				NullCheck(L_11);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_12 = L_11->___leftWheel_0;
				NullCheck(L_12);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_12, (0.0f), NULL);
				// axleInfo.rightWheel.brakeTorque = 0;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_13 = V_1;
				NullCheck(L_13);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_14 = L_13->___rightWheel_1;
				NullCheck(L_14);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_14, (0.0f), NULL);
				// rb.drag = 0;
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_8;
				NullCheck(L_15);
				Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_15, (0.0f), NULL);
			}

IL_007d_1:
			{
				// foreach (var axleInfo in axleInfos)
				bool L_16;
				L_16 = Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274((&V_0), Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void CarController::SetBrake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_SetBrake_mA5363BE16C45AF9FE81C1B27D9306833C7BEE966 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, bool ___brake0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* V_1 = NULL;
	{
		// foreach (var axleInfo in axleInfos)
		List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* L_0 = __this->___axleInfos_4;
		NullCheck(L_0);
		Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 L_1;
		L_1 = List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098(L_0, List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0088:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4((&V_0), Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d_1;
			}

IL_000e_1:
			{
				// foreach (var axleInfo in axleInfos)
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_2;
				L_2 = Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_inline((&V_0), Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
				V_1 = L_2;
				// if (brake)
				bool L_3 = ___brake0;
				if (!L_3)
				{
					goto IL_004d_1;
				}
			}
			{
				// axleInfo.leftWheel.brakeTorque = breakPower;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_4 = V_1;
				NullCheck(L_4);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_5 = L_4->___leftWheel_0;
				float L_6 = __this->___breakPower_7;
				NullCheck(L_5);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_5, L_6, NULL);
				// axleInfo.rightWheel.brakeTorque = breakPower;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_7 = V_1;
				NullCheck(L_7);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_8 = L_7->___rightWheel_1;
				float L_9 = __this->___breakPower_7;
				NullCheck(L_8);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_8, L_9, NULL);
				// rb.drag = 1;
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_8;
				NullCheck(L_10);
				Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_10, (1.0f), NULL);
				goto IL_007d_1;
			}

IL_004d_1:
			{
				// axleInfo.leftWheel.brakeTorque = 0;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_11 = V_1;
				NullCheck(L_11);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_12 = L_11->___leftWheel_0;
				NullCheck(L_12);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_12, (0.0f), NULL);
				// axleInfo.rightWheel.brakeTorque = 0;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_13 = V_1;
				NullCheck(L_13);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_14 = L_13->___rightWheel_1;
				NullCheck(L_14);
				WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB(L_14, (0.0f), NULL);
				// rb.drag = 0;
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_8;
				NullCheck(L_15);
				Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_15, (0.0f), NULL);
			}

IL_007d_1:
			{
				// foreach (var axleInfo in axleInfos)
				bool L_16;
				L_16 = Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274((&V_0), Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void CarController::InstaStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_InstaStop_mBC4FF00B04FE0BF217BE1CC310A4EB8583444C86 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
{
	{
		// SetInputs(0, 0);
		CarController_SetInputs_mE7CDEBDC6C1EB32F8A138B85858A3665DAB7DED6(__this, (0.0f), (0.0f), NULL);
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_1, NULL);
		// rb.drag = 1000;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_8;
		NullCheck(L_2);
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_2, (1000.0f), NULL);
		// rb.drag = 0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_8;
		NullCheck(L_3);
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_3, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void CarController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController__ctor_mED29536AC2B7697D76B32073704A86307FDCA1FF (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarDriverAgent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_Awake_m62756EC4992C05C857B3E72F32F1371679624A23 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m27C75029B4773496FE7C8FFA59CF9C8417638AAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// carController = GetComponent<CarController>();
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_0;
		L_0 = Component_GetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m27C75029B4773496FE7C8FFA59CF9C8417638AAC(__this, Component_GetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m27C75029B4773496FE7C8FFA59CF9C8417638AAC_RuntimeMethod_var);
		__this->___carController_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___carController_31), (void*)L_0);
		// }
		return;
	}
}
// System.Void CarDriverAgent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_Update_m72E0342D5940ACC4300D3E94DBDDB018501558AB (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65F8A1CBDAF590FF16F324EAFF26306AA5CE940);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (carController.rb.velocity.magnitude < 0.1f)
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_0 = __this->___carController_31;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = L_0->___rb_8;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_0042;
		}
	}
	{
		// Debug.Log("Car is stuck");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD65F8A1CBDAF590FF16F324EAFF26306AA5CE940, NULL);
		// StartCoroutine(CarStopped());
		RuntimeObject* L_4;
		L_4 = CarDriverAgent_CarStopped_m24126AE69F0144D95F31401260F207F73122877B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// AddReward(-1f);
		Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15(__this, (-1.0f), NULL);
		return;
	}

IL_0042:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// AddReward(+1f);
		Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15(__this, (1.0f), NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CarDriverAgent::CarStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CarDriverAgent_CarStopped_m24126AE69F0144D95F31401260F207F73122877B (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* L_0 = (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492*)il2cpp_codegen_object_new(U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCarStoppedU3Ed__5__ctor_m7D7CA3E6E43097529B29A2B5BCD1A144E693244A(L_0, 0, NULL);
		U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CarDriverAgent::CorrectCheckpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_CorrectCheckpoint_m197D41B0FC181739F7A05AB578CF72C04A235D2B (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEDE3ABFA134C843BB78F1850F9844620BD47E59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddReward(+1f);
		Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15(__this, (1.0f), NULL);
		// Debug.Log("Correct checkpoint");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralFEDE3ABFA134C843BB78F1850F9844620BD47E59, NULL);
		// }
		return;
	}
}
// System.Void CarDriverAgent::WrongCheckpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_WrongCheckpoint_mD2F1F06D7469AFA3EE902D897CB99A61F133D475 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37BCD4F8FC9290E188FF71892267B1A8A19BA95E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddReward(-1f);
		Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15(__this, (-1.0f), NULL);
		// Debug.Log("Wrong checkpoint");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral37BCD4F8FC9290E188FF71892267B1A8A19BA95E, NULL);
		// }
		return;
	}
}
// System.Void CarDriverAgent::OnEpisodeBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_OnEpisodeBegin_mC466FFF229F6AF0DA188852C3C66D9C5809B005C (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = spawnPosition.position + new Vector3(UnityEngine.Random.Range(-5f, +5f), 0f, UnityEngine.Random.Range(-5f, +5f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___spawnPosition_30;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3;
		L_3 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-5.0f), (5.0f), NULL);
		float L_4;
		L_4 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-5.0f), (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_3, (0.0f), L_4, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_5, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// transform.forward = spawnPosition.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___spawnPosition_30;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		NullCheck(L_7);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_7, L_9, NULL);
		// trackCheckpoints.ResetCheckpoint(transform);
		TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* L_10 = __this->___trackCheckpoints_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		TrackCheckpoints_ResetCheckpoint_m167F47EBAB17CC216B01BCE43FD66B68794A6AC7(L_10, L_11, NULL);
		// carController.InstaStop();
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_12 = __this->___carController_31;
		NullCheck(L_12);
		CarController_InstaStop_mBC4FF00B04FE0BF217BE1CC310A4EB8583444C86(L_12, NULL);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// }
		return;
	}
}
// System.Void CarDriverAgent::CollectObservations(Unity.MLAgents.Sensors.VectorSensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_CollectObservations_m790F0035D6A768392FAA4E6F2C1B5A2594251F51 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, VectorSensor_tBC68DFE8028E01559AEC4DEB88FCDD74D6BB0B68* ___sensor0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 checkPointForward = trackCheckpoints.GetNextCheckpointDirection(transform).transform.forward;
		TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* L_0 = __this->___trackCheckpoints_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = TrackCheckpoints_GetNextCheckpointDirection_m948776C5199B8394E4ADE6379AC8BFBA8929216A(L_0, L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		V_0 = L_4;
		// float directionDot = Vector3.Dot(transform.forward, checkPointForward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8;
		L_8 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// sensor.AddObservation(directionDot);
		VectorSensor_tBC68DFE8028E01559AEC4DEB88FCDD74D6BB0B68* L_9 = ___sensor0;
		float L_10 = V_1;
		NullCheck(L_9);
		VectorSensor_AddObservation_m304D78200B87B8EC65E91AAF7FD6B93AA9519A13(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void CarDriverAgent::OnActionReceived(Unity.MLAgents.Actuators.ActionBuffers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_OnActionReceived_mF723FB0D4D912A1397DE23D3367CF835A93FF260 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40 ___actions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float forwardAmount = 0f;
		V_0 = (0.0f);
		// float turnAmount = 0f;
		V_1 = (0.0f);
		// switch (actions.DiscreteActions[0])
		ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 L_0;
		L_0 = ActionBuffers_get_DiscreteActions_m4608D9D4A8CA69A1334C2A5C3EC949A06BCFE12B_inline((&___actions0), NULL);
		V_3 = L_0;
		int32_t L_1;
		L_1 = ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D((&V_3), 0, ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D_RuntimeMethod_var);
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0047;
	}

IL_0031:
	{
		// case 0: forwardAmount = 0f; break;
		V_0 = (0.0f);
		// case 0: forwardAmount = 0f; break;
		goto IL_0047;
	}

IL_0039:
	{
		// case 1: forwardAmount = +1f; break;
		V_0 = (1.0f);
		// case 1: forwardAmount = +1f; break;
		goto IL_0047;
	}

IL_0041:
	{
		// case 2: forwardAmount = -1f; break;
		V_0 = (-1.0f);
	}

IL_0047:
	{
		// switch(actions.DiscreteActions[1])
		ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 L_3;
		L_3 = ActionBuffers_get_DiscreteActions_m4608D9D4A8CA69A1334C2A5C3EC949A06BCFE12B_inline((&___actions0), NULL);
		V_3 = L_3;
		int32_t L_4;
		L_4 = ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D((&V_3), 1, ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D_RuntimeMethod_var);
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (L_5)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_0082;
	}

IL_006c:
	{
		// case 0: turnAmount = 0f; break;
		V_1 = (0.0f);
		// case 0: turnAmount = 0f; break;
		goto IL_0082;
	}

IL_0074:
	{
		// case 1: turnAmount = +1f; break;
		V_1 = (1.0f);
		// case 1: turnAmount = +1f; break;
		goto IL_0082;
	}

IL_007c:
	{
		// case 2: turnAmount = -1f; break;
		V_1 = (-1.0f);
	}

IL_0082:
	{
		// carController.SetInputs(forwardAmount, turnAmount);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_6 = __this->___carController_31;
		float L_7 = V_0;
		float L_8 = V_1;
		NullCheck(L_6);
		CarController_SetInputs_mE7CDEBDC6C1EB32F8A138B85858A3665DAB7DED6(L_6, L_7, L_8, NULL);
		// switch (actions.DiscreteActions[2])
		ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 L_9;
		L_9 = ActionBuffers_get_DiscreteActions_m4608D9D4A8CA69A1334C2A5C3EC949A06BCFE12B_inline((&___actions0), NULL);
		V_3 = L_9;
		int32_t L_10;
		L_10 = ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D((&V_3), 2, ActionSegment_1_get_Item_m4733A2237B370B706C6811AF7FD81A9F7600A67D_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		// case 0: carController.SetBrake(false); break;
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_13 = __this->___carController_31;
		NullCheck(L_13);
		CarController_SetBrake_mA5363BE16C45AF9FE81C1B27D9306833C7BEE966(L_13, (bool)0, NULL);
		// case 0: carController.SetBrake(false); break;
		return;
	}

IL_00b5:
	{
		// case 1: carController.SetBrake(true); break;
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_14 = __this->___carController_31;
		NullCheck(L_14);
		CarController_SetBrake_mA5363BE16C45AF9FE81C1B27D9306833C7BEE966(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CarDriverAgent::Heuristic(Unity.MLAgents.Actuators.ActionBuffers& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_Heuristic_mBACBF2BCFA6158824BD5433F2A8AF74DC6274B16 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40* ___actionsOut0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B10_0 = 0;
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7* G_B11_2 = NULL;
	{
		// int  forwardAction = 0;
		V_0 = 0;
		// if(Input.GetKey(KeyCode.UpArrow)) forwardAction = 1;
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)273), NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// if(Input.GetKey(KeyCode.UpArrow)) forwardAction = 1;
		V_0 = 1;
	}

IL_0010:
	{
		// if(Input.GetKey(KeyCode.DownArrow)) forwardAction = 2;
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)274), NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if(Input.GetKey(KeyCode.DownArrow)) forwardAction = 2;
		V_0 = 2;
	}

IL_001e:
	{
		// int turnAction = 0;
		V_1 = 0;
		// if(Input.GetKey(KeyCode.LeftArrow)) turnAction = 2;
		bool L_2;
		L_2 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)276), NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if(Input.GetKey(KeyCode.LeftArrow)) turnAction = 2;
		V_1 = 2;
	}

IL_002e:
	{
		// if(Input.GetKey(KeyCode.RightArrow)) turnAction = 1;
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)275), NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// if(Input.GetKey(KeyCode.RightArrow)) turnAction = 1;
		V_1 = 1;
	}

IL_003c:
	{
		// ActionSegment<int> discreteActions = actionsOut.DiscreteActions;
		ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40* L_4 = ___actionsOut0;
		ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 L_5;
		L_5 = ActionBuffers_get_DiscreteActions_m4608D9D4A8CA69A1334C2A5C3EC949A06BCFE12B_inline(L_4, NULL);
		V_2 = L_5;
		// discreteActions[0] = forwardAction;
		int32_t L_6 = V_0;
		ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D((&V_2), 0, L_6, ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D_RuntimeMethod_var);
		// discreteActions[1] = turnAction;
		int32_t L_7 = V_1;
		ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D((&V_2), 1, L_7, ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D_RuntimeMethod_var);
		// discreteActions[2] = Input.GetKey(KeyCode.Space) ? 1 : 0;
		bool L_8;
		L_8 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)32), NULL);
		G_B9_0 = 2;
		G_B9_1 = (&V_2);
		if (L_8)
		{
			G_B10_0 = 2;
			G_B10_1 = (&V_2);
			goto IL_0064;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_0065;
	}

IL_0064:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_0065:
	{
		ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D(G_B11_2, G_B11_1, G_B11_0, ActionSegment_1_set_Item_mA3F496B3982D1FC2DEA04D66C51E09173CA2DD1D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CarDriverAgent::WallCollisionEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_WallCollisionEnter_mFBECE74D4A17027E92F23AC94CF36557D50C34F8 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B711D23D0BE79BD5BB70178EF41AC78B900EE76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddReward(-15.0f);
		Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15(__this, (-15.0f), NULL);
		// Debug.Log("wall");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8B711D23D0BE79BD5BB70178EF41AC78B900EE76, NULL);
		// EndEpisode();
		Agent_EndEpisode_m3A98436E029FF1B4174FC63994D480E2869AEDDF(__this, NULL);
		// }
		return;
	}
}
// System.Void CarDriverAgent::WallCollisionStay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent_WallCollisionStay_m963A8B74C102C9022CB12CF7D9A02783E479893A (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	{
		// AddReward(-5.0f);
		Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15(__this, (-5.0f), NULL);
		// }
		return;
	}
}
// System.Void CarDriverAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDriverAgent__ctor_m1914C16C83CF090EC91DB089728A40E599850953 (CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* __this, const RuntimeMethod* method) 
{
	{
		Agent__ctor_mF3EB2AAC5EC19B12FD08EFA28B2DD6B903F58543(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarDriverAgent/<CarStopped>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCarStoppedU3Ed__5__ctor_m7D7CA3E6E43097529B29A2B5BCD1A144E693244A (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CarDriverAgent/<CarStopped>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCarStoppedU3Ed__5_System_IDisposable_Dispose_mA112E14DDF7A38E49EEBB2DE38F1A8F55E8D1F5B (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CarDriverAgent/<CarStopped>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCarStoppedU3Ed__5_MoveNext_mEF9E763B1EF10CEAA612A31075F8E7E8CB3017EC (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AddReward(-10f);
		CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* L_5 = V_1;
		NullCheck(L_5);
		Agent_AddReward_mB2DEA363D30D6206E3D048CBC397EA99E78FEF15(L_5, (-10.0f), NULL);
		// EndEpisode();
		CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* L_6 = V_1;
		NullCheck(L_6);
		Agent_EndEpisode_m3A98436E029FF1B4174FC63994D480E2869AEDDF(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CarDriverAgent/<CarStopped>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCarStoppedU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m475C0EBA95B76BDD27CE814587F1A0D100F4A129 (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CarDriverAgent/<CarStopped>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCarStoppedU3Ed__5_System_Collections_IEnumerator_Reset_mC40D3C04360F63B3520CE8574BDC25BB1E33B548 (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCarStoppedU3Ed__5_System_Collections_IEnumerator_Reset_mC40D3C04360F63B3520CE8574BDC25BB1E33B548_RuntimeMethod_var)));
	}
}
// System.Object CarDriverAgent/<CarStopped>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCarStoppedU3Ed__5_System_Collections_IEnumerator_get_Current_m5E7AF91B546EA7983A28B6D528F9A349F371114E (U3CCarStoppedU3Ed__5_tE10B87164395196A0B6C9EB7C32187F1A742A492* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CheckpointSingle::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointSingle_OnTriggerEnter_mECFA9098BA062A750B49470BA33FCAB6F4DD90FD (CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m383C805187F4803BA4EDE1CEE43A341B74F0683D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* V_0 = NULL;
	{
		// if (other.TryGetComponent<CarController>(out CarController car))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_TryGetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m383C805187F4803BA4EDE1CEE43A341B74F0683D(L_0, (&V_0), Component_TryGetComponent_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_m383C805187F4803BA4EDE1CEE43A341B74F0683D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// trackCheckpoints.CarThroughCheckPoint(this, other.transform);
		TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* L_2 = __this->___trackCheckpoints_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_2);
		TrackCheckpoints_CarThroughCheckPoint_m236D02425814C08DA22916E3072B193A2045CC02(L_2, __this, L_4, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CheckpointSingle::SetTrackCheckpoints(TrackCheckpoints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointSingle_SetTrackCheckpoints_mE8FA96A5F6846F7AA1F2F279F826299E3A1C4073 (CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* __this, TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* ___trackCheckpoints0, const RuntimeMethod* method) 
{
	{
		// this.trackCheckpoints = trackCheckpoints;
		TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* L_0 = ___trackCheckpoints0;
		__this->___trackCheckpoints_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackCheckpoints_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void CheckpointSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointSingle__ctor_mD6AECE8AC075DEFFFABFDD3BD4A8142E3B1AFEA9 (CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HandPresence::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_Start_mE67D7EC79A463A9F0E3982FB1E243AF5339CA7BD (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) 
{
	{
		// TryInitialize();
		HandPresence_TryInitialize_mC9F75E11B29DA4D04784520945D5EDD1603DC8BF(__this, NULL);
		// }
		return;
	}
}
// System.Void HandPresence::UpdateHandAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_UpdateHandAnimation_mED4B75D80EEE0130B7EA08AAFA5C1A6E7E06182D (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (targetDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue))
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (&__this->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_1 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
		bool L_2;
		L_2 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// handAnimator.SetFloat("Trigger", triggerValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___handAnimator_11;
		float L_4 = V_0;
		NullCheck(L_3);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_4, NULL);
		goto IL_003c;
	}

IL_0027:
	{
		// handAnimator.SetFloat("Trigger", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___handAnimator_11;
		NullCheck(L_5);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_5, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, (0.0f), NULL);
	}

IL_003c:
	{
		// if (targetDevice.TryGetFeatureValue(CommonUsages.grip, out float gripValue))
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6 = (&__this->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_7 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_8;
		L_8 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_6, L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// handAnimator.SetFloat("Grip", gripValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___handAnimator_11;
		float L_10 = V_1;
		NullCheck(L_9);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_9, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, L_10, NULL);
		return;
	}

IL_0062:
	{
		// handAnimator.SetFloat("Grip", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___handAnimator_11;
		NullCheck(L_11);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_11, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void HandPresence::TryInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_TryInitialize_mC9F75E11B29DA4D04784520945D5EDD1603DC8BF (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisXRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_m44ADDC8C2C50FFD02D9A92D911E0CB7F477CF459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_m6021DC774F04F238AC0E4DB3E163773F0C884781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPresence_U3CTryInitializeU3Eb__13_0_mCF958A422EFDB54CD17E37B2778770C67A412F28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m81A3F84ADF79DAA3AF57A7000507C77E5F372AAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91F6ADE7A9802927EFAE75DA40F816DC7177D1F0);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* V_4 = NULL;
	{
		// List<InputDevice> devices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevicesWithCharacteristics(controllerCharacteristics, devices);
		uint32_t L_1 = __this->___controllerCharacteristics_5;
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_2 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A(L_1, L_2, NULL);
		// foreach (var item in devices)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 L_4;
		L_4 = List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6(L_3, List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC((&V_1), Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_001b_1:
			{
				// foreach (var item in devices)
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5;
				L_5 = Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline((&V_1), Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
				V_2 = L_5;
				// Debug.Log(item.name);
				String_t* L_6;
				L_6 = InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE((&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
			}

IL_002f_1:
			{
				// foreach (var item in devices)
				bool L_7;
				L_7 = Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E((&V_1), Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// if (devices.Count > 0)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_8, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0106;
		}
	}
	{
		// targetDevice = devices[0];
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_10 = V_0;
		NullCheck(L_10);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_11;
		L_11 = List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2(L_10, 0, List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		__this->___targetDevice_9 = L_11;
		// GameObject prefab = controllerPrefabs.Find(controller => controller.name == targetDevice.name);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___controllerPrefabs_6;
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_13 = (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*)il2cpp_codegen_object_new(Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Predicate_1__ctor_mA6DFC557EC23A389E927DA976D39231E29AA5B5E(L_13, __this, (intptr_t)((void*)HandPresence_U3CTryInitializeU3Eb__13_0_mCF958A422EFDB54CD17E37B2778770C67A412F28_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = List_1_Find_m81A3F84ADF79DAA3AF57A7000507C77E5F372AAD(L_12, L_13, List_1_Find_m81A3F84ADF79DAA3AF57A7000507C77E5F372AAD_RuntimeMethod_var);
		V_3 = L_14;
		// if (prefab)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// spawnedController = Instantiate(prefab, transform.parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_17, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->___spawnedController_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedController_8), (void*)L_20);
		goto IL_00c6;
	}

IL_009a:
	{
		// Debug.Log("Did not find corresponding controller model");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral91F6ADE7A9802927EFAE75DA40F816DC7177D1F0, NULL);
		// spawnedController = Instantiate(controllerPrefabs[0], transform.parent);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = __this->___controllerPrefabs_6;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_21, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_22, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->___spawnedController_8 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedController_8), (void*)L_25);
	}

IL_00c6:
	{
		// spawnedHandModel = Instantiate(handModelPrefab, transform.parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___handModelPrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_26, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->___spawnedHandModel_10 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedHandModel_10), (void*)L_29);
		// spawnedHandModel.GetComponent<XRDirectInteractor>().TryGetComponent<XRInteractionManager>(out XRInteractionManager manager);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___spawnedHandModel_10;
		NullCheck(L_30);
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_31;
		L_31 = GameObject_GetComponent_TisXRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_m6021DC774F04F238AC0E4DB3E163773F0C884781(L_30, GameObject_GetComponent_TisXRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_m6021DC774F04F238AC0E4DB3E163773F0C884781_RuntimeMethod_var);
		NullCheck(L_31);
		bool L_32;
		L_32 = Component_TryGetComponent_TisXRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_m44ADDC8C2C50FFD02D9A92D911E0CB7F477CF459(L_31, (&V_4), Component_TryGetComponent_TisXRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_m44ADDC8C2C50FFD02D9A92D911E0CB7F477CF459_RuntimeMethod_var);
		// handAnimator = spawnedHandModel.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___spawnedHandModel_10;
		NullCheck(L_33);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34;
		L_34 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_33, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___handAnimator_11 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handAnimator_11), (void*)L_34);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void HandPresence::MoveCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_MoveCar_m251802246D50CCDA7714D81F75AD796C4814C04A (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if((targetDevice.characteristics & InputDeviceCharacteristics.Left) != 0)
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (&__this->___targetDevice_9);
		uint32_t L_1;
		L_1 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB(L_0, NULL);
		if (!((int32_t)((int32_t)L_1&((int32_t)256))))
		{
			goto IL_002d;
		}
	}
	{
		// if (targetDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out axis))
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_2 = (&__this->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_3 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxis_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___axis_12);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_2, L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0057;
	}

IL_002d:
	{
		// else if ((targetDevice.characteristics & InputDeviceCharacteristics.Right) != 0)
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6 = (&__this->___targetDevice_9);
		uint32_t L_7;
		L_7 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB(L_6, NULL);
		if (!((int32_t)((int32_t)L_7&((int32_t)512))))
		{
			goto IL_0057;
		}
	}
	{
		// if (targetDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out axis2))
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_8 = (&__this->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_9 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxis_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___axis2_13);
		bool L_11;
		L_11 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_8, L_9, L_10, NULL);
	}

IL_0057:
	{
		// if (axis2 != Vector2.zero || axis != Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___axis2_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_14;
		L_14 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_007b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___axis_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_17;
		L_17 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_009c;
		}
	}

IL_007b:
	{
		// carController.SetInputs(axis.y, axis2.x);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_18 = __this->___carController_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___axis_12);
		float L_20 = L_19->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___axis2_13);
		float L_22 = L_21->___x_0;
		NullCheck(L_18);
		CarController_SetInputs_mE7CDEBDC6C1EB32F8A138B85858A3665DAB7DED6(L_18, L_20, L_22, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void HandPresence::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence_Update_mE058201F513055444E53B277E2892C8992A48F1F (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_mB42EFE81A34E66C6C35D538DE62D5D603D107BBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (carController == null)
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_0 = __this->___carController_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// carController = FindObjectOfType<CarController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_2;
		L_2 = Object_FindObjectOfType_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_mB42EFE81A34E66C6C35D538DE62D5D603D107BBB(Object_FindObjectOfType_TisCarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5_mB42EFE81A34E66C6C35D538DE62D5D603D107BBB_RuntimeMethod_var);
		__this->___carController_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___carController_14), (void*)L_2);
	}

IL_0019:
	{
		// if (!targetDevice.isValid)
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (&__this->___targetDevice_9);
		bool L_4;
		L_4 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_3, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// TryInitialize();
		HandPresence_TryInitialize_mC9F75E11B29DA4D04784520945D5EDD1603DC8BF(__this, NULL);
		goto IL_006e;
	}

IL_002e:
	{
		// if (showController)
		bool L_5 = __this->___showController_4;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// spawnedHandModel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___spawnedHandModel_10;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// spawnedController.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___spawnedController_8;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		goto IL_006e;
	}

IL_0050:
	{
		// spawnedHandModel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___spawnedHandModel_10;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// spawnedController.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___spawnedController_8;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// UpdateHandAnimation();
		HandPresence_UpdateHandAnimation_mED4B75D80EEE0130B7EA08AAFA5C1A6E7E06182D(__this, NULL);
	}

IL_006e:
	{
		// MoveCar();
		HandPresence_MoveCar_m251802246D50CCDA7714D81F75AD796C4814C04A(__this, NULL);
		// if (targetDevice.TryGetFeatureValue(CommonUsages.secondaryButton, out bool primaryButtonValue))
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_10 = (&__this->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_11 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryButton_3;
		bool L_12;
		L_12 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_10, L_11, (&V_0), NULL);
		if (!L_12)
		{
			goto IL_00b2;
		}
	}
	{
		// if (primaryButtonValue)
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_00a6;
		}
	}
	{
		// carController.SetInputs(0, axis2.x);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_14 = __this->___carController_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___axis2_13);
		float L_16 = L_15->___x_0;
		NullCheck(L_14);
		CarController_SetInputs_mE7CDEBDC6C1EB32F8A138B85858A3665DAB7DED6(L_14, (0.0f), L_16, NULL);
	}

IL_00a6:
	{
		// carController.Brake(primaryButtonValue);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_17 = __this->___carController_14;
		bool L_18 = V_0;
		NullCheck(L_17);
		CarController_Brake_mC03319E02C2765FA725A9D6D3B66885D7D3F57AC(L_17, L_18, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void HandPresence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresence__ctor_m03ECA94662AE2E2EA641339AA36CB7E7295DF719 (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 axis = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___axis_12 = L_0;
		// private Vector2 axis2 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___axis2_13 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean HandPresence::<TryInitialize>b__13_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPresence_U3CTryInitializeU3Eb__13_0_mCF958A422EFDB54CD17E37B2778770C67A412F28 (HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___controller0, const RuntimeMethod* method) 
{
	{
		// GameObject prefab = controllerPrefabs.Find(controller => controller.name == targetDevice.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___controller0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_2 = (&__this->___targetDevice_9);
		String_t* L_3;
		L_3 = InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SteeringWheelController::FindHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_FindHands_mA02409A9CD9DEBF864B83A13A8A3613BCE4F4B44 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E_m9AAE1F14F219C4F79DBCB4D8E0D97892449DB79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rightHand = GameObject.FindGameObjectWithTag("RightHand").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		__this->___rightHand_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightHand_4), (void*)L_1);
		// leftHand = GameObject.FindGameObjectWithTag("LeftHand").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		__this->___leftHand_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftHand_7), (void*)L_3);
		// rightHandOriginalParent = rightHand.transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___rightHand_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		__this->___rightHandOriginalParent_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightHandOriginalParent_5), (void*)L_6);
		// leftHandOriginalParent = leftHand.transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___leftHand_7;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		__this->___leftHandOriginalParent_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftHandOriginalParent_8), (void*)L_9);
		// leftHandPresence = leftHand.GetComponent<HandPresence>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___leftHand_7;
		NullCheck(L_10);
		HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* L_11;
		L_11 = GameObject_GetComponent_TisHandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E_m9AAE1F14F219C4F79DBCB4D8E0D97892449DB79E(L_10, GameObject_GetComponent_TisHandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E_m9AAE1F14F219C4F79DBCB4D8E0D97892449DB79E_RuntimeMethod_var);
		__this->___leftHandPresence_14 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftHandPresence_14), (void*)L_11);
		// rightHandPresence = rightHand.GetComponent<HandPresence>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___rightHand_4;
		NullCheck(L_12);
		HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* L_13;
		L_13 = GameObject_GetComponent_TisHandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E_m9AAE1F14F219C4F79DBCB4D8E0D97892449DB79E(L_12, GameObject_GetComponent_TisHandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E_m9AAE1F14F219C4F79DBCB4D8E0D97892449DB79E_RuntimeMethod_var);
		__this->___rightHandPresence_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightHandPresence_15), (void*)L_13);
		// if (rightHand != null && leftHand != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___rightHand_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___leftHand_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_009b;
		}
	}
	{
		// handsFound = true;
		__this->___handsFound_13 = (bool)1;
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void SteeringWheelController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_Update_m3053E118D7FA1B1071FC1D1BCF97B5E4AAD7B071 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, const RuntimeMethod* method) 
{
	{
		// if (!handsFound)
		bool L_0 = __this->___handsFound_13;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// FindHands();
		SteeringWheelController_FindHands_mA02409A9CD9DEBF864B83A13A8A3613BCE4F4B44(__this, NULL);
	}

IL_000e:
	{
		// transform.localRotation = Quaternion.Euler(currentSteeringWheelRotation, 90, -90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_2 = __this->___currentSteeringWheelRotation_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_2, (90.0f), (-90.0f), NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void SteeringWheelController::TurnVehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_TurnVehicle_mDCB670A3AB2339B6A00225C16C48EF81F0EA8348 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float turn = -transform.rotation.normalized.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_1 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline((&V_1), NULL);
		float L_3 = L_2.___x_0;
		V_0 = ((-L_3));
		// if (turn > 0.47)
		float L_4 = V_0;
		if ((!(((double)((double)L_4)) > ((double)(0.46999999999999997)))))
		{
			goto IL_002f;
		}
	}
	{
		// turn = turn + 1;
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_5, (1.0f)));
	}

IL_002f:
	{
		// Debug.Log(turn);
		float L_6 = V_0;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// carController.SetInputs(0, turn);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_9 = __this->___carController_16;
		float L_10 = V_0;
		NullCheck(L_9);
		CarController_SetInputs_mE7CDEBDC6C1EB32F8A138B85858A3665DAB7DED6(L_9, (0.0f), L_10, NULL);
		// }
		return;
	}
}
// System.Void SteeringWheelController::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_OnTriggerStay_mD86EC33777D3C317548003936CB5425D0879E6DD (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (rightHandOnWheel == false &&
		//     rightHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue))
		bool L_0 = __this->___rightHandOnWheel_6;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* L_1 = __this->___rightHandPresence_15;
		NullCheck(L_1);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_2 = (&L_1->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_3 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_4;
		L_4 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// PlaceHandOnWheel(ref rightHand, ref rightHandOriginalParent, ref rightHandOnWheel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_5 = (&__this->___rightHand_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_6 = (&__this->___rightHandOriginalParent_5);
		bool* L_7 = (&__this->___rightHandOnWheel_6);
		SteeringWheelController_PlaceHandOnWheel_m842BD81C53247F10E0B72E5A0EF6A86B65BF8732(__this, L_5, L_6, L_7, NULL);
	}

IL_0039:
	{
		// if (leftHandOnWheel == false &&
		//     leftHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue2))
		bool L_8 = __this->___leftHandOnWheel_9;
		if (L_8)
		{
			goto IL_0072;
		}
	}
	{
		HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* L_9 = __this->___leftHandPresence_14;
		NullCheck(L_9);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_10 = (&L_9->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_11 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_12;
		L_12 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_10, L_11, (&V_1), NULL);
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// PlaceHandOnWheel(ref leftHand, ref leftHandOriginalParent, ref leftHandOnWheel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_13 = (&__this->___leftHand_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_14 = (&__this->___leftHandOriginalParent_8);
		bool* L_15 = (&__this->___leftHandOnWheel_9);
		SteeringWheelController_PlaceHandOnWheel_m842BD81C53247F10E0B72E5A0EF6A86B65BF8732(__this, L_13, L_14, L_15, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void SteeringWheelController::PlaceHandOnWheel(UnityEngine.GameObject&,UnityEngine.Transform&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_PlaceHandOnWheel_m842BD81C53247F10E0B72E5A0EF6A86B65BF8732 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___hand0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___originalParent1, bool* ___handOnWheel2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	float V_5 = 0.0f;
	{
		// var shortestDistance = Vector3.Distance(snapPositions[0].position, hand.transform.position);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___snapPositions_10;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_4 = ___hand0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_4);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8;
		L_8 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// var bestSnap = snapPositions[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = __this->___snapPositions_10;
		NullCheck(L_9);
		int32_t L_10 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// foreach (var snapPosition in snapPositions)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = __this->___snapPositions_10;
		V_2 = L_12;
		V_3 = 0;
		goto IL_006a;
	}

IL_0033:
	{
		// foreach (var snapPosition in snapPositions)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// if (snapPosition.childCount == 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_4;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_17, NULL);
		if (L_18)
		{
			goto IL_0066;
		}
	}
	{
		// var distance = Vector3.Distance(snapPosition.position, hand.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_4;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_21 = ___hand0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_21);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25;
		L_25 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_20, L_24, NULL);
		V_5 = L_25;
		// if (distance < shortestDistance)
		float L_26 = V_5;
		float L_27 = V_0;
		if ((!(((float)L_26) < ((float)L_27))))
		{
			goto IL_0066;
		}
	}
	{
		// shortestDistance = distance;
		float L_28 = V_5;
		V_0 = L_28;
		// bestSnap = snapPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_4;
		V_1 = L_29;
	}

IL_0066:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_006a:
	{
		// foreach (var snapPosition in snapPositions)
		int32_t L_31 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		// originalParent = hand.transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_33 = ___originalParent1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_34 = ___hand0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_34);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_36, NULL);
		*((RuntimeObject**)L_33) = (RuntimeObject*)L_37;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_33, (void*)(RuntimeObject*)L_37);
		// hand.transform.parent = bestSnap.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_38 = ___hand0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_38);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = V_1;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		NullCheck(L_40);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_40, L_42, NULL);
		// hand.transform.position = bestSnap.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_43 = ___hand0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_43);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_1;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		NullCheck(L_45);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_45, L_48, NULL);
		// handOnWheel = true;
		bool* L_49 = ___handOnWheel2;
		*((int8_t*)L_49) = (int8_t)1;
		// }
		return;
	}
}
// System.Void SteeringWheelController::ConvertHandRotationToSteeringWheelRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_ConvertHandRotationToSteeringWheelRotation_m93ADD02D77C1C4214D072DDB29A26FC782958B23 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (rightHandOnWheel && !leftHandOnWheel)
		bool L_0 = __this->___rightHandOnWheel_6;
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		bool L_1 = __this->___leftHandOnWheel_9;
		if (L_1)
		{
			goto IL_005b;
		}
	}
	{
		// Quaternion newRot = Quaternion.Euler(0, 0, rightHandOriginalParent.transform.rotation.eulerAngles.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___rightHandOriginalParent_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_6 = L_5.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_6, NULL);
		V_0 = L_7;
		// directionalObject.rotation = newRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___directionalObject_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_9, NULL);
		// transform.parent = directionalObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___directionalObject_12;
		NullCheck(L_10);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_10, L_11, NULL);
		return;
	}

IL_005b:
	{
		// else if (leftHandOnWheel && !rightHandOnWheel)
		bool L_12 = __this->___leftHandOnWheel_9;
		if (!L_12)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_13 = __this->___rightHandOnWheel_6;
		if (L_13)
		{
			goto IL_00b6;
		}
	}
	{
		// Quaternion newRot = Quaternion.Euler(0, 0, leftHandOriginalParent.transform.rotation.eulerAngles.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___leftHandOriginalParent_8;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		V_1 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_18 = L_17.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_18, NULL);
		V_2 = L_19;
		// directionalObject.rotation = newRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___directionalObject_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		NullCheck(L_20);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_20, L_21, NULL);
		// transform.parent = directionalObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___directionalObject_12;
		NullCheck(L_22);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_22, L_23, NULL);
		return;
	}

IL_00b6:
	{
		// else if (leftHandOnWheel && rightHandOnWheel)
		bool L_24 = __this->___leftHandOnWheel_9;
		if (!L_24)
		{
			goto IL_0150;
		}
	}
	{
		bool L_25 = __this->___rightHandOnWheel_6;
		if (!L_25)
		{
			goto IL_0150;
		}
	}
	{
		// Quaternion newRotLeft = Quaternion.Euler(0, 0, leftHandOriginalParent.transform.rotation.eulerAngles.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___leftHandOriginalParent_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		V_1 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_30 = L_29.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_30, NULL);
		// Quaternion newRotRight = Quaternion.Euler(0, 0, rightHandOriginalParent.transform.rotation.eulerAngles.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___rightHandOriginalParent_5;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		V_1 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_36 = L_35.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_36, NULL);
		V_3 = L_37;
		// Quaternion finalRot = Quaternion.Slerp(newRotLeft, newRotRight, 1.0f / 2.0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_31, L_38, (0.5f), NULL);
		V_4 = L_39;
		// directionalObject.rotation = finalRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___directionalObject_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = V_4;
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_41, NULL);
		// transform.parent = directionalObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___directionalObject_12;
		NullCheck(L_42);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_42, L_43, NULL);
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void SteeringWheelController::RealeaseHandFromWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController_RealeaseHandFromWheel_mAA1B9240477BBEB6D1A54852D211344277AF7A0E (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// rightHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue);
		HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* L_0 = __this->___rightHandPresence_15;
		NullCheck(L_0);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (&L_0->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_2 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_3;
		L_3 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_2, (&V_0), NULL);
		// if (rightHandOnWheel && triggerValue <= 0f)
		bool L_4 = __this->___rightHandOnWheel_6;
		if (!L_4)
		{
			goto IL_007b;
		}
	}
	{
		float L_5 = V_0;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_007b;
		}
	}
	{
		// rightHand.transform.parent = rightHandOriginalParent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___rightHand_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___rightHandOriginalParent_5;
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// rightHand.transform.position = rightHandOriginalParent.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___rightHand_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___rightHandOriginalParent_5;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
		// rightHand.transform.rotation = rightHandOriginalParent.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___rightHand_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___rightHandOriginalParent_5;
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_16, NULL);
		// rightHandOnWheel = false;
		__this->___rightHandOnWheel_6 = (bool)0;
	}

IL_007b:
	{
		// leftHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue2);
		HandPresence_t207BDDABDEEF9B9E837275B8459E53789E17A51E* L_17 = __this->___leftHandPresence_14;
		NullCheck(L_17);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_18 = (&L_17->___targetDevice_9);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_19 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_20;
		L_20 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_18, L_19, (&V_1), NULL);
		// if (leftHandOnWheel && triggerValue2 <= 0f)
		bool L_21 = __this->___leftHandOnWheel_9;
		if (!L_21)
		{
			goto IL_00f6;
		}
	}
	{
		float L_22 = V_1;
		if ((!(((float)L_22) <= ((float)(0.0f)))))
		{
			goto IL_00f6;
		}
	}
	{
		// leftHand.transform.parent = leftHandOriginalParent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___leftHand_7;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___leftHandOriginalParent_8;
		NullCheck(L_24);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_24, L_25, NULL);
		// leftHand.transform.position = leftHandOriginalParent.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___leftHand_7;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___leftHandOriginalParent_8;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_29, NULL);
		// leftHand.transform.rotation = leftHandOriginalParent.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___leftHand_7;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___leftHandOriginalParent_8;
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		NullCheck(L_31);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_31, L_33, NULL);
		// leftHandOnWheel = false;
		__this->___leftHandOnWheel_9 = (bool)0;
	}

IL_00f6:
	{
		// if (!rightHandOnWheel && !leftHandOnWheel)
		bool L_34 = __this->___rightHandOnWheel_6;
		if (L_34)
		{
			goto IL_011c;
		}
	}
	{
		bool L_35 = __this->___leftHandOnWheel_9;
		if (L_35)
		{
			goto IL_011c;
		}
	}
	{
		// transform.parent = carController.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* L_37 = __this->___carController_16;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_36);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_36, L_38, NULL);
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Void SteeringWheelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringWheelController__ctor_mCB8C9F9637393BA4ECC1402709A6D4C970FEBF20 (SteeringWheelController_tA43A2352DF8AB539E974E09C0AB258FEE1E06888* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrackCheckpoints::add_OnCarCorrectCheckpoint(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_add_OnCarCorrectCheckpoint_m6003BA59177035DA41BD1F347757720C34DA327C (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnCarCorrectCheckpoint_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnCarCorrectCheckpoint_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TrackCheckpoints::remove_OnCarCorrectCheckpoint(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_remove_OnCarCorrectCheckpoint_m26FC49BF0E018F408330E44FA004C5841FE03CAC (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnCarCorrectCheckpoint_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnCarCorrectCheckpoint_4);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TrackCheckpoints::add_OnCarWrongCheckpoint(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_add_OnCarWrongCheckpoint_mD1127066B16379EB59E5BF8FB0F14FEC987DF277 (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnCarWrongCheckpoint_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnCarWrongCheckpoint_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TrackCheckpoints::remove_OnCarWrongCheckpoint(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_remove_OnCarWrongCheckpoint_m1A83054E3F636B59B51650EBB6B3960FC9FCCE17 (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnCarWrongCheckpoint_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnCarWrongCheckpoint_5);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TrackCheckpoints::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_Awake_m04C2529FEFA5E73A5CC3F9198DCDCD17F6D99D6D (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3_m6CD64B37564E296F3809C369637E161831DE14FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE89A719B0F220B5EC35B1ED65415D64D6B7C5505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAC5F910551A416276D418C294E0215E1C4789E31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// checkpointSingleList = new List<CheckpointSingle>();
		List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* L_0 = (List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317*)il2cpp_codegen_object_new(List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAC5F910551A416276D418C294E0215E1C4789E31(L_0, List_1__ctor_mAC5F910551A416276D418C294E0215E1C4789E31_RuntimeMethod_var);
		__this->___checkpointSingleList_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkpointSingleList_7), (void*)L_0);
		// Transform checkPointsTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		// foreach (Transform checkpointSingleTransform in checkPointsTransform)
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0057;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0057:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_0019_1:
			{
				// foreach (Transform checkpointSingleTransform in checkPointsTransform)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				// CheckpointSingle checkpointSingle = checkpointSingleTransform.GetComponent<CheckpointSingle>();
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* L_8;
				L_8 = Component_GetComponent_TisCheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3_m6CD64B37564E296F3809C369637E161831DE14FC(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisCheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3_m6CD64B37564E296F3809C369637E161831DE14FC_RuntimeMethod_var);
				V_1 = L_8;
				// checkpointSingle.SetTrackCheckpoints(this);
				CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* L_9 = V_1;
				NullCheck(L_9);
				CheckpointSingle_SetTrackCheckpoints_mE8FA96A5F6846F7AA1F2F279F826299E3A1C4073_inline(L_9, __this, NULL);
				// checkpointSingleList.Add(checkpointSingle);
				List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* L_10 = __this->___checkpointSingleList_7;
				CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* L_11 = V_1;
				NullCheck(L_10);
				List_1_Add_mE89A719B0F220B5EC35B1ED65415D64D6B7C5505_inline(L_10, L_11, List_1_Add_mE89A719B0F220B5EC35B1ED65415D64D6B7C5505_RuntimeMethod_var);
			}

IL_003d_1:
			{
				// foreach (Transform checkpointSingleTransform in checkPointsTransform)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// nextCheckPointIndexList = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_14, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___nextCheckPointIndexList_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextCheckPointIndexList_8), (void*)L_14);
		// foreach (Transform carTransform in carTransformList)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_15 = __this->___carTransformList_6;
		NullCheck(L_15);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_16;
		L_16 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_15, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_3 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_3), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0085_1;
			}

IL_0071_1:
			{
				// foreach (Transform carTransform in carTransformList)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
				L_17 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_3), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				// nextCheckPointIndexList.Add(0);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = __this->___nextCheckPointIndexList_8;
				NullCheck(L_18);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_18, 0, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
			}

IL_0085_1:
			{
				// foreach (Transform carTransform in carTransformList)
				bool L_19;
				L_19 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_3), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0071_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void TrackCheckpoints::CarThroughCheckPoint(CheckpointSingle,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_CarThroughCheckPoint_m236D02425814C08DA22916E3072B193A2045CC02 (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* ___checkpointSingle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___carTransform1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m4F76708D26948C7968F5E6AB83DA8E2B6584F410_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF25F81A50B5329552D8F5EA25903117F3F6080C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* V_1 = NULL;
	CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* V_2 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B3_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B7_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B6_0 = NULL;
	{
		// int nextCheckPointIndex = nextCheckPointIndexList[carTransformList.IndexOf(carTransform)];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___nextCheckPointIndexList_8;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___carTransformList_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___carTransform1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_1, L_2, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_0, L_3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_4;
		// if (checkpointSingleList.IndexOf(checkpointSingle) == nextCheckPointIndex)
		List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* L_5 = __this->___checkpointSingleList_7;
		CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* L_6 = ___checkpointSingle0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = List_1_IndexOf_m4F76708D26948C7968F5E6AB83DA8E2B6584F410(L_5, L_6, List_1_IndexOf_m4F76708D26948C7968F5E6AB83DA8E2B6584F410_RuntimeMethod_var);
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0074;
		}
	}
	{
		// nextCheckPointIndexList[carTransformList.IndexOf(carTransform)] = (nextCheckPointIndex + 1) % checkpointSingleList.Count;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___nextCheckPointIndexList_8;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___carTransformList_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___carTransform1;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_10, L_11, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		int32_t L_13 = V_0;
		List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* L_14 = __this->___checkpointSingleList_7;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mF25F81A50B5329552D8F5EA25903117F3F6080C9_inline(L_14, List_1_get_Count_mF25F81A50B5329552D8F5EA25903117F3F6080C9_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_9, L_12, ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 1))%L_15)), List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// OnCarCorrectCheckpoint?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_16 = __this->___OnCarCorrectCheckpoint_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_17 = L_16;
		G_B2_0 = L_17;
		if (L_17)
		{
			G_B3_0 = L_17;
			goto IL_0059;
		}
	}
	{
		goto IL_0064;
	}

IL_0059:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_18 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B3_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B3_0, __this, L_18, NULL);
	}

IL_0064:
	{
		// carTransform.TryGetComponent<CarDriverAgent>(out CarDriverAgent carDriverAgent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = ___carTransform1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14(L_19, (&V_1), Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var);
		// carDriverAgent.CorrectCheckpoint();
		CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* L_21 = V_1;
		NullCheck(L_21);
		CarDriverAgent_CorrectCheckpoint_m197D41B0FC181739F7A05AB578CF72C04A235D2B(L_21, NULL);
		return;
	}

IL_0074:
	{
		// OnCarWrongCheckpoint?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_22 = __this->___OnCarWrongCheckpoint_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_23 = L_22;
		G_B6_0 = L_23;
		if (L_23)
		{
			G_B7_0 = L_23;
			goto IL_0080;
		}
	}
	{
		goto IL_008b;
	}

IL_0080:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_24 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B7_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B7_0, __this, L_24, NULL);
	}

IL_008b:
	{
		// carTransform.TryGetComponent<CarDriverAgent>(out CarDriverAgent carDriverAgent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = ___carTransform1;
		NullCheck(L_25);
		bool L_26;
		L_26 = Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14(L_25, (&V_2), Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var);
		// carDriverAgent.WrongCheckpoint();
		CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* L_27 = V_2;
		NullCheck(L_27);
		CarDriverAgent_WrongCheckpoint_mD2F1F06D7469AFA3EE902D897CB99A61F133D475(L_27, NULL);
		// }
		return;
	}
}
// System.Void TrackCheckpoints::ResetCheckpoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints_ResetCheckpoint_m167F47EBAB17CC216B01BCE43FD66B68794A6AC7 (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___carTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nextCheckPointIndexList[carTransformList.IndexOf(carTransform)] = 0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___nextCheckPointIndexList_8;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___carTransformList_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___carTransform0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_1, L_2, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_0, L_3, 0, List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Transform TrackCheckpoints::GetNextCheckpointDirection(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TrackCheckpoints_GetNextCheckpointDirection_m948776C5199B8394E4ADE6379AC8BFBA8929216A (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___carTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m625296BA9D3BA084AC1FEE539E822F448C705793_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return checkpointSingleList[nextCheckPointIndexList[carTransformList.IndexOf(carTransform)]].transform;
		List_1_tE21C50E4AE1E814CAF0C89E3274C165A867F4317* L_0 = __this->___checkpointSingleList_7;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___nextCheckPointIndexList_8;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___carTransformList_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___carTransform0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_2, L_3, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_5;
		L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_1, L_4, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_0);
		CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* L_6;
		L_6 = List_1_get_Item_m625296BA9D3BA084AC1FEE539E822F448C705793(L_0, L_5, List_1_get_Item_m625296BA9D3BA084AC1FEE539E822F448C705793_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		return L_7;
	}
}
// System.Void TrackCheckpoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackCheckpoints__ctor_mAAFEF3AE359D578D3765C17B66F004459AA3295F (TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wall::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_OnCollisionEnter_m1AC64BAF41BBB61258F29B3FF2F59665360ED668 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* V_0 = NULL;
	{
		// if (other.transform.TryGetComponent<CarDriverAgent>(out CarDriverAgent car))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14(L_1, (&V_0), Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// car.WallCollisionEnter();
		CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* L_3 = V_0;
		NullCheck(L_3);
		CarDriverAgent_WallCollisionEnter_mFBECE74D4A17027E92F23AC94CF36557D50C34F8(L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Wall::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_OnCollisionStay_m5ECACAFCFE6AFB3FE302CADCD45F17A908149F42 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* V_0 = NULL;
	{
		// if (other.transform.TryGetComponent<CarDriverAgent>(out CarDriverAgent car))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14(L_1, (&V_0), Component_TryGetComponent_TisCarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B_m02DCFAF8E362D89AFA17A11EC17C32F6CBEA4E14_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// car.WallCollisionEnter();
		CarDriverAgent_tD0B5D8CB73C71E0782A49CBA66A92A6F3C21884B* L_3 = V_0;
		NullCheck(L_3);
		CarDriverAgent_WallCollisionEnter_mFBECE74D4A17027E92F23AC94CF36557D50C34F8(L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m04126D2E920BD90F76660E756CDC65BCFEF2711B (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 ActionBuffers_get_DiscreteActions_m4608D9D4A8CA69A1334C2A5C3EC949A06BCFE12B_inline (ActionBuffers_tD6C97720BA0000C95277A3F5CF454EC0F6CB7E40* __this, const RuntimeMethod* method) 
{
	{
		// public ActionSegment<int> DiscreteActions { get; }
		ActionSegment_1_tBDDB48BA2B1B25590C1E0AC125294F0157E071F7 L_0 = __this->___U3CDiscreteActionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_normalized_m08AB963B13A0EC6F540A29886C5ACFCCCC0A6D16_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckpointSingle_SetTrackCheckpoints_mE8FA96A5F6846F7AA1F2F279F826299E3A1C4073_inline (CheckpointSingle_t93DDBDF63EA1FA51548C696ADF5720951116B2C3* __this, TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* ___trackCheckpoints0, const RuntimeMethod* method) 
{
	{
		// this.trackCheckpoints = trackCheckpoints;
		TrackCheckpoints_t7F6D6AA4B990C6556B00930B1C75B6EF9F562BB9* L_0 = ___trackCheckpoints0;
		__this->___trackCheckpoints_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackCheckpoints_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___q0;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = sqrtf(L_2);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		V_2 = L_7;
		goto IL_004a;
	}

IL_0022:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___q0;
		float L_9 = L_8.___x_0;
		float L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___q0;
		float L_12 = L_11.___y_1;
		float L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___q0;
		float L_15 = L_14.___z_2;
		float L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___q0;
		float L_18 = L_17.___w_3;
		float L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_20), ((float)(L_9/L_10)), ((float)(L_12/L_13)), ((float)(L_15/L_16)), ((float)(L_18/L_19)), /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_004a;
	}

IL_004a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
