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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
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
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// Loading
struct Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseRotate
struct MouseRotate_t96B7F0D70351F22CCEE4B80720A19F3F3329C9FF;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// Visyde.V_SMC_Camera
struct V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0;
// Visyde.V_SMC_Handler
struct V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC;
// Visyde.V_Text
struct V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Loading/<<Startloadscene>g__load|10_0>d
struct U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3;
// Loading/<Getinfo>d__15
struct U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2;
// Loading/<Login>d__14
struct U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9;
// Loading/INFODataClass
struct INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830;
// Loading/LoginDataClass
struct LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF;
// Loading/LoginErrorDataClass
struct LoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral26E34103D0B4892BBF6A28D302AAEC51460F13DE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C47030441FDB8EA99E35AA33AB462A4B52C836D;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral66C51D1FD7EA4002845B679BA96294D71817B9C3;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7606476544F9CC9D0BAF5F847A9DA6FB1A1BCF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral76BECEBFB2B5A31D155025EEEA706D8E45E72553;
IL2CPP_EXTERN_C String_t* _stringLiteral7E9D9C73196852033174DE401D667E707BD50863;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral826282719C02BA78C32BDFD36DDDF74B1D2554DC;
IL2CPP_EXTERN_C String_t* _stringLiteral84D14AB53CF340035CD1AD6C8EE7140A4B1D0971;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9BDA7A9308DD77B05EF77B3CDC7A7FD7AE650A97;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD3F6AF6B523979A3F87254C8718CAA26107086;
IL2CPP_EXTERN_C String_t* _stringLiteralC5417497152F52E77A47F1445398DAE0771DF9F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD709777C0F252110D0E192BB607CB6ADF6CD569E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C String_t* _stringLiteralEB2952C849BF809629C3C940B4C87CD966580C49;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisINFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830_mD0AAAD0E5CB930912DBCE37FD79DE650C0B13AB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisLoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF_m27C25EB11C24475A62B58C026CC710BB9C5EBA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisLoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416_m7533511EBCBE050CA99B40F68B8788570C239DD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Loading_U3CStartU3Eb__8_0_mCACC625E59ADBECF3E6DA5C18273BCF06BBC9D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetinfoU3Ed__15_System_Collections_IEnumerator_Reset_mF671D53DAF49DD4D151965F7B8CCE4C56C4DFCDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoginU3Ed__14_System_Collections_IEnumerator_Reset_m8A9C880EEE4D3C342FF74ADDDA39D9E2C6FDFA0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_System_Collections_IEnumerator_Reset_m7673857513122B283EA426DE9495F1649C551B6F_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

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
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Loading/<<Startloadscene>g__load|10_0>d
struct U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3  : public RuntimeObject
{
	// System.Int32 Loading/<<Startloadscene>g__load|10_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Loading/<<Startloadscene>g__load|10_0>d::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Loading Loading/<<Startloadscene>g__load|10_0>d::<>4__this
	Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation Loading/<<Startloadscene>g__load|10_0>d::<operation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__2_3;
};

// Loading/<Getinfo>d__15
struct U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2  : public RuntimeObject
{
	// System.Int32 Loading/<Getinfo>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Loading/<Getinfo>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Loading Loading/<Getinfo>d__15::<>4__this
	Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* ___U3CU3E4__this_2;
	// System.String Loading/<Getinfo>d__15::session
	String_t* ___session_3;
	// UnityEngine.Networking.UnityWebRequest Loading/<Getinfo>d__15::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// Loading/<Login>d__14
struct U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9  : public RuntimeObject
{
	// System.Int32 Loading/<Login>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Loading/<Login>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Loading Loading/<Login>d__14::<>4__this
	Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* ___U3CU3E4__this_2;
	// System.String Loading/<Login>d__14::username
	String_t* ___username_3;
	// System.String Loading/<Login>d__14::password
	String_t* ___password_4;
	// UnityEngine.Networking.UnityWebRequest Loading/<Login>d__14::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_5;
};

// Loading/INFODataClass
struct INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830  : public RuntimeObject
{
	// System.String Loading/INFODataClass::username
	String_t* ___username_0;
};

// Loading/LoginDataClass
struct LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF  : public RuntimeObject
{
	// System.String Loading/LoginDataClass::session
	String_t* ___session_0;
	// System.String Loading/LoginDataClass::id
	String_t* ___id_1;
};

// Loading/LoginErrorDataClass
struct LoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416  : public RuntimeObject
{
	// System.Int32 Loading/LoginErrorDataClass::error
	int32_t ___error_0;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Loading
struct Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Loading::speed
	float ___speed_4;
	// UnityEngine.UI.Slider Loading::ProgressBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___ProgressBar_5;
	// TMPro.TMP_Text Loading::StatusMessage
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___StatusMessage_6;
	// TMPro.TMP_InputField Loading::Userinput
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___Userinput_7;
	// TMPro.TMP_InputField Loading::PWinput
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___PWinput_8;
	// TMPro.TMP_Text Loading::LoginStatusMessage
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___LoginStatusMessage_9;
	// UnityEngine.GameObject Loading::LoginPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LoginPanel_10;
	// UnityEngine.GameObject Loading::LButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LButton_11;
};

// MouseRotate
struct MouseRotate_t96B7F0D70351F22CCEE4B80720A19F3F3329C9FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MouseRotate::mouseSensitivty
	float ___mouseSensitivty_4;
	// UnityEngine.Transform MouseRotate::playerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerBody_5;
	// System.Single MouseRotate::xRotation
	float ___xRotation_6;
	// System.Boolean MouseRotate::mouselock
	bool ___mouselock_7;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// System.Single PlayerMovement::speed
	float ___speed_5;
	// System.Single PlayerMovement::RunSpeed
	float ___RunSpeed_6;
	// System.Single PlayerMovement::gravity
	float ___gravity_7;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_8;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_9;
	// System.Single PlayerMovement::groundDistance
	float ___groundDistance_10;
	// UnityEngine.LayerMask PlayerMovement::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_11;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_12;
	// System.Single PlayerMovement::jumpHeight
	float ___jumpHeight_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Visyde.V_SMC_Camera
struct V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Visyde.V_SMC_Handler Visyde.V_SMC_Camera::crosshairHandler
	V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* ___crosshairHandler_4;
	// System.Single Visyde.V_SMC_Camera::rotationX
	float ___rotationX_5;
	// System.Single Visyde.V_SMC_Camera::rotationY
	float ___rotationY_6;
	// UnityEngine.Vector3 Visyde.V_SMC_Camera::fireDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fireDirection_7;
	// UnityEngine.Vector3 Visyde.V_SMC_Camera::firePoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___firePoint_8;
};

// Visyde.V_SMC_Handler
struct V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite[] Visyde.V_SMC_Handler::crossHairs
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___crossHairs_4;
	// System.Int32 Visyde.V_SMC_Handler::curCrossHair
	int32_t ___curCrossHair_5;
};

// Visyde.V_Text
struct V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Visyde.V_Text::crosshairNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___crosshairNameText_4;
	// Visyde.V_SMC_Handler Visyde.V_Text::handler
	V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* ___handler_5;
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Loading::checkaccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_checkaccount_m27438C4366D4CD02E0FC01618C839659A35455F8 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Loading::Getinfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_Getinfo_mFAA588AF350C418FF3AC07ADE22BCE72C2F6556A (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, String_t* ___session0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Loading::<Startloadscene>g__load|10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_U3CStartloadsceneU3Eg__loadU7C10_0_m502FE034A594E6B1CFD66604449E7EA02C6C3618 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) ;
// System.Void Loading/<Login>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__14__ctor_m32BF17F7FED3F06E9350674F9AC7D5CC867F05D0 (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Loading/<Getinfo>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetinfoU3Ed__15__ctor_mCE60CF93F0BCA349B1B03BA6FD1F46205C145886 (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Loading::Login(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_Login_mA92781CBC8453F18489187FCB7B7F51505659C63 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, String_t* ___username0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Loading::loggin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_loggin_m31C5AA263B03C7BB912413B08381148A057A4C7F (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) ;
// System.Void Loading/<<Startloadscene>g__load|10_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed__ctor_mF358FC88DEEFD5217B8C6C500BC51E93E111EED4 (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Loading/LoginErrorDataClass>(System.String)
inline LoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416* JsonUtility_FromJson_TisLoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416_m7533511EBCBE050CA99B40F68B8788570C239DD2 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  LoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Loading/LoginDataClass>(System.String)
inline LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* JsonUtility_FromJson_TisLoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF_m27C25EB11C24475A62B58C026CC710BB9C5EBA30 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Loading/INFODataClass>(System.String)
inline INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830* JsonUtility_FromJson_TisINFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830_mD0AAAD0E5CB930912DBCE37FD79DE650C0B13AB9 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Void Loading::Startloadscene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Startloadscene_m36672447675715873EE5654D09A4CE19195D8A21 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Visyde.V_SMC_Camera::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Hit_mE986E80AE7401BC7A6F29978D9230668F11608BF (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void Visyde.V_SMC_Handler::ChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Visyde.V_SMC_Handler>()
inline V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void Loading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Start_mEFEEDC3894328DB8F818B306D94EDEB908C7E3EB (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loading_U3CStartU3Eb__8_0_mCACC625E59ADBECF3E6DA5C18273BCF06BBC9D0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LButton.GetComponent<Button>().onClick.AddListener(delegate() { loggin(); });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LButton_11;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)Loading_U3CStartU3Eb__8_0_mCACC625E59ADBECF3E6DA5C18273BCF06BBC9D0C_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// checkaccount();
		Loading_checkaccount_m27438C4366D4CD02E0FC01618C839659A35455F8(__this, NULL);
		// }
		return;
	}
}
// System.Void Loading::checkaccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_checkaccount_m27438C4366D4CD02E0FC01618C839659A35455F8 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral826282719C02BA78C32BDFD36DDDF74B1D2554DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// StatusMessage.text = "checking account...";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___StatusMessage_6;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral826282719C02BA78C32BDFD36DDDF74B1D2554DC);
		// if (!PlayerPrefs.HasKey("id")) {
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		// PlayerPrefs.SetString("id", "");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0030:
	{
		// if (!PlayerPrefs.HasKey("session")) {
		bool L_2;
		L_2 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, NULL);
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		// PlayerPrefs.SetString("session", "");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0050:
	{
		// string session = PlayerPrefs.GetString("session");
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, NULL);
		V_0 = L_3;
		// if (session == "") {
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_5)
		{
			goto IL_0075;
		}
	}
	{
		// LoginPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___LoginPanel_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		return;
	}

IL_0075:
	{
		// StartCoroutine(Getinfo(session));
		String_t* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = Loading_Getinfo_mFAA588AF350C418FF3AC07ADE22BCE72C2F6556A(__this, L_7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Loading::Startloadscene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Startloadscene_m36672447675715873EE5654D09A4CE19195D8A21 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E9D9C73196852033174DE401D667E707BD50863);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StatusMessage.text = "loading...";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___StatusMessage_6;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral7E9D9C73196852033174DE401D667E707BD50863);
		// StartCoroutine(load());
		RuntimeObject* L_1;
		L_1 = Loading_U3CStartloadsceneU3Eg__loadU7C10_0_m502FE034A594E6B1CFD66604449E7EA02C6C3618(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Loading::Login(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_Login_mA92781CBC8453F18489187FCB7B7F51505659C63 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, String_t* ___username0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* L_0 = (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9*)il2cpp_codegen_object_new(U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9_il2cpp_TypeInfo_var);
		U3CLoginU3Ed__14__ctor_m32BF17F7FED3F06E9350674F9AC7D5CC867F05D0(L_0, 0, NULL);
		U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* L_2 = L_1;
		String_t* L_3 = ___username0;
		L_2->___username_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___username_3), (void*)L_3);
		U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* L_4 = L_2;
		String_t* L_5 = ___password1;
		L_4->___password_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___password_4), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator Loading::Getinfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_Getinfo_mFAA588AF350C418FF3AC07ADE22BCE72C2F6556A (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, String_t* ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* L_0 = (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2*)il2cpp_codegen_object_new(U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2_il2cpp_TypeInfo_var);
		U3CGetinfoU3Ed__15__ctor_mCE60CF93F0BCA349B1B03BA6FD1F46205C145886(L_0, 0, NULL);
		U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* L_2 = L_1;
		String_t* L_3 = ___session0;
		L_2->___session_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___session_3), (void*)L_3);
		return L_2;
	}
}
// System.Void Loading::loggin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_loggin_m31C5AA263B03C7BB912413B08381148A057A4C7F (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84D14AB53CF340035CD1AD6C8EE7140A4B1D0971);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFD3F6AF6B523979A3F87254C8718CAA26107086);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string username = Userinput.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___Userinput_7;
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		V_0 = L_1;
		// string password = PWinput.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___PWinput_8;
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		V_1 = L_3;
		// if (username == "") {
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// LoginStatusMessage.text = "Please Input the username.";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___LoginStatusMessage_9;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteralBFD3F6AF6B523979A3F87254C8718CAA26107086);
		// return;
		return;
	}

IL_0036:
	{
		// if (password == "") {
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// LoginStatusMessage.text = "Please Input the password.";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_9 = __this->___LoginStatusMessage_9;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, _stringLiteral84D14AB53CF340035CD1AD6C8EE7140A4B1D0971);
		// return;
		return;
	}

IL_0054:
	{
		// StartCoroutine(Login(username, password));
		String_t* L_10 = V_0;
		String_t* L_11 = V_1;
		RuntimeObject* L_12;
		L_12 = Loading_Login_mA92781CBC8453F18489187FCB7B7F51505659C63(__this, L_10, L_11, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void Loading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading__ctor_m31B31EDD4F300E61A5C50027AC65AB632B916DD6 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Loading::<Start>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_U3CStartU3Eb__8_0_mCACC625E59ADBECF3E6DA5C18273BCF06BBC9D0C (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	{
		// LButton.GetComponent<Button>().onClick.AddListener(delegate() { loggin(); });
		Loading_loggin_m31C5AA263B03C7BB912413B08381148A057A4C7F(__this, NULL);
		// LButton.GetComponent<Button>().onClick.AddListener(delegate() { loggin(); });
		return;
	}
}
// System.Collections.IEnumerator Loading::<Startloadscene>g__load|10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_U3CStartloadsceneU3Eg__loadU7C10_0_m502FE034A594E6B1CFD66604449E7EA02C6C3618 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* L_0 = (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3*)il2cpp_codegen_object_new(U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3_il2cpp_TypeInfo_var);
		U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed__ctor_mF358FC88DEEFD5217B8C6C500BC51E93E111EED4(L_0, 0, NULL);
		U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
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
// System.Void Loading/LoginDataClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginDataClass__ctor_mE4DC4AFD9A60DFED675099374A722DD6FF5599D2 (LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* __this, const RuntimeMethod* method) 
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
// System.Void Loading/INFODataClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INFODataClass__ctor_mF226EEE938B33DF5F47F42CAC1D06945B5AECF45 (INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830* __this, const RuntimeMethod* method) 
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
// System.Void Loading/LoginErrorDataClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginErrorDataClass__ctor_m62E04F6CFA2C5DD989E28AA3B8A5500D7439452E (LoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416* __this, const RuntimeMethod* method) 
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
// System.Void Loading/<Login>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__14__ctor_m32BF17F7FED3F06E9350674F9AC7D5CC867F05D0 (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Loading/<Login>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__14_System_IDisposable_Dispose_m229AA6333946DD6418F11183D1674A88B98835AF (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Loading/<Login>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoginU3Ed__14_MoveNext_mAC63D7BDD997E80D2E7CF3FE79FE5CEB643EC1E4 (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisLoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF_m27C25EB11C24475A62B58C026CC710BB9C5EBA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisLoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416_m7533511EBCBE050CA99B40F68B8788570C239DD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E34103D0B4892BBF6A28D302AAEC51460F13DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C47030441FDB8EA99E35AA33AB462A4B52C836D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606476544F9CC9D0BAF5F847A9DA6FB1A1BCF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BECEBFB2B5A31D155025EEEA706D8E45E72553);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD709777C0F252110D0E192BB607CB6ADF6CD569E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* V_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00dc;
			}
			case 2:
			{
				goto IL_018e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StatusMessage.text = "login to DPCloud";
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_3 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = L_3->___StatusMessage_6;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, _stringLiteral76BECEBFB2B5A31D155025EEEA706D8E45E72553);
		// UnityWebRequest request = new UnityWebRequest("https://api.damp11113dev.tk/account/v2/login", "POST");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_5, _stringLiteral26E34103D0B4892BBF6A28D302AAEC51460F13DE, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		__this->___U3CrequestU3E5__2_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_5), (void*)L_5);
		// string json = @"{
		//     'username':'world',
		//     'password':'bar'
		// }";
		V_2 = _stringLiteral7606476544F9CC9D0BAF5F847A9DA6FB1A1BCF7C;
		// byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(json);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
		V_3 = L_8;
		// request.uploadHandler = new UploadHandlerRaw(bodyRaw);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CrequestU3E5__2_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_11 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_11, L_10, NULL);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_9, L_11, NULL);
		// request.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CrequestU3E5__2_5;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_13 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_13, NULL);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_12, L_13, NULL);
		// request.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CrequestU3E5__2_5;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_14, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// request.SetRequestHeader("username", username); // Set custom header
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CrequestU3E5__2_5;
		String_t* L_16 = __this->___username_3;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_15, _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735, L_16, NULL);
		// request.SetRequestHeader("password", password);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CrequestU3E5__2_5;
		String_t* L_18 = __this->___password_4;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_17, _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73, L_18, NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CrequestU3E5__2_5;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_20;
		L_20 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_19, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00dc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (request.result != UnityWebRequest.Result.Success)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CrequestU3E5__2_5;
		int32_t L_22;
		L_22 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_21, NULL);
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_01b0;
		}
	}
	{
		// if (request.responseCode == 500) {
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = __this->___U3CrequestU3E5__2_5;
		int64_t L_24;
		L_24 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_23, NULL);
		if ((!(((uint64_t)L_24) == ((uint64_t)((int64_t)((int32_t)500))))))
		{
			goto IL_0140;
		}
	}
	{
		// string jsonString = request.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = __this->___U3CrequestU3E5__2_5;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_26;
		L_26 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_25, NULL);
		String_t* L_27;
		L_27 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_26, NULL);
		// LoginErrorDataClass jsondata = JsonUtility.FromJson<LoginErrorDataClass>(jsonString);
		LoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416* L_28;
		L_28 = JsonUtility_FromJson_TisLoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416_m7533511EBCBE050CA99B40F68B8788570C239DD2(L_27, JsonUtility_FromJson_TisLoginErrorDataClass_tB4ACECEE2C6A7B717888FCB245ACC618A7B79416_m7533511EBCBE050CA99B40F68B8788570C239DD2_RuntimeMethod_var);
		// if (jsondata.error == 1403) {
		int32_t L_29 = L_28->___error_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)1403)))))
		{
			goto IL_020e;
		}
	}
	{
		// LoginStatusMessage.text = "Password is incorrect";
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_30 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_31 = L_30->___LoginStatusMessage_9;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_31, _stringLiteral2C47030441FDB8EA99E35AA33AB462A4B52C836D);
		goto IL_020e;
	}

IL_0140:
	{
		// StatusMessage.text = $"Login failed retry to login in 5sec ({request.error})";
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_32 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_33 = L_32->___StatusMessage_6;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_34 = __this->___U3CrequestU3E5__2_5;
		String_t* L_35;
		L_35 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_34, NULL);
		String_t* L_36;
		L_36 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD709777C0F252110D0E192BB607CB6ADF6CD569E, L_35, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_33, L_36);
		// Debug.Log(request.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_37 = __this->___U3CrequestU3E5__2_5;
		String_t* L_38;
		L_38 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_39 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_39, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_018e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(Login(username, password));
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_40 = V_1;
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_41 = V_1;
		String_t* L_42 = __this->___username_3;
		String_t* L_43 = __this->___password_4;
		RuntimeObject* L_44;
		L_44 = Loading_Login_mA92781CBC8453F18489187FCB7B7F51505659C63(L_41, L_42, L_43, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_45;
		L_45 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_40, L_44, NULL);
		goto IL_020e;
	}

IL_01b0:
	{
		// string jsonString = request.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46 = __this->___U3CrequestU3E5__2_5;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_47;
		L_47 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_46, NULL);
		String_t* L_48;
		L_48 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_47, NULL);
		// LoginDataClass jsondata = JsonUtility.FromJson<LoginDataClass>(jsonString);
		LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* L_49;
		L_49 = JsonUtility_FromJson_TisLoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF_m27C25EB11C24475A62B58C026CC710BB9C5EBA30(L_48, JsonUtility_FromJson_TisLoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF_m27C25EB11C24475A62B58C026CC710BB9C5EBA30_RuntimeMethod_var);
		V_4 = L_49;
		// PlayerPrefs.SetString("session", jsondata.session);
		LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* L_50 = V_4;
		String_t* L_51 = L_50->___session_0;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, L_51, NULL);
		// PlayerPrefs.SetString("id", jsondata.id);
		LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* L_52 = V_4;
		String_t* L_53 = L_52->___id_1;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, L_53, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// LoginPanel.SetActive(false);
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_54 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = L_54->___LoginPanel_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)0, NULL);
		// StartCoroutine(Getinfo(jsondata.session));
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_56 = V_1;
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_57 = V_1;
		LoginDataClass_t3647B9C29CEC6E7451FA5231307B29E60BF880AF* L_58 = V_4;
		String_t* L_59 = L_58->___session_0;
		RuntimeObject* L_60;
		L_60 = Loading_Getinfo_mFAA588AF350C418FF3AC07ADE22BCE72C2F6556A(L_57, L_59, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_61;
		L_61 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_56, L_60, NULL);
	}

IL_020e:
	{
		// }
		return (bool)0;
	}
}
// System.Object Loading/<Login>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoginU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EF1A243D8AEE39B20D9F497F395FB8137BB5D4C (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Loading/<Login>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__14_System_Collections_IEnumerator_Reset_m8A9C880EEE4D3C342FF74ADDDA39D9E2C6FDFA0F (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoginU3Ed__14_System_Collections_IEnumerator_Reset_m8A9C880EEE4D3C342FF74ADDDA39D9E2C6FDFA0F_RuntimeMethod_var)));
	}
}
// System.Object Loading/<Login>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoginU3Ed__14_System_Collections_IEnumerator_get_Current_m8E53BEED31F46C5EA51A94D756928E8DC491DF5A (U3CLoginU3Ed__14_t034574CE7F3927D6FF6E6D96EA2AFBE4A2ADA4D9* __this, const RuntimeMethod* method) 
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
// System.Void Loading/<Getinfo>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetinfoU3Ed__15__ctor_mCE60CF93F0BCA349B1B03BA6FD1F46205C145886 (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Loading/<Getinfo>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetinfoU3Ed__15_System_IDisposable_Dispose_mE99BDB93C6AAB9D44D4C7B75EE427EBFDDD4C045 (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Loading/<Getinfo>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetinfoU3Ed__15_MoveNext_mF2A1EFF2965BE482BBAAC0471C684AA5808F68AE (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisINFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830_mD0AAAD0E5CB930912DBCE37FD79DE650C0B13AB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66C51D1FD7EA4002845B679BA96294D71817B9C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606476544F9CC9D0BAF5F847A9DA6FB1A1BCF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BDA7A9308DD77B05EF77B3CDC7A7FD7AE650A97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB2952C849BF809629C3C940B4C87CD966580C49);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830* V_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00c6;
			}
			case 2:
			{
				goto IL_016d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StatusMessage.text = "Getting info player";
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_3 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = L_3->___StatusMessage_6;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, _stringLiteralEB2952C849BF809629C3C940B4C87CD966580C49);
		// UnityWebRequest request = new UnityWebRequest("https://api.damp11113dev.tk/account/v2/info", "POST");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_5, _stringLiteral66C51D1FD7EA4002845B679BA96294D71817B9C3, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		__this->___U3CrequestU3E5__2_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)L_5);
		// string json = @"{
		//     'username':'world',
		//     'password':'bar'
		// }";
		V_2 = _stringLiteral7606476544F9CC9D0BAF5F847A9DA6FB1A1BCF7C;
		// byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(json);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
		V_3 = L_8;
		// request.uploadHandler = new UploadHandlerRaw(bodyRaw);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CrequestU3E5__2_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_11 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_11, L_10, NULL);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_9, L_11, NULL);
		// request.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CrequestU3E5__2_4;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_13 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_13, NULL);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_12, L_13, NULL);
		// request.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CrequestU3E5__2_4;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_14, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// request.SetRequestHeader("session", session); // Set custom header
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CrequestU3E5__2_4;
		String_t* L_16 = __this->___session_3;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_15, _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, L_16, NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CrequestU3E5__2_4;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_18;
		L_18 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (request.result != UnityWebRequest.Result.Success)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CrequestU3E5__2_4;
		int32_t L_20;
		L_20 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_19, NULL);
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_0189;
		}
	}
	{
		// if (request.responseCode == 404)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CrequestU3E5__2_4;
		int64_t L_22;
		L_22 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_21, NULL);
		if ((!(((uint64_t)L_22) == ((uint64_t)((int64_t)((int32_t)404))))))
		{
			goto IL_011f;
		}
	}
	{
		// PlayerPrefs.SetString("id", "");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// PlayerPrefs.SetString("session", "");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// checkaccount();
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_23 = V_1;
		Loading_checkaccount_m27438C4366D4CD02E0FC01618C839659A35455F8(L_23, NULL);
		goto IL_01bc;
	}

IL_011f:
	{
		// StatusMessage.text = $"Get Info failed retry to Get Info in 5sec ({request.error})";
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_24 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_25 = L_24->___StatusMessage_6;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = __this->___U3CrequestU3E5__2_4;
		String_t* L_27;
		L_27 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9BDA7A9308DD77B05EF77B3CDC7A7FD7AE650A97, L_27, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_28);
		// Debug.Log(request.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = __this->___U3CrequestU3E5__2_4;
		String_t* L_30;
		L_30 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_30, NULL);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_016d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(Getinfo(session));
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_32 = V_1;
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_33 = V_1;
		String_t* L_34 = __this->___session_3;
		RuntimeObject* L_35;
		L_35 = Loading_Getinfo_mFAA588AF350C418FF3AC07ADE22BCE72C2F6556A(L_33, L_34, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_36;
		L_36 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_32, L_35, NULL);
		goto IL_01bc;
	}

IL_0189:
	{
		// string jsonString = request.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_37 = __this->___U3CrequestU3E5__2_4;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_38;
		L_38 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_37, NULL);
		String_t* L_39;
		L_39 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_38, NULL);
		// INFODataClass jsondata = JsonUtility.FromJson<INFODataClass>(jsonString);
		INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830* L_40;
		L_40 = JsonUtility_FromJson_TisINFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830_mD0AAAD0E5CB930912DBCE37FD79DE650C0B13AB9(L_39, JsonUtility_FromJson_TisINFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830_mD0AAAD0E5CB930912DBCE37FD79DE650C0B13AB9_RuntimeMethod_var);
		V_4 = L_40;
		// PlayerPrefs.SetString("username", jsondata.username);
		INFODataClass_tBB2A55AFF434A698F3F465024E0E01DF207C4830* L_41 = V_4;
		String_t* L_42 = L_41->___username_0;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735, L_42, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// Startloadscene();
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_43 = V_1;
		Loading_Startloadscene_m36672447675715873EE5654D09A4CE19195D8A21(L_43, NULL);
	}

IL_01bc:
	{
		// }
		return (bool)0;
	}
}
// System.Object Loading/<Getinfo>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetinfoU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEB8F4F76171B672132D5593FCD6B981431D537D (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Loading/<Getinfo>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetinfoU3Ed__15_System_Collections_IEnumerator_Reset_mF671D53DAF49DD4D151965F7B8CCE4C56C4DFCDD (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetinfoU3Ed__15_System_Collections_IEnumerator_Reset_mF671D53DAF49DD4D151965F7B8CCE4C56C4DFCDD_RuntimeMethod_var)));
	}
}
// System.Object Loading/<Getinfo>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetinfoU3Ed__15_System_Collections_IEnumerator_get_Current_m217010D9A27DF3ED87F6F12893DFF0CCF6585EA2 (U3CGetinfoU3Ed__15_t3A6EE98B0457EB5C5D78A04ED1C69E8D9DC937D2* __this, const RuntimeMethod* method) 
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
// System.Void Loading/<<Startloadscene>g__load|10_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed__ctor_mF358FC88DEEFD5217B8C6C500BC51E93E111EED4 (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Loading/<<Startloadscene>g__load|10_0>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_System_IDisposable_Dispose_m2458E1F788CD36C4940F9345DBB6D538646FB87D (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Loading/<<Startloadscene>g__load|10_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_MoveNext_mB9373FB3E7834DC6838D5886A2F77F9E54B5631C (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0060;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation operation = SceneManager.LoadSceneAsync(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(1, NULL);
		__this->___U3CoperationU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_3), (void*)L_4);
		goto IL_0067;
	}

IL_002c:
	{
		// float progressValue = Mathf.Clamp01(operation.progress / speed);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CoperationU3E5__2_3;
		float L_6;
		L_6 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_5, NULL);
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_7 = V_1;
		float L_8 = L_7->___speed_4;
		float L_9;
		L_9 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_6/L_8)), NULL);
		V_2 = L_9;
		// ProgressBar.value = progressValue;
		Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* L_10 = V_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = L_10->___ProgressBar_5;
		float L_12 = V_2;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_11, L_12);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0060:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0067:
	{
		// while(!operation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_13 = __this->___U3CoperationU3E5__2_3;
		bool L_14;
		L_14 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_13, NULL);
		if (!L_14)
		{
			goto IL_002c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Loading/<<Startloadscene>g__load|10_0>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m05465D4F1071C25D64A8C4407C1DD670C23AAECD (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Loading/<<Startloadscene>g__load|10_0>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_System_Collections_IEnumerator_Reset_m7673857513122B283EA426DE9495F1649C551B6F (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_System_Collections_IEnumerator_Reset_m7673857513122B283EA426DE9495F1649C551B6F_RuntimeMethod_var)));
	}
}
// System.Object Loading/<<Startloadscene>g__load|10_0>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_System_Collections_IEnumerator_get_Current_mF09C818729BF011F47C57BF7EB227F16578A4C30 (U3CU3CStartloadsceneU3Eg__loadU7C10_0U3Ed_tD48D0678A85088D504899EAF0869154D5963BFE3* __this, const RuntimeMethod* method) 
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
// System.Void MouseRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseRotate_Start_mA87FE2A42D89DB44C30D2D15415D1166697DFA9B (MouseRotate_t96B7F0D70351F22CCEE4B80720A19F3F3329C9FF* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Confined;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(2, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// mouselock = true;
		__this->___mouselock_7 = (bool)1;
		// }
		return;
	}
}
// System.Void MouseRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseRotate_Update_m7E3B3F0AE2CAADD802F1BFAF65026F376456AD7E (MouseRotate_t96B7F0D70351F22CCEE4B80720A19F3F3329C9FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X") * mouseSensitivty * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___mouseSensitivty_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivty * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4 = __this->___mouseSensitivty_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___playerBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_6, L_9, NULL);
		// xRotation -= mouseY;
		float L_10 = __this->___xRotation_6;
		float L_11 = V_1;
		__this->___xRotation_6 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// xRotation = Mathf.Clamp(xRotation, -90f, 90f);
		float L_12 = __this->___xRotation_6;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, (-90.0f), (90.0f), NULL);
		__this->___xRotation_6 = L_13;
		// transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_15 = __this->___xRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_15, (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_16, NULL);
		// if (Input.GetKeyDown(KeyCode.Escape)) {
		bool L_17;
		L_17 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_17)
		{
			goto IL_00c7;
		}
	}
	{
		// if (mouselock) {
		bool L_18 = __this->___mouselock_7;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
		// mouselock = false;
		__this->___mouselock_7 = (bool)0;
		return;
	}

IL_00b4:
	{
		// Cursor.lockState = CursorLockMode.Confined;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(2, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// mouselock = true;
		__this->___mouselock_7 = (bool)1;
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void MouseRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseRotate__ctor_mED39D4E56A34ACED65323FEA639FF5834B0F5982 (MouseRotate_t96B7F0D70351F22CCEE4B80720A19F3F3329C9FF* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseSensitivty = 100f;
		__this->___mouseSensitivty_4 = (100.0f);
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
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_m5BB6CE35AF68EE00CFEB4BA5EBA17E10667551D3 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float x = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float z = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// Vector3 move = transform.right * x + transform.forward * z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_2, NULL);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		V_2 = L_10;
		// if (Input.GetKeyDown(KeyCode.LeftShift))
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)304), NULL);
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		// controller.Move(move * RunSpeed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_12 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		float L_14 = __this->___RunSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_12, L_17, NULL);
		goto IL_0090;
	}

IL_006e:
	{
		// controller.Move(move * speed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_19 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		int32_t L_25;
		L_25 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_19, L_24, NULL);
	}

IL_0090:
	{
		// velocity.y += gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___velocity_8);
		float* L_27 = (&L_26->___y_3);
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		float L_30 = __this->___gravity_7;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_28) = (float)((float)il2cpp_codegen_add(L_29, ((float)il2cpp_codegen_multiply(L_30, L_31))));
		// controller.Move(velocity * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_32 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___velocity_8;
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		int32_t L_36;
		L_36 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_32, L_35, NULL);
		// isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___groundCheck_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = __this->___groundDistance_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_40 = __this->___groundMask_11;
		int32_t L_41;
		L_41 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_40, NULL);
		bool L_42;
		L_42 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_38, L_39, L_41, NULL);
		__this->___isGrounded_12 = L_42;
		// if (isGrounded && velocity.y < 0)
		bool L_43 = __this->___isGrounded_12;
		if (!L_43)
		{
			goto IL_0118;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___velocity_8);
		float L_45 = L_44->___y_3;
		if ((!(((float)L_45) < ((float)(0.0f)))))
		{
			goto IL_0118;
		}
	}
	{
		// velocity.y = -2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->___velocity_8);
		L_46->___y_3 = (-2.0f);
	}

IL_0118:
	{
		// if (Input.GetButtonDown("Jump") && isGrounded)
		bool L_47;
		L_47 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_47)
		{
			goto IL_014f;
		}
	}
	{
		bool L_48 = __this->___isGrounded_12;
		if (!L_48)
		{
			goto IL_014f;
		}
	}
	{
		// velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___velocity_8);
		float L_50 = __this->___jumpHeight_13;
		float L_51 = __this->___gravity_7;
		float L_52;
		L_52 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_50, (-2.0f))), L_51)));
		L_49->___y_3 = L_52;
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 6f;
		__this->___speed_5 = (6.0f);
		// public float RunSpeed = 12f;
		__this->___RunSpeed_6 = (12.0f);
		// public float gravity = -10f;
		__this->___gravity_7 = (-10.0f);
		// public float groundDistance = 0.4f;
		__this->___groundDistance_10 = (0.400000006f);
		// public float jumpHeight = 3f;
		__this->___jumpHeight_13 = (3.0f);
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
// System.Void Visyde.V_SMC_Camera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Start_m042D7339C7EEC60EE95207A6D609899101D45C2C (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Camera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Update_m5A20B03D75E774E4ECAC49DBA2F39D54126BBC03 (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rotationX += Input.GetAxis("Mouse X") * 2;
		float L_0 = __this->___rotationX_5;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		__this->___rotationX_5 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f)))));
		// rotationY -= Input.GetAxis("Mouse Y") * 2;
		float L_2 = __this->___rotationY_6;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___rotationY_6 = ((float)il2cpp_codegen_subtract(L_2, ((float)il2cpp_codegen_multiply(L_3, (2.0f)))));
		// Quaternion rotation = Quaternion.Euler(rotationY, rotationX, 0);
		float L_4 = __this->___rotationY_6;
		float L_5 = __this->___rotationX_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_4, L_5, (0.0f), NULL);
		V_0 = L_6;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		// Hit ();
		V_SMC_Camera_Hit_mE986E80AE7401BC7A6F29978D9230668F11608BF(__this, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Camera::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Hit_mE986E80AE7401BC7A6F29978D9230668F11608BF (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5417497152F52E77A47F1445398DAE0771DF9F2);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// fireDirection = transform.TransformDirection(Vector3.forward) * 10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (10.0f), NULL);
		__this->___fireDirection_7 = L_3;
		// firePoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___firePoint_8 = L_5;
		// if (Physics.Raycast (firePoint, (fireDirection), out hit, Mathf.Infinity)) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___firePoint_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___fireDirection_7;
		bool L_8;
		L_8 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_6, L_7, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_8)
		{
			goto IL_00b1;
		}
	}
	{
		// if (hit.transform.name == "Friendly") {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralC5417497152F52E77A47F1445398DAE0771DF9F2, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		// crosshairHandler.ChangeColor (Color.green);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_12 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_12, L_13, NULL);
		goto IL_00c1;
	}

IL_0075:
	{
		// } else if (hit.transform.name == "Enemy") {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		// crosshairHandler.ChangeColor (Color.red);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_17 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_17, L_18, NULL);
		goto IL_00c1;
	}

IL_009f:
	{
		// crosshairHandler.ChangeColor (Color.white);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_19 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_19, L_20, NULL);
		goto IL_00c1;
	}

IL_00b1:
	{
		// crosshairHandler.ChangeColor (Color.white);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_21 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_21, L_22, NULL);
	}

IL_00c1:
	{
		// Debug.DrawRay(firePoint, fireDirection, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___firePoint_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___fireDirection_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_23, L_24, L_25, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera__ctor_mE811C23268506BC66AEBEE61C61137702CDC9514 (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
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
// System.Void Visyde.V_SMC_Handler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler_Update_m091367E6AD7F4CE60C83EEADF5B8F9662D3FA617 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown (KeyCode.Mouse1)) {
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)324), NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// if (curCrossHair < crossHairs.Length - 1) {
		int32_t L_1 = __this->___curCrossHair_5;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_2 = __this->___crossHairs_4;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)))))
		{
			goto IL_002e;
		}
	}
	{
		// curCrossHair += 1;
		int32_t L_3 = __this->___curCrossHair_5;
		__this->___curCrossHair_5 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		goto IL_0035;
	}

IL_002e:
	{
		// curCrossHair = 0;
		__this->___curCrossHair_5 = 0;
	}

IL_0035:
	{
		// GetComponent<Image> ().sprite = crossHairs [curCrossHair];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_5 = __this->___crossHairs_4;
		int32_t L_6 = __this->___curCrossHair_5;
		int32_t L_7 = L_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Handler::ChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.GetComponent<Image> ().color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Handler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler__ctor_m1F885D36D860D8D5C935068A1FE61D4CB4F208A2 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, const RuntimeMethod* method) 
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
// System.Void Visyde.V_Text::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_Text_Start_m5367B83B14F3976D3BD76CD4773BE9E98B166809 (V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler = GetComponent<V_SMC_Handler> ();
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_0;
		L_0 = Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A(__this, Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A_RuntimeMethod_var);
		__this->___handler_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handler_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Visyde.V_Text::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_Text_Update_m26A0479BB72DB68637513A87F3F44449E496ECB7 (V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2* __this, const RuntimeMethod* method) 
{
	{
		// crosshairNameText.text = handler.crossHairs [handler.curCrossHair].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___crosshairNameText_4;
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_1 = __this->___handler_5;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_2 = L_1->___crossHairs_4;
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_3 = __this->___handler_5;
		int32_t L_4 = L_3->___curCrossHair_5;
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_7);
		// }
		return;
	}
}
// System.Void Visyde.V_Text::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_Text__ctor_m4B475C1C417E68F3B67AC2AE7F20E102F3E33340 (V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
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
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
