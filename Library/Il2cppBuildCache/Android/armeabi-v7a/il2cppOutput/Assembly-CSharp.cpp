#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.IList`1<HuaweiMobileServices.IAP.ProductInfoResult>>
struct Action_1_tD5F7BE8598DD152688E84AD702636E099C2E0820;
// System.Action`1<HuaweiMobileServices.IAP.ConsumeOwnedPurchaseResult>
struct Action_1_tB0F7FBE8BD59C76FD4F9F79AF5336CE74A943BEF;
// System.Action`1<HuaweiMobileServices.Utils.HMSException>
struct Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A;
// System.Action`1<HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerResponse>
struct Action_1_t5173B8DF78BB87DC261C11E82C2FC83E9A7912CE;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<HuaweiMobileServices.IAP.OwnedPurchasesResult>
struct Action_1_t373431775BB3837100220EBC11A360140F6E9857;
// System.Action`1<HuaweiMobileServices.IAP.PurchaseResultInfo>
struct Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D;
// System.Action`1<HuaweiMobileServices.Ads.InstallReferrer.ReferrerDetails>
struct Action_1_tFB73089050963114D94E0A57DADF27CBA51BEB04;
// System.Action`1<HuaweiMobileServices.Ads.Reward>
struct Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Action`3<HuaweiMobileServices.Ads.ConsentStatus,System.Boolean,System.Collections.Generic.IList`1<HuaweiMobileServices.Ads.AdProvider>>
struct Action_3_tF7A487971FD2F63F7FD9A0D40956B3CB2B6BCB15;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<HuaweiMobileServices.IAP.InAppPurchaseData>
struct List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<HuaweiMobileServices.IAP.ProductInfo>
struct List_1_t8AB6DF14B0B678BAB8A8D902AA1A347230FF0CA2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// HuaweiMobileServices.IAP.InAppPurchaseData[]
struct InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// AdsManager
struct AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// AnimationScript
struct AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// HuaweiMobileServices.Ads.BannerAd
struct BannerAd_t5A49D14FE7614CF99FFA26421B777873B68D7803;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// BuyGems
struct BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// ColorSelectorButton
struct ColorSelectorButton_t6230EEFA94266CAC0F60300D5D2D0F451FD56D99;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DestroyCube
struct DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HmsPlugin.HMSAdsKitManager
struct HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346;
// HuaweiMobileServices.Utils.HMSException
struct HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E;
// HmsPlugin.HMSIAPManager
struct HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5;
// HmsPlugin.HMSSettings
struct HMSSettings_t175E598C376F5AD0FE9FEF766C5908AC9C632D67;
// IAPManager
struct IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// HuaweiMobileServices.IAP.IIapClient
struct IIapClient_t3A732A4F732624308521A84A36E0CB778AADA3FD;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// HuaweiMobileServices.IAP.InAppPurchaseData
struct InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57;
// HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerClient
struct InstallReferrerClient_t173F66A31E285591B6101A6DF91AF6A46F5C3566;
// Instantiator
struct Instantiator_tBF82B9B22BE876C34EE9097DC9D36E43BB658679;
// HuaweiMobileServices.Ads.InterstitialAd
struct InterstitialAd_t1CFB2F20A9233AD01F10839BCA4A1E72A07D8436;
// InterstitialAdLoad
struct InterstitialAdLoad_tBC75AE8101213F4A2A9E61A36689CB3A16CFAA74;
// HuaweiMobileServices.IAP.IsSandboxActivatedResult
struct IsSandboxActivatedResult_tD45985A50A4E4001A8D79ADE218BF859E7204E4C;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuBannerAd
struct MenuBannerAd_t5A728B31626705FE65569E85EDF0854E940C4088;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MultiplierHandler
struct MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// HuaweiMobileServices.IAP.OwnedPurchasesResult
struct OwnedPurchasesResult_t1FA27C409615C4437DDD48EB039CF1D71D914D75;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// HuaweiMobileServices.IAP.PriceType
struct PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244;
// ProgressBar
struct ProgressBar_tA0F844D97A02726F8E64CC8E159B946A2B413378;
// HuaweiMobileServices.IAP.PurchaseResultInfo
struct PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// HuaweiMobileServices.Ads.Reward
struct Reward_tAA9A338706878F0C66956E1040C9EE747DF763D0;
// HuaweiMobileServices.Ads.RewardAd
struct RewardAd_tD82F2D7B27E9A1AE88D399D5E54C061B98C1F570;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SpinningObstacle
struct SpinningObstacle_t7F2DA78BDF192F6067C57C65BD356854A488E60E;
// HuaweiMobileServices.Ads.SplashAd
struct SplashAd_tC319526C70B2468147D63C7399985C4DAB325B85;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// SwerveInputSystem
struct SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60;
// SwerveMovement
struct SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// IAPManager/<AfterBuyProductSuccess>d__9
struct U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerMovement/<SpeedBoost>d__7
struct U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t373431775BB3837100220EBC11A360140F6E9857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t67FDAE40CB5E96423ADFEF4AE2FB2F8E2F1C08E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2D2F77DB0E4F163109E4AC018F40CE0CF788CB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BC0EB9461DC9141BA0890E7024C3DB3D6C5F978;
IL2CPP_EXTERN_C String_t* _stringLiteral1A28846B358210F76AEC8A1F4B3F61B4980525EE;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB;
IL2CPP_EXTERN_C String_t* _stringLiteral228C5D264BC416C135731F3B0E7516906AB5B225;
IL2CPP_EXTERN_C String_t* _stringLiteral29893B14FCC30AFA5B73B7AC0BB6DA73CC3B8AB3;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA83C35A57D608AAADF6C397783E4C38D113260;
IL2CPP_EXTERN_C String_t* _stringLiteral2E41442795D78A9B58DB891A50A4A3A254C76BC1;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD9E260A5FC6D21A41C296FF8650C334BFD5CD8;
IL2CPP_EXTERN_C String_t* _stringLiteral412C8405271F0ED5F71DB68D6D38DC79EDEF18CD;
IL2CPP_EXTERN_C String_t* _stringLiteral42FF1DBB6406F333A84EFC3224CE02C110097978;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4C79163A4C6012FB1541B77CA4D0FEA926C5C831;
IL2CPP_EXTERN_C String_t* _stringLiteral5871E4A5A65C49F0B66376C51556E509A35C769F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C4E3A910A6F287E505C3C905E846882A6549939;
IL2CPP_EXTERN_C String_t* _stringLiteral7626381F776433C4AC69BE7352121D44F315B33B;
IL2CPP_EXTERN_C String_t* _stringLiteral7AB3BABCC2775665170E0C0A4A3493AC265235BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7BDDD08D3D45B9D4D837C760B17B114E0EDAB85A;
IL2CPP_EXTERN_C String_t* _stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042;
IL2CPP_EXTERN_C String_t* _stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA;
IL2CPP_EXTERN_C String_t* _stringLiteral8CC3D74A5CA39815057BE43378C681017ADCDBF6;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD9BE7CEE9D60B2B05E913E65276BFFDB8FC623;
IL2CPP_EXTERN_C String_t* _stringLiteralA14929A8F3DF2F7E96B8E96ABC70C155DC85D4B2;
IL2CPP_EXTERN_C String_t* _stringLiteralA16D90C9F2FF27AD42EBD31D0D6A2DFEF1664E81;
IL2CPP_EXTERN_C String_t* _stringLiteralA76263F9E5B74EC52FE7C6510731C2936DFEC8CC;
IL2CPP_EXTERN_C String_t* _stringLiteralA9CD50A37B86D5473112CF3466484CD06E0BA17C;
IL2CPP_EXTERN_C String_t* _stringLiteralABA5A8640C8A45C819CB88F7FF44A1A6D4B49E2F;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA8CD63B09B737B251911DF62ED128FDE2FB9FF;
IL2CPP_EXTERN_C String_t* _stringLiteralC12D23BFAEB653BA5E635D87B66B63208EEE53A1;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928;
IL2CPP_EXTERN_C String_t* _stringLiteralD26ADA7228FA548AD67DF0442538CA7E9594DD75;
IL2CPP_EXTERN_C String_t* _stringLiteralD26C7927BCA88CBF7ED10C3AE1CC6D2685A25448;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4A8CA445780353AE0794B534AD6AE34BE437E9;
IL2CPP_EXTERN_C String_t* _stringLiteralE04556C71B3A681CEF33B11644D84A7C1BC10E49;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DC6DB186DEF6C0F9C988D1C401526A835CC85C;
IL2CPP_EXTERN_C String_t* _stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2;
IL2CPP_EXTERN_C String_t* _stringLiteralEE452A991EEA11052D14F8C037C008B1554601DA;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B6F7BB9D1CC64F2B989BF498A2C47EFBFD3B11;
IL2CPP_EXTERN_C String_t* _stringLiteralFC5528E0383AC651AD239AE6E9F7189BAF810AAA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m0F90C09F20CC09BE8D11736A50E12F3B62B45DA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m24A4869AB9A45E46769684F38845CEDECB2B30E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_OnInterstitialAdClosed_mDE921DDC2B56F6C94982E181E8E93141700F64A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_OnRewarded_mDD2A0586AF6964728A6F0280EFAED93F320732C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60_m64FD7BA4325ACCB4A5899E462CB65B56A473495E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_OnBuyProductFailure_m74AFDC2051506132A25A53BC2A53BF2AA8EAB5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_OnBuyProductSuccess_m3FBCB1D76E65565185C8CDB73EFD219DBE7EEC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_OnInitializeIAPFailure_mF2D6899C1838FFE718B0ADCC1C1B5B10E6DEACCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_OnInitializeIAPSuccess_mA68378AE1422E8F9AB1D606CE0A62F967A495CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_OnObtainOwnedPurchasesSuccess_m64C81082849ADAFC3504B2026933FE073124327F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_U3CRestoreProductsU3Eb__10_0_mB12095956A9B137ADD505983ED03D6538F0D2457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA4F4B5C98B6A86420002679F1BD3F2235D8BB9AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAfterBuyProductSuccessU3Ed__9_System_Collections_IEnumerator_Reset_m17413638A35DAD79C5ACD7688FD11F3F2BC3DA2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeedBoostU3Ed__7_System_Collections_IEnumerator_Reset_m5420E0EAD5FEF2EDF43F6EBE91C534E0F59E8641_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// HMSManagerSingleton`1<HmsPlugin.HMSAdsKitManager>
struct HMSManagerSingleton_1_tFD3D824162B5A079C3E40CE6819A92BDDBEBE3D8  : public RuntimeObject
{
public:

public:
};

struct HMSManagerSingleton_1_tFD3D824162B5A079C3E40CE6819A92BDDBEBE3D8_StaticFields
{
public:
	// T HMSManagerSingleton`1::_instance
	HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(HMSManagerSingleton_1_tFD3D824162B5A079C3E40CE6819A92BDDBEBE3D8_StaticFields, ____instance_0)); }
	inline HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * get__instance_0() const { return ____instance_0; }
	inline HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// HMSManagerSingleton`1<HmsPlugin.HMSIAPManager>
struct HMSManagerSingleton_1_t10C8401CE8D12B3CC81CDB8B77F0944AF50AC2B6  : public RuntimeObject
{
public:

public:
};

struct HMSManagerSingleton_1_t10C8401CE8D12B3CC81CDB8B77F0944AF50AC2B6_StaticFields
{
public:
	// T HMSManagerSingleton`1::_instance
	HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(HMSManagerSingleton_1_t10C8401CE8D12B3CC81CDB8B77F0944AF50AC2B6_StaticFields, ____instance_0)); }
	inline HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * get__instance_0() const { return ____instance_0; }
	inline HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<HuaweiMobileServices.IAP.InAppPurchaseData>
struct List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055, ____items_1)); }
	inline InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73* get__items_1() const { return ____items_1; }
	inline InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055_StaticFields, ____emptyArray_5)); }
	inline InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InAppPurchaseDataU5BU5D_t664125A76500023AA5960501B8D6956D3BCA7A73* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// HuaweiMobileServices.Utils.JavaObjectWrapper
struct JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject HuaweiMobileServices.Utils.JavaObjectWrapper::<JavaObject>k__BackingField
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___U3CJavaObjectU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CJavaObjectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB, ___U3CJavaObjectU3Ek__BackingField_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_U3CJavaObjectU3Ek__BackingField_0() const { return ___U3CJavaObjectU3Ek__BackingField_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_U3CJavaObjectU3Ek__BackingField_0() { return &___U3CJavaObjectU3Ek__BackingField_0; }
	inline void set_U3CJavaObjectU3Ek__BackingField_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___U3CJavaObjectU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJavaObjectU3Ek__BackingField_0), (void*)value);
	}
};


// HuaweiMobileServices.IAP.PriceType
struct PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244  : public RuntimeObject
{
public:
	// System.Int32 HuaweiMobileServices.IAP.PriceType::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

struct PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass HuaweiMobileServices.IAP.PriceType::sJavaClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___sJavaClass_0;
	// HuaweiMobileServices.IAP.PriceType HuaweiMobileServices.IAP.PriceType::IN_APP_CONSUMABLE
	PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * ___IN_APP_CONSUMABLE_1;
	// HuaweiMobileServices.IAP.PriceType HuaweiMobileServices.IAP.PriceType::IN_APP_NONCONSUMABLE
	PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * ___IN_APP_NONCONSUMABLE_2;
	// HuaweiMobileServices.IAP.PriceType HuaweiMobileServices.IAP.PriceType::IN_APP_SUBSCRIPTION
	PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * ___IN_APP_SUBSCRIPTION_3;

public:
	inline static int32_t get_offset_of_sJavaClass_0() { return static_cast<int32_t>(offsetof(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_StaticFields, ___sJavaClass_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_sJavaClass_0() const { return ___sJavaClass_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_sJavaClass_0() { return &___sJavaClass_0; }
	inline void set_sJavaClass_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___sJavaClass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sJavaClass_0), (void*)value);
	}

	inline static int32_t get_offset_of_IN_APP_CONSUMABLE_1() { return static_cast<int32_t>(offsetof(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_StaticFields, ___IN_APP_CONSUMABLE_1)); }
	inline PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * get_IN_APP_CONSUMABLE_1() const { return ___IN_APP_CONSUMABLE_1; }
	inline PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 ** get_address_of_IN_APP_CONSUMABLE_1() { return &___IN_APP_CONSUMABLE_1; }
	inline void set_IN_APP_CONSUMABLE_1(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * value)
	{
		___IN_APP_CONSUMABLE_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IN_APP_CONSUMABLE_1), (void*)value);
	}

	inline static int32_t get_offset_of_IN_APP_NONCONSUMABLE_2() { return static_cast<int32_t>(offsetof(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_StaticFields, ___IN_APP_NONCONSUMABLE_2)); }
	inline PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * get_IN_APP_NONCONSUMABLE_2() const { return ___IN_APP_NONCONSUMABLE_2; }
	inline PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 ** get_address_of_IN_APP_NONCONSUMABLE_2() { return &___IN_APP_NONCONSUMABLE_2; }
	inline void set_IN_APP_NONCONSUMABLE_2(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * value)
	{
		___IN_APP_NONCONSUMABLE_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IN_APP_NONCONSUMABLE_2), (void*)value);
	}

	inline static int32_t get_offset_of_IN_APP_SUBSCRIPTION_3() { return static_cast<int32_t>(offsetof(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_StaticFields, ___IN_APP_SUBSCRIPTION_3)); }
	inline PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * get_IN_APP_SUBSCRIPTION_3() const { return ___IN_APP_SUBSCRIPTION_3; }
	inline PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 ** get_address_of_IN_APP_SUBSCRIPTION_3() { return &___IN_APP_SUBSCRIPTION_3; }
	inline void set_IN_APP_SUBSCRIPTION_3(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * value)
	{
		___IN_APP_SUBSCRIPTION_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IN_APP_SUBSCRIPTION_3), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// IAPManager/<AfterBuyProductSuccess>d__9
struct U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44  : public RuntimeObject
{
public:
	// System.Int32 IAPManager/<AfterBuyProductSuccess>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IAPManager/<AfterBuyProductSuccess>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// HuaweiMobileServices.IAP.PurchaseResultInfo IAPManager/<AfterBuyProductSuccess>d__9::obj
	PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * ___obj_2;
	// IAPManager IAPManager/<AfterBuyProductSuccess>d__9::<>4__this
	IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44, ___obj_2)); }
	inline PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * get_obj_2() const { return ___obj_2; }
	inline PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44, ___U3CU3E4__this_3)); }
	inline IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// PlayerMovement/<SpeedBoost>d__7
struct U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C  : public RuntimeObject
{
public:
	// System.Int32 PlayerMovement/<SpeedBoost>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMovement/<SpeedBoost>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerMovement PlayerMovement/<SpeedBoost>d__7::<>4__this
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C, ___U3CU3E4__this_2)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// HmsPlugin.HMSAdsKitManager
struct HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346  : public HMSManagerSingleton_1_tFD3D824162B5A079C3E40CE6819A92BDDBEBE3D8
{
public:
	// System.String HmsPlugin.HMSAdsKitManager::TAG
	String_t* ___TAG_1;
	// HuaweiMobileServices.Ads.BannerAd HmsPlugin.HMSAdsKitManager::bannerView
	BannerAd_t5A49D14FE7614CF99FFA26421B777873B68D7803 * ___bannerView_7;
	// HuaweiMobileServices.Ads.InterstitialAd HmsPlugin.HMSAdsKitManager::interstitialView
	InterstitialAd_t1CFB2F20A9233AD01F10839BCA4A1E72A07D8436 * ___interstitialView_8;
	// HuaweiMobileServices.Ads.RewardAd HmsPlugin.HMSAdsKitManager::rewardedView
	RewardAd_tD82F2D7B27E9A1AE88D399D5E54C061B98C1F570 * ___rewardedView_9;
	// HuaweiMobileServices.Ads.SplashAd HmsPlugin.HMSAdsKitManager::splashView
	SplashAd_tC319526C70B2468147D63C7399985C4DAB325B85 * ___splashView_10;
	// HmsPlugin.HMSSettings HmsPlugin.HMSAdsKitManager::adsKitSettings
	HMSSettings_t175E598C376F5AD0FE9FEF766C5908AC9C632D67 * ___adsKitSettings_11;
	// System.Boolean HmsPlugin.HMSAdsKitManager::isInitialized
	bool ___isInitialized_12;
	// System.Action`1<HuaweiMobileServices.Ads.InstallReferrer.ReferrerDetails> HmsPlugin.HMSAdsKitManager::<InstallReferrerSuccess>k__BackingField
	Action_1_tFB73089050963114D94E0A57DADF27CBA51BEB04 * ___U3CInstallReferrerSuccessU3Ek__BackingField_13;
	// System.Action`1<HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerResponse> HmsPlugin.HMSAdsKitManager::<InstallReferrerFail>k__BackingField
	Action_1_t5173B8DF78BB87DC261C11E82C2FC83E9A7912CE * ___U3CInstallReferrerFailU3Ek__BackingField_14;
	// System.Action HmsPlugin.HMSAdsKitManager::<InstallReferrerDisconnect>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CInstallReferrerDisconnectU3Ek__BackingField_15;
	// HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerClient HmsPlugin.HMSAdsKitManager::installReferrerClient
	InstallReferrerClient_t173F66A31E285591B6101A6DF91AF6A46F5C3566 * ___installReferrerClient_16;
	// System.Boolean HmsPlugin.HMSAdsKitManager::_isBannerAdLoaded
	bool ____isBannerAdLoaded_17;
	// System.Action HmsPlugin.HMSAdsKitManager::OnBannerLoadEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnBannerLoadEvent_18;
	// System.Action HmsPlugin.HMSAdsKitManager::OnBannerFailedToLoadEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnBannerFailedToLoadEvent_19;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnInterstitialAdClicked>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnInterstitialAdClickedU3Ek__BackingField_20;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnInterstitialAdClosed>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnInterstitialAdClosedU3Ek__BackingField_21;
	// System.Action`1<System.Int32> HmsPlugin.HMSAdsKitManager::<OnInterstitialAdFailed>k__BackingField
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3COnInterstitialAdFailedU3Ek__BackingField_22;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnInterstitialAdImpression>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnInterstitialAdImpressionU3Ek__BackingField_23;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnInterstitialAdLeave>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnInterstitialAdLeaveU3Ek__BackingField_24;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnInterstitialAdLoaded>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnInterstitialAdLoadedU3Ek__BackingField_25;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnInterstitialAdOpened>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnInterstitialAdOpenedU3Ek__BackingField_26;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnRewardAdClosed>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRewardAdClosedU3Ek__BackingField_27;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnRewardAdLeftApp>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRewardAdLeftAppU3Ek__BackingField_28;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnRewardAdStarted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRewardAdStartedU3Ek__BackingField_29;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnRewardAdOpened>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRewardAdOpenedU3Ek__BackingField_30;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnRewardAdCompleted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRewardAdCompletedU3Ek__BackingField_31;
	// System.Action`1<HuaweiMobileServices.Ads.Reward> HmsPlugin.HMSAdsKitManager::<OnRewarded>k__BackingField
	Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * ___U3COnRewardedU3Ek__BackingField_32;
	// System.Action HmsPlugin.HMSAdsKitManager::<OnRewardedAdLoaded>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRewardedAdLoadedU3Ek__BackingField_33;
	// System.Action`1<System.Int32> HmsPlugin.HMSAdsKitManager::<OnRewardedAdFailedToLoad>k__BackingField
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3COnRewardedAdFailedToLoadU3Ek__BackingField_34;
	// System.Action HmsPlugin.HMSAdsKitManager::OnSplashAdDismissed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSplashAdDismissed_35;
	// System.Action`1<System.Int32> HmsPlugin.HMSAdsKitManager::OnSplashAdFailedToLoad
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnSplashAdFailedToLoad_36;
	// System.Action HmsPlugin.HMSAdsKitManager::OnSplashAdLoaded
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSplashAdLoaded_37;
	// System.Action HmsPlugin.HMSAdsKitManager::OnSplashAdClicked
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSplashAdClicked_38;
	// System.Action HmsPlugin.HMSAdsKitManager::OnSplashAdShowed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSplashAdShowed_39;
	// System.Action`1<System.String> HmsPlugin.HMSAdsKitManager::<ConsentOnFail>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3CConsentOnFailU3Ek__BackingField_40;
	// System.Action`3<HuaweiMobileServices.Ads.ConsentStatus,System.Boolean,System.Collections.Generic.IList`1<HuaweiMobileServices.Ads.AdProvider>> HmsPlugin.HMSAdsKitManager::<ConsentOnSuccess>k__BackingField
	Action_3_tF7A487971FD2F63F7FD9A0D40956B3CB2B6BCB15 * ___U3CConsentOnSuccessU3Ek__BackingField_41;

public:
	inline static int32_t get_offset_of_TAG_1() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___TAG_1)); }
	inline String_t* get_TAG_1() const { return ___TAG_1; }
	inline String_t** get_address_of_TAG_1() { return &___TAG_1; }
	inline void set_TAG_1(String_t* value)
	{
		___TAG_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TAG_1), (void*)value);
	}

	inline static int32_t get_offset_of_bannerView_7() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___bannerView_7)); }
	inline BannerAd_t5A49D14FE7614CF99FFA26421B777873B68D7803 * get_bannerView_7() const { return ___bannerView_7; }
	inline BannerAd_t5A49D14FE7614CF99FFA26421B777873B68D7803 ** get_address_of_bannerView_7() { return &___bannerView_7; }
	inline void set_bannerView_7(BannerAd_t5A49D14FE7614CF99FFA26421B777873B68D7803 * value)
	{
		___bannerView_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerView_7), (void*)value);
	}

	inline static int32_t get_offset_of_interstitialView_8() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___interstitialView_8)); }
	inline InterstitialAd_t1CFB2F20A9233AD01F10839BCA4A1E72A07D8436 * get_interstitialView_8() const { return ___interstitialView_8; }
	inline InterstitialAd_t1CFB2F20A9233AD01F10839BCA4A1E72A07D8436 ** get_address_of_interstitialView_8() { return &___interstitialView_8; }
	inline void set_interstitialView_8(InterstitialAd_t1CFB2F20A9233AD01F10839BCA4A1E72A07D8436 * value)
	{
		___interstitialView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialView_8), (void*)value);
	}

	inline static int32_t get_offset_of_rewardedView_9() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___rewardedView_9)); }
	inline RewardAd_tD82F2D7B27E9A1AE88D399D5E54C061B98C1F570 * get_rewardedView_9() const { return ___rewardedView_9; }
	inline RewardAd_tD82F2D7B27E9A1AE88D399D5E54C061B98C1F570 ** get_address_of_rewardedView_9() { return &___rewardedView_9; }
	inline void set_rewardedView_9(RewardAd_tD82F2D7B27E9A1AE88D399D5E54C061B98C1F570 * value)
	{
		___rewardedView_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardedView_9), (void*)value);
	}

	inline static int32_t get_offset_of_splashView_10() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___splashView_10)); }
	inline SplashAd_tC319526C70B2468147D63C7399985C4DAB325B85 * get_splashView_10() const { return ___splashView_10; }
	inline SplashAd_tC319526C70B2468147D63C7399985C4DAB325B85 ** get_address_of_splashView_10() { return &___splashView_10; }
	inline void set_splashView_10(SplashAd_tC319526C70B2468147D63C7399985C4DAB325B85 * value)
	{
		___splashView_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___splashView_10), (void*)value);
	}

	inline static int32_t get_offset_of_adsKitSettings_11() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___adsKitSettings_11)); }
	inline HMSSettings_t175E598C376F5AD0FE9FEF766C5908AC9C632D67 * get_adsKitSettings_11() const { return ___adsKitSettings_11; }
	inline HMSSettings_t175E598C376F5AD0FE9FEF766C5908AC9C632D67 ** get_address_of_adsKitSettings_11() { return &___adsKitSettings_11; }
	inline void set_adsKitSettings_11(HMSSettings_t175E598C376F5AD0FE9FEF766C5908AC9C632D67 * value)
	{
		___adsKitSettings_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adsKitSettings_11), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_12() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___isInitialized_12)); }
	inline bool get_isInitialized_12() const { return ___isInitialized_12; }
	inline bool* get_address_of_isInitialized_12() { return &___isInitialized_12; }
	inline void set_isInitialized_12(bool value)
	{
		___isInitialized_12 = value;
	}

	inline static int32_t get_offset_of_U3CInstallReferrerSuccessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3CInstallReferrerSuccessU3Ek__BackingField_13)); }
	inline Action_1_tFB73089050963114D94E0A57DADF27CBA51BEB04 * get_U3CInstallReferrerSuccessU3Ek__BackingField_13() const { return ___U3CInstallReferrerSuccessU3Ek__BackingField_13; }
	inline Action_1_tFB73089050963114D94E0A57DADF27CBA51BEB04 ** get_address_of_U3CInstallReferrerSuccessU3Ek__BackingField_13() { return &___U3CInstallReferrerSuccessU3Ek__BackingField_13; }
	inline void set_U3CInstallReferrerSuccessU3Ek__BackingField_13(Action_1_tFB73089050963114D94E0A57DADF27CBA51BEB04 * value)
	{
		___U3CInstallReferrerSuccessU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstallReferrerSuccessU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstallReferrerFailU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3CInstallReferrerFailU3Ek__BackingField_14)); }
	inline Action_1_t5173B8DF78BB87DC261C11E82C2FC83E9A7912CE * get_U3CInstallReferrerFailU3Ek__BackingField_14() const { return ___U3CInstallReferrerFailU3Ek__BackingField_14; }
	inline Action_1_t5173B8DF78BB87DC261C11E82C2FC83E9A7912CE ** get_address_of_U3CInstallReferrerFailU3Ek__BackingField_14() { return &___U3CInstallReferrerFailU3Ek__BackingField_14; }
	inline void set_U3CInstallReferrerFailU3Ek__BackingField_14(Action_1_t5173B8DF78BB87DC261C11E82C2FC83E9A7912CE * value)
	{
		___U3CInstallReferrerFailU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstallReferrerFailU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstallReferrerDisconnectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3CInstallReferrerDisconnectU3Ek__BackingField_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CInstallReferrerDisconnectU3Ek__BackingField_15() const { return ___U3CInstallReferrerDisconnectU3Ek__BackingField_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CInstallReferrerDisconnectU3Ek__BackingField_15() { return &___U3CInstallReferrerDisconnectU3Ek__BackingField_15; }
	inline void set_U3CInstallReferrerDisconnectU3Ek__BackingField_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CInstallReferrerDisconnectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstallReferrerDisconnectU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_installReferrerClient_16() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___installReferrerClient_16)); }
	inline InstallReferrerClient_t173F66A31E285591B6101A6DF91AF6A46F5C3566 * get_installReferrerClient_16() const { return ___installReferrerClient_16; }
	inline InstallReferrerClient_t173F66A31E285591B6101A6DF91AF6A46F5C3566 ** get_address_of_installReferrerClient_16() { return &___installReferrerClient_16; }
	inline void set_installReferrerClient_16(InstallReferrerClient_t173F66A31E285591B6101A6DF91AF6A46F5C3566 * value)
	{
		___installReferrerClient_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___installReferrerClient_16), (void*)value);
	}

	inline static int32_t get_offset_of__isBannerAdLoaded_17() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ____isBannerAdLoaded_17)); }
	inline bool get__isBannerAdLoaded_17() const { return ____isBannerAdLoaded_17; }
	inline bool* get_address_of__isBannerAdLoaded_17() { return &____isBannerAdLoaded_17; }
	inline void set__isBannerAdLoaded_17(bool value)
	{
		____isBannerAdLoaded_17 = value;
	}

	inline static int32_t get_offset_of_OnBannerLoadEvent_18() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___OnBannerLoadEvent_18)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnBannerLoadEvent_18() const { return ___OnBannerLoadEvent_18; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnBannerLoadEvent_18() { return &___OnBannerLoadEvent_18; }
	inline void set_OnBannerLoadEvent_18(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnBannerLoadEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBannerLoadEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnBannerFailedToLoadEvent_19() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___OnBannerFailedToLoadEvent_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnBannerFailedToLoadEvent_19() const { return ___OnBannerFailedToLoadEvent_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnBannerFailedToLoadEvent_19() { return &___OnBannerFailedToLoadEvent_19; }
	inline void set_OnBannerFailedToLoadEvent_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnBannerFailedToLoadEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBannerFailedToLoadEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInterstitialAdClickedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnInterstitialAdClickedU3Ek__BackingField_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnInterstitialAdClickedU3Ek__BackingField_20() const { return ___U3COnInterstitialAdClickedU3Ek__BackingField_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnInterstitialAdClickedU3Ek__BackingField_20() { return &___U3COnInterstitialAdClickedU3Ek__BackingField_20; }
	inline void set_U3COnInterstitialAdClickedU3Ek__BackingField_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnInterstitialAdClickedU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInterstitialAdClickedU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInterstitialAdClosedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnInterstitialAdClosedU3Ek__BackingField_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnInterstitialAdClosedU3Ek__BackingField_21() const { return ___U3COnInterstitialAdClosedU3Ek__BackingField_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnInterstitialAdClosedU3Ek__BackingField_21() { return &___U3COnInterstitialAdClosedU3Ek__BackingField_21; }
	inline void set_U3COnInterstitialAdClosedU3Ek__BackingField_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnInterstitialAdClosedU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInterstitialAdClosedU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInterstitialAdFailedU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnInterstitialAdFailedU3Ek__BackingField_22)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3COnInterstitialAdFailedU3Ek__BackingField_22() const { return ___U3COnInterstitialAdFailedU3Ek__BackingField_22; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3COnInterstitialAdFailedU3Ek__BackingField_22() { return &___U3COnInterstitialAdFailedU3Ek__BackingField_22; }
	inline void set_U3COnInterstitialAdFailedU3Ek__BackingField_22(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3COnInterstitialAdFailedU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInterstitialAdFailedU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInterstitialAdImpressionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnInterstitialAdImpressionU3Ek__BackingField_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnInterstitialAdImpressionU3Ek__BackingField_23() const { return ___U3COnInterstitialAdImpressionU3Ek__BackingField_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnInterstitialAdImpressionU3Ek__BackingField_23() { return &___U3COnInterstitialAdImpressionU3Ek__BackingField_23; }
	inline void set_U3COnInterstitialAdImpressionU3Ek__BackingField_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnInterstitialAdImpressionU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInterstitialAdImpressionU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInterstitialAdLeaveU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnInterstitialAdLeaveU3Ek__BackingField_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnInterstitialAdLeaveU3Ek__BackingField_24() const { return ___U3COnInterstitialAdLeaveU3Ek__BackingField_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnInterstitialAdLeaveU3Ek__BackingField_24() { return &___U3COnInterstitialAdLeaveU3Ek__BackingField_24; }
	inline void set_U3COnInterstitialAdLeaveU3Ek__BackingField_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnInterstitialAdLeaveU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInterstitialAdLeaveU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInterstitialAdLoadedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnInterstitialAdLoadedU3Ek__BackingField_25)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnInterstitialAdLoadedU3Ek__BackingField_25() const { return ___U3COnInterstitialAdLoadedU3Ek__BackingField_25; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnInterstitialAdLoadedU3Ek__BackingField_25() { return &___U3COnInterstitialAdLoadedU3Ek__BackingField_25; }
	inline void set_U3COnInterstitialAdLoadedU3Ek__BackingField_25(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnInterstitialAdLoadedU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInterstitialAdLoadedU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInterstitialAdOpenedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnInterstitialAdOpenedU3Ek__BackingField_26)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnInterstitialAdOpenedU3Ek__BackingField_26() const { return ___U3COnInterstitialAdOpenedU3Ek__BackingField_26; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnInterstitialAdOpenedU3Ek__BackingField_26() { return &___U3COnInterstitialAdOpenedU3Ek__BackingField_26; }
	inline void set_U3COnInterstitialAdOpenedU3Ek__BackingField_26(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnInterstitialAdOpenedU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInterstitialAdOpenedU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardAdClosedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardAdClosedU3Ek__BackingField_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRewardAdClosedU3Ek__BackingField_27() const { return ___U3COnRewardAdClosedU3Ek__BackingField_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRewardAdClosedU3Ek__BackingField_27() { return &___U3COnRewardAdClosedU3Ek__BackingField_27; }
	inline void set_U3COnRewardAdClosedU3Ek__BackingField_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRewardAdClosedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardAdClosedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardAdLeftAppU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardAdLeftAppU3Ek__BackingField_28)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRewardAdLeftAppU3Ek__BackingField_28() const { return ___U3COnRewardAdLeftAppU3Ek__BackingField_28; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRewardAdLeftAppU3Ek__BackingField_28() { return &___U3COnRewardAdLeftAppU3Ek__BackingField_28; }
	inline void set_U3COnRewardAdLeftAppU3Ek__BackingField_28(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRewardAdLeftAppU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardAdLeftAppU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardAdStartedU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardAdStartedU3Ek__BackingField_29)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRewardAdStartedU3Ek__BackingField_29() const { return ___U3COnRewardAdStartedU3Ek__BackingField_29; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRewardAdStartedU3Ek__BackingField_29() { return &___U3COnRewardAdStartedU3Ek__BackingField_29; }
	inline void set_U3COnRewardAdStartedU3Ek__BackingField_29(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRewardAdStartedU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardAdStartedU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardAdOpenedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardAdOpenedU3Ek__BackingField_30)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRewardAdOpenedU3Ek__BackingField_30() const { return ___U3COnRewardAdOpenedU3Ek__BackingField_30; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRewardAdOpenedU3Ek__BackingField_30() { return &___U3COnRewardAdOpenedU3Ek__BackingField_30; }
	inline void set_U3COnRewardAdOpenedU3Ek__BackingField_30(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRewardAdOpenedU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardAdOpenedU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardAdCompletedU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardAdCompletedU3Ek__BackingField_31)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRewardAdCompletedU3Ek__BackingField_31() const { return ___U3COnRewardAdCompletedU3Ek__BackingField_31; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRewardAdCompletedU3Ek__BackingField_31() { return &___U3COnRewardAdCompletedU3Ek__BackingField_31; }
	inline void set_U3COnRewardAdCompletedU3Ek__BackingField_31(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRewardAdCompletedU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardAdCompletedU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardedU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardedU3Ek__BackingField_32)); }
	inline Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * get_U3COnRewardedU3Ek__BackingField_32() const { return ___U3COnRewardedU3Ek__BackingField_32; }
	inline Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 ** get_address_of_U3COnRewardedU3Ek__BackingField_32() { return &___U3COnRewardedU3Ek__BackingField_32; }
	inline void set_U3COnRewardedU3Ek__BackingField_32(Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * value)
	{
		___U3COnRewardedU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardedU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardedAdLoadedU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardedAdLoadedU3Ek__BackingField_33)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRewardedAdLoadedU3Ek__BackingField_33() const { return ___U3COnRewardedAdLoadedU3Ek__BackingField_33; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRewardedAdLoadedU3Ek__BackingField_33() { return &___U3COnRewardedAdLoadedU3Ek__BackingField_33; }
	inline void set_U3COnRewardedAdLoadedU3Ek__BackingField_33(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRewardedAdLoadedU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardedAdLoadedU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnRewardedAdFailedToLoadU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3COnRewardedAdFailedToLoadU3Ek__BackingField_34)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3COnRewardedAdFailedToLoadU3Ek__BackingField_34() const { return ___U3COnRewardedAdFailedToLoadU3Ek__BackingField_34; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3COnRewardedAdFailedToLoadU3Ek__BackingField_34() { return &___U3COnRewardedAdFailedToLoadU3Ek__BackingField_34; }
	inline void set_U3COnRewardedAdFailedToLoadU3Ek__BackingField_34(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3COnRewardedAdFailedToLoadU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRewardedAdFailedToLoadU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnSplashAdDismissed_35() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___OnSplashAdDismissed_35)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSplashAdDismissed_35() const { return ___OnSplashAdDismissed_35; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSplashAdDismissed_35() { return &___OnSplashAdDismissed_35; }
	inline void set_OnSplashAdDismissed_35(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSplashAdDismissed_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSplashAdDismissed_35), (void*)value);
	}

	inline static int32_t get_offset_of_OnSplashAdFailedToLoad_36() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___OnSplashAdFailedToLoad_36)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnSplashAdFailedToLoad_36() const { return ___OnSplashAdFailedToLoad_36; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnSplashAdFailedToLoad_36() { return &___OnSplashAdFailedToLoad_36; }
	inline void set_OnSplashAdFailedToLoad_36(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnSplashAdFailedToLoad_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSplashAdFailedToLoad_36), (void*)value);
	}

	inline static int32_t get_offset_of_OnSplashAdLoaded_37() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___OnSplashAdLoaded_37)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSplashAdLoaded_37() const { return ___OnSplashAdLoaded_37; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSplashAdLoaded_37() { return &___OnSplashAdLoaded_37; }
	inline void set_OnSplashAdLoaded_37(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSplashAdLoaded_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSplashAdLoaded_37), (void*)value);
	}

	inline static int32_t get_offset_of_OnSplashAdClicked_38() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___OnSplashAdClicked_38)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSplashAdClicked_38() const { return ___OnSplashAdClicked_38; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSplashAdClicked_38() { return &___OnSplashAdClicked_38; }
	inline void set_OnSplashAdClicked_38(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSplashAdClicked_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSplashAdClicked_38), (void*)value);
	}

	inline static int32_t get_offset_of_OnSplashAdShowed_39() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___OnSplashAdShowed_39)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSplashAdShowed_39() const { return ___OnSplashAdShowed_39; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSplashAdShowed_39() { return &___OnSplashAdShowed_39; }
	inline void set_OnSplashAdShowed_39(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSplashAdShowed_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSplashAdShowed_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConsentOnFailU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3CConsentOnFailU3Ek__BackingField_40)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3CConsentOnFailU3Ek__BackingField_40() const { return ___U3CConsentOnFailU3Ek__BackingField_40; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3CConsentOnFailU3Ek__BackingField_40() { return &___U3CConsentOnFailU3Ek__BackingField_40; }
	inline void set_U3CConsentOnFailU3Ek__BackingField_40(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3CConsentOnFailU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConsentOnFailU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConsentOnSuccessU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346, ___U3CConsentOnSuccessU3Ek__BackingField_41)); }
	inline Action_3_tF7A487971FD2F63F7FD9A0D40956B3CB2B6BCB15 * get_U3CConsentOnSuccessU3Ek__BackingField_41() const { return ___U3CConsentOnSuccessU3Ek__BackingField_41; }
	inline Action_3_tF7A487971FD2F63F7FD9A0D40956B3CB2B6BCB15 ** get_address_of_U3CConsentOnSuccessU3Ek__BackingField_41() { return &___U3CConsentOnSuccessU3Ek__BackingField_41; }
	inline void set_U3CConsentOnSuccessU3Ek__BackingField_41(Action_3_tF7A487971FD2F63F7FD9A0D40956B3CB2B6BCB15 * value)
	{
		___U3CConsentOnSuccessU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConsentOnSuccessU3Ek__BackingField_41), (void*)value);
	}
};


// HuaweiMobileServices.IAP.InAppPurchaseData
struct InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// HuaweiMobileServices.IAP.OwnedPurchasesResult
struct OwnedPurchasesResult_t1FA27C409615C4437DDD48EB039CF1D71D914D75  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.IAP.PurchaseResultInfo
struct PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// HuaweiMobileServices.Ads.Reward
struct Reward_tAA9A338706878F0C66956E1040C9EE747DF763D0  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
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

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HmsPlugin.HMSIAPManager
struct HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5  : public HMSManagerSingleton_1_t10C8401CE8D12B3CC81CDB8B77F0944AF50AC2B6
{
public:
	// HuaweiMobileServices.Utils.HMSException HmsPlugin.HMSIAPManager::IAP_NOT_AVAILABLE
	HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * ___IAP_NOT_AVAILABLE_2;
	// System.Action HmsPlugin.HMSIAPManager::<OnInitializeIAPSuccess>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnInitializeIAPSuccessU3Ek__BackingField_3;
	// System.Action`1<HuaweiMobileServices.Utils.HMSException> HmsPlugin.HMSIAPManager::<OnInitializeIAPFailure>k__BackingField
	Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * ___U3COnInitializeIAPFailureU3Ek__BackingField_4;
	// System.Action`1<System.Collections.Generic.IList`1<HuaweiMobileServices.IAP.ProductInfoResult>> HmsPlugin.HMSIAPManager::<OnObtainProductInfoSuccess>k__BackingField
	Action_1_tD5F7BE8598DD152688E84AD702636E099C2E0820 * ___U3COnObtainProductInfoSuccessU3Ek__BackingField_5;
	// System.Action`1<HuaweiMobileServices.Utils.HMSException> HmsPlugin.HMSIAPManager::<OnObtainProductInfoFailure>k__BackingField
	Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * ___U3COnObtainProductInfoFailureU3Ek__BackingField_6;
	// System.Action`1<HuaweiMobileServices.IAP.ConsumeOwnedPurchaseResult> HmsPlugin.HMSIAPManager::<OnConsumePurchaseSuccess>k__BackingField
	Action_1_tB0F7FBE8BD59C76FD4F9F79AF5336CE74A943BEF * ___U3COnConsumePurchaseSuccessU3Ek__BackingField_7;
	// System.Action`1<HuaweiMobileServices.Utils.HMSException> HmsPlugin.HMSIAPManager::<OnConsumePurchaseFailure>k__BackingField
	Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * ___U3COnConsumePurchaseFailureU3Ek__BackingField_8;
	// System.Action`1<HuaweiMobileServices.IAP.PurchaseResultInfo> HmsPlugin.HMSIAPManager::<OnBuyProductSuccess>k__BackingField
	Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * ___U3COnBuyProductSuccessU3Ek__BackingField_9;
	// System.Action`1<System.Int32> HmsPlugin.HMSIAPManager::<OnBuyProductFailure>k__BackingField
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3COnBuyProductFailureU3Ek__BackingField_10;
	// System.Action`1<HuaweiMobileServices.IAP.OwnedPurchasesResult> HmsPlugin.HMSIAPManager::<OnObtainOwnedPurchasesSuccess>k__BackingField
	Action_1_t373431775BB3837100220EBC11A360140F6E9857 * ___U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11;
	// System.Action`1<HuaweiMobileServices.Utils.HMSException> HmsPlugin.HMSIAPManager::<OnObtainOwnedPurchasesFailure>k__BackingField
	Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * ___U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12;
	// System.Action`1<HuaweiMobileServices.IAP.OwnedPurchasesResult> HmsPlugin.HMSIAPManager::<OnObtainOwnedPurchaseRecordSuccess>k__BackingField
	Action_1_t373431775BB3837100220EBC11A360140F6E9857 * ___U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13;
	// System.Action`1<HuaweiMobileServices.Utils.HMSException> HmsPlugin.HMSIAPManager::<OnObtainOwnedPurchaseRecordFailure>k__BackingField
	Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * ___U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14;
	// HuaweiMobileServices.IAP.IIapClient HmsPlugin.HMSIAPManager::iapClient
	RuntimeObject* ___iapClient_15;
	// System.Nullable`1<System.Boolean> HmsPlugin.HMSIAPManager::iapAvailable
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___iapAvailable_16;
	// System.Collections.Generic.List`1<HuaweiMobileServices.IAP.ProductInfo> HmsPlugin.HMSIAPManager::productInfoList
	List_1_t8AB6DF14B0B678BAB8A8D902AA1A347230FF0CA2 * ___productInfoList_17;
	// HuaweiMobileServices.IAP.IsSandboxActivatedResult HmsPlugin.HMSIAPManager::sandboxState
	IsSandboxActivatedResult_tD45985A50A4E4001A8D79ADE218BF859E7204E4C * ___sandboxState_18;

public:
	inline static int32_t get_offset_of_IAP_NOT_AVAILABLE_2() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___IAP_NOT_AVAILABLE_2)); }
	inline HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * get_IAP_NOT_AVAILABLE_2() const { return ___IAP_NOT_AVAILABLE_2; }
	inline HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E ** get_address_of_IAP_NOT_AVAILABLE_2() { return &___IAP_NOT_AVAILABLE_2; }
	inline void set_IAP_NOT_AVAILABLE_2(HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * value)
	{
		___IAP_NOT_AVAILABLE_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IAP_NOT_AVAILABLE_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInitializeIAPSuccessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnInitializeIAPSuccessU3Ek__BackingField_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnInitializeIAPSuccessU3Ek__BackingField_3() const { return ___U3COnInitializeIAPSuccessU3Ek__BackingField_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnInitializeIAPSuccessU3Ek__BackingField_3() { return &___U3COnInitializeIAPSuccessU3Ek__BackingField_3; }
	inline void set_U3COnInitializeIAPSuccessU3Ek__BackingField_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnInitializeIAPSuccessU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInitializeIAPSuccessU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnInitializeIAPFailureU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnInitializeIAPFailureU3Ek__BackingField_4)); }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * get_U3COnInitializeIAPFailureU3Ek__BackingField_4() const { return ___U3COnInitializeIAPFailureU3Ek__BackingField_4; }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A ** get_address_of_U3COnInitializeIAPFailureU3Ek__BackingField_4() { return &___U3COnInitializeIAPFailureU3Ek__BackingField_4; }
	inline void set_U3COnInitializeIAPFailureU3Ek__BackingField_4(Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * value)
	{
		___U3COnInitializeIAPFailureU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnInitializeIAPFailureU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnObtainProductInfoSuccessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnObtainProductInfoSuccessU3Ek__BackingField_5)); }
	inline Action_1_tD5F7BE8598DD152688E84AD702636E099C2E0820 * get_U3COnObtainProductInfoSuccessU3Ek__BackingField_5() const { return ___U3COnObtainProductInfoSuccessU3Ek__BackingField_5; }
	inline Action_1_tD5F7BE8598DD152688E84AD702636E099C2E0820 ** get_address_of_U3COnObtainProductInfoSuccessU3Ek__BackingField_5() { return &___U3COnObtainProductInfoSuccessU3Ek__BackingField_5; }
	inline void set_U3COnObtainProductInfoSuccessU3Ek__BackingField_5(Action_1_tD5F7BE8598DD152688E84AD702636E099C2E0820 * value)
	{
		___U3COnObtainProductInfoSuccessU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnObtainProductInfoSuccessU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnObtainProductInfoFailureU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnObtainProductInfoFailureU3Ek__BackingField_6)); }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * get_U3COnObtainProductInfoFailureU3Ek__BackingField_6() const { return ___U3COnObtainProductInfoFailureU3Ek__BackingField_6; }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A ** get_address_of_U3COnObtainProductInfoFailureU3Ek__BackingField_6() { return &___U3COnObtainProductInfoFailureU3Ek__BackingField_6; }
	inline void set_U3COnObtainProductInfoFailureU3Ek__BackingField_6(Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * value)
	{
		___U3COnObtainProductInfoFailureU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnObtainProductInfoFailureU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnConsumePurchaseSuccessU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnConsumePurchaseSuccessU3Ek__BackingField_7)); }
	inline Action_1_tB0F7FBE8BD59C76FD4F9F79AF5336CE74A943BEF * get_U3COnConsumePurchaseSuccessU3Ek__BackingField_7() const { return ___U3COnConsumePurchaseSuccessU3Ek__BackingField_7; }
	inline Action_1_tB0F7FBE8BD59C76FD4F9F79AF5336CE74A943BEF ** get_address_of_U3COnConsumePurchaseSuccessU3Ek__BackingField_7() { return &___U3COnConsumePurchaseSuccessU3Ek__BackingField_7; }
	inline void set_U3COnConsumePurchaseSuccessU3Ek__BackingField_7(Action_1_tB0F7FBE8BD59C76FD4F9F79AF5336CE74A943BEF * value)
	{
		___U3COnConsumePurchaseSuccessU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnConsumePurchaseSuccessU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnConsumePurchaseFailureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnConsumePurchaseFailureU3Ek__BackingField_8)); }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * get_U3COnConsumePurchaseFailureU3Ek__BackingField_8() const { return ___U3COnConsumePurchaseFailureU3Ek__BackingField_8; }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A ** get_address_of_U3COnConsumePurchaseFailureU3Ek__BackingField_8() { return &___U3COnConsumePurchaseFailureU3Ek__BackingField_8; }
	inline void set_U3COnConsumePurchaseFailureU3Ek__BackingField_8(Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * value)
	{
		___U3COnConsumePurchaseFailureU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnConsumePurchaseFailureU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnBuyProductSuccessU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnBuyProductSuccessU3Ek__BackingField_9)); }
	inline Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * get_U3COnBuyProductSuccessU3Ek__BackingField_9() const { return ___U3COnBuyProductSuccessU3Ek__BackingField_9; }
	inline Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D ** get_address_of_U3COnBuyProductSuccessU3Ek__BackingField_9() { return &___U3COnBuyProductSuccessU3Ek__BackingField_9; }
	inline void set_U3COnBuyProductSuccessU3Ek__BackingField_9(Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * value)
	{
		___U3COnBuyProductSuccessU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnBuyProductSuccessU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnBuyProductFailureU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnBuyProductFailureU3Ek__BackingField_10)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3COnBuyProductFailureU3Ek__BackingField_10() const { return ___U3COnBuyProductFailureU3Ek__BackingField_10; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3COnBuyProductFailureU3Ek__BackingField_10() { return &___U3COnBuyProductFailureU3Ek__BackingField_10; }
	inline void set_U3COnBuyProductFailureU3Ek__BackingField_10(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3COnBuyProductFailureU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnBuyProductFailureU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11)); }
	inline Action_1_t373431775BB3837100220EBC11A360140F6E9857 * get_U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11() const { return ___U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11; }
	inline Action_1_t373431775BB3837100220EBC11A360140F6E9857 ** get_address_of_U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11() { return &___U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11; }
	inline void set_U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11(Action_1_t373431775BB3837100220EBC11A360140F6E9857 * value)
	{
		___U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12)); }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * get_U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12() const { return ___U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12; }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A ** get_address_of_U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12() { return &___U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12; }
	inline void set_U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12(Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * value)
	{
		___U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnObtainOwnedPurchasesFailureU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13)); }
	inline Action_1_t373431775BB3837100220EBC11A360140F6E9857 * get_U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13() const { return ___U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13; }
	inline Action_1_t373431775BB3837100220EBC11A360140F6E9857 ** get_address_of_U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13() { return &___U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13; }
	inline void set_U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13(Action_1_t373431775BB3837100220EBC11A360140F6E9857 * value)
	{
		___U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnObtainOwnedPurchaseRecordSuccessU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14)); }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * get_U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14() const { return ___U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14; }
	inline Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A ** get_address_of_U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14() { return &___U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14; }
	inline void set_U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14(Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * value)
	{
		___U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnObtainOwnedPurchaseRecordFailureU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_iapClient_15() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___iapClient_15)); }
	inline RuntimeObject* get_iapClient_15() const { return ___iapClient_15; }
	inline RuntimeObject** get_address_of_iapClient_15() { return &___iapClient_15; }
	inline void set_iapClient_15(RuntimeObject* value)
	{
		___iapClient_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iapClient_15), (void*)value);
	}

	inline static int32_t get_offset_of_iapAvailable_16() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___iapAvailable_16)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_iapAvailable_16() const { return ___iapAvailable_16; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_iapAvailable_16() { return &___iapAvailable_16; }
	inline void set_iapAvailable_16(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___iapAvailable_16 = value;
	}

	inline static int32_t get_offset_of_productInfoList_17() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___productInfoList_17)); }
	inline List_1_t8AB6DF14B0B678BAB8A8D902AA1A347230FF0CA2 * get_productInfoList_17() const { return ___productInfoList_17; }
	inline List_1_t8AB6DF14B0B678BAB8A8D902AA1A347230FF0CA2 ** get_address_of_productInfoList_17() { return &___productInfoList_17; }
	inline void set_productInfoList_17(List_1_t8AB6DF14B0B678BAB8A8D902AA1A347230FF0CA2 * value)
	{
		___productInfoList_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productInfoList_17), (void*)value);
	}

	inline static int32_t get_offset_of_sandboxState_18() { return static_cast<int32_t>(offsetof(HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5, ___sandboxState_18)); }
	inline IsSandboxActivatedResult_tD45985A50A4E4001A8D79ADE218BF859E7204E4C * get_sandboxState_18() const { return ___sandboxState_18; }
	inline IsSandboxActivatedResult_tD45985A50A4E4001A8D79ADE218BF859E7204E4C ** get_address_of_sandboxState_18() { return &___sandboxState_18; }
	inline void set_sandboxState_18(IsSandboxActivatedResult_tD45985A50A4E4001A8D79ADE218BF859E7204E4C * value)
	{
		___sandboxState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sandboxState_18), (void*)value);
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// HuaweiMobileServices.Utils.HMSException
struct HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E  : public Exception_t
{
public:
	// System.Int32 HuaweiMobileServices.Utils.HMSException::_errorCode
	int32_t ____errorCode_17;
	// System.String HuaweiMobileServices.Utils.HMSException::_causeMessage
	String_t* ____causeMessage_18;
	// System.String HuaweiMobileServices.Utils.HMSException::_exceptionMessage
	String_t* ____exceptionMessage_19;
	// UnityEngine.AndroidJavaObject HuaweiMobileServices.Utils.HMSException::<JavaException>k__BackingField
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___U3CJavaExceptionU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of__errorCode_17() { return static_cast<int32_t>(offsetof(HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E, ____errorCode_17)); }
	inline int32_t get__errorCode_17() const { return ____errorCode_17; }
	inline int32_t* get_address_of__errorCode_17() { return &____errorCode_17; }
	inline void set__errorCode_17(int32_t value)
	{
		____errorCode_17 = value;
	}

	inline static int32_t get_offset_of__causeMessage_18() { return static_cast<int32_t>(offsetof(HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E, ____causeMessage_18)); }
	inline String_t* get__causeMessage_18() const { return ____causeMessage_18; }
	inline String_t** get_address_of__causeMessage_18() { return &____causeMessage_18; }
	inline void set__causeMessage_18(String_t* value)
	{
		____causeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____causeMessage_18), (void*)value);
	}

	inline static int32_t get_offset_of__exceptionMessage_19() { return static_cast<int32_t>(offsetof(HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E, ____exceptionMessage_19)); }
	inline String_t* get__exceptionMessage_19() const { return ____exceptionMessage_19; }
	inline String_t** get_address_of__exceptionMessage_19() { return &____exceptionMessage_19; }
	inline void set__exceptionMessage_19(String_t* value)
	{
		____exceptionMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exceptionMessage_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJavaExceptionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E, ___U3CJavaExceptionU3Ek__BackingField_20)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_U3CJavaExceptionU3Ek__BackingField_20() const { return ___U3CJavaExceptionU3Ek__BackingField_20; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_U3CJavaExceptionU3Ek__BackingField_20() { return &___U3CJavaExceptionU3Ek__BackingField_20; }
	inline void set_U3CJavaExceptionU3Ek__BackingField_20(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___U3CJavaExceptionU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJavaExceptionU3Ek__BackingField_20), (void*)value);
	}
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
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
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// System.Action`1<HuaweiMobileServices.Utils.HMSException>
struct Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<HuaweiMobileServices.IAP.OwnedPurchasesResult>
struct Action_1_t373431775BB3837100220EBC11A360140F6E9857  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<HuaweiMobileServices.IAP.PurchaseResultInfo>
struct Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<HuaweiMobileServices.Ads.Reward>
struct Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AdsManager
struct AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager AdsManager::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}
};


// AnimationScript
struct AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean AnimationScript::isAnimated
	bool ___isAnimated_4;
	// System.Boolean AnimationScript::isRotating
	bool ___isRotating_5;
	// System.Boolean AnimationScript::isFloating
	bool ___isFloating_6;
	// System.Boolean AnimationScript::isScaling
	bool ___isScaling_7;
	// UnityEngine.Vector3 AnimationScript::rotationAngle
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationAngle_8;
	// System.Single AnimationScript::rotationSpeed
	float ___rotationSpeed_9;
	// System.Single AnimationScript::floatSpeed
	float ___floatSpeed_10;
	// System.Boolean AnimationScript::goingUp
	bool ___goingUp_11;
	// System.Single AnimationScript::floatRate
	float ___floatRate_12;
	// System.Single AnimationScript::floatTimer
	float ___floatTimer_13;
	// UnityEngine.Vector3 AnimationScript::startScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startScale_14;
	// UnityEngine.Vector3 AnimationScript::endScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endScale_15;
	// System.Boolean AnimationScript::scalingUp
	bool ___scalingUp_16;
	// System.Single AnimationScript::scaleSpeed
	float ___scaleSpeed_17;
	// System.Single AnimationScript::scaleRate
	float ___scaleRate_18;
	// System.Single AnimationScript::scaleTimer
	float ___scaleTimer_19;

public:
	inline static int32_t get_offset_of_isAnimated_4() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___isAnimated_4)); }
	inline bool get_isAnimated_4() const { return ___isAnimated_4; }
	inline bool* get_address_of_isAnimated_4() { return &___isAnimated_4; }
	inline void set_isAnimated_4(bool value)
	{
		___isAnimated_4 = value;
	}

	inline static int32_t get_offset_of_isRotating_5() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___isRotating_5)); }
	inline bool get_isRotating_5() const { return ___isRotating_5; }
	inline bool* get_address_of_isRotating_5() { return &___isRotating_5; }
	inline void set_isRotating_5(bool value)
	{
		___isRotating_5 = value;
	}

	inline static int32_t get_offset_of_isFloating_6() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___isFloating_6)); }
	inline bool get_isFloating_6() const { return ___isFloating_6; }
	inline bool* get_address_of_isFloating_6() { return &___isFloating_6; }
	inline void set_isFloating_6(bool value)
	{
		___isFloating_6 = value;
	}

	inline static int32_t get_offset_of_isScaling_7() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___isScaling_7)); }
	inline bool get_isScaling_7() const { return ___isScaling_7; }
	inline bool* get_address_of_isScaling_7() { return &___isScaling_7; }
	inline void set_isScaling_7(bool value)
	{
		___isScaling_7 = value;
	}

	inline static int32_t get_offset_of_rotationAngle_8() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___rotationAngle_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationAngle_8() const { return ___rotationAngle_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationAngle_8() { return &___rotationAngle_8; }
	inline void set_rotationAngle_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationAngle_8 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_9() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___rotationSpeed_9)); }
	inline float get_rotationSpeed_9() const { return ___rotationSpeed_9; }
	inline float* get_address_of_rotationSpeed_9() { return &___rotationSpeed_9; }
	inline void set_rotationSpeed_9(float value)
	{
		___rotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_floatSpeed_10() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___floatSpeed_10)); }
	inline float get_floatSpeed_10() const { return ___floatSpeed_10; }
	inline float* get_address_of_floatSpeed_10() { return &___floatSpeed_10; }
	inline void set_floatSpeed_10(float value)
	{
		___floatSpeed_10 = value;
	}

	inline static int32_t get_offset_of_goingUp_11() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___goingUp_11)); }
	inline bool get_goingUp_11() const { return ___goingUp_11; }
	inline bool* get_address_of_goingUp_11() { return &___goingUp_11; }
	inline void set_goingUp_11(bool value)
	{
		___goingUp_11 = value;
	}

	inline static int32_t get_offset_of_floatRate_12() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___floatRate_12)); }
	inline float get_floatRate_12() const { return ___floatRate_12; }
	inline float* get_address_of_floatRate_12() { return &___floatRate_12; }
	inline void set_floatRate_12(float value)
	{
		___floatRate_12 = value;
	}

	inline static int32_t get_offset_of_floatTimer_13() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___floatTimer_13)); }
	inline float get_floatTimer_13() const { return ___floatTimer_13; }
	inline float* get_address_of_floatTimer_13() { return &___floatTimer_13; }
	inline void set_floatTimer_13(float value)
	{
		___floatTimer_13 = value;
	}

	inline static int32_t get_offset_of_startScale_14() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___startScale_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startScale_14() const { return ___startScale_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startScale_14() { return &___startScale_14; }
	inline void set_startScale_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startScale_14 = value;
	}

	inline static int32_t get_offset_of_endScale_15() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___endScale_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endScale_15() const { return ___endScale_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endScale_15() { return &___endScale_15; }
	inline void set_endScale_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endScale_15 = value;
	}

	inline static int32_t get_offset_of_scalingUp_16() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___scalingUp_16)); }
	inline bool get_scalingUp_16() const { return ___scalingUp_16; }
	inline bool* get_address_of_scalingUp_16() { return &___scalingUp_16; }
	inline void set_scalingUp_16(bool value)
	{
		___scalingUp_16 = value;
	}

	inline static int32_t get_offset_of_scaleSpeed_17() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___scaleSpeed_17)); }
	inline float get_scaleSpeed_17() const { return ___scaleSpeed_17; }
	inline float* get_address_of_scaleSpeed_17() { return &___scaleSpeed_17; }
	inline void set_scaleSpeed_17(float value)
	{
		___scaleSpeed_17 = value;
	}

	inline static int32_t get_offset_of_scaleRate_18() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___scaleRate_18)); }
	inline float get_scaleRate_18() const { return ___scaleRate_18; }
	inline float* get_address_of_scaleRate_18() { return &___scaleRate_18; }
	inline void set_scaleRate_18(float value)
	{
		___scaleRate_18 = value;
	}

	inline static int32_t get_offset_of_scaleTimer_19() { return static_cast<int32_t>(offsetof(AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC, ___scaleTimer_19)); }
	inline float get_scaleTimer_19() const { return ___scaleTimer_19; }
	inline float* get_address_of_scaleTimer_19() { return &___scaleTimer_19; }
	inline void set_scaleTimer_19(float value)
	{
		___scaleTimer_19 = value;
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BuyGems
struct BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager BuyGems::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}
};


// ColorSelectorButton
struct ColorSelectorButton_t6230EEFA94266CAC0F60300D5D2D0F451FD56D99  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color ColorSelectorButton::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_4;
	// UnityEngine.Material ColorSelectorButton::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_5;

public:
	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(ColorSelectorButton_t6230EEFA94266CAC0F60300D5D2D0F451FD56D99, ___color_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_4() const { return ___color_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(ColorSelectorButton_t6230EEFA94266CAC0F60300D5D2D0F451FD56D99, ___material_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_5() const { return ___material_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_5), (void*)value);
	}
};


// DestroyCube
struct DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip DestroyCube::dropCube
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___dropCube_4;
	// UnityEngine.AudioSource DestroyCube::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;

public:
	inline static int32_t get_offset_of_dropCube_4() { return static_cast<int32_t>(offsetof(DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F, ___dropCube_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_dropCube_4() const { return ___dropCube_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_dropCube_4() { return &___dropCube_4; }
	inline void set_dropCube_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___dropCube_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dropCube_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// AdsManager GameManager::adsManager
	AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * ___adsManager_4;
	// UnityEngine.GameObject GameManager::mainMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainMenu_5;
	// UnityEngine.GameObject GameManager::startPrompt
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___startPrompt_6;
	// UnityEngine.GameObject GameManager::gemCounter
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gemCounter_7;
	// UnityEngine.GameObject GameManager::progressBar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___progressBar_8;
	// UnityEngine.GameObject GameManager::gameButtons
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameButtons_9;
	// UnityEngine.GameObject GameManager::mutedButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mutedButton_10;
	// UnityEngine.GameObject GameManager::pauseMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenu_11;
	// UnityEngine.GameObject GameManager::watchAdsButtonVic
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___watchAdsButtonVic_12;
	// UnityEngine.GameObject GameManager::watchAdsButtonDef
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___watchAdsButtonDef_13;
	// System.Boolean GameManager::showAds
	bool ___showAds_15;
	// UnityEngine.GameObject GameManager::StoreScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___StoreScreen_16;
	// IAPManager GameManager::iapManager
	IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * ___iapManager_17;
	// System.Int32 GameManager::gemCount
	int32_t ___gemCount_18;
	// TMPro.TMP_Text GameManager::gemCountText
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___gemCountText_19;
	// System.Boolean GameManager::audioEnabled
	bool ___audioEnabled_20;

public:
	inline static int32_t get_offset_of_adsManager_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___adsManager_4)); }
	inline AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * get_adsManager_4() const { return ___adsManager_4; }
	inline AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 ** get_address_of_adsManager_4() { return &___adsManager_4; }
	inline void set_adsManager_4(AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * value)
	{
		___adsManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adsManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mainMenu_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mainMenu_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainMenu_5() const { return ___mainMenu_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainMenu_5() { return &___mainMenu_5; }
	inline void set_mainMenu_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainMenu_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainMenu_5), (void*)value);
	}

	inline static int32_t get_offset_of_startPrompt_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___startPrompt_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_startPrompt_6() const { return ___startPrompt_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_startPrompt_6() { return &___startPrompt_6; }
	inline void set_startPrompt_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___startPrompt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startPrompt_6), (void*)value);
	}

	inline static int32_t get_offset_of_gemCounter_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gemCounter_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gemCounter_7() const { return ___gemCounter_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gemCounter_7() { return &___gemCounter_7; }
	inline void set_gemCounter_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gemCounter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gemCounter_7), (void*)value);
	}

	inline static int32_t get_offset_of_progressBar_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___progressBar_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_progressBar_8() const { return ___progressBar_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_progressBar_8() { return &___progressBar_8; }
	inline void set_progressBar_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___progressBar_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressBar_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameButtons_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameButtons_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameButtons_9() const { return ___gameButtons_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameButtons_9() { return &___gameButtons_9; }
	inline void set_gameButtons_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameButtons_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameButtons_9), (void*)value);
	}

	inline static int32_t get_offset_of_mutedButton_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mutedButton_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mutedButton_10() const { return ___mutedButton_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mutedButton_10() { return &___mutedButton_10; }
	inline void set_mutedButton_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mutedButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mutedButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_pauseMenu_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___pauseMenu_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenu_11() const { return ___pauseMenu_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenu_11() { return &___pauseMenu_11; }
	inline void set_pauseMenu_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenu_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenu_11), (void*)value);
	}

	inline static int32_t get_offset_of_watchAdsButtonVic_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___watchAdsButtonVic_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_watchAdsButtonVic_12() const { return ___watchAdsButtonVic_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_watchAdsButtonVic_12() { return &___watchAdsButtonVic_12; }
	inline void set_watchAdsButtonVic_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___watchAdsButtonVic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watchAdsButtonVic_12), (void*)value);
	}

	inline static int32_t get_offset_of_watchAdsButtonDef_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___watchAdsButtonDef_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_watchAdsButtonDef_13() const { return ___watchAdsButtonDef_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_watchAdsButtonDef_13() { return &___watchAdsButtonDef_13; }
	inline void set_watchAdsButtonDef_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___watchAdsButtonDef_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watchAdsButtonDef_13), (void*)value);
	}

	inline static int32_t get_offset_of_showAds_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___showAds_15)); }
	inline bool get_showAds_15() const { return ___showAds_15; }
	inline bool* get_address_of_showAds_15() { return &___showAds_15; }
	inline void set_showAds_15(bool value)
	{
		___showAds_15 = value;
	}

	inline static int32_t get_offset_of_StoreScreen_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___StoreScreen_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_StoreScreen_16() const { return ___StoreScreen_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_StoreScreen_16() { return &___StoreScreen_16; }
	inline void set_StoreScreen_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___StoreScreen_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StoreScreen_16), (void*)value);
	}

	inline static int32_t get_offset_of_iapManager_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___iapManager_17)); }
	inline IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * get_iapManager_17() const { return ___iapManager_17; }
	inline IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 ** get_address_of_iapManager_17() { return &___iapManager_17; }
	inline void set_iapManager_17(IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * value)
	{
		___iapManager_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iapManager_17), (void*)value);
	}

	inline static int32_t get_offset_of_gemCount_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gemCount_18)); }
	inline int32_t get_gemCount_18() const { return ___gemCount_18; }
	inline int32_t* get_address_of_gemCount_18() { return &___gemCount_18; }
	inline void set_gemCount_18(int32_t value)
	{
		___gemCount_18 = value;
	}

	inline static int32_t get_offset_of_gemCountText_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gemCountText_19)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_gemCountText_19() const { return ___gemCountText_19; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_gemCountText_19() { return &___gemCountText_19; }
	inline void set_gemCountText_19(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___gemCountText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gemCountText_19), (void*)value);
	}

	inline static int32_t get_offset_of_audioEnabled_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___audioEnabled_20)); }
	inline bool get_audioEnabled_20() const { return ___audioEnabled_20; }
	inline bool* get_address_of_audioEnabled_20() { return &___audioEnabled_20; }
	inline void set_audioEnabled_20(bool value)
	{
		___audioEnabled_20 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// System.Boolean GameManager::restartGame
	bool ___restartGame_14;

public:
	inline static int32_t get_offset_of_restartGame_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___restartGame_14)); }
	inline bool get_restartGame_14() const { return ___restartGame_14; }
	inline bool* get_address_of_restartGame_14() { return &___restartGame_14; }
	inline void set_restartGame_14(bool value)
	{
		___restartGame_14 = value;
	}
};


// IAPManager
struct IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<HuaweiMobileServices.IAP.InAppPurchaseData> IAPManager::consumablePurchaseRecord
	List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * ___consumablePurchaseRecord_4;
	// System.Collections.Generic.List`1<HuaweiMobileServices.IAP.InAppPurchaseData> IAPManager::activeNonConsumables
	List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * ___activeNonConsumables_5;
	// System.Collections.Generic.List`1<HuaweiMobileServices.IAP.InAppPurchaseData> IAPManager::activeSubscriptions
	List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * ___activeSubscriptions_6;
	// GameManager IAPManager::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_7;

public:
	inline static int32_t get_offset_of_consumablePurchaseRecord_4() { return static_cast<int32_t>(offsetof(IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2, ___consumablePurchaseRecord_4)); }
	inline List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * get_consumablePurchaseRecord_4() const { return ___consumablePurchaseRecord_4; }
	inline List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 ** get_address_of_consumablePurchaseRecord_4() { return &___consumablePurchaseRecord_4; }
	inline void set_consumablePurchaseRecord_4(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * value)
	{
		___consumablePurchaseRecord_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consumablePurchaseRecord_4), (void*)value);
	}

	inline static int32_t get_offset_of_activeNonConsumables_5() { return static_cast<int32_t>(offsetof(IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2, ___activeNonConsumables_5)); }
	inline List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * get_activeNonConsumables_5() const { return ___activeNonConsumables_5; }
	inline List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 ** get_address_of_activeNonConsumables_5() { return &___activeNonConsumables_5; }
	inline void set_activeNonConsumables_5(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * value)
	{
		___activeNonConsumables_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeNonConsumables_5), (void*)value);
	}

	inline static int32_t get_offset_of_activeSubscriptions_6() { return static_cast<int32_t>(offsetof(IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2, ___activeSubscriptions_6)); }
	inline List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * get_activeSubscriptions_6() const { return ___activeSubscriptions_6; }
	inline List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 ** get_address_of_activeSubscriptions_6() { return &___activeSubscriptions_6; }
	inline void set_activeSubscriptions_6(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * value)
	{
		___activeSubscriptions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSubscriptions_6), (void*)value);
	}

	inline static int32_t get_offset_of_gm_7() { return static_cast<int32_t>(offsetof(IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2, ___gm_7)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_7() const { return ___gm_7; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_7() { return &___gm_7; }
	inline void set_gm_7(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_7), (void*)value);
	}
};


// Instantiator
struct Instantiator_tBF82B9B22BE876C34EE9097DC9D36E43BB658679  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Instantiator::count
	int32_t ___count_4;
	// UnityEngine.GameObject Instantiator::objectPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objectPrefab_5;

public:
	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(Instantiator_tBF82B9B22BE876C34EE9097DC9D36E43BB658679, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_objectPrefab_5() { return static_cast<int32_t>(offsetof(Instantiator_tBF82B9B22BE876C34EE9097DC9D36E43BB658679, ___objectPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objectPrefab_5() const { return ___objectPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objectPrefab_5() { return &___objectPrefab_5; }
	inline void set_objectPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objectPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectPrefab_5), (void*)value);
	}
};


// InterstitialAdLoad
struct InterstitialAdLoad_tBC75AE8101213F4A2A9E61A36689CB3A16CFAA74  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MenuBannerAd
struct MenuBannerAd_t5A728B31626705FE65569E85EDF0854E940C4088  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MultiplierHandler
struct MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MultiplierHandler::multiplierValue
	int32_t ___multiplierValue_4;

public:
	inline static int32_t get_offset_of_multiplierValue_4() { return static_cast<int32_t>(offsetof(MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151, ___multiplierValue_4)); }
	inline int32_t get_multiplierValue_4() const { return ___multiplierValue_4; }
	inline int32_t* get_address_of_multiplierValue_4() { return &___multiplierValue_4; }
	inline void set_multiplierValue_4(int32_t value)
	{
		___multiplierValue_4 = value;
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip PlayerController::collectCube
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___collectCube_4;
	// UnityEngine.AudioClip PlayerController::collectGem
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___collectGem_5;
	// UnityEngine.AudioClip PlayerController::speedBoost
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___speedBoost_6;
	// UnityEngine.AudioClip PlayerController::victory
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___victory_7;
	// UnityEngine.AudioClip PlayerController::defeat
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___defeat_8;
	// UnityEngine.GameObject PlayerController::character
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character_9;
	// UnityEngine.AudioSource PlayerController::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_10;
	// UnityEngine.GameObject PlayerController::defeatMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___defeatMenu_11;
	// UnityEngine.GameObject PlayerController::victoryMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___victoryMenu_12;
	// TMPro.TMP_Text PlayerController::scoreText
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___scoreText_13;

public:
	inline static int32_t get_offset_of_collectCube_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___collectCube_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_collectCube_4() const { return ___collectCube_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_collectCube_4() { return &___collectCube_4; }
	inline void set_collectCube_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___collectCube_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectCube_4), (void*)value);
	}

	inline static int32_t get_offset_of_collectGem_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___collectGem_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_collectGem_5() const { return ___collectGem_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_collectGem_5() { return &___collectGem_5; }
	inline void set_collectGem_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___collectGem_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectGem_5), (void*)value);
	}

	inline static int32_t get_offset_of_speedBoost_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___speedBoost_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_speedBoost_6() const { return ___speedBoost_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_speedBoost_6() { return &___speedBoost_6; }
	inline void set_speedBoost_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___speedBoost_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speedBoost_6), (void*)value);
	}

	inline static int32_t get_offset_of_victory_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___victory_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_victory_7() const { return ___victory_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_victory_7() { return &___victory_7; }
	inline void set_victory_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___victory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___victory_7), (void*)value);
	}

	inline static int32_t get_offset_of_defeat_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___defeat_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_defeat_8() const { return ___defeat_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_defeat_8() { return &___defeat_8; }
	inline void set_defeat_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___defeat_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defeat_8), (void*)value);
	}

	inline static int32_t get_offset_of_character_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___character_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character_9() const { return ___character_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character_9() { return &___character_9; }
	inline void set_character_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_9), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___audioSource_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_10() const { return ___audioSource_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_10() { return &___audioSource_10; }
	inline void set_audioSource_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_10), (void*)value);
	}

	inline static int32_t get_offset_of_defeatMenu_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___defeatMenu_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_defeatMenu_11() const { return ___defeatMenu_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_defeatMenu_11() { return &___defeatMenu_11; }
	inline void set_defeatMenu_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___defeatMenu_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defeatMenu_11), (void*)value);
	}

	inline static int32_t get_offset_of_victoryMenu_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___victoryMenu_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_victoryMenu_12() const { return ___victoryMenu_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_victoryMenu_12() { return &___victoryMenu_12; }
	inline void set_victoryMenu_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___victoryMenu_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___victoryMenu_12), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___scoreText_13)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_scoreText_13() const { return ___scoreText_13; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_scoreText_13() { return &___scoreText_13; }
	inline void set_scoreText_13(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___scoreText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_13), (void*)value);
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerMovement::forwardSpeed
	float ___forwardSpeed_4;
	// System.Single PlayerMovement::sideSpeed
	float ___sideSpeed_5;
	// System.Boolean PlayerMovement::isMoving
	bool ___isMoving_6;
	// UnityEngine.GameObject PlayerMovement::MainMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MainMenu_7;
	// UnityEngine.GameObject PlayerMovement::defeatMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___defeatMenu_8;
	// UnityEngine.GameObject PlayerMovement::victoryMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___victoryMenu_9;

public:
	inline static int32_t get_offset_of_forwardSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___forwardSpeed_4)); }
	inline float get_forwardSpeed_4() const { return ___forwardSpeed_4; }
	inline float* get_address_of_forwardSpeed_4() { return &___forwardSpeed_4; }
	inline void set_forwardSpeed_4(float value)
	{
		___forwardSpeed_4 = value;
	}

	inline static int32_t get_offset_of_sideSpeed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___sideSpeed_5)); }
	inline float get_sideSpeed_5() const { return ___sideSpeed_5; }
	inline float* get_address_of_sideSpeed_5() { return &___sideSpeed_5; }
	inline void set_sideSpeed_5(float value)
	{
		___sideSpeed_5 = value;
	}

	inline static int32_t get_offset_of_isMoving_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___isMoving_6)); }
	inline bool get_isMoving_6() const { return ___isMoving_6; }
	inline bool* get_address_of_isMoving_6() { return &___isMoving_6; }
	inline void set_isMoving_6(bool value)
	{
		___isMoving_6 = value;
	}

	inline static int32_t get_offset_of_MainMenu_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___MainMenu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MainMenu_7() const { return ___MainMenu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MainMenu_7() { return &___MainMenu_7; }
	inline void set_MainMenu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MainMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainMenu_7), (void*)value);
	}

	inline static int32_t get_offset_of_defeatMenu_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___defeatMenu_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_defeatMenu_8() const { return ___defeatMenu_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_defeatMenu_8() { return &___defeatMenu_8; }
	inline void set_defeatMenu_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___defeatMenu_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defeatMenu_8), (void*)value);
	}

	inline static int32_t get_offset_of_victoryMenu_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___victoryMenu_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_victoryMenu_9() const { return ___victoryMenu_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_victoryMenu_9() { return &___victoryMenu_9; }
	inline void set_victoryMenu_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___victoryMenu_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___victoryMenu_9), (void*)value);
	}
};


// ProgressBar
struct ProgressBar_tA0F844D97A02726F8E64CC8E159B946A2B413378  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider ProgressBar::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_4;
	// UnityEngine.GameObject ProgressBar::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;

public:
	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(ProgressBar_tA0F844D97A02726F8E64CC8E159B946A2B413378, ___slider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_4() const { return ___slider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(ProgressBar_tA0F844D97A02726F8E64CC8E159B946A2B413378, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}
};


// SpinningObstacle
struct SpinningObstacle_t7F2DA78BDF192F6067C57C65BD356854A488E60E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SpinningObstacle::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(SpinningObstacle_t7F2DA78BDF192F6067C57C65BD356854A488E60E, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// SwerveInputSystem
struct SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SwerveInputSystem::_lastFrameFingerPositionX
	float ____lastFrameFingerPositionX_4;
	// System.Single SwerveInputSystem::_moveFactorX
	float ____moveFactorX_5;

public:
	inline static int32_t get_offset_of__lastFrameFingerPositionX_4() { return static_cast<int32_t>(offsetof(SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60, ____lastFrameFingerPositionX_4)); }
	inline float get__lastFrameFingerPositionX_4() const { return ____lastFrameFingerPositionX_4; }
	inline float* get_address_of__lastFrameFingerPositionX_4() { return &____lastFrameFingerPositionX_4; }
	inline void set__lastFrameFingerPositionX_4(float value)
	{
		____lastFrameFingerPositionX_4 = value;
	}

	inline static int32_t get_offset_of__moveFactorX_5() { return static_cast<int32_t>(offsetof(SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60, ____moveFactorX_5)); }
	inline float get__moveFactorX_5() const { return ____moveFactorX_5; }
	inline float* get_address_of__moveFactorX_5() { return &____moveFactorX_5; }
	inline void set__moveFactorX_5(float value)
	{
		____moveFactorX_5 = value;
	}
};


// SwerveMovement
struct SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SwerveInputSystem SwerveMovement::_swerveInputSystem
	SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * ____swerveInputSystem_4;
	// System.Single SwerveMovement::swerveSpeed
	float ___swerveSpeed_5;
	// System.Single SwerveMovement::maxSwerveAmount
	float ___maxSwerveAmount_6;

public:
	inline static int32_t get_offset_of__swerveInputSystem_4() { return static_cast<int32_t>(offsetof(SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592, ____swerveInputSystem_4)); }
	inline SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * get__swerveInputSystem_4() const { return ____swerveInputSystem_4; }
	inline SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 ** get_address_of__swerveInputSystem_4() { return &____swerveInputSystem_4; }
	inline void set__swerveInputSystem_4(SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * value)
	{
		____swerveInputSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____swerveInputSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_swerveSpeed_5() { return static_cast<int32_t>(offsetof(SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592, ___swerveSpeed_5)); }
	inline float get_swerveSpeed_5() const { return ___swerveSpeed_5; }
	inline float* get_address_of_swerveSpeed_5() { return &___swerveSpeed_5; }
	inline void set_swerveSpeed_5(float value)
	{
		___swerveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_maxSwerveAmount_6() { return static_cast<int32_t>(offsetof(SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592, ___maxSwerveAmount_6)); }
	inline float get_maxSwerveAmount_6() const { return ___maxSwerveAmount_6; }
	inline float* get_address_of_maxSwerveAmount_6() { return &___maxSwerveAmount_6; }
	inline void set_maxSwerveAmount_6(float value)
	{
		___maxSwerveAmount_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
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
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
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

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_79;
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
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_90;
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
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_97;
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
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_118;
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
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_146;
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_166;
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
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_173;
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
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_199;
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
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_37)); }
	inline bool get_m_IsTextBackingStringDirty_37() const { return ___m_IsTextBackingStringDirty_37; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_37() { return &___m_IsTextBackingStringDirty_37; }
	inline void set_m_IsTextBackingStringDirty_37(bool value)
	{
		___m_IsTextBackingStringDirty_37 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_38)); }
	inline RuntimeObject* get_m_TextPreprocessor_38() const { return ___m_TextPreprocessor_38; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_38() { return &___m_TextPreprocessor_38; }
	inline void set_m_TextPreprocessor_38(RuntimeObject* value)
	{
		___m_TextPreprocessor_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_39)); }
	inline bool get_m_isRightToLeft_39() const { return ___m_isRightToLeft_39; }
	inline bool* get_address_of_m_isRightToLeft_39() { return &___m_isRightToLeft_39; }
	inline void set_m_isRightToLeft_39(bool value)
	{
		___m_isRightToLeft_39 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_40() const { return ___m_fontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_40() { return &___m_fontAsset_40; }
	inline void set_m_fontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_41() const { return ___m_currentFontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_41() { return &___m_currentFontAsset_41; }
	inline void set_m_currentFontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_42)); }
	inline bool get_m_isSDFShader_42() const { return ___m_isSDFShader_42; }
	inline bool* get_address_of_m_isSDFShader_42() { return &___m_isSDFShader_42; }
	inline void set_m_isSDFShader_42(bool value)
	{
		___m_isSDFShader_42 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_43() const { return ___m_sharedMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_43() { return &___m_sharedMaterial_43; }
	inline void set_m_sharedMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_44() const { return ___m_currentMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_44() { return &___m_currentMaterial_44; }
	inline void set_m_currentMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_48)); }
	inline int32_t get_m_currentMaterialIndex_48() const { return ___m_currentMaterialIndex_48; }
	inline int32_t* get_address_of_m_currentMaterialIndex_48() { return &___m_currentMaterialIndex_48; }
	inline void set_m_currentMaterialIndex_48(int32_t value)
	{
		___m_currentMaterialIndex_48 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_49() const { return ___m_fontSharedMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_49() { return &___m_fontSharedMaterials_49; }
	inline void set_m_fontSharedMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_50() const { return ___m_fontMaterial_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_50() { return &___m_fontMaterial_50; }
	inline void set_m_fontMaterial_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_51)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_51() const { return ___m_fontMaterials_51; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_51() { return &___m_fontMaterials_51; }
	inline void set_m_fontMaterials_51(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_52)); }
	inline bool get_m_isMaterialDirty_52() const { return ___m_isMaterialDirty_52; }
	inline bool* get_address_of_m_isMaterialDirty_52() { return &___m_isMaterialDirty_52; }
	inline void set_m_isMaterialDirty_52(bool value)
	{
		___m_isMaterialDirty_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_53() const { return ___m_fontColor32_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_53() { return &___m_fontColor32_53; }
	inline void set_m_fontColor32_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_54() const { return ___m_fontColor_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_54() { return &___m_fontColor_54; }
	inline void set_m_fontColor_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_54 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_56() const { return ___m_underlineColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_56() { return &___m_underlineColor_56; }
	inline void set_m_underlineColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_56 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_57() const { return ___m_strikethroughColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_57() { return &___m_strikethroughColor_57; }
	inline void set_m_strikethroughColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_57 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_58)); }
	inline bool get_m_enableVertexGradient_58() const { return ___m_enableVertexGradient_58; }
	inline bool* get_address_of_m_enableVertexGradient_58() { return &___m_enableVertexGradient_58; }
	inline void set_m_enableVertexGradient_58(bool value)
	{
		___m_enableVertexGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_59)); }
	inline int32_t get_m_colorMode_59() const { return ___m_colorMode_59; }
	inline int32_t* get_address_of_m_colorMode_59() { return &___m_colorMode_59; }
	inline void set_m_colorMode_59(int32_t value)
	{
		___m_colorMode_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_60)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_60() const { return ___m_fontColorGradient_60; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_60() { return &___m_fontColorGradient_60; }
	inline void set_m_fontColorGradient_60(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_61)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_61() const { return ___m_fontColorGradientPreset_61; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_61() { return &___m_fontColorGradientPreset_61; }
	inline void set_m_fontColorGradientPreset_61(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_62)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_62() const { return ___m_spriteAsset_62; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_62() { return &___m_spriteAsset_62; }
	inline void set_m_spriteAsset_62(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_63)); }
	inline bool get_m_tintAllSprites_63() const { return ___m_tintAllSprites_63; }
	inline bool* get_address_of_m_tintAllSprites_63() { return &___m_tintAllSprites_63; }
	inline void set_m_tintAllSprites_63(bool value)
	{
		___m_tintAllSprites_63 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_64)); }
	inline bool get_m_tintSprite_64() const { return ___m_tintSprite_64; }
	inline bool* get_address_of_m_tintSprite_64() { return &___m_tintSprite_64; }
	inline void set_m_tintSprite_64(bool value)
	{
		___m_tintSprite_64 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_65)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_65() const { return ___m_spriteColor_65; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_65() { return &___m_spriteColor_65; }
	inline void set_m_spriteColor_65(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_65 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_66)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_66() const { return ___m_StyleSheet_66; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_66() { return &___m_StyleSheet_66; }
	inline void set_m_StyleSheet_66(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_67)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_67() const { return ___m_TextStyle_67; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_67() { return &___m_TextStyle_67; }
	inline void set_m_TextStyle_67(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_68)); }
	inline int32_t get_m_TextStyleHashCode_68() const { return ___m_TextStyleHashCode_68; }
	inline int32_t* get_address_of_m_TextStyleHashCode_68() { return &___m_TextStyleHashCode_68; }
	inline void set_m_TextStyleHashCode_68(int32_t value)
	{
		___m_TextStyleHashCode_68 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_69)); }
	inline bool get_m_overrideHtmlColors_69() const { return ___m_overrideHtmlColors_69; }
	inline bool* get_address_of_m_overrideHtmlColors_69() { return &___m_overrideHtmlColors_69; }
	inline void set_m_overrideHtmlColors_69(bool value)
	{
		___m_overrideHtmlColors_69 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_70() const { return ___m_faceColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_70() { return &___m_faceColor_70; }
	inline void set_m_faceColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_71() const { return ___m_outlineColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_71() { return &___m_outlineColor_71; }
	inline void set_m_outlineColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_72)); }
	inline float get_m_outlineWidth_72() const { return ___m_outlineWidth_72; }
	inline float* get_address_of_m_outlineWidth_72() { return &___m_outlineWidth_72; }
	inline void set_m_outlineWidth_72(float value)
	{
		___m_outlineWidth_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_73)); }
	inline float get_m_fontSize_73() const { return ___m_fontSize_73; }
	inline float* get_address_of_m_fontSize_73() { return &___m_fontSize_73; }
	inline void set_m_fontSize_73(float value)
	{
		___m_fontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_74)); }
	inline float get_m_currentFontSize_74() const { return ___m_currentFontSize_74; }
	inline float* get_address_of_m_currentFontSize_74() { return &___m_currentFontSize_74; }
	inline void set_m_currentFontSize_74(float value)
	{
		___m_currentFontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_75)); }
	inline float get_m_fontSizeBase_75() const { return ___m_fontSizeBase_75; }
	inline float* get_address_of_m_fontSizeBase_75() { return &___m_fontSizeBase_75; }
	inline void set_m_fontSizeBase_75(float value)
	{
		___m_fontSizeBase_75 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_76)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_76() const { return ___m_sizeStack_76; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_76() { return &___m_sizeStack_76; }
	inline void set_m_sizeStack_76(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_76))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_77)); }
	inline int32_t get_m_fontWeight_77() const { return ___m_fontWeight_77; }
	inline int32_t* get_address_of_m_fontWeight_77() { return &___m_fontWeight_77; }
	inline void set_m_fontWeight_77(int32_t value)
	{
		___m_fontWeight_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_78)); }
	inline int32_t get_m_FontWeightInternal_78() const { return ___m_FontWeightInternal_78; }
	inline int32_t* get_address_of_m_FontWeightInternal_78() { return &___m_FontWeightInternal_78; }
	inline void set_m_FontWeightInternal_78(int32_t value)
	{
		___m_FontWeightInternal_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_79)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_79() const { return ___m_FontWeightStack_79; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_79() { return &___m_FontWeightStack_79; }
	inline void set_m_FontWeightStack_79(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_79 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_79))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_80)); }
	inline bool get_m_enableAutoSizing_80() const { return ___m_enableAutoSizing_80; }
	inline bool* get_address_of_m_enableAutoSizing_80() { return &___m_enableAutoSizing_80; }
	inline void set_m_enableAutoSizing_80(bool value)
	{
		___m_enableAutoSizing_80 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_81)); }
	inline float get_m_maxFontSize_81() const { return ___m_maxFontSize_81; }
	inline float* get_address_of_m_maxFontSize_81() { return &___m_maxFontSize_81; }
	inline void set_m_maxFontSize_81(float value)
	{
		___m_maxFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_82)); }
	inline float get_m_minFontSize_82() const { return ___m_minFontSize_82; }
	inline float* get_address_of_m_minFontSize_82() { return &___m_minFontSize_82; }
	inline void set_m_minFontSize_82(float value)
	{
		___m_minFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_83)); }
	inline int32_t get_m_AutoSizeIterationCount_83() const { return ___m_AutoSizeIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_83() { return &___m_AutoSizeIterationCount_83; }
	inline void set_m_AutoSizeIterationCount_83(int32_t value)
	{
		___m_AutoSizeIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_84)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_84() const { return ___m_AutoSizeMaxIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_84() { return &___m_AutoSizeMaxIterationCount_84; }
	inline void set_m_AutoSizeMaxIterationCount_84(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_85)); }
	inline bool get_m_IsAutoSizePointSizeSet_85() const { return ___m_IsAutoSizePointSizeSet_85; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_85() { return &___m_IsAutoSizePointSizeSet_85; }
	inline void set_m_IsAutoSizePointSizeSet_85(bool value)
	{
		___m_IsAutoSizePointSizeSet_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_86)); }
	inline float get_m_fontSizeMin_86() const { return ___m_fontSizeMin_86; }
	inline float* get_address_of_m_fontSizeMin_86() { return &___m_fontSizeMin_86; }
	inline void set_m_fontSizeMin_86(float value)
	{
		___m_fontSizeMin_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_87)); }
	inline float get_m_fontSizeMax_87() const { return ___m_fontSizeMax_87; }
	inline float* get_address_of_m_fontSizeMax_87() { return &___m_fontSizeMax_87; }
	inline void set_m_fontSizeMax_87(float value)
	{
		___m_fontSizeMax_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_88)); }
	inline int32_t get_m_fontStyle_88() const { return ___m_fontStyle_88; }
	inline int32_t* get_address_of_m_fontStyle_88() { return &___m_fontStyle_88; }
	inline void set_m_fontStyle_88(int32_t value)
	{
		___m_fontStyle_88 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_89)); }
	inline int32_t get_m_FontStyleInternal_89() const { return ___m_FontStyleInternal_89; }
	inline int32_t* get_address_of_m_FontStyleInternal_89() { return &___m_FontStyleInternal_89; }
	inline void set_m_FontStyleInternal_89(int32_t value)
	{
		___m_FontStyleInternal_89 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_90)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_90() const { return ___m_fontStyleStack_90; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_90() { return &___m_fontStyleStack_90; }
	inline void set_m_fontStyleStack_90(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_90 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_91)); }
	inline bool get_m_isUsingBold_91() const { return ___m_isUsingBold_91; }
	inline bool* get_address_of_m_isUsingBold_91() { return &___m_isUsingBold_91; }
	inline void set_m_isUsingBold_91(bool value)
	{
		___m_isUsingBold_91 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_92)); }
	inline int32_t get_m_HorizontalAlignment_92() const { return ___m_HorizontalAlignment_92; }
	inline int32_t* get_address_of_m_HorizontalAlignment_92() { return &___m_HorizontalAlignment_92; }
	inline void set_m_HorizontalAlignment_92(int32_t value)
	{
		___m_HorizontalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_93)); }
	inline int32_t get_m_VerticalAlignment_93() const { return ___m_VerticalAlignment_93; }
	inline int32_t* get_address_of_m_VerticalAlignment_93() { return &___m_VerticalAlignment_93; }
	inline void set_m_VerticalAlignment_93(int32_t value)
	{
		___m_VerticalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_94)); }
	inline int32_t get_m_textAlignment_94() const { return ___m_textAlignment_94; }
	inline int32_t* get_address_of_m_textAlignment_94() { return &___m_textAlignment_94; }
	inline void set_m_textAlignment_94(int32_t value)
	{
		___m_textAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_95)); }
	inline int32_t get_m_lineJustification_95() const { return ___m_lineJustification_95; }
	inline int32_t* get_address_of_m_lineJustification_95() { return &___m_lineJustification_95; }
	inline void set_m_lineJustification_95(int32_t value)
	{
		___m_lineJustification_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_96)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_96() const { return ___m_lineJustificationStack_96; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_96() { return &___m_lineJustificationStack_96; }
	inline void set_m_lineJustificationStack_96(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_96 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_96))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_97)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_97() const { return ___m_textContainerLocalCorners_97; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_97() { return &___m_textContainerLocalCorners_97; }
	inline void set_m_textContainerLocalCorners_97(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_97), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_98)); }
	inline float get_m_characterSpacing_98() const { return ___m_characterSpacing_98; }
	inline float* get_address_of_m_characterSpacing_98() { return &___m_characterSpacing_98; }
	inline void set_m_characterSpacing_98(float value)
	{
		___m_characterSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_99)); }
	inline float get_m_cSpacing_99() const { return ___m_cSpacing_99; }
	inline float* get_address_of_m_cSpacing_99() { return &___m_cSpacing_99; }
	inline void set_m_cSpacing_99(float value)
	{
		___m_cSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_100)); }
	inline float get_m_monoSpacing_100() const { return ___m_monoSpacing_100; }
	inline float* get_address_of_m_monoSpacing_100() { return &___m_monoSpacing_100; }
	inline void set_m_monoSpacing_100(float value)
	{
		___m_monoSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_101)); }
	inline float get_m_wordSpacing_101() const { return ___m_wordSpacing_101; }
	inline float* get_address_of_m_wordSpacing_101() { return &___m_wordSpacing_101; }
	inline void set_m_wordSpacing_101(float value)
	{
		___m_wordSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_102)); }
	inline float get_m_lineSpacing_102() const { return ___m_lineSpacing_102; }
	inline float* get_address_of_m_lineSpacing_102() { return &___m_lineSpacing_102; }
	inline void set_m_lineSpacing_102(float value)
	{
		___m_lineSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_103)); }
	inline float get_m_lineSpacingDelta_103() const { return ___m_lineSpacingDelta_103; }
	inline float* get_address_of_m_lineSpacingDelta_103() { return &___m_lineSpacingDelta_103; }
	inline void set_m_lineSpacingDelta_103(float value)
	{
		___m_lineSpacingDelta_103 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_104)); }
	inline float get_m_lineHeight_104() const { return ___m_lineHeight_104; }
	inline float* get_address_of_m_lineHeight_104() { return &___m_lineHeight_104; }
	inline void set_m_lineHeight_104(float value)
	{
		___m_lineHeight_104 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_105)); }
	inline bool get_m_IsDrivenLineSpacing_105() const { return ___m_IsDrivenLineSpacing_105; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_105() { return &___m_IsDrivenLineSpacing_105; }
	inline void set_m_IsDrivenLineSpacing_105(bool value)
	{
		___m_IsDrivenLineSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_106)); }
	inline float get_m_lineSpacingMax_106() const { return ___m_lineSpacingMax_106; }
	inline float* get_address_of_m_lineSpacingMax_106() { return &___m_lineSpacingMax_106; }
	inline void set_m_lineSpacingMax_106(float value)
	{
		___m_lineSpacingMax_106 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_107)); }
	inline float get_m_paragraphSpacing_107() const { return ___m_paragraphSpacing_107; }
	inline float* get_address_of_m_paragraphSpacing_107() { return &___m_paragraphSpacing_107; }
	inline void set_m_paragraphSpacing_107(float value)
	{
		___m_paragraphSpacing_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_108)); }
	inline float get_m_charWidthMaxAdj_108() const { return ___m_charWidthMaxAdj_108; }
	inline float* get_address_of_m_charWidthMaxAdj_108() { return &___m_charWidthMaxAdj_108; }
	inline void set_m_charWidthMaxAdj_108(float value)
	{
		___m_charWidthMaxAdj_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_109)); }
	inline float get_m_charWidthAdjDelta_109() const { return ___m_charWidthAdjDelta_109; }
	inline float* get_address_of_m_charWidthAdjDelta_109() { return &___m_charWidthAdjDelta_109; }
	inline void set_m_charWidthAdjDelta_109(float value)
	{
		___m_charWidthAdjDelta_109 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_110)); }
	inline bool get_m_enableWordWrapping_110() const { return ___m_enableWordWrapping_110; }
	inline bool* get_address_of_m_enableWordWrapping_110() { return &___m_enableWordWrapping_110; }
	inline void set_m_enableWordWrapping_110(bool value)
	{
		___m_enableWordWrapping_110 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_111)); }
	inline bool get_m_isCharacterWrappingEnabled_111() const { return ___m_isCharacterWrappingEnabled_111; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_111() { return &___m_isCharacterWrappingEnabled_111; }
	inline void set_m_isCharacterWrappingEnabled_111(bool value)
	{
		___m_isCharacterWrappingEnabled_111 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_112)); }
	inline bool get_m_isNonBreakingSpace_112() const { return ___m_isNonBreakingSpace_112; }
	inline bool* get_address_of_m_isNonBreakingSpace_112() { return &___m_isNonBreakingSpace_112; }
	inline void set_m_isNonBreakingSpace_112(bool value)
	{
		___m_isNonBreakingSpace_112 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_113)); }
	inline bool get_m_isIgnoringAlignment_113() const { return ___m_isIgnoringAlignment_113; }
	inline bool* get_address_of_m_isIgnoringAlignment_113() { return &___m_isIgnoringAlignment_113; }
	inline void set_m_isIgnoringAlignment_113(bool value)
	{
		___m_isIgnoringAlignment_113 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_114)); }
	inline float get_m_wordWrappingRatios_114() const { return ___m_wordWrappingRatios_114; }
	inline float* get_address_of_m_wordWrappingRatios_114() { return &___m_wordWrappingRatios_114; }
	inline void set_m_wordWrappingRatios_114(float value)
	{
		___m_wordWrappingRatios_114 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_115)); }
	inline int32_t get_m_overflowMode_115() const { return ___m_overflowMode_115; }
	inline int32_t* get_address_of_m_overflowMode_115() { return &___m_overflowMode_115; }
	inline void set_m_overflowMode_115(int32_t value)
	{
		___m_overflowMode_115 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_116)); }
	inline int32_t get_m_firstOverflowCharacterIndex_116() const { return ___m_firstOverflowCharacterIndex_116; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_116() { return &___m_firstOverflowCharacterIndex_116; }
	inline void set_m_firstOverflowCharacterIndex_116(int32_t value)
	{
		___m_firstOverflowCharacterIndex_116 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_117() const { return ___m_linkedTextComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_117() { return &___m_linkedTextComponent_117; }
	inline void set_m_linkedTextComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_118() const { return ___parentLinkedComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_118() { return &___parentLinkedComponent_118; }
	inline void set_parentLinkedComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_119)); }
	inline bool get_m_isTextTruncated_119() const { return ___m_isTextTruncated_119; }
	inline bool* get_address_of_m_isTextTruncated_119() { return &___m_isTextTruncated_119; }
	inline void set_m_isTextTruncated_119(bool value)
	{
		___m_isTextTruncated_119 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_120)); }
	inline bool get_m_enableKerning_120() const { return ___m_enableKerning_120; }
	inline bool* get_address_of_m_enableKerning_120() { return &___m_enableKerning_120; }
	inline void set_m_enableKerning_120(bool value)
	{
		___m_enableKerning_120 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_121)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_121() const { return ___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_121() { return &___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_121(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_121 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_122)); }
	inline bool get_m_enableExtraPadding_122() const { return ___m_enableExtraPadding_122; }
	inline bool* get_address_of_m_enableExtraPadding_122() { return &___m_enableExtraPadding_122; }
	inline void set_m_enableExtraPadding_122(bool value)
	{
		___m_enableExtraPadding_122 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_123)); }
	inline bool get_checkPaddingRequired_123() const { return ___checkPaddingRequired_123; }
	inline bool* get_address_of_checkPaddingRequired_123() { return &___checkPaddingRequired_123; }
	inline void set_checkPaddingRequired_123(bool value)
	{
		___checkPaddingRequired_123 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_124)); }
	inline bool get_m_isRichText_124() const { return ___m_isRichText_124; }
	inline bool* get_address_of_m_isRichText_124() { return &___m_isRichText_124; }
	inline void set_m_isRichText_124(bool value)
	{
		___m_isRichText_124 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_125)); }
	inline bool get_m_parseCtrlCharacters_125() const { return ___m_parseCtrlCharacters_125; }
	inline bool* get_address_of_m_parseCtrlCharacters_125() { return &___m_parseCtrlCharacters_125; }
	inline void set_m_parseCtrlCharacters_125(bool value)
	{
		___m_parseCtrlCharacters_125 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_126)); }
	inline bool get_m_isOverlay_126() const { return ___m_isOverlay_126; }
	inline bool* get_address_of_m_isOverlay_126() { return &___m_isOverlay_126; }
	inline void set_m_isOverlay_126(bool value)
	{
		___m_isOverlay_126 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_127)); }
	inline bool get_m_isOrthographic_127() const { return ___m_isOrthographic_127; }
	inline bool* get_address_of_m_isOrthographic_127() { return &___m_isOrthographic_127; }
	inline void set_m_isOrthographic_127(bool value)
	{
		___m_isOrthographic_127 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_128)); }
	inline bool get_m_isCullingEnabled_128() const { return ___m_isCullingEnabled_128; }
	inline bool* get_address_of_m_isCullingEnabled_128() { return &___m_isCullingEnabled_128; }
	inline void set_m_isCullingEnabled_128(bool value)
	{
		___m_isCullingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_129)); }
	inline bool get_m_isMaskingEnabled_129() const { return ___m_isMaskingEnabled_129; }
	inline bool* get_address_of_m_isMaskingEnabled_129() { return &___m_isMaskingEnabled_129; }
	inline void set_m_isMaskingEnabled_129(bool value)
	{
		___m_isMaskingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_130)); }
	inline bool get_isMaskUpdateRequired_130() const { return ___isMaskUpdateRequired_130; }
	inline bool* get_address_of_isMaskUpdateRequired_130() { return &___isMaskUpdateRequired_130; }
	inline void set_isMaskUpdateRequired_130(bool value)
	{
		___isMaskUpdateRequired_130 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_131)); }
	inline bool get_m_ignoreCulling_131() const { return ___m_ignoreCulling_131; }
	inline bool* get_address_of_m_ignoreCulling_131() { return &___m_ignoreCulling_131; }
	inline void set_m_ignoreCulling_131(bool value)
	{
		___m_ignoreCulling_131 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_132)); }
	inline int32_t get_m_horizontalMapping_132() const { return ___m_horizontalMapping_132; }
	inline int32_t* get_address_of_m_horizontalMapping_132() { return &___m_horizontalMapping_132; }
	inline void set_m_horizontalMapping_132(int32_t value)
	{
		___m_horizontalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_133)); }
	inline int32_t get_m_verticalMapping_133() const { return ___m_verticalMapping_133; }
	inline int32_t* get_address_of_m_verticalMapping_133() { return &___m_verticalMapping_133; }
	inline void set_m_verticalMapping_133(int32_t value)
	{
		___m_verticalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_134)); }
	inline float get_m_uvLineOffset_134() const { return ___m_uvLineOffset_134; }
	inline float* get_address_of_m_uvLineOffset_134() { return &___m_uvLineOffset_134; }
	inline void set_m_uvLineOffset_134(float value)
	{
		___m_uvLineOffset_134 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_135)); }
	inline int32_t get_m_renderMode_135() const { return ___m_renderMode_135; }
	inline int32_t* get_address_of_m_renderMode_135() { return &___m_renderMode_135; }
	inline void set_m_renderMode_135(int32_t value)
	{
		___m_renderMode_135 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_136)); }
	inline int32_t get_m_geometrySortingOrder_136() const { return ___m_geometrySortingOrder_136; }
	inline int32_t* get_address_of_m_geometrySortingOrder_136() { return &___m_geometrySortingOrder_136; }
	inline void set_m_geometrySortingOrder_136(int32_t value)
	{
		___m_geometrySortingOrder_136 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_137)); }
	inline bool get_m_IsTextObjectScaleStatic_137() const { return ___m_IsTextObjectScaleStatic_137; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_137() { return &___m_IsTextObjectScaleStatic_137; }
	inline void set_m_IsTextObjectScaleStatic_137(bool value)
	{
		___m_IsTextObjectScaleStatic_137 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_138)); }
	inline bool get_m_VertexBufferAutoSizeReduction_138() const { return ___m_VertexBufferAutoSizeReduction_138; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_138() { return &___m_VertexBufferAutoSizeReduction_138; }
	inline void set_m_VertexBufferAutoSizeReduction_138(bool value)
	{
		___m_VertexBufferAutoSizeReduction_138 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_139)); }
	inline int32_t get_m_firstVisibleCharacter_139() const { return ___m_firstVisibleCharacter_139; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_139() { return &___m_firstVisibleCharacter_139; }
	inline void set_m_firstVisibleCharacter_139(int32_t value)
	{
		___m_firstVisibleCharacter_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_140)); }
	inline int32_t get_m_maxVisibleCharacters_140() const { return ___m_maxVisibleCharacters_140; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_140() { return &___m_maxVisibleCharacters_140; }
	inline void set_m_maxVisibleCharacters_140(int32_t value)
	{
		___m_maxVisibleCharacters_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_141)); }
	inline int32_t get_m_maxVisibleWords_141() const { return ___m_maxVisibleWords_141; }
	inline int32_t* get_address_of_m_maxVisibleWords_141() { return &___m_maxVisibleWords_141; }
	inline void set_m_maxVisibleWords_141(int32_t value)
	{
		___m_maxVisibleWords_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_142)); }
	inline int32_t get_m_maxVisibleLines_142() const { return ___m_maxVisibleLines_142; }
	inline int32_t* get_address_of_m_maxVisibleLines_142() { return &___m_maxVisibleLines_142; }
	inline void set_m_maxVisibleLines_142(int32_t value)
	{
		___m_maxVisibleLines_142 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_143)); }
	inline bool get_m_useMaxVisibleDescender_143() const { return ___m_useMaxVisibleDescender_143; }
	inline bool* get_address_of_m_useMaxVisibleDescender_143() { return &___m_useMaxVisibleDescender_143; }
	inline void set_m_useMaxVisibleDescender_143(bool value)
	{
		___m_useMaxVisibleDescender_143 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_144)); }
	inline int32_t get_m_pageToDisplay_144() const { return ___m_pageToDisplay_144; }
	inline int32_t* get_address_of_m_pageToDisplay_144() { return &___m_pageToDisplay_144; }
	inline void set_m_pageToDisplay_144(int32_t value)
	{
		___m_pageToDisplay_144 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_145)); }
	inline bool get_m_isNewPage_145() const { return ___m_isNewPage_145; }
	inline bool* get_address_of_m_isNewPage_145() { return &___m_isNewPage_145; }
	inline void set_m_isNewPage_145(bool value)
	{
		___m_isNewPage_145 = value;
	}

	inline static int32_t get_offset_of_m_margin_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_146)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_146() const { return ___m_margin_146; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_146() { return &___m_margin_146; }
	inline void set_m_margin_146(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_146 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_147)); }
	inline float get_m_marginLeft_147() const { return ___m_marginLeft_147; }
	inline float* get_address_of_m_marginLeft_147() { return &___m_marginLeft_147; }
	inline void set_m_marginLeft_147(float value)
	{
		___m_marginLeft_147 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_148)); }
	inline float get_m_marginRight_148() const { return ___m_marginRight_148; }
	inline float* get_address_of_m_marginRight_148() { return &___m_marginRight_148; }
	inline void set_m_marginRight_148(float value)
	{
		___m_marginRight_148 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_149)); }
	inline float get_m_marginWidth_149() const { return ___m_marginWidth_149; }
	inline float* get_address_of_m_marginWidth_149() { return &___m_marginWidth_149; }
	inline void set_m_marginWidth_149(float value)
	{
		___m_marginWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_150)); }
	inline float get_m_marginHeight_150() const { return ___m_marginHeight_150; }
	inline float* get_address_of_m_marginHeight_150() { return &___m_marginHeight_150; }
	inline void set_m_marginHeight_150(float value)
	{
		___m_marginHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_width_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_151)); }
	inline float get_m_width_151() const { return ___m_width_151; }
	inline float* get_address_of_m_width_151() { return &___m_width_151; }
	inline void set_m_width_151(float value)
	{
		___m_width_151 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_152)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_152() const { return ___m_textInfo_152; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_152() { return &___m_textInfo_152; }
	inline void set_m_textInfo_152(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_152), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_153)); }
	inline bool get_m_havePropertiesChanged_153() const { return ___m_havePropertiesChanged_153; }
	inline bool* get_address_of_m_havePropertiesChanged_153() { return &___m_havePropertiesChanged_153; }
	inline void set_m_havePropertiesChanged_153(bool value)
	{
		___m_havePropertiesChanged_153 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_154)); }
	inline bool get_m_isUsingLegacyAnimationComponent_154() const { return ___m_isUsingLegacyAnimationComponent_154; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_154() { return &___m_isUsingLegacyAnimationComponent_154; }
	inline void set_m_isUsingLegacyAnimationComponent_154(bool value)
	{
		___m_isUsingLegacyAnimationComponent_154 = value;
	}

	inline static int32_t get_offset_of_m_transform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_155)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_155() const { return ___m_transform_155; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_155() { return &___m_transform_155; }
	inline void set_m_transform_155(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_156)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_156() const { return ___m_rectTransform_156; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_156() { return &___m_rectTransform_156; }
	inline void set_m_rectTransform_156(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_157() const { return ___m_PreviousRectTransformSize_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_157() { return &___m_PreviousRectTransformSize_157; }
	inline void set_m_PreviousRectTransformSize_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_157 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_158() const { return ___m_PreviousPivotPosition_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_158() { return &___m_PreviousPivotPosition_158; }
	inline void set_m_PreviousPivotPosition_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_158 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_159)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_159() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return &___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_159(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_159 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_160)); }
	inline bool get_m_autoSizeTextContainer_160() const { return ___m_autoSizeTextContainer_160; }
	inline bool* get_address_of_m_autoSizeTextContainer_160() { return &___m_autoSizeTextContainer_160; }
	inline void set_m_autoSizeTextContainer_160(bool value)
	{
		___m_autoSizeTextContainer_160 = value;
	}

	inline static int32_t get_offset_of_m_mesh_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_161)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_161() const { return ___m_mesh_161; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_161() { return &___m_mesh_161; }
	inline void set_m_mesh_161(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_161), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_162)); }
	inline bool get_m_isVolumetricText_162() const { return ___m_isVolumetricText_162; }
	inline bool* get_address_of_m_isVolumetricText_162() { return &___m_isVolumetricText_162; }
	inline void set_m_isVolumetricText_162(bool value)
	{
		___m_isVolumetricText_162 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_165)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_165() const { return ___OnPreRenderText_165; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_165() { return &___OnPreRenderText_165; }
	inline void set_OnPreRenderText_165(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_166)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_166() const { return ___m_spriteAnimator_166; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_166() { return &___m_spriteAnimator_166; }
	inline void set_m_spriteAnimator_166(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_167)); }
	inline float get_m_flexibleHeight_167() const { return ___m_flexibleHeight_167; }
	inline float* get_address_of_m_flexibleHeight_167() { return &___m_flexibleHeight_167; }
	inline void set_m_flexibleHeight_167(float value)
	{
		___m_flexibleHeight_167 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_168)); }
	inline float get_m_flexibleWidth_168() const { return ___m_flexibleWidth_168; }
	inline float* get_address_of_m_flexibleWidth_168() { return &___m_flexibleWidth_168; }
	inline void set_m_flexibleWidth_168(float value)
	{
		___m_flexibleWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_169)); }
	inline float get_m_minWidth_169() const { return ___m_minWidth_169; }
	inline float* get_address_of_m_minWidth_169() { return &___m_minWidth_169; }
	inline void set_m_minWidth_169(float value)
	{
		___m_minWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_170)); }
	inline float get_m_minHeight_170() const { return ___m_minHeight_170; }
	inline float* get_address_of_m_minHeight_170() { return &___m_minHeight_170; }
	inline void set_m_minHeight_170(float value)
	{
		___m_minHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_171)); }
	inline float get_m_maxWidth_171() const { return ___m_maxWidth_171; }
	inline float* get_address_of_m_maxWidth_171() { return &___m_maxWidth_171; }
	inline void set_m_maxWidth_171(float value)
	{
		___m_maxWidth_171 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_172)); }
	inline float get_m_maxHeight_172() const { return ___m_maxHeight_172; }
	inline float* get_address_of_m_maxHeight_172() { return &___m_maxHeight_172; }
	inline void set_m_maxHeight_172(float value)
	{
		___m_maxHeight_172 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_173)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_173() const { return ___m_LayoutElement_173; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_173() { return &___m_LayoutElement_173; }
	inline void set_m_LayoutElement_173(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_173 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_173), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_174)); }
	inline float get_m_preferredWidth_174() const { return ___m_preferredWidth_174; }
	inline float* get_address_of_m_preferredWidth_174() { return &___m_preferredWidth_174; }
	inline void set_m_preferredWidth_174(float value)
	{
		___m_preferredWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_175)); }
	inline float get_m_renderedWidth_175() const { return ___m_renderedWidth_175; }
	inline float* get_address_of_m_renderedWidth_175() { return &___m_renderedWidth_175; }
	inline void set_m_renderedWidth_175(float value)
	{
		___m_renderedWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_176)); }
	inline bool get_m_isPreferredWidthDirty_176() const { return ___m_isPreferredWidthDirty_176; }
	inline bool* get_address_of_m_isPreferredWidthDirty_176() { return &___m_isPreferredWidthDirty_176; }
	inline void set_m_isPreferredWidthDirty_176(bool value)
	{
		___m_isPreferredWidthDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_177)); }
	inline float get_m_preferredHeight_177() const { return ___m_preferredHeight_177; }
	inline float* get_address_of_m_preferredHeight_177() { return &___m_preferredHeight_177; }
	inline void set_m_preferredHeight_177(float value)
	{
		___m_preferredHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_178)); }
	inline float get_m_renderedHeight_178() const { return ___m_renderedHeight_178; }
	inline float* get_address_of_m_renderedHeight_178() { return &___m_renderedHeight_178; }
	inline void set_m_renderedHeight_178(float value)
	{
		___m_renderedHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_179)); }
	inline bool get_m_isPreferredHeightDirty_179() const { return ___m_isPreferredHeightDirty_179; }
	inline bool* get_address_of_m_isPreferredHeightDirty_179() { return &___m_isPreferredHeightDirty_179; }
	inline void set_m_isPreferredHeightDirty_179(bool value)
	{
		___m_isPreferredHeightDirty_179 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_180)); }
	inline bool get_m_isCalculatingPreferredValues_180() const { return ___m_isCalculatingPreferredValues_180; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_180() { return &___m_isCalculatingPreferredValues_180; }
	inline void set_m_isCalculatingPreferredValues_180(bool value)
	{
		___m_isCalculatingPreferredValues_180 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_181)); }
	inline int32_t get_m_layoutPriority_181() const { return ___m_layoutPriority_181; }
	inline int32_t* get_address_of_m_layoutPriority_181() { return &___m_layoutPriority_181; }
	inline void set_m_layoutPriority_181(int32_t value)
	{
		___m_layoutPriority_181 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_182)); }
	inline bool get_m_isLayoutDirty_182() const { return ___m_isLayoutDirty_182; }
	inline bool* get_address_of_m_isLayoutDirty_182() { return &___m_isLayoutDirty_182; }
	inline void set_m_isLayoutDirty_182(bool value)
	{
		___m_isLayoutDirty_182 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_183)); }
	inline bool get_m_isAwake_183() const { return ___m_isAwake_183; }
	inline bool* get_address_of_m_isAwake_183() { return &___m_isAwake_183; }
	inline void set_m_isAwake_183(bool value)
	{
		___m_isAwake_183 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_184)); }
	inline bool get_m_isWaitingOnResourceLoad_184() const { return ___m_isWaitingOnResourceLoad_184; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_184() { return &___m_isWaitingOnResourceLoad_184; }
	inline void set_m_isWaitingOnResourceLoad_184(bool value)
	{
		___m_isWaitingOnResourceLoad_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_195)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_197)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_197() const { return ___m_TextProcessingArray_197; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_197() { return &___m_TextProcessingArray_197; }
	inline void set_m_TextProcessingArray_197(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_198)); }
	inline int32_t get_m_InternalTextProcessingArraySize_198() const { return ___m_InternalTextProcessingArraySize_198; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_198() { return &___m_InternalTextProcessingArraySize_198; }
	inline void set_m_InternalTextProcessingArraySize_198(int32_t value)
	{
		___m_InternalTextProcessingArraySize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_200)); }
	inline int32_t get_m_totalCharacterCount_200() const { return ___m_totalCharacterCount_200; }
	inline int32_t* get_address_of_m_totalCharacterCount_200() { return &___m_totalCharacterCount_200; }
	inline void set_m_totalCharacterCount_200(int32_t value)
	{
		___m_totalCharacterCount_200 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_207)); }
	inline int32_t get_m_characterCount_207() const { return ___m_characterCount_207; }
	inline int32_t* get_address_of_m_characterCount_207() { return &___m_characterCount_207; }
	inline void set_m_characterCount_207(int32_t value)
	{
		___m_characterCount_207 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_208)); }
	inline int32_t get_m_firstCharacterOfLine_208() const { return ___m_firstCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_208() { return &___m_firstCharacterOfLine_208; }
	inline void set_m_firstCharacterOfLine_208(int32_t value)
	{
		___m_firstCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_209)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_209() const { return ___m_firstVisibleCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_209() { return &___m_firstVisibleCharacterOfLine_209; }
	inline void set_m_firstVisibleCharacterOfLine_209(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_210)); }
	inline int32_t get_m_lastCharacterOfLine_210() const { return ___m_lastCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_210() { return &___m_lastCharacterOfLine_210; }
	inline void set_m_lastCharacterOfLine_210(int32_t value)
	{
		___m_lastCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_211)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_211() const { return ___m_lastVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_211() { return &___m_lastVisibleCharacterOfLine_211; }
	inline void set_m_lastVisibleCharacterOfLine_211(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_212)); }
	inline int32_t get_m_lineNumber_212() const { return ___m_lineNumber_212; }
	inline int32_t* get_address_of_m_lineNumber_212() { return &___m_lineNumber_212; }
	inline void set_m_lineNumber_212(int32_t value)
	{
		___m_lineNumber_212 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_213)); }
	inline int32_t get_m_lineVisibleCharacterCount_213() const { return ___m_lineVisibleCharacterCount_213; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_213() { return &___m_lineVisibleCharacterCount_213; }
	inline void set_m_lineVisibleCharacterCount_213(int32_t value)
	{
		___m_lineVisibleCharacterCount_213 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_214)); }
	inline int32_t get_m_pageNumber_214() const { return ___m_pageNumber_214; }
	inline int32_t* get_address_of_m_pageNumber_214() { return &___m_pageNumber_214; }
	inline void set_m_pageNumber_214(int32_t value)
	{
		___m_pageNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_215)); }
	inline float get_m_PageAscender_215() const { return ___m_PageAscender_215; }
	inline float* get_address_of_m_PageAscender_215() { return &___m_PageAscender_215; }
	inline void set_m_PageAscender_215(float value)
	{
		___m_PageAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_216)); }
	inline float get_m_maxTextAscender_216() const { return ___m_maxTextAscender_216; }
	inline float* get_address_of_m_maxTextAscender_216() { return &___m_maxTextAscender_216; }
	inline void set_m_maxTextAscender_216(float value)
	{
		___m_maxTextAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_217)); }
	inline float get_m_maxCapHeight_217() const { return ___m_maxCapHeight_217; }
	inline float* get_address_of_m_maxCapHeight_217() { return &___m_maxCapHeight_217; }
	inline void set_m_maxCapHeight_217(float value)
	{
		___m_maxCapHeight_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_218)); }
	inline float get_m_ElementAscender_218() const { return ___m_ElementAscender_218; }
	inline float* get_address_of_m_ElementAscender_218() { return &___m_ElementAscender_218; }
	inline void set_m_ElementAscender_218(float value)
	{
		___m_ElementAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_219)); }
	inline float get_m_ElementDescender_219() const { return ___m_ElementDescender_219; }
	inline float* get_address_of_m_ElementDescender_219() { return &___m_ElementDescender_219; }
	inline void set_m_ElementDescender_219(float value)
	{
		___m_ElementDescender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_220)); }
	inline float get_m_maxLineAscender_220() const { return ___m_maxLineAscender_220; }
	inline float* get_address_of_m_maxLineAscender_220() { return &___m_maxLineAscender_220; }
	inline void set_m_maxLineAscender_220(float value)
	{
		___m_maxLineAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_221)); }
	inline float get_m_maxLineDescender_221() const { return ___m_maxLineDescender_221; }
	inline float* get_address_of_m_maxLineDescender_221() { return &___m_maxLineDescender_221; }
	inline void set_m_maxLineDescender_221(float value)
	{
		___m_maxLineDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_222)); }
	inline float get_m_startOfLineAscender_222() const { return ___m_startOfLineAscender_222; }
	inline float* get_address_of_m_startOfLineAscender_222() { return &___m_startOfLineAscender_222; }
	inline void set_m_startOfLineAscender_222(float value)
	{
		___m_startOfLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_223)); }
	inline float get_m_startOfLineDescender_223() const { return ___m_startOfLineDescender_223; }
	inline float* get_address_of_m_startOfLineDescender_223() { return &___m_startOfLineDescender_223; }
	inline void set_m_startOfLineDescender_223(float value)
	{
		___m_startOfLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_224)); }
	inline float get_m_lineOffset_224() const { return ___m_lineOffset_224; }
	inline float* get_address_of_m_lineOffset_224() { return &___m_lineOffset_224; }
	inline void set_m_lineOffset_224(float value)
	{
		___m_lineOffset_224 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_225)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_225() const { return ___m_meshExtents_225; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_225() { return &___m_meshExtents_225; }
	inline void set_m_meshExtents_225(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_225 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_226)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_226() const { return ___m_htmlColor_226; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_226() { return &___m_htmlColor_226; }
	inline void set_m_htmlColor_226(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_226 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_227)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_227() const { return ___m_colorStack_227; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_227() { return &___m_colorStack_227; }
	inline void set_m_colorStack_227(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_228() const { return ___m_underlineColorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_228() { return &___m_underlineColorStack_228; }
	inline void set_m_underlineColorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_229() const { return ___m_strikethroughColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_229() { return &___m_strikethroughColorStack_229; }
	inline void set_m_strikethroughColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_230)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_230() const { return ___m_HighlightStateStack_230; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_230() { return &___m_HighlightStateStack_230; }
	inline void set_m_HighlightStateStack_230(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_231)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_231() const { return ___m_colorGradientPreset_231; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_231() { return &___m_colorGradientPreset_231; }
	inline void set_m_colorGradientPreset_231(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_231 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_231), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_232)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_232() const { return ___m_colorGradientStack_232; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_232() { return &___m_colorGradientStack_232; }
	inline void set_m_colorGradientStack_232(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_233)); }
	inline bool get_m_colorGradientPresetIsTinted_233() const { return ___m_colorGradientPresetIsTinted_233; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_233() { return &___m_colorGradientPresetIsTinted_233; }
	inline void set_m_colorGradientPresetIsTinted_233(bool value)
	{
		___m_colorGradientPresetIsTinted_233 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_234)); }
	inline float get_m_tabSpacing_234() const { return ___m_tabSpacing_234; }
	inline float* get_address_of_m_tabSpacing_234() { return &___m_tabSpacing_234; }
	inline void set_m_tabSpacing_234(float value)
	{
		___m_tabSpacing_234 = value;
	}

	inline static int32_t get_offset_of_m_spacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_235)); }
	inline float get_m_spacing_235() const { return ___m_spacing_235; }
	inline float* get_address_of_m_spacing_235() { return &___m_spacing_235; }
	inline void set_m_spacing_235(float value)
	{
		___m_spacing_235 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_236)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_236() const { return ___m_TextStyleStacks_236; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_236() { return &___m_TextStyleStacks_236; }
	inline void set_m_TextStyleStacks_236(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_236 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_236), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_237)); }
	inline int32_t get_m_TextStyleStackDepth_237() const { return ___m_TextStyleStackDepth_237; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_237() { return &___m_TextStyleStackDepth_237; }
	inline void set_m_TextStyleStackDepth_237(int32_t value)
	{
		___m_TextStyleStackDepth_237 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_238)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_238() const { return ___m_ItalicAngleStack_238; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_238() { return &___m_ItalicAngleStack_238; }
	inline void set_m_ItalicAngleStack_238(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_238 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_238))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_239)); }
	inline int32_t get_m_ItalicAngle_239() const { return ___m_ItalicAngle_239; }
	inline int32_t* get_address_of_m_ItalicAngle_239() { return &___m_ItalicAngle_239; }
	inline void set_m_ItalicAngle_239(int32_t value)
	{
		___m_ItalicAngle_239 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_240)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_240() const { return ___m_actionStack_240; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_240() { return &___m_actionStack_240; }
	inline void set_m_actionStack_240(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_241)); }
	inline float get_m_padding_241() const { return ___m_padding_241; }
	inline float* get_address_of_m_padding_241() { return &___m_padding_241; }
	inline void set_m_padding_241(float value)
	{
		___m_padding_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_242)); }
	inline float get_m_baselineOffset_242() const { return ___m_baselineOffset_242; }
	inline float* get_address_of_m_baselineOffset_242() { return &___m_baselineOffset_242; }
	inline void set_m_baselineOffset_242(float value)
	{
		___m_baselineOffset_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_243)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_243() const { return ___m_baselineOffsetStack_243; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_243() { return &___m_baselineOffsetStack_243; }
	inline void set_m_baselineOffsetStack_243(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_244)); }
	inline float get_m_xAdvance_244() const { return ___m_xAdvance_244; }
	inline float* get_address_of_m_xAdvance_244() { return &___m_xAdvance_244; }
	inline void set_m_xAdvance_244(float value)
	{
		___m_xAdvance_244 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_245)); }
	inline int32_t get_m_textElementType_245() const { return ___m_textElementType_245; }
	inline int32_t* get_address_of_m_textElementType_245() { return &___m_textElementType_245; }
	inline void set_m_textElementType_245(int32_t value)
	{
		___m_textElementType_245 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_246)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_246() const { return ___m_cached_TextElement_246; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_246() { return &___m_cached_TextElement_246; }
	inline void set_m_cached_TextElement_246(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_247)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_247() const { return ___m_Ellipsis_247; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_247() { return &___m_Ellipsis_247; }
	inline void set_m_Ellipsis_247(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_248() const { return ___m_Underline_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_248() { return &___m_Underline_248; }
	inline void set_m_Underline_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_249)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_249() const { return ___m_defaultSpriteAsset_249; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_249() { return &___m_defaultSpriteAsset_249; }
	inline void set_m_defaultSpriteAsset_249(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_250() const { return ___m_currentSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_250() { return &___m_currentSpriteAsset_250; }
	inline void set_m_currentSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_251)); }
	inline int32_t get_m_spriteCount_251() const { return ___m_spriteCount_251; }
	inline int32_t* get_address_of_m_spriteCount_251() { return &___m_spriteCount_251; }
	inline void set_m_spriteCount_251(int32_t value)
	{
		___m_spriteCount_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_252)); }
	inline int32_t get_m_spriteIndex_252() const { return ___m_spriteIndex_252; }
	inline int32_t* get_address_of_m_spriteIndex_252() { return &___m_spriteIndex_252; }
	inline void set_m_spriteIndex_252(int32_t value)
	{
		___m_spriteIndex_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_253)); }
	inline int32_t get_m_spriteAnimationID_253() const { return ___m_spriteAnimationID_253; }
	inline int32_t* get_address_of_m_spriteAnimationID_253() { return &___m_spriteAnimationID_253; }
	inline void set_m_spriteAnimationID_253(int32_t value)
	{
		___m_spriteAnimationID_253 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_257)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_257() const { return ___m_TextBackingArray_257; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_257() { return &___m_TextBackingArray_257; }
	inline void set_m_TextBackingArray_257(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_257 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_257))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_m_materialReferences_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_45)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_45() const { return ___m_materialReferences_45; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_45() { return &___m_materialReferences_45; }
	inline void set_m_materialReferences_45(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_46)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_46() const { return ___m_materialReferenceIndexLookup_46; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_46() { return &___m_materialReferenceIndexLookup_46; }
	inline void set_m_materialReferenceIndexLookup_46(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_47)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_47() const { return ___m_materialReferenceStack_47; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_47() { return &___m_materialReferenceStack_47; }
	inline void set_m_materialReferenceStack_47(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_47))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_55() const { return ___s_colorWhite_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_55() { return &___s_colorWhite_55; }
	inline void set_s_colorWhite_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_55 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_163)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_163() const { return ___OnFontAssetRequest_163; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_163() { return &___OnFontAssetRequest_163; }
	inline void set_OnFontAssetRequest_163(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_164)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_164() const { return ___OnSpriteAssetRequest_164; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_164() { return &___OnSpriteAssetRequest_164; }
	inline void set_OnSpriteAssetRequest_164(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_187)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_201)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_201() const { return ___m_SavedWordWrapState_201; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_201() { return &___m_SavedWordWrapState_201; }
	inline void set_m_SavedWordWrapState_201(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_202() const { return ___m_SavedLineState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_202() { return &___m_SavedLineState_202; }
	inline void set_m_SavedLineState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_203() const { return ___m_SavedEllipsisState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_203() { return &___m_SavedEllipsisState_203; }
	inline void set_m_SavedEllipsisState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_204() const { return ___m_SavedLastValidState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_204() { return &___m_SavedLastValidState_204; }
	inline void set_m_SavedLastValidState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_205() const { return ___m_SavedSoftLineBreakState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_205() { return &___m_SavedSoftLineBreakState_205; }
	inline void set_m_SavedSoftLineBreakState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_206)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_206() const { return ___m_EllipsisInsertionCandidateStack_206; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_206() { return &___m_EllipsisInsertionCandidateStack_206; }
	inline void set_m_EllipsisInsertionCandidateStack_206(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_206))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_254)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_254() const { return ___k_ParseTextMarker_254; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_254() { return &___k_ParseTextMarker_254; }
	inline void set_k_ParseTextMarker_254(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_255() const { return ___k_InsertNewLineMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_255() { return &___k_InsertNewLineMarker_255; }
	inline void set_k_InsertNewLineMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 HMSManagerSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HMSManagerSingleton_1_get_Instance_m56D4517A05A2FA37AC829B27E3D300F347EBC16E_gshared (const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m91E2FBC1191B019C070193A23E95C04571409F8F_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// !0 HMSManagerSingleton`1<HmsPlugin.HMSAdsKitManager>::get_Instance()
inline HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C (const RuntimeMethod* method)
{
	return ((  HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * (*) (const RuntimeMethod*))HMSManagerSingleton_1_get_Instance_m56D4517A05A2FA37AC829B27E3D300F347EBC16E_gshared)(method);
}
// System.Void System.Action`1<HuaweiMobileServices.Ads.Reward>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA (Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void HmsPlugin.HMSAdsKitManager::set_OnRewarded(System.Action`1<HuaweiMobileServices.Ads.Reward>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSAdsKitManager_set_OnRewarded_mFAC15946C8F87AEA568A8DB1C48D276D7D5A9988_inline (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSAdsKitManager::set_OnInterstitialAdClosed(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSAdsKitManager_set_OnInterstitialAdClosed_m25D4DFD03EFE5F86B2D38A09E817A2C5670739F4_inline (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSAdsKitManager::ShowBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSAdsKitManager_ShowBannerAd_mFCC663FD4AEDC8974ABCC432E3AEC66815BDB83C (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSAdsKitManager::HideBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSAdsKitManager_HideBannerAd_m71D58AA0982AEC0775930D132A2F8AE45BE6D9B4 (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GameManager::AddGems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddGems_m26BE2B02F3906E02DB193A91284C6A7D9077E2B8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSAdsKitManager::ShowRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSAdsKitManager_ShowRewardedAd_mFF361EDC6A3F90D7895395E2E9C1B3A96E5B03B7 (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSAdsKitManager::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSAdsKitManager_ShowInterstitialAd_m14C78B6FA30634EA203878CE0B674DA56F5197E4 (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSAdsKitManager::DestroyBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSAdsKitManager_DestroyBannerAd_mE4BAC395296CAE1D577FE79C539E7CD630FAE9AE (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSAdsKitManager::LoadAllAds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSAdsKitManager_LoadAllAds_m00B5AC011C587DD538412A81424102E6077BD24E (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, bool ___hasPurchasedNoAds0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void DestroyCube::PlayDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCube_PlayDestroy_m0D50C674D2AB31B785AF5BEAA03E74FCA59C20A9 (DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m2F02E263F3639B18B0634184BA8FB049F8865FB4 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mA0C47585895B6FEF38E90DA76C77129255B1B7CD (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013 (float ___value0, const RuntimeMethod* method);
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m2660AEEE642894B67FC56B1F93F6E9214D7F3E32 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m95EAC89A5E0385B67514A3BFD1808D5D29A8FD34 (String_t* ___key0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4 (String_t* ___sceneName0, const RuntimeMethod* method);
// !0 HMSManagerSingleton`1<HmsPlugin.HMSIAPManager>::get_Instance()
inline HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE (const RuntimeMethod* method)
{
	return ((  HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * (*) (const RuntimeMethod*))HMSManagerSingleton_1_get_Instance_m56D4517A05A2FA37AC829B27E3D300F347EBC16E_gshared)(method);
}
// System.Void System.Action`1<HuaweiMobileServices.IAP.PurchaseResultInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0F90C09F20CC09BE8D11736A50E12F3B62B45DA1 (Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void HmsPlugin.HMSIAPManager::set_OnBuyProductSuccess(System.Action`1<HuaweiMobileServices.IAP.PurchaseResultInfo>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnBuyProductSuccess_mC47745F958EBE985DD000C825604609597261B61_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * ___value0, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSIAPManager::InitializeIAP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSIAPManager_InitializeIAP_m3C015BA8A95A4E88825F25B1F8E61AA2420F4A8F (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSIAPManager::set_OnInitializeIAPSuccess(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnInitializeIAPSuccess_m4A0D34E7B9D171DE803EB12BD402CDF04AB2BAFD_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<HuaweiMobileServices.Utils.HMSException>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m24A4869AB9A45E46769684F38845CEDECB2B30E5 (Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void HmsPlugin.HMSIAPManager::set_OnInitializeIAPFailure(System.Action`1<HuaweiMobileServices.Utils.HMSException>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnInitializeIAPFailure_m150AEAB5B864BEFA33AC8DCA1B248F051B71A9D2_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void HmsPlugin.HMSIAPManager::set_OnBuyProductFailure(System.Action`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnBuyProductFailure_mB36DA0387AC1F83BDFBCC45D285FCA1C373F0B41_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSIAPManager::PurchaseProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSIAPManager_PurchaseProduct_m22AD5ED53B7FB1ECFF0DE7D3E48CC6992607D084 (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, String_t* ___productId0, const RuntimeMethod* method);
// System.Collections.IEnumerator IAPManager::AfterBuyProductSuccess(HuaweiMobileServices.IAP.PurchaseResultInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IAPManager_AfterBuyProductSuccess_mB828D85C6D95ED958A55A90FFE5B0B591A18D5C2 (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * ___obj0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void IAPManager/<AfterBuyProductSuccess>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterBuyProductSuccessU3Ed__9__ctor_m0F29B8A2FE9C9CB472518F7AEC66A0606D422FDB (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Action`1<HuaweiMobileServices.IAP.OwnedPurchasesResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC (Action_1_t373431775BB3837100220EBC11A360140F6E9857 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t373431775BB3837100220EBC11A360140F6E9857 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void HmsPlugin.HMSIAPManager::RestorePurchaseRecords(System.Action`1<HuaweiMobileServices.IAP.OwnedPurchasesResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSIAPManager_RestorePurchaseRecords_m8073D09D3DFB2DC8CD41797C4A3D59A7407D4328 (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_t373431775BB3837100220EBC11A360140F6E9857 * ___action0, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSIAPManager::set_OnObtainOwnedPurchasesSuccess(System.Action`1<HuaweiMobileServices.IAP.OwnedPurchasesResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnObtainOwnedPurchasesSuccess_mB8553F57B27B81A5D4B20C44D0B4D5752D881E34_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_t373431775BB3837100220EBC11A360140F6E9857 * ___value0, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSIAPManager::ObtainOwnedPurchases(HuaweiMobileServices.IAP.PriceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSIAPManager_ObtainOwnedPurchases_mB854D2267E929823622A2D5110375A35C6E9BF1A (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * ___priceType0, const RuntimeMethod* method);
// System.String HuaweiMobileServices.IAP.InAppPurchaseData::get_ProductId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482 (InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * __this, const RuntimeMethod* method);
// System.String HuaweiMobileServices.IAP.InAppPurchaseData::get_PurchaseToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InAppPurchaseData_get_PurchaseToken_m030ED4A82F16F8108411C7746650AD6D1FF02554 (InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * __this, const RuntimeMethod* method);
// System.Void HmsPlugin.HMSIAPManager::ConsumePurchaseWithToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMSIAPManager_ConsumePurchaseWithToken_m2B1A9DD6BA964FCB15E71C6BC82BF616F930E448 (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, String_t* ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HuaweiMobileServices.IAP.InAppPurchaseData>::.ctor()
inline void List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30 (List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 HuaweiMobileServices.IAP.InAppPurchaseData::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InAppPurchaseData_get_Kind_m8C53A426930170B59ED289EB8AFD65BA4211DA1A (InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * __this, const RuntimeMethod* method);
// System.Boolean HuaweiMobileServices.IAP.InAppPurchaseData::get_SubValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InAppPurchaseData_get_SubValid_mFAE9C133EA41A6F6EF1D309216D198C5FD6248B2 (InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * __this, const RuntimeMethod* method);
// System.String HuaweiMobileServices.IAP.InAppPurchaseData::get_OrderID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InAppPurchaseData_get_OrderID_m322D943FBCBA3ADB5C4ADE12C58EE9732235F89A (InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HuaweiMobileServices.IAP.InAppPurchaseData>::Add(!0)
inline void List_1_Add_mA4F4B5C98B6A86420002679F1BD3F2235D8BB9AD (List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * __this, InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 *, InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m91E2FBC1191B019C070193A23E95C04571409F8F_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PlayerController::AddCube(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddCube_m1DE7FBF224E5470A0E6DB6CA55050846956F8150 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878 (const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57 (const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// System.Void PlayerMovement::StartSpeedBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_StartSpeedBoost_mA71C9A7B79B3D3F37ED56A87D81B9A82AD9FC9A3 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void PlayerController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Animation::CrossFade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mAA2C1F467BCFF4AFF6B06D041BA98A9CBD57352B (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, String_t* ___animation0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MultiplierHandler>()
inline MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151 * Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerMovement::SpeedBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_SpeedBoost_mA51749FE4F079B94223A406B6AA19BC96547859E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement/<SpeedBoost>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostU3Ed__7__ctor_m6D71D1B789B81CD4A5648518A990A53579506A0C (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mEF40689A9E574691E832255C430A9E626B005AF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m72BC7AC98DF3D431D2AD59D0916216D4E31A9503 (int32_t ___button0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SwerveInputSystem>()
inline SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * Component_GetComponent_TisSwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60_m64FD7BA4325ACCB4A5899E462CB65B56A473495E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single SwerveInputSystem::get_MoveFactorX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwerveInputSystem_get_MoveFactorX_mBA62E145DFF8F56B36B3CC4C209477E1D7EB5C8A_inline (SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void GameManager::AddGemsCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddGemsCount_mD6C20B60D7D263381CAE1B41AE5D76C14C2E0804 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
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
// System.Void AdsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Start_m561A6D94B810C2CBBAD6235533FEF81D3FCB93BA (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_OnInterstitialAdClosed_mDE921DDC2B56F6C94982E181E8E93141700F64A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_OnRewarded_mDD2A0586AF6964728A6F0280EFAED93F320732C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HMSAdsKitManager.Instance.OnRewarded = OnRewarded;
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * L_1 = (Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 *)il2cpp_codegen_object_new(Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233_il2cpp_TypeInfo_var);
		Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA(L_1, __this, (intptr_t)((intptr_t)AdsManager_OnRewarded_mDD2A0586AF6964728A6F0280EFAED93F320732C7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA_RuntimeMethod_var);
		NullCheck(L_0);
		HMSAdsKitManager_set_OnRewarded_mFAC15946C8F87AEA568A8DB1C48D276D7D5A9988_inline(L_0, L_1, /*hidden argument*/NULL);
		// HMSAdsKitManager.Instance.OnInterstitialAdClosed = OnInterstitialAdClosed;
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_2;
		L_2 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)AdsManager_OnInterstitialAdClosed_mDE921DDC2B56F6C94982E181E8E93141700F64A4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		HMSAdsKitManager_set_OnInterstitialAdClosed_m25D4DFD03EFE5F86B2D38A09E817A2C5670739F4_inline(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::ShowBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowBannerAd_mEE21D50E8CF7E7E4C29DDDCBE56409C7B5B79783 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HMSAdsKitManager.Instance.ShowBannerAd();
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		NullCheck(L_0);
		HMSAdsKitManager_ShowBannerAd_mFCC663FD4AEDC8974ABCC432E3AEC66815BDB83C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::HideBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HideBannerAd_mBF51E618CF554851525D82F2270A35561F59DBB5 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HMSAdsKitManager.Instance.HideBannerAd();
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		NullCheck(L_0);
		HMSAdsKitManager_HideBannerAd_m71D58AA0982AEC0775930D132A2F8AE45BE6D9B4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::OnRewarded(HuaweiMobileServices.Ads.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnRewarded_mDD2A0586AF6964728A6F0280EFAED93F320732C7 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, Reward_tAA9A338706878F0C66956E1040C9EE747DF763D0 * ___reward0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CC3D74A5CA39815057BE43378C681017ADCDBF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[HMS] AdsManager rewarded!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral8CC3D74A5CA39815057BE43378C681017ADCDBF6, /*hidden argument*/NULL);
		// gm.AddGems();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		NullCheck(L_0);
		GameManager_AddGems_m26BE2B02F3906E02DB193A91284C6A7D9077E2B8(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::ShowRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowRewardedAd_mA25AA94A00E84EEFF8D8261899E09647191CF243 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_OnRewarded_mDD2A0586AF6964728A6F0280EFAED93F320732C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BDDD08D3D45B9D4D837C760B17B114E0EDAB85A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[HMS] AdsManager ShowRewardedAd");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral7BDDD08D3D45B9D4D837C760B17B114E0EDAB85A, /*hidden argument*/NULL);
		// HMSAdsKitManager.Instance.OnRewarded = OnRewarded;
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * L_1 = (Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 *)il2cpp_codegen_object_new(Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233_il2cpp_TypeInfo_var);
		Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA(L_1, __this, (intptr_t)((intptr_t)AdsManager_OnRewarded_mDD2A0586AF6964728A6F0280EFAED93F320732C7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6442DF58CE38F97920C736337FE78BC57D49CBBA_RuntimeMethod_var);
		NullCheck(L_0);
		HMSAdsKitManager_set_OnRewarded_mFAC15946C8F87AEA568A8DB1C48D276D7D5A9988_inline(L_0, L_1, /*hidden argument*/NULL);
		// HMSAdsKitManager.Instance.ShowRewardedAd();
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_2;
		L_2 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		NullCheck(L_2);
		HMSAdsKitManager_ShowRewardedAd_mFF361EDC6A3F90D7895395E2E9C1B3A96E5B03B7(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowInterstitialAd_m6B22B0DF1C39749F477D2D362197F2AB275E2041 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AB3BABCC2775665170E0C0A4A3493AC265235BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[HMS] AdsManager ShowInterstitialAd");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral7AB3BABCC2775665170E0C0A4A3493AC265235BF, /*hidden argument*/NULL);
		// HMSAdsKitManager.Instance.ShowInterstitialAd();
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		NullCheck(L_0);
		HMSAdsKitManager_ShowInterstitialAd_m14C78B6FA30634EA203878CE0B674DA56F5197E4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::OnInterstitialAdClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnInterstitialAdClosed_mDE921DDC2B56F6C94982E181E8E93141700F64A4 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD9BE7CEE9D60B2B05E913E65276BFFDB8FC623);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[HMS] AdsManager interstitial ad closed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral8FD9BE7CEE9D60B2B05E913E65276BFFDB8FC623, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::SetTestAdStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_SetTestAdStatus_mC06EB84B9F539A04B73F94637095E1BD19BDB3A8 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HMSAdsKitManager.Instance.DestroyBannerAd();
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		NullCheck(L_0);
		HMSAdsKitManager_DestroyBannerAd_mE4BAC395296CAE1D577FE79C539E7CD630FAE9AE(L_0, /*hidden argument*/NULL);
		// HMSAdsKitManager.Instance.LoadAllAds();
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_1;
		L_1 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		NullCheck(L_1);
		HMSAdsKitManager_LoadAllAds_m00B5AC011C587DD538412A81424102E6077BD24E(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager__ctor_m1324EE3D9841045940C44D5E0379750DBE0C0A53 (AdsManager_t7C47F9BD4DF345D849754CC5D99CD0E6B7751842 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AnimationScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScript_Start_mF3F20E8D56ACBB227BA81CEF313AFCEA21F8A57C (AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AnimationScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScript_Update_mEB67C349C93AC1397256894B9D35697B21479EE3 (AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(isAnimated)
		bool L_0 = __this->get_isAnimated_4();
		if (!L_0)
		{
			goto IL_01a6;
		}
	}
	{
		// if(isRotating)
		bool L_1 = __this->get_isRotating_5();
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// transform.Rotate(rotationAngle * rotationSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_rotationAngle_8();
		float L_4 = __this->get_rotationSpeed_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_2, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if(isFloating)
		bool L_8 = __this->get_isFloating_6();
		if (!L_8)
		{
			goto IL_00e4;
		}
	}
	{
		// floatTimer += Time.deltaTime;
		float L_9 = __this->get_floatTimer_13();
		float L_10;
		L_10 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_floatTimer_13(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// Vector3 moveDir = new Vector3(0.0f, 0.0f, floatSpeed);
		float L_11 = __this->get_floatSpeed_10();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), L_11, /*hidden argument*/NULL);
		// transform.Translate(moveDir);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		NullCheck(L_12);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_12, L_13, /*hidden argument*/NULL);
		// if (goingUp && floatTimer >= floatRate)
		bool L_14 = __this->get_goingUp_11();
		if (!L_14)
		{
			goto IL_00b0;
		}
	}
	{
		float L_15 = __this->get_floatTimer_13();
		float L_16 = __this->get_floatRate_12();
		if ((!(((float)L_15) >= ((float)L_16))))
		{
			goto IL_00b0;
		}
	}
	{
		// goingUp = false;
		__this->set_goingUp_11((bool)0);
		// floatTimer = 0;
		__this->set_floatTimer_13((0.0f));
		// floatSpeed = -floatSpeed;
		float L_17 = __this->get_floatSpeed_10();
		__this->set_floatSpeed_10(((-L_17)));
		// }
		goto IL_00e4;
	}

IL_00b0:
	{
		// else if(!goingUp && floatTimer >= floatRate)
		bool L_18 = __this->get_goingUp_11();
		if (L_18)
		{
			goto IL_00e4;
		}
	}
	{
		float L_19 = __this->get_floatTimer_13();
		float L_20 = __this->get_floatRate_12();
		if ((!(((float)L_19) >= ((float)L_20))))
		{
			goto IL_00e4;
		}
	}
	{
		// goingUp = true;
		__this->set_goingUp_11((bool)1);
		// floatTimer = 0;
		__this->set_floatTimer_13((0.0f));
		// floatSpeed = +floatSpeed;
		float L_21 = __this->get_floatSpeed_10();
		__this->set_floatSpeed_10(L_21);
	}

IL_00e4:
	{
		// if(isScaling)
		bool L_22 = __this->get_isScaling_7();
		if (!L_22)
		{
			goto IL_01a6;
		}
	}
	{
		// scaleTimer += Time.deltaTime;
		float L_23 = __this->get_scaleTimer_19();
		float L_24;
		L_24 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_scaleTimer_19(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		// if (scalingUp)
		bool L_25 = __this->get_scalingUp_16();
		if (!L_25)
		{
			goto IL_0138;
		}
	}
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, endScale, scaleSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_endScale_15();
		float L_30 = __this->get_scaleSpeed_17();
		float L_31;
		L_31 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline(L_28, L_29, ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_32, /*hidden argument*/NULL);
		// }
		goto IL_016d;
	}

IL_0138:
	{
		// else if (!scalingUp)
		bool L_33 = __this->get_scalingUp_16();
		if (L_33)
		{
			goto IL_016d;
		}
	}
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, startScale, scaleSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_startScale_14();
		float L_38 = __this->get_scaleSpeed_17();
		float L_39;
		L_39 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline(L_36, L_37, ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_34, L_40, /*hidden argument*/NULL);
	}

IL_016d:
	{
		// if(scaleTimer >= scaleRate)
		float L_41 = __this->get_scaleTimer_19();
		float L_42 = __this->get_scaleRate_18();
		if ((!(((float)L_41) >= ((float)L_42))))
		{
			goto IL_01a6;
		}
	}
	{
		// if (scalingUp) { scalingUp = false; }
		bool L_43 = __this->get_scalingUp_16();
		if (!L_43)
		{
			goto IL_018c;
		}
	}
	{
		// if (scalingUp) { scalingUp = false; }
		__this->set_scalingUp_16((bool)0);
		// if (scalingUp) { scalingUp = false; }
		goto IL_019b;
	}

IL_018c:
	{
		// else if (!scalingUp) { scalingUp = true; }
		bool L_44 = __this->get_scalingUp_16();
		if (L_44)
		{
			goto IL_019b;
		}
	}
	{
		// else if (!scalingUp) { scalingUp = true; }
		__this->set_scalingUp_16((bool)1);
	}

IL_019b:
	{
		// scaleTimer = 0;
		__this->set_scaleTimer_19((0.0f));
	}

IL_01a6:
	{
		// }
		return;
	}
}
// System.Void AnimationScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScript__ctor_m0388897F30C9E41DE015A9CFF8F2B3D2551F5A17 (AnimationScript_t475324EE910F86B0E56363ADD96AE49068F54FCC * __this, const RuntimeMethod* method)
{
	{
		// private bool goingUp = true;
		__this->set_goingUp_11((bool)1);
		// private bool scalingUp = true;
		__this->set_scalingUp_16((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BuyGems::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyGems_Start_m1C33C22F6F2471EF7C1835E76F27B0086F7B9FC5 (BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BuyGems::purchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyGems_purchase_m0DB44A05A1C463F69EAC16FA67C5CD75AE43C7FC (BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BuyGems::OnBuyProductSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyGems_OnBuyProductSuccess_m53D00EE7124D19282C4523BEFA3A2160D0D49733 (BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5871E4A5A65C49F0B66376C51556E509A35C769F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm.gemCount += 100000;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_gemCount_18();
		NullCheck(L_1);
		L_1->set_gemCount_18(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)100000))));
		// Debug.Log("This is the greatest IAP of all time");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral5871E4A5A65C49F0B66376C51556E509A35C769F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BuyGems::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyGems_Update_m06508549B10977B1AB61EB8861E8EC88FF797441 (BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BuyGems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyGems__ctor_m3EA43B353607E4407578EDBE2BFC4E61710928C9 (BuyGems_tE038C5F96D28D6512A4FC32FE080E49A84807D98 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ColorSelectorButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSelectorButton_OnPointerDown_m08C420FEC1F500CD23975A44E3A07EBDE71000CA (ColorSelectorButton_t6230EEFA94266CAC0F60300D5D2D0F451FD56D99 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetColor("_Color", color);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_material_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_color_4();
		NullCheck(L_0);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_0, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColorSelectorButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSelectorButton_Update_m652A0E6256FF61F6109F2A35C9E8B9C5B3EBA133 (ColorSelectorButton_t6230EEFA94266CAC0F60300D5D2D0F451FD56D99 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponent<Image>().color = color;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_0, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_color_4();
		NullCheck(L_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void ColorSelectorButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSelectorButton__ctor_m0ED1997A4FE61839A3D1E9DC248740E283FF158F (ColorSelectorButton_t6230EEFA94266CAC0F60300D5D2D0F451FD56D99 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DestroyCube::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCube_Start_mFFBD0E1640FE33F77D90274A339B90C931EC7364 (DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_5(L_0);
		// }
		return;
	}
}
// System.Void DestroyCube::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCube_OnTriggerEnter_mE9D549549965C3C7FE4A71B0D9F6D8AAC06C8F3E (DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228C5D264BC416C135731F3B0E7516906AB5B225);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29893B14FCC30AFA5B73B7AC0BB6DA73CC3B8AB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7626381F776433C4AC69BE7352121D44F315B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Obstacle"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// other.tag = "Untagged";
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___other0;
		NullCheck(L_2);
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(L_2, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
		// transform.parent = other.transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_3, L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// if (other.CompareTag("ObstacleStack"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_7, _stringLiteral29893B14FCC30AFA5B73B7AC0BB6DA73CC3B8AB3, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// PlayDestroy();
		DestroyCube_PlayDestroy_m0D50C674D2AB31B785AF5BEAA03E74FCA59C20A9(__this, /*hidden argument*/NULL);
		// other.tag = "Untagged";
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_9 = ___other0;
		NullCheck(L_9);
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(L_9, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (other.CompareTag("Multiplier"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10 = ___other0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_10, _stringLiteral7626381F776433C4AC69BE7352121D44F315B33B, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0080;
		}
	}
	{
		// PlayDestroy();
		DestroyCube_PlayDestroy_m0D50C674D2AB31B785AF5BEAA03E74FCA59C20A9(__this, /*hidden argument*/NULL);
		// other.tag = "Untagged";
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12 = ___other0;
		NullCheck(L_12);
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(L_12, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
		// transform.parent = other.transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_14 = ___other0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_13, L_16, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// if (other.CompareTag("SpinningObstacle"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_17 = ___other0;
		NullCheck(L_17);
		bool L_18;
		L_18 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_17, _stringLiteral228C5D264BC416C135731F3B0E7516906AB5B225, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e3;
		}
	}
	{
		// other.tag = "Untagged";
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_19 = ___other0;
		NullCheck(L_19);
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(L_19, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
		// transform.parent = other.transform.parent.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_21 = ___other0;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_24, /*hidden argument*/NULL);
		// transform.GetComponent<Rigidbody>().isKinematic = true;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_26;
		L_26 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_25, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_26);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_26, (bool)1, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(0, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// if (transform.tag == "Lava")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_29, /*hidden argument*/NULL);
		bool L_31;
		L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_30, _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0118;
		}
	}
	{
		// if (other.CompareTag("Cube"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_32 = ___other0;
		NullCheck(L_32);
		bool L_33;
		L_33 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_32, _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0118;
		}
	}
	{
		// PlayDestroy();
		DestroyCube_PlayDestroy_m0D50C674D2AB31B785AF5BEAA03E74FCA59C20A9(__this, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_34 = ___other0;
		NullCheck(L_34);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_35, /*hidden argument*/NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void DestroyCube::PlayDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCube_PlayDestroy_m0D50C674D2AB31B785AF5BEAA03E74FCA59C20A9 (DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F * __this, const RuntimeMethod* method)
{
	{
		// audioSource.clip = dropCube;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_dropCube_4();
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_1, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_5();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DestroyCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCube__ctor_m42BF229A901F619FFFBD2008189D1273A04AEEA9 (DestroyCube_tF9A6C55E7FE9BCCE3E0AB12ED5C529F105C61B2F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gemCount = PlayerPrefs.GetInt("gemCount", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m2F02E263F3639B18B0634184BA8FB049F8865FB4(_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA, 0, /*hidden argument*/NULL);
		__this->set_gemCount_18(L_0);
		// AudioListener.volume = 0.5f;
		AudioListener_set_volume_mA0C47585895B6FEF38E90DA76C77129255B1B7CD((0.5f), /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013((1.0f), /*hidden argument*/NULL);
		// if (restartGame)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_restartGame_14();
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// StartGame();
		GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1(__this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD9E260A5FC6D21A41C296FF8650C334BFD5CD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD26C7927BCA88CBF7ED10C3AE1CC6D2685A25448);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// gemCountText.text = (gemCount.ToString());
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_0 = __this->get_gemCountText_19();
		int32_t* L_1 = __this->get_address_of_gemCount_18();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// PlayerPrefs.SetInt("gemCount", gemCount);
		int32_t L_3 = __this->get_gemCount_18();
		PlayerPrefs_SetInt_m2660AEEE642894B67FC56B1F93F6E9214D7F3E32(_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA, L_3, /*hidden argument*/NULL);
		// Debug.Log("set gem count to " + PlayerPrefs.GetInt("gemCount"));
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m95EAC89A5E0385B67514A3BFD1808D5D29A8FD34(_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral2FD9E260A5FC6D21A41C296FF8650C334BFD5CD8, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_6, /*hidden argument*/NULL);
		// if (startPrompt.activeInHierarchy == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_startPrompt_6();
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		// Debug.Log("returned empty screen startPrompt.activeInHierarchy");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralD26C7927BCA88CBF7ED10C3AE1CC6D2685A25448, /*hidden argument*/NULL);
		// return ;
		return;
	}

IL_005f:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_9;
		L_9 = Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F(0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0097;
		}
	}
	{
		// startPrompt.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_startPrompt_6();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// gemCounter.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_gemCounter_7();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// progressBar.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_progressBar_8();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// gameButtons.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_gameButtons_9();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void GameManager::AddGemsCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddGemsCount_mD6C20B60D7D263381CAE1B41AE5D76C14C2E0804 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gemCount+= count;
		int32_t L_0 = __this->get_gemCount_18();
		int32_t L_1 = ___count0;
		__this->set_gemCount_18(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// PlayerPrefs.SetInt("gemCount", gemCount);
		int32_t L_2 = __this->get_gemCount_18();
		PlayerPrefs_SetInt_m2660AEEE642894B67FC56B1F93F6E9214D7F3E32(_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OpenBuyScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OpenBuyScreen_m3D019D880CE0279AC3EF999D3E6EB21839512E39 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// mainMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_mainMenu_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// StoreScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_StoreScreen_16();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::CloseBuyScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CloseBuyScreen_mCF13731C1E06C0842F227880B63CF63B5FE57998 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// StoreScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_StoreScreen_16();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// mainMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_mainMenu_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::DestroyWatchAdsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DestroyWatchAdsButton_m08661B65A1479F3CC57504665ECAB41481AD2E8B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(watchAdsButtonVic);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_watchAdsButtonVic_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_0, /*hidden argument*/NULL);
		// Destroy(watchAdsButtonDef);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_watchAdsButtonDef_13();
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::AddGems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddGems_m26BE2B02F3906E02DB193A91284C6A7D9077E2B8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gemCount *= 2;
		int32_t L_0 = __this->get_gemCount_18();
		__this->set_gemCount_18(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2)));
		// PlayerPrefs.SetInt("gemCount", gemCount);
		int32_t L_1 = __this->get_gemCount_18();
		PlayerPrefs_SetInt_m2660AEEE642894B67FC56B1F93F6E9214D7F3E32(_stringLiteral88CCC40FFDFA228EA9AE601426D18365096AAFCA, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(mainMenu);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_mainMenu_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_0, /*hidden argument*/NULL);
		// startPrompt.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_startPrompt_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PauseGame_m7DE2F4C1D5E31013C496D32F8D2420E37A59711A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013((0.0f), /*hidden argument*/NULL);
		// pauseMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_11();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResumeGame_m00A7CB0148E5B1E1D7D4F9F0CBFCA1EE0A330CC1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013((1.0f), /*hidden argument*/NULL);
		// pauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_11();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RestartGame_m906CEC9BBE9B7A0841B58384E3FD90376DF1D440 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// restartGame = true;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_restartGame_14((bool)1);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MainMenu_m188803218F4B8822AEEDD28B51778F876DF688E9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// restartGame = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_restartGame_14((bool)0);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ManageAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ManageAudio_mB20F2C66A4FE96172F948C0C846182A9902B3D5E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if (audioEnabled)
		bool L_0 = __this->get_audioEnabled_20();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// AudioListener.volume = 0;
		AudioListener_set_volume_mA0C47585895B6FEF38E90DA76C77129255B1B7CD((0.0f), /*hidden argument*/NULL);
		// audioEnabled = false;
		__this->set_audioEnabled_20((bool)0);
		// mutedButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_mutedButton_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// else if (!audioEnabled)
		bool L_2 = __this->get_audioEnabled_20();
		if (L_2)
		{
			goto IL_004b;
		}
	}
	{
		// AudioListener.volume = 0.5f;
		AudioListener_set_volume_mA0C47585895B6FEF38E90DA76C77129255B1B7CD((0.5f), /*hidden argument*/NULL);
		// audioEnabled = true;
		__this->set_audioEnabled_20((bool)1);
		// mutedButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_mutedButton_10();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public bool showAds = true;
		__this->set_showAds_15((bool)1);
		// bool audioEnabled = true;
		__this->set_audioEnabled_20((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m8AD74866A80F39B2E85A3048E4F975CF1381D4E9 (const RuntimeMethod* method)
{
	{
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
// System.Void IAPManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_Start_m91E0C1107373E149EF07B76088E0F7C7BFD84910 (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m0F90C09F20CC09BE8D11736A50E12F3B62B45DA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m24A4869AB9A45E46769684F38845CEDECB2B30E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_OnBuyProductFailure_m74AFDC2051506132A25A53BC2A53BF2AA8EAB5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_OnBuyProductSuccess_m3FBCB1D76E65565185C8CDB73EFD219DBE7EEC18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_OnInitializeIAPFailure_mF2D6899C1838FFE718B0ADCC1C1B5B10E6DEACCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_OnInitializeIAPSuccess_mA68378AE1422E8F9AB1D606CE0A62F967A495CCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HMSIAPManager.Instance.OnBuyProductSuccess = OnBuyProductSuccess;
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * L_1 = (Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D *)il2cpp_codegen_object_new(Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D_il2cpp_TypeInfo_var);
		Action_1__ctor_m0F90C09F20CC09BE8D11736A50E12F3B62B45DA1(L_1, __this, (intptr_t)((intptr_t)IAPManager_OnBuyProductSuccess_m3FBCB1D76E65565185C8CDB73EFD219DBE7EEC18_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0F90C09F20CC09BE8D11736A50E12F3B62B45DA1_RuntimeMethod_var);
		NullCheck(L_0);
		HMSIAPManager_set_OnBuyProductSuccess_mC47745F958EBE985DD000C825604609597261B61_inline(L_0, L_1, /*hidden argument*/NULL);
		// HMSIAPManager.Instance.InitializeIAP();
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_2;
		L_2 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		NullCheck(L_2);
		HMSIAPManager_InitializeIAP_m3C015BA8A95A4E88825F25B1F8E61AA2420F4A8F(L_2, /*hidden argument*/NULL);
		// HMSIAPManager.Instance.OnInitializeIAPSuccess = OnInitializeIAPSuccess;
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_3;
		L_3 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)IAPManager_OnInitializeIAPSuccess_mA68378AE1422E8F9AB1D606CE0A62F967A495CCD_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		HMSIAPManager_set_OnInitializeIAPSuccess_m4A0D34E7B9D171DE803EB12BD402CDF04AB2BAFD_inline(L_3, L_4, /*hidden argument*/NULL);
		// HMSIAPManager.Instance.OnInitializeIAPFailure = OnInitializeIAPFailure;
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_5;
		L_5 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * L_6 = (Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A *)il2cpp_codegen_object_new(Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A_il2cpp_TypeInfo_var);
		Action_1__ctor_m24A4869AB9A45E46769684F38845CEDECB2B30E5(L_6, __this, (intptr_t)((intptr_t)IAPManager_OnInitializeIAPFailure_mF2D6899C1838FFE718B0ADCC1C1B5B10E6DEACCF_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m24A4869AB9A45E46769684F38845CEDECB2B30E5_RuntimeMethod_var);
		NullCheck(L_5);
		HMSIAPManager_set_OnInitializeIAPFailure_m150AEAB5B864BEFA33AC8DCA1B248F051B71A9D2_inline(L_5, L_6, /*hidden argument*/NULL);
		// HMSIAPManager.Instance.OnBuyProductFailure = OnBuyProductFailure;
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_7;
		L_7 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_8, __this, (intptr_t)((intptr_t)IAPManager_OnBuyProductFailure_m74AFDC2051506132A25A53BC2A53BF2AA8EAB5D4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		NullCheck(L_7);
		HMSIAPManager_set_OnBuyProductFailure_mB36DA0387AC1F83BDFBCC45D285FCA1C373F0B41_inline(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IAPManager::OnInitializeIAPSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_OnInitializeIAPSuccess_mA68378AE1422E8F9AB1D606CE0A62F967A495CCD (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B6F7BB9D1CC64F2B989BF498A2C47EFBFD3B11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Initialize successful!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralF4B6F7BB9D1CC64F2B989BF498A2C47EFBFD3B11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IAPManager::OnInitializeIAPFailure(HuaweiMobileServices.Utils.HMSException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_OnInitializeIAPFailure_mF2D6899C1838FFE718B0ADCC1C1B5B10E6DEACCF (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C4E3A910A6F287E505C3C905E846882A6549939);
		s_Il2CppMethodInitialized = true;
	}
	HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("Initialize failed!" + ex);
		HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * L_0 = ___ex0;
		HMSException_tA21227489579553D31B8FE61FBB18D2DC4861D2E * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral5C4E3A910A6F287E505C3C905E846882A6549939;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral5C4E3A910A6F287E505C3C905E846882A6549939;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0012:
	{
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IAPManager::BuyProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_BuyProduct_m28198286DD24D673E8CFE012270C349AA739D33F (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_0, /*hidden argument*/NULL);
		// HMSIAPManager.Instance.PurchaseProduct(id);
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_1;
		L_1 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		String_t* L_2 = ___id0;
		NullCheck(L_1);
		HMSIAPManager_PurchaseProduct_m22AD5ED53B7FB1ECFF0DE7D3E48CC6992607D084(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IAPManager::OnBuyProductSuccess(HuaweiMobileServices.IAP.PurchaseResultInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_OnBuyProductSuccess_m3FBCB1D76E65565185C8CDB73EFD219DBE7EEC18 (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * ___obj0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(AfterBuyProductSuccess(obj));
		PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * L_0 = ___obj0;
		RuntimeObject* L_1;
		L_1 = IAPManager_AfterBuyProductSuccess_mB828D85C6D95ED958A55A90FFE5B0B591A18D5C2(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator IAPManager::AfterBuyProductSuccess(HuaweiMobileServices.IAP.PurchaseResultInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IAPManager_AfterBuyProductSuccess_mB828D85C6D95ED958A55A90FFE5B0B591A18D5C2 (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * L_0 = (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 *)il2cpp_codegen_object_new(U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44_il2cpp_TypeInfo_var);
		U3CAfterBuyProductSuccessU3Ed__9__ctor_m0F29B8A2FE9C9CB472518F7AEC66A0606D422FDB(L_0, 0, /*hidden argument*/NULL);
		U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * L_2 = L_1;
		PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * L_3 = ___obj0;
		NullCheck(L_2);
		L_2->set_obj_2(L_3);
		return L_2;
	}
}
// System.Void IAPManager::RestoreProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_RestoreProducts_mBCA4BFC2DB102BF1C0A2B8F77F3C5E77AF8DA542 (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t373431775BB3837100220EBC11A360140F6E9857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_U3CRestoreProductsU3Eb__10_0_mB12095956A9B137ADD505983ED03D6538F0D2457_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HMSIAPManager.Instance.RestorePurchaseRecords((restoredProducts) =>
		// {
		//     foreach (var item in restoredProducts.InAppPurchaseDataList)
		//     {
		//         if ((IAPProductType)item.Kind == IAPProductType.Consumable)
		//         {
		//             Debug.Log($"Consumable: ProductId {item.ProductId} , SubValid {item.SubValid} , PurchaseToken {item.PurchaseToken} , OrderID  {item.OrderID}");
		//             consumablePurchaseRecord.Add(item);
		//         }
		//     }
		// });
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		Action_1_t373431775BB3837100220EBC11A360140F6E9857 * L_1 = (Action_1_t373431775BB3837100220EBC11A360140F6E9857 *)il2cpp_codegen_object_new(Action_1_t373431775BB3837100220EBC11A360140F6E9857_il2cpp_TypeInfo_var);
		Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC(L_1, __this, (intptr_t)((intptr_t)IAPManager_U3CRestoreProductsU3Eb__10_0_mB12095956A9B137ADD505983ED03D6538F0D2457_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC_RuntimeMethod_var);
		NullCheck(L_0);
		HMSIAPManager_RestorePurchaseRecords_m8073D09D3DFB2DC8CD41797C4A3D59A7407D4328(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IAPManager::OnBuyProductFailure(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_OnBuyProductFailure_m74AFDC2051506132A25A53BC2A53BF2AA8EAB5D4 (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t373431775BB3837100220EBC11A360140F6E9857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_OnObtainOwnedPurchasesSuccess_m64C81082849ADAFC3504B2026933FE073124327F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (code == OrderStatusCode.ORDER_PRODUCT_OWNED)
		int32_t L_0 = ___code0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)60051)))))
		{
			goto IL_002d;
		}
	}
	{
		// HMSIAPManager.Instance.OnObtainOwnedPurchasesSuccess = OnObtainOwnedPurchasesSuccess;
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_1;
		L_1 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		Action_1_t373431775BB3837100220EBC11A360140F6E9857 * L_2 = (Action_1_t373431775BB3837100220EBC11A360140F6E9857 *)il2cpp_codegen_object_new(Action_1_t373431775BB3837100220EBC11A360140F6E9857_il2cpp_TypeInfo_var);
		Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC(L_2, __this, (intptr_t)((intptr_t)IAPManager_OnObtainOwnedPurchasesSuccess_m64C81082849ADAFC3504B2026933FE073124327F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6DEAD23034FF4F911686FE1397A5682BAD9463CC_RuntimeMethod_var);
		NullCheck(L_1);
		HMSIAPManager_set_OnObtainOwnedPurchasesSuccess_mB8553F57B27B81A5D4B20C44D0B4D5752D881E34_inline(L_1, L_2, /*hidden argument*/NULL);
		// HMSIAPManager.Instance.ObtainOwnedPurchases(PriceType.IN_APP_CONSUMABLE);
		HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_3;
		L_3 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_il2cpp_TypeInfo_var);
		PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244 * L_4 = ((PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_StaticFields*)il2cpp_codegen_static_fields_for(PriceType_t23323C1BEFF2FB6CD92FBD235FF9420DD804F244_il2cpp_TypeInfo_var))->get_IN_APP_CONSUMABLE_1();
		NullCheck(L_3);
		HMSIAPManager_ObtainOwnedPurchases_mB854D2267E929823622A2D5110375A35C6E9BF1A(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void IAPManager::OnObtainOwnedPurchasesSuccess(HuaweiMobileServices.IAP.OwnedPurchasesResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_OnObtainOwnedPurchasesSuccess_m64C81082849ADAFC3504B2026933FE073124327F (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, OwnedPurchasesResult_t1FA27C409615C4437DDD48EB039CF1D71D914D75 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDAE40CB5E96423ADFEF4AE2FB2F8E2F1C08E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2D2F77DB0E4F163109E4AC018F40CE0CF788CB18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC12D23BFAEB653BA5E635D87B66B63208EEE53A1);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (result != null)
		OwnedPurchasesResult_t1FA27C409615C4437DDD48EB039CF1D71D914D75 * L_0 = ___result0;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// foreach (var obj in result.InAppPurchaseDataList)
		OwnedPurchasesResult_t1FA27C409615C4437DDD48EB039CF1D71D914D75 * L_1 = ___result0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.Generic.IList`1<HuaweiMobileServices.IAP.InAppPurchaseData> HuaweiMobileServices.IAP.OwnedPurchasesResult::get_InAppPurchaseDataList() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<HuaweiMobileServices.IAP.InAppPurchaseData>::GetEnumerator() */, IEnumerable_1_t67FDAE40CB5E96423ADFEF4AE2FB2F8E2F1C08E3_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_0011:
		{
			// foreach (var obj in result.InAppPurchaseDataList)
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_5;
			L_5 = InterfaceFuncInvoker0< InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<HuaweiMobileServices.IAP.InAppPurchaseData>::get_Current() */, IEnumerator_1_t2D2F77DB0E4F163109E4AC018F40CE0CF788CB18_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			// Debug.Log("[IAPManager]: OnObtainOwnedPurchasesSuccess : " + obj.ProductId);
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482(L_6, /*hidden argument*/NULL);
			String_t* L_8;
			L_8 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralC12D23BFAEB653BA5E635D87B66B63208EEE53A1, L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_8, /*hidden argument*/NULL);
			// HMSIAPManager.Instance.ConsumePurchaseWithToken(obj.PurchaseToken);
			HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * L_9;
			L_9 = HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE(/*hidden argument*/HMSManagerSingleton_1_get_Instance_m46C10FE87DCC0B39E0B3F61E424612760E6A10DE_RuntimeMethod_var);
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_10 = V_1;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = InAppPurchaseData_get_PurchaseToken_m030ED4A82F16F8108411C7746650AD6D1FF02554(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			HMSIAPManager_ConsumePurchaseWithToken_m2B1A9DD6BA964FCB15E71C6BC82BF616F930E448(L_9, L_11, /*hidden argument*/NULL);
		}

IL_003d:
		{
			// foreach (var obj in result.InAppPurchaseDataList)
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0011;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			if (!L_14)
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(71)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void IAPManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager__ctor_m49F6622FA7269234181B20B38DC58D47DAC765DB (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<InAppPurchaseData> consumablePurchaseRecord = new List<InAppPurchaseData>();
		List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * L_0 = (List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 *)il2cpp_codegen_object_new(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055_il2cpp_TypeInfo_var);
		List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30(L_0, /*hidden argument*/List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30_RuntimeMethod_var);
		__this->set_consumablePurchaseRecord_4(L_0);
		// List<InAppPurchaseData> activeNonConsumables = new List<InAppPurchaseData>();
		List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * L_1 = (List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 *)il2cpp_codegen_object_new(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055_il2cpp_TypeInfo_var);
		List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30(L_1, /*hidden argument*/List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30_RuntimeMethod_var);
		__this->set_activeNonConsumables_5(L_1);
		// List<InAppPurchaseData> activeSubscriptions = new List<InAppPurchaseData>();
		List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * L_2 = (List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 *)il2cpp_codegen_object_new(List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055_il2cpp_TypeInfo_var);
		List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30(L_2, /*hidden argument*/List_1__ctor_mF2206257F145D96198AA81E37B6AA96DC3D51D30_RuntimeMethod_var);
		__this->set_activeSubscriptions_6(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPManager::<RestoreProducts>b__10_0(HuaweiMobileServices.IAP.OwnedPurchasesResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_U3CRestoreProductsU3Eb__10_0_mB12095956A9B137ADD505983ED03D6538F0D2457 (IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * __this, OwnedPurchasesResult_t1FA27C409615C4437DDD48EB039CF1D71D914D75 * ___restoredProducts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDAE40CB5E96423ADFEF4AE2FB2F8E2F1C08E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2D2F77DB0E4F163109E4AC018F40CE0CF788CB18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA4F4B5C98B6A86420002679F1BD3F2235D8BB9AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9CD50A37B86D5473112CF3466484CD06E0BA17C);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var item in restoredProducts.InAppPurchaseDataList)
		OwnedPurchasesResult_t1FA27C409615C4437DDD48EB039CF1D71D914D75 * L_0 = ___restoredProducts0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.Generic.IList`1<HuaweiMobileServices.IAP.InAppPurchaseData> HuaweiMobileServices.IAP.OwnedPurchasesResult::get_InAppPurchaseDataList() */, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<HuaweiMobileServices.IAP.InAppPurchaseData>::GetEnumerator() */, IEnumerable_1_t67FDAE40CB5E96423ADFEF4AE2FB2F8E2F1C08E3_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0067;
		}

IL_000e:
		{
			// foreach (var item in restoredProducts.InAppPurchaseDataList)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_4;
			L_4 = InterfaceFuncInvoker0< InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<HuaweiMobileServices.IAP.InAppPurchaseData>::get_Current() */, IEnumerator_1_t2D2F77DB0E4F163109E4AC018F40CE0CF788CB18_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			// if ((IAPProductType)item.Kind == IAPProductType.Consumable)
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = InAppPurchaseData_get_Kind_m8C53A426930170B59ED289EB8AFD65BA4211DA1A(L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0067;
			}
		}

IL_001d:
		{
			// Debug.Log($"Consumable: ProductId {item.ProductId} , SubValid {item.SubValid} , PurchaseToken {item.PurchaseToken} , OrderID  {item.OrderID}");
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_9 = V_1;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482(L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_10);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_8;
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_12 = V_1;
			NullCheck(L_12);
			bool L_13;
			L_13 = InAppPurchaseData_get_SubValid_mFAE9C133EA41A6F6EF1D309216D198C5FD6248B2(L_12, /*hidden argument*/NULL);
			bool L_14 = L_13;
			RuntimeObject * L_15 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_15);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_11;
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_17 = V_1;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = InAppPurchaseData_get_PurchaseToken_m030ED4A82F16F8108411C7746650AD6D1FF02554(L_17, /*hidden argument*/NULL);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_18);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_16;
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_20 = V_1;
			NullCheck(L_20);
			String_t* L_21;
			L_21 = InAppPurchaseData_get_OrderID_m322D943FBCBA3ADB5C4ADE12C58EE9732235F89A(L_20, /*hidden argument*/NULL);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_21);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
			String_t* L_22;
			L_22 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(_stringLiteralA9CD50A37B86D5473112CF3466484CD06E0BA17C, L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_22, /*hidden argument*/NULL);
			// consumablePurchaseRecord.Add(item);
			List_1_t22D8244F3112B1C33E9406104F5CA0C06BDC9055 * L_23 = __this->get_consumablePurchaseRecord_4();
			InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_24 = V_1;
			NullCheck(L_23);
			List_1_Add_mA4F4B5C98B6A86420002679F1BD3F2235D8BB9AD(L_23, L_24, /*hidden argument*/List_1_Add_mA4F4B5C98B6A86420002679F1BD3F2235D8BB9AD_RuntimeMethod_var);
		}

IL_0067:
		{
			// foreach (var item in restoredProducts.InAppPurchaseDataList)
			RuntimeObject* L_25 = V_0;
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_000e;
			}
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x7B, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_0;
			if (!L_27)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			RuntimeObject* L_28 = V_0;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
		}

IL_007a:
		{
			IL2CPP_END_FINALLY(113)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
	}

IL_007b:
	{
		// });
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
// System.Void Instantiator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instantiator_OnEnable_m8FE911CA32477EB270AD1288AE011A764040E444 (Instantiator_tBF82B9B22BE876C34EE9097DC9D36E43BB658679 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_0057;
	}

IL_0004:
	{
		// Instantiate(objectPrefab, new Vector3(transform.position.x, transform.position.y + i, transform.position.z), Quaternion.identity, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_objectPrefab_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		int32_t L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_3, ((float)il2cpp_codegen_add((float)L_6, (float)((float)((float)L_7)))), L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B(L_0, L_11, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0057:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_16 = V_0;
		int32_t L_17 = __this->get_count_4();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// Destroy(transform.GetChild(0).gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Instantiator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instantiator__ctor_m8BA91773F1AEBD3EB0F2C576BEF2C4CF1EC3EC41 (Instantiator_tBF82B9B22BE876C34EE9097DC9D36E43BB658679 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InterstitialAdLoad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdLoad_Start_m8D41368856B76BEDE15E871CF01458B7679BFBAF (InterstitialAdLoad_tBC75AE8101213F4A2A9E61A36689CB3A16CFAA74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE04556C71B3A681CEF33B11644D84A7C1BC10E49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("loaded interstital ad on new scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralE04556C71B3A681CEF33B11644D84A7C1BC10E49, /*hidden argument*/NULL);
		// HMSAdsKitManager.Instance.ShowInterstitialAd();
		HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * L_0;
		L_0 = HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C(/*hidden argument*/HMSManagerSingleton_1_get_Instance_mA6F2B60CA64E8F54F789BE99F8C9305206B7319C_RuntimeMethod_var);
		NullCheck(L_0);
		HMSAdsKitManager_ShowInterstitialAd_m14C78B6FA30634EA203878CE0B674DA56F5197E4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterstitialAdLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdLoad__ctor_m5139EB2DE47ECAAC56B617AE0BD6C07352E3B0CF (InterstitialAdLoad_tBC75AE8101213F4A2A9E61A36689CB3A16CFAA74 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuBannerAd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuBannerAd_Start_m9774F805F6745DBFF2B1AD3FA85DDB948DC6ECE3 (MenuBannerAd_t5A728B31626705FE65569E85EDF0854E940C4088 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuBannerAd::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuBannerAd_update_mCCC58951ED0EB3FA7D8642F2E3B92745725C6E54 (MenuBannerAd_t5A728B31626705FE65569E85EDF0854E940C4088 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuBannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuBannerAd__ctor_mBB715FE2D941DACA1517FBE00B625D286E1397F7 (MenuBannerAd_t5A728B31626705FE65569E85EDF0854E940C4088 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MultiplierHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplierHandler__ctor_mB386A79F072DB836BA294CAE7B4E5DEAC6B18FE2 (MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_10(L_0);
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter_mA341783BDD02CF2476E18D5D2504CA3812E0F5B3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228C5D264BC416C135731F3B0E7516906AB5B225);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7626381F776433C4AC69BE7352121D44F315B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA14929A8F3DF2F7E96B8E96ABC70C155DC85D4B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA16D90C9F2FF27AD42EBD31D0D6A2DFEF1664E81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76263F9E5B74EC52FE7C6510731C2936DFEC8CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEA8CD63B09B737B251911DF62ED128FDE2FB9FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DC6DB186DEF6C0F9C988D1C401526A835CC85C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.tag == "Cubes")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralA16D90C9F2FF27AD42EBD31D0D6A2DFEF1664E81, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// audioSource.clip = collectCube;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_collectCube_4();
		NullCheck(L_3);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_3, L_4, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_audioSource_10();
		NullCheck(L_5);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// other.enabled = false;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6 = ___other0;
		NullCheck(L_6);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_6, (bool)0, /*hidden argument*/NULL);
		// AddCube(other);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = ___other0;
		PlayerController_AddCube_m1DE7FBF224E5470A0E6DB6CA55050846956F8150(__this, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// if (other.tag == "Gem")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8 = ___other0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_9, _stringLiteralBEA8CD63B09B737B251911DF62ED128FDE2FB9FF, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0087;
		}
	}
	{
		// audioSource.clip = collectGem;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = __this->get_audioSource_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_12 = __this->get_collectGem_5();
		NullCheck(L_11);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_11, L_12, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = __this->get_audioSource_10();
		NullCheck(L_13);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_13, /*hidden argument*/NULL);
		// FindObjectOfType<GameManager>().gemCount++;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_14;
		L_14 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_gemCount_18();
		NullCheck(L_15);
		L_15->set_gemCount_18(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_17 = ___other0;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_18, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// if (other.tag == "SpeedBoost")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_19 = ___other0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_20, _stringLiteralA76263F9E5B74EC52FE7C6510731C2936DFEC8CC, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c6;
		}
	}
	{
		// other.enabled = false;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_22 = ___other0;
		NullCheck(L_22);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_22, (bool)0, /*hidden argument*/NULL);
		// audioSource.clip = speedBoost;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23 = __this->get_audioSource_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_24 = __this->get_speedBoost_6();
		NullCheck(L_23);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_23, L_24, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_25 = __this->get_audioSource_10();
		NullCheck(L_25);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_25, /*hidden argument*/NULL);
		// FindObjectOfType<PlayerMovement>().StartSpeedBoost();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_26;
		L_26 = Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57(/*hidden argument*/Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57_RuntimeMethod_var);
		NullCheck(L_26);
		PlayerMovement_StartSpeedBoost_mA71C9A7B79B3D3F37ED56A87D81B9A82AD9FC9A3(L_26, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// if (other.tag == "FinishLine")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_27 = ___other0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_28, _stringLiteralA14929A8F3DF2F7E96B8E96ABC70C155DC85D4B2, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01f5;
		}
	}
	{
		// GameOver();
		PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D(__this, /*hidden argument*/NULL);
		// if (gameObject.tag == "Player")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_30, /*hidden argument*/NULL);
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_31, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_014e;
		}
	}
	{
		// character.GetComponent<Animation>().CrossFade("Victory");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_character_9();
		NullCheck(L_33);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_34;
		L_34 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_33, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		NullCheck(L_34);
		Animation_CrossFade_mAA2C1F467BCFF4AFF6B06D041BA98A9CBD57352B(L_34, _stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042, /*hidden argument*/NULL);
		// victoryMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_victoryMenu_12();
		NullCheck(L_35);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)1, /*hidden argument*/NULL);
		// scoreText.text = ("SCORE: " + ((other.GetComponent<MultiplierHandler>().multiplierValue - 1) * FindObjectOfType<GameManager>().gemCount).ToString());
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_36 = __this->get_scoreText_13();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_37 = ___other0;
		NullCheck(L_37);
		MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151 * L_38;
		L_38 = Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8(L_37, /*hidden argument*/Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8_RuntimeMethod_var);
		NullCheck(L_38);
		int32_t L_39 = L_38->get_multiplierValue_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_40;
		L_40 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		NullCheck(L_40);
		int32_t L_41 = L_40->get_gemCount_18();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), (int32_t)L_41));
		String_t* L_42;
		L_42 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2, L_42, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, L_43);
	}

IL_014e:
	{
		// if (gameObject.tag == "Cube")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_44, /*hidden argument*/NULL);
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_45, _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01d9;
		}
	}
	{
		// character.GetComponent<Animation>().CrossFade("Victory");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_character_9();
		NullCheck(L_47);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_48;
		L_48 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_47, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		NullCheck(L_48);
		Animation_CrossFade_mAA2C1F467BCFF4AFF6B06D041BA98A9CBD57352B(L_48, _stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042, /*hidden argument*/NULL);
		// transform.parent.GetComponent<PlayerController>().victoryMenu.SetActive(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_51;
		L_51 = Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424(L_50, /*hidden argument*/Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		NullCheck(L_51);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = L_51->get_victoryMenu_12();
		NullCheck(L_52);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_52, (bool)1, /*hidden argument*/NULL);
		// transform.parent.GetComponent<PlayerController>().scoreText.text = ("SCORE: " + ((other.GetComponent<MultiplierHandler>().multiplierValue - 1) * FindObjectOfType<GameManager>().gemCount).ToString());
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_55;
		L_55 = Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424(L_54, /*hidden argument*/Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		NullCheck(L_55);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_56 = L_55->get_scoreText_13();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_57 = ___other0;
		NullCheck(L_57);
		MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151 * L_58;
		L_58 = Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8(L_57, /*hidden argument*/Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8_RuntimeMethod_var);
		NullCheck(L_58);
		int32_t L_59 = L_58->get_multiplierValue_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_60;
		L_60 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		NullCheck(L_60);
		int32_t L_61 = L_60->get_gemCount_18();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1)), (int32_t)L_61));
		String_t* L_62;
		L_62 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_63;
		L_63 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2, L_62, /*hidden argument*/NULL);
		NullCheck(L_56);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_56, L_63);
	}

IL_01d9:
	{
		// audioSource.clip = victory;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_64 = __this->get_audioSource_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_65 = __this->get_victory_7();
		NullCheck(L_64);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_64, L_65, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_66 = __this->get_audioSource_10();
		NullCheck(L_66);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_66, /*hidden argument*/NULL);
	}

IL_01f5:
	{
		// if (gameObject.tag == "Player")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67;
		L_67 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		String_t* L_68;
		L_68 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_67, /*hidden argument*/NULL);
		bool L_69;
		L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_68, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0372;
		}
	}
	{
		// if (other.tag == "Obstacle" || other.tag == "SpinningObstacle" || other.tag == "Lava")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_70 = ___other0;
		NullCheck(L_70);
		String_t* L_71;
		L_71 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_70, /*hidden argument*/NULL);
		bool L_72;
		L_72 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_71, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0245;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_73 = ___other0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_73, /*hidden argument*/NULL);
		bool L_75;
		L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_74, _stringLiteral228C5D264BC416C135731F3B0E7516906AB5B225, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_0245;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_76 = ___other0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_76, /*hidden argument*/NULL);
		bool L_78;
		L_78 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_77, _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_02b1;
		}
	}

IL_0245:
	{
		// character.GetComponent<Animation>().CrossFade("Defeat");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = __this->get_character_9();
		NullCheck(L_79);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_80;
		L_80 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_79, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		NullCheck(L_80);
		Animation_CrossFade_mAA2C1F467BCFF4AFF6B06D041BA98A9CBD57352B(L_80, _stringLiteralE3DC6DB186DEF6C0F9C988D1C401526A835CC85C, /*hidden argument*/NULL);
		// other.enabled = false;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_81 = ___other0;
		NullCheck(L_81);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_81, (bool)0, /*hidden argument*/NULL);
		// transform.GetComponent<BoxCollider>().enabled = false;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_83;
		L_83 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(L_82, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		NullCheck(L_83);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_83, (bool)0, /*hidden argument*/NULL);
		// transform.GetComponent<Rigidbody>().useGravity = false;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_84);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_85;
		L_85 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_84, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_85);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_85, (bool)0, /*hidden argument*/NULL);
		// GameOver();
		PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D(__this, /*hidden argument*/NULL);
		// defeatMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86 = __this->get_defeatMenu_11();
		NullCheck(L_86);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_86, (bool)1, /*hidden argument*/NULL);
		// audioSource.clip = defeat;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_87 = __this->get_audioSource_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_88 = __this->get_defeat_8();
		NullCheck(L_87);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_87, L_88, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_89 = __this->get_audioSource_10();
		NullCheck(L_89);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_89, /*hidden argument*/NULL);
	}

IL_02b1:
	{
		// if (other.tag == "Multiplier")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_90 = ___other0;
		NullCheck(L_90);
		String_t* L_91;
		L_91 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_90, /*hidden argument*/NULL);
		bool L_92;
		L_92 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_91, _stringLiteral7626381F776433C4AC69BE7352121D44F315B33B, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_0372;
		}
	}
	{
		// GameOver();
		PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D(__this, /*hidden argument*/NULL);
		// character.GetComponent<Animation>().CrossFade("Victory");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = __this->get_character_9();
		NullCheck(L_93);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_94;
		L_94 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_93, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		NullCheck(L_94);
		Animation_CrossFade_mAA2C1F467BCFF4AFF6B06D041BA98A9CBD57352B(L_94, _stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042, /*hidden argument*/NULL);
		// victoryMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = __this->get_victoryMenu_12();
		NullCheck(L_95);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_95, (bool)1, /*hidden argument*/NULL);
		// audioSource.clip = victory;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_96 = __this->get_audioSource_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_97 = __this->get_victory_7();
		NullCheck(L_96);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_96, L_97, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_98 = __this->get_audioSource_10();
		NullCheck(L_98);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_98, /*hidden argument*/NULL);
		// if (other.GetComponent<MultiplierHandler>().multiplierValue - 1 == 0)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_99 = ___other0;
		NullCheck(L_99);
		MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151 * L_100;
		L_100 = Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8(L_99, /*hidden argument*/Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8_RuntimeMethod_var);
		NullCheck(L_100);
		int32_t L_101 = L_100->get_multiplierValue_4();
		if (((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1)))
		{
			goto IL_033d;
		}
	}
	{
		// scoreText.text = "SCORE: " + FindObjectOfType<GameManager>().gemCount.ToString();
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_102 = __this->get_scoreText_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_103;
		L_103 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		NullCheck(L_103);
		int32_t* L_104 = L_103->get_address_of_gemCount_18();
		String_t* L_105;
		L_105 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_104, /*hidden argument*/NULL);
		String_t* L_106;
		L_106 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2, L_105, /*hidden argument*/NULL);
		NullCheck(L_102);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_102, L_106);
		// }
		return;
	}

IL_033d:
	{
		// scoreText.text = ("SCORE: " + ((other.GetComponent<MultiplierHandler>().multiplierValue - 1) * FindObjectOfType<GameManager>().gemCount).ToString());
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_107 = __this->get_scoreText_13();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_108 = ___other0;
		NullCheck(L_108);
		MultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151 * L_109;
		L_109 = Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8(L_108, /*hidden argument*/Component_GetComponent_TisMultiplierHandler_tF7E723CF4AFC3897E71D336B466DE1F14241A151_m14E34468E5C90C8071C878C6A86ED822C38D75B8_RuntimeMethod_var);
		NullCheck(L_109);
		int32_t L_110 = L_109->get_multiplierValue_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_111;
		L_111 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		NullCheck(L_111);
		int32_t L_112 = L_111->get_gemCount_18();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)1)), (int32_t)L_112));
		String_t* L_113;
		L_113 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_114;
		L_114 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2, L_113, /*hidden argument*/NULL);
		NullCheck(L_107);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_107, L_114);
	}

IL_0372:
	{
		// }
		return;
	}
}
// System.Void PlayerController::AddCube(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddCube_m1DE7FBF224E5470A0E6DB6CA55050846956F8150 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412C8405271F0ED5F71DB68D6D38DC79EDEF18CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABA5A8640C8A45C819CB88F7FF44A1A6D4B49E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * V_1 = NULL;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * V_2 = NULL;
	{
		// for (int i = 0; i < other.transform.childCount; i++)
		V_0 = 0;
		goto IL_0216;
	}

IL_0007:
	{
		// other.transform.GetChild(i).GetComponent<BoxCollider>().enabled = true;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_4;
		L_4 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(L_3, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		NullCheck(L_4);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_4, (bool)1, /*hidden argument*/NULL);
		// other.transform.GetChild(i).GetComponent<Rigidbody>().useGravity = true;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___other0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9;
		L_9 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_8, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_9);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_9, (bool)1, /*hidden argument*/NULL);
		// if (transform.tag == "Player")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_11, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0128;
		}
	}
	{
		// var childCube = Instantiate(other.transform.GetChild(i).gameObject, transform.position, Quaternion.identity, transform);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = ___other0;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B(L_17, L_19, L_20, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B_RuntimeMethod_var);
		// transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), L_26, ((float)il2cpp_codegen_add((float)L_29, (float)(1.0f))), L_32, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_33, /*hidden argument*/NULL);
		// childCube.transform.position = new Vector3(transform.position.x, 1, transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = L_22;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), L_38, (1.0f), L_41, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_42, /*hidden argument*/NULL);
		// var animator = childCube.transform.Find("+1").GetComponent<Animator>();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_43, _stringLiteral412C8405271F0ED5F71DB68D6D38DC79EDEF18CD, /*hidden argument*/NULL);
		NullCheck(L_44);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_45;
		L_45 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_44, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		V_1 = L_45;
		// if (animator != null) { animator.SetBool("collected", true); }
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_46 = V_1;
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0212;
		}
	}
	{
		// if (animator != null) { animator.SetBool("collected", true); }
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_48 = V_1;
		NullCheck(L_48);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_48, _stringLiteralABA5A8640C8A45C819CB88F7FF44A1A6D4B49E2F, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0212;
	}

IL_0128:
	{
		// var childCube = Instantiate(other.transform.GetChild(i).gameObject, transform.position, Quaternion.identity, transform.parent);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_49 = ___other0;
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_49, /*hidden argument*/NULL);
		int32_t L_51 = V_0;
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_52, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B(L_53, L_55, L_56, L_58, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m31BF69730FCC7A1D9A48F6A9597D79994B6C5F8B_RuntimeMethod_var);
		// transform.parent.position = new Vector3(transform.parent.position.x, transform.parent.position.y + 1, transform.parent.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_60, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		float L_73 = L_72.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_74), L_65, ((float)il2cpp_codegen_add((float)L_69, (float)(1.0f))), L_73, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_61, L_74, /*hidden argument*/NULL);
		// childCube.transform.position = new Vector3(transform.position.x, 1, transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = L_59;
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_75, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_77);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_77, /*hidden argument*/NULL);
		float L_79 = L_78.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_80, /*hidden argument*/NULL);
		float L_82 = L_81.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_83), L_79, (1.0f), L_82, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_76, L_83, /*hidden argument*/NULL);
		// var animator = childCube.transform.Find("+1").GetComponent<Animator>();
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_75, /*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_84, _stringLiteral412C8405271F0ED5F71DB68D6D38DC79EDEF18CD, /*hidden argument*/NULL);
		NullCheck(L_85);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_86;
		L_86 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_85, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		V_2 = L_86;
		// if (animator != null) { animator.SetBool("collected", true); }
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_87 = V_2;
		bool L_88;
		L_88 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_87, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0212;
		}
	}
	{
		// if (animator != null) { animator.SetBool("collected", true); }
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_89 = V_2;
		NullCheck(L_89);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_89, _stringLiteralABA5A8640C8A45C819CB88F7FF44A1A6D4B49E2F, (bool)1, /*hidden argument*/NULL);
	}

IL_0212:
	{
		// for (int i = 0; i < other.transform.childCount; i++)
		int32_t L_90 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
	}

IL_0216:
	{
		// for (int i = 0; i < other.transform.childCount; i++)
		int32_t L_91 = V_0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_92 = ___other0;
		NullCheck(L_92);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_92, /*hidden argument*/NULL);
		NullCheck(L_93);
		int32_t L_94;
		L_94 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_91) < ((int32_t)L_94)))
		{
			goto IL_0007;
		}
	}
	{
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_95 = ___other0;
		NullCheck(L_95);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96;
		L_96 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_95, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_96, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<PlayerMovement>().isMoving = false;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57(/*hidden argument*/Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57_RuntimeMethod_var);
		NullCheck(L_0);
		L_0->set_isMoving_6((bool)0);
		// FindObjectOfType<GameManager>().gemCounter.SetActive(false);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_gemCounter_7();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// FindObjectOfType<GameManager>().progressBar.SetActive(false);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3;
		L_3 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_progressBar_8();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// FindObjectOfType<GameManager>().gameButtons.SetActive(false);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5;
		L_5 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m7F76BD98126284E024217554AAB12C132E233878_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_gameButtons_9();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::StartSpeedBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_StartSpeedBoost_mA71C9A7B79B3D3F37ED56A87D81B9A82AD9FC9A3 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(SpeedBoost());
		RuntimeObject* L_0;
		L_0 = PlayerMovement_SpeedBoost_mA51749FE4F079B94223A406B6AA19BC96547859E(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerMovement::SpeedBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_SpeedBoost_mA51749FE4F079B94223A406B6AA19BC96547859E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * L_0 = (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C *)il2cpp_codegen_object_new(U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C_il2cpp_TypeInfo_var);
		U3CSpeedBoostU3Ed__7__ctor_m6D71D1B789B81CD4A5648518A990A53579506A0C(L_0, 0, /*hidden argument*/NULL);
		U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isMoving)
		bool L_0 = __this->get_isMoving_6();
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0) && MainMenu == null && defeatMenu.activeInHierarchy == false && victoryMenu.activeInHierarchy == false)
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_MainMenu_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_defeatMenu_8();
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_victoryMenu_9();
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// isMoving = true;
		__this->set_isMoving_6((bool)1);
	}

IL_003f:
	{
		// return;
		return;
	}

IL_0040:
	{
		// transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + forwardSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		float L_18 = __this->get_forwardSpeed_4();
		float L_19;
		L_19 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_11, L_14, ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_20, /*hidden argument*/NULL);
		// if (transform.position.x >= -2)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		if ((!(((float)L_23) >= ((float)(-2.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x - sideSpeed * Time.deltaTime, transform.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		float L_28 = __this->get_sideSpeed_5();
		float L_29;
		L_29 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), ((float)il2cpp_codegen_subtract((float)L_27, (float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)))), L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_36, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		// if (transform.position.x <= 2)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_x_2();
		if ((!(((float)L_39) <= ((float)(2.0f)))))
		{
			goto IL_0155;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x + sideSpeed * Time.deltaTime, transform.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_x_2();
		float L_44 = __this->get_sideSpeed_5();
		float L_45;
		L_45 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), ((float)il2cpp_codegen_add((float)L_43, (float)((float)il2cpp_codegen_multiply((float)L_44, (float)L_45)))), L_48, L_51, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_52, /*hidden argument*/NULL);
	}

IL_0155:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// public float forwardSpeed = 10f;
		__this->set_forwardSpeed_4((10.0f));
		// public float sideSpeed = 10f;
		__this->set_sideSpeed_5((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ProgressBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar_Start_m5FF103D2D5E7B682405187CF9B9F5C1B7C411902 (ProgressBar_tA0F844D97A02726F8E64CC8E159B946A2B413378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0;
		L_0 = Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4(__this, /*hidden argument*/Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		__this->set_slider_4(L_0);
		// }
		return;
	}
}
// System.Void ProgressBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar_Update_mBA4A5198D762E8AE2CCBB4184017F819694BE2EC (ProgressBar_tA0F844D97A02726F8E64CC8E159B946A2B413378 * __this, const RuntimeMethod* method)
{
	{
		// slider.value = player.transform.position.z / 443;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_4/(float)(443.0f))));
		// }
		return;
	}
}
// System.Void ProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar__ctor_m454FFD480D493DE1A419E3A1C3DB2B02A7003041 (ProgressBar_tA0F844D97A02726F8E64CC8E159B946A2B413378 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpinningObstacle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinningObstacle_Start_m0288A86A153A83B1B29A2B489156AEEDD5BE818B (SpinningObstacle_t7F2DA78BDF192F6067C57C65BD356854A488E60E * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, Random.Range(0, 90), 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)90), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), ((float)((float)L_1)), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpinningObstacle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinningObstacle_Update_m64420AA5AD1162CB715A0D4B06D5C90FAF799CE5 (SpinningObstacle_t7F2DA78BDF192F6067C57C65BD356854A488E60E * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, rotationSpeed * Time.deltaTime, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		float L_2;
		L_2 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpinningObstacle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinningObstacle__ctor_m19D827E0864FC7AF90079F63B687BC965EA34A14 (SpinningObstacle_t7F2DA78BDF192F6067C57C65BD356854A488E60E * __this, const RuntimeMethod* method)
{
	{
		// public float rotationSpeed = 60f;
		__this->set_rotationSpeed_4((60.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single SwerveInputSystem::get_MoveFactorX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwerveInputSystem_get_MoveFactorX_mBA62E145DFF8F56B36B3CC4C209477E1D7EB5C8A (SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * __this, const RuntimeMethod* method)
{
	{
		// public float MoveFactorX => _moveFactorX;
		float L_0 = __this->get__moveFactorX_5();
		return L_0;
	}
}
// System.Void SwerveInputSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwerveInputSystem_Update_m578107FA2E7DBFC7314CAE210FB853C431FA8277 (SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _lastFrameFingerPositionX = Input.mousePosition.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set__lastFrameFingerPositionX_4(L_2);
		// }
		return;
	}

IL_0019:
	{
		// else if (Input.GetMouseButton(0))
		bool L_3;
		L_3 = Input_GetMouseButton_mEF40689A9E574691E832255C430A9E626B005AF3(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// _moveFactorX = Input.mousePosition.x - _lastFrameFingerPositionX;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6 = __this->get__lastFrameFingerPositionX_4();
		__this->set__moveFactorX_5(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		// _lastFrameFingerPositionX = Input.mousePosition.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		__this->set__lastFrameFingerPositionX_4(L_8);
		// }
		return;
	}

IL_0049:
	{
		// else if (Input.GetMouseButtonUp(0))
		bool L_9;
		L_9 = Input_GetMouseButtonUp_m72BC7AC98DF3D431D2AD59D0916216D4E31A9503(0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// _moveFactorX = 0f;
		__this->set__moveFactorX_5((0.0f));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void SwerveInputSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwerveInputSystem__ctor_mEF42B21365B159C04907B19D4E0DC79F354FCF9B (SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SwerveMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwerveMovement_Awake_mB71DA99ECDC64232EDC563FED08B785FF0030938 (SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60_m64FD7BA4325ACCB4A5899E462CB65B56A473495E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _swerveInputSystem = GetComponent<SwerveInputSystem>();
		SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * L_0;
		L_0 = Component_GetComponent_TisSwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60_m64FD7BA4325ACCB4A5899E462CB65B56A473495E(__this, /*hidden argument*/Component_GetComponent_TisSwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60_m64FD7BA4325ACCB4A5899E462CB65B56A473495E_RuntimeMethod_var);
		__this->set__swerveInputSystem_4(L_0);
		// }
		return;
	}
}
// System.Void SwerveMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwerveMovement_Update_mD18312E6FA1A9CF3D71176E5A6551903661EC866 (SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (FindObjectOfType<PlayerMovement>().isMoving == true)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57(/*hidden argument*/Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m8B706AA16952DFA61EC7AE90376491F91B62EC57_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = L_0->get_isMoving_6();
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// float swerveAmount = Time.deltaTime * swerveSpeed * _swerveInputSystem.MoveFactorX;
		float L_2;
		L_2 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_3 = __this->get_swerveSpeed_5();
		SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * L_4 = __this->get__swerveInputSystem_4();
		NullCheck(L_4);
		float L_5;
		L_5 = SwerveInputSystem_get_MoveFactorX_mBA62E145DFF8F56B36B3CC4C209477E1D7EB5C8A_inline(L_4, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)L_5));
		// swerveAmount = Mathf.Clamp(swerveAmount, -maxSwerveAmount, maxSwerveAmount);
		float L_6 = V_0;
		float L_7 = __this->get_maxSwerveAmount_6();
		float L_8 = __this->get_maxSwerveAmount_6();
		float L_9;
		L_9 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(L_6, ((-L_7)), L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// transform.Translate(swerveAmount, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_11 = V_0;
		NullCheck(L_10);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_10, L_11, (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void SwerveMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwerveMovement__ctor_m575C4A1F963909271044119ECF09A0DC3166FA54 (SwerveMovement_t2B4F6D7D1035C1F0E0B10613A07DB0B1EEBC4592 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float swerveSpeed = 0.5f;
		__this->set_swerveSpeed_5((0.5f));
		// [SerializeField] private float maxSwerveAmount = 1f;
		__this->set_maxSwerveAmount_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void IAPManager/<AfterBuyProductSuccess>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterBuyProductSuccessU3Ed__9__ctor_m0F29B8A2FE9C9CB472518F7AEC66A0606D422FDB (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IAPManager/<AfterBuyProductSuccess>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterBuyProductSuccessU3Ed__9_System_IDisposable_Dispose_m8B0EA7CE52A80C07D5C757692F49C26A8DDF17E7 (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IAPManager/<AfterBuyProductSuccess>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAfterBuyProductSuccessU3Ed__9_MoveNext_mF23DAF99483E86AEC668C1604E80260C5024C0F4 (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC0EB9461DC9141BA0890E7024C3DB3D6C5F978);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A28846B358210F76AEC8A1F4B3F61B4980525EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA83C35A57D608AAADF6C397783E4C38D113260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E41442795D78A9B58DB891A50A4A3A254C76BC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42FF1DBB6406F333A84EFC3224CE02C110097978);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C79163A4C6012FB1541B77CA4D0FEA926C5C831);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD26ADA7228FA548AD67DF0442538CA7E9594DD75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4A8CA445780353AE0794B534AD6AE34BE437E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE452A991EEA11052D14F8C037C008B1554601DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC5528E0383AC651AD239AE6E9F7189BAF810AAA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * L_1 = __this->get_U3CU3E4__this_3();
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
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("[IAPManager]: AfterBuyProductSuccess");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral2E41442795D78A9B58DB891A50A4A3A254C76BC1, /*hidden argument*/NULL);
		// Debug.Log("PURCHASED ITEM ID" + obj.InAppPurchaseData.ProductId);
		PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * L_5 = __this->get_obj_2();
		NullCheck(L_5);
		InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_6;
		L_6 = VirtFuncInvoker0< InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * >::Invoke(8 /* HuaweiMobileServices.IAP.InAppPurchaseData HuaweiMobileServices.IAP.PurchaseResultInfo::get_InAppPurchaseData() */, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral2BA83C35A57D608AAADF6C397783E4C38D113260, L_7, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_8, /*hidden argument*/NULL);
		// if (obj.InAppPurchaseData.ProductId == "removeAds")
		PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * L_9 = __this->get_obj_2();
		NullCheck(L_9);
		InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_10;
		L_10 = VirtFuncInvoker0< InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * >::Invoke(8 /* HuaweiMobileServices.IAP.InAppPurchaseData HuaweiMobileServices.IAP.PurchaseResultInfo::get_InAppPurchaseData() */, L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_11, _stringLiteral1A28846B358210F76AEC8A1F4B3F61B4980525EE, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		// gm.showAds = false;
		IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * L_13 = V_1;
		NullCheck(L_13);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_14 = L_13->get_gm_7();
		NullCheck(L_14);
		L_14->set_showAds_15((bool)0);
		// Debug.Log("BOUGHT REMOVE ADS");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralFC5528E0383AC651AD239AE6E9F7189BAF810AAA, /*hidden argument*/NULL);
		// }
		goto IL_0141;
	}

IL_009e:
	{
		// else if (obj.InAppPurchaseData.ProductId == "gems100")
		PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * L_15 = __this->get_obj_2();
		NullCheck(L_15);
		InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_16;
		L_16 = VirtFuncInvoker0< InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * >::Invoke(8 /* HuaweiMobileServices.IAP.InAppPurchaseData HuaweiMobileServices.IAP.PurchaseResultInfo::get_InAppPurchaseData() */, L_15);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_17, _stringLiteral42FF1DBB6406F333A84EFC3224CE02C110097978, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d3;
		}
	}
	{
		// gm.AddGemsCount(100);
		IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * L_19 = V_1;
		NullCheck(L_19);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_20 = L_19->get_gm_7();
		NullCheck(L_20);
		GameManager_AddGemsCount_mD6C20B60D7D263381CAE1B41AE5D76C14C2E0804(L_20, ((int32_t)100), /*hidden argument*/NULL);
		// Debug.Log("BOUGHT 100 gems");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralDE4A8CA445780353AE0794B534AD6AE34BE437E9, /*hidden argument*/NULL);
		// }
		goto IL_0141;
	}

IL_00d3:
	{
		// else if (obj.InAppPurchaseData.ProductId == "gems500")
		PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * L_21 = __this->get_obj_2();
		NullCheck(L_21);
		InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_22;
		L_22 = VirtFuncInvoker0< InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * >::Invoke(8 /* HuaweiMobileServices.IAP.InAppPurchaseData HuaweiMobileServices.IAP.PurchaseResultInfo::get_InAppPurchaseData() */, L_21);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_23, _stringLiteral4C79163A4C6012FB1541B77CA4D0FEA926C5C831, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_010b;
		}
	}
	{
		// gm.AddGemsCount(500);
		IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * L_25 = V_1;
		NullCheck(L_25);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_26 = L_25->get_gm_7();
		NullCheck(L_26);
		GameManager_AddGemsCount_mD6C20B60D7D263381CAE1B41AE5D76C14C2E0804(L_26, ((int32_t)500), /*hidden argument*/NULL);
		// Debug.Log("BOUGHT 500 gems");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralD26ADA7228FA548AD67DF0442538CA7E9594DD75, /*hidden argument*/NULL);
		// }
		goto IL_0141;
	}

IL_010b:
	{
		// else if (obj.InAppPurchaseData.ProductId == "gems1000")
		PurchaseResultInfo_tF6D0A99C425099EF286D68B05DD21A5B751AF7B1 * L_27 = __this->get_obj_2();
		NullCheck(L_27);
		InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * L_28;
		L_28 = VirtFuncInvoker0< InAppPurchaseData_tEE1CD597C233106CD0C1A3D28A5D4206AE6F9C57 * >::Invoke(8 /* HuaweiMobileServices.IAP.InAppPurchaseData HuaweiMobileServices.IAP.PurchaseResultInfo::get_InAppPurchaseData() */, L_27);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = InAppPurchaseData_get_ProductId_mED139C031D3EB8FCA16265761531424F8D051482(L_28, /*hidden argument*/NULL);
		bool L_30;
		L_30 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_29, _stringLiteralEE452A991EEA11052D14F8C037C008B1554601DA, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0141;
		}
	}
	{
		// gm.AddGemsCount(1000);
		IAPManager_t410B5A3C70D5564E6332A6C593942FE3F5761CE2 * L_31 = V_1;
		NullCheck(L_31);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_32 = L_31->get_gm_7();
		NullCheck(L_32);
		GameManager_AddGemsCount_mD6C20B60D7D263381CAE1B41AE5D76C14C2E0804(L_32, ((int32_t)1000), /*hidden argument*/NULL);
		// Debug.Log("BOUGHT 1000 gems");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral0BC0EB9461DC9141BA0890E7024C3DB3D6C5F978, /*hidden argument*/NULL);
	}

IL_0141:
	{
		// }
		return (bool)0;
	}
}
// System.Object IAPManager/<AfterBuyProductSuccess>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterBuyProductSuccessU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m020BC9B4FB1973CECCDFA0F724633D19D4EBDE1C (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IAPManager/<AfterBuyProductSuccess>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterBuyProductSuccessU3Ed__9_System_Collections_IEnumerator_Reset_m17413638A35DAD79C5ACD7688FD11F3F2BC3DA2A (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAfterBuyProductSuccessU3Ed__9_System_Collections_IEnumerator_Reset_m17413638A35DAD79C5ACD7688FD11F3F2BC3DA2A_RuntimeMethod_var)));
	}
}
// System.Object IAPManager/<AfterBuyProductSuccess>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterBuyProductSuccessU3Ed__9_System_Collections_IEnumerator_get_Current_m8293F20FD7DAD3402D8E1191D2707AA44FFE3A5F (U3CAfterBuyProductSuccessU3Ed__9_t80A7B31AAABF425D10EA5BB718694356B2E28B44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerMovement/<SpeedBoost>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostU3Ed__7__ctor_m6D71D1B789B81CD4A5648518A990A53579506A0C (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerMovement/<SpeedBoost>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostU3Ed__7_System_IDisposable_Dispose_mBC47BB9799B7EB5C7911135EE1F9FD88164A3A50 (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerMovement/<SpeedBoost>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeedBoostU3Ed__7_MoveNext_m7D2CD8A67E52D6EF2C6E7203EA880B9F5A8A9611 (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// forwardSpeed = 15;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_forwardSpeed_4((15.0f));
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// forwardSpeed = 10;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_forwardSpeed_4((10.0f));
		// }
		return (bool)0;
	}
}
// System.Object PlayerMovement/<SpeedBoost>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedBoostU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD53A0996701BD309227214C1171F073A29135153 (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerMovement/<SpeedBoost>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostU3Ed__7_System_Collections_IEnumerator_Reset_m5420E0EAD5FEF2EDF43F6EBE91C534E0F59E8641 (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeedBoostU3Ed__7_System_Collections_IEnumerator_Reset_m5420E0EAD5FEF2EDF43F6EBE91C534E0F59E8641_RuntimeMethod_var)));
	}
}
// System.Object PlayerMovement/<SpeedBoost>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedBoostU3Ed__7_System_Collections_IEnumerator_get_Current_mAADF21753B2B7492C8CF344E403400D64E8E03B8 (U3CSpeedBoostU3Ed__7_t0373B0B665AC1DF28B16262A5A03DE32E539E59C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSAdsKitManager_set_OnRewarded_mFAC15946C8F87AEA568A8DB1C48D276D7D5A9988_inline (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<Reward> OnRewarded { get; set; }
		Action_1_t8C765FD9B4DD42582C3C10EC987E85651034E233 * L_0 = ___value0;
		__this->set_U3COnRewardedU3Ek__BackingField_32(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSAdsKitManager_set_OnInterstitialAdClosed_m25D4DFD03EFE5F86B2D38A09E817A2C5670739F4_inline (HMSAdsKitManager_t463956CA3C9F8B024F4E72FAAC976E1EBA1C7346 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnInterstitialAdClosed { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnInterstitialAdClosedU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnBuyProductSuccess_mC47745F958EBE985DD000C825604609597261B61_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<PurchaseResultInfo> OnBuyProductSuccess { get; set; }
		Action_1_t8A809F3642E842B078F19986EA7D8624E0FFC45D * L_0 = ___value0;
		__this->set_U3COnBuyProductSuccessU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnInitializeIAPSuccess_m4A0D34E7B9D171DE803EB12BD402CDF04AB2BAFD_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnInitializeIAPSuccess { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnInitializeIAPSuccessU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnInitializeIAPFailure_m150AEAB5B864BEFA33AC8DCA1B248F051B71A9D2_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<HMSException> OnInitializeIAPFailure { get; set; }
		Action_1_tB36B49DCD2E61A7EC3434896658A50848BDF0B7A * L_0 = ___value0;
		__this->set_U3COnInitializeIAPFailureU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnBuyProductFailure_mB36DA0387AC1F83BDFBCC45D285FCA1C373F0B41_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<int> OnBuyProductFailure { get; set; }
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ___value0;
		__this->set_U3COnBuyProductFailureU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HMSIAPManager_set_OnObtainOwnedPurchasesSuccess_mB8553F57B27B81A5D4B20C44D0B4D5752D881E34_inline (HMSIAPManager_t778B0AE18CF33B671FF914C05E25E4A4D0A204C5 * __this, Action_1_t373431775BB3837100220EBC11A360140F6E9857 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<OwnedPurchasesResult> OnObtainOwnedPurchasesSuccess { get; set; }
		Action_1_t373431775BB3837100220EBC11A360140F6E9857 * L_0 = ___value0;
		__this->set_U3COnObtainOwnedPurchasesSuccessU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwerveInputSystem_get_MoveFactorX_mBA62E145DFF8F56B36B3CC4C209477E1D7EB5C8A_inline (SwerveInputSystem_t678C40A1773F630E271C897F418EBFA78BFDCF60 * __this, const RuntimeMethod* method)
{
	{
		// public float MoveFactorX => _moveFactorX;
		float L_0 = __this->get__moveFactorX_5();
		return L_0;
	}
}
