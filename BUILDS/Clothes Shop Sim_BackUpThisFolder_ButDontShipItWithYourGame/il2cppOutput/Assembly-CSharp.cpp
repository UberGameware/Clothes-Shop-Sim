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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_tAB7E6AAC5334AFEE42DB96DB8C245338F041A2DB;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Sprite>
struct IEnumerable_1_t817A10361AC5A36AA86450B5C080CD9A65F342F6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Texture2D>
struct IEnumerable_1_t6B1BB5C694AA08B7F5B22411B5A28C5ED18C04D3;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<UberGameware.GameEventListener>
struct List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4;
// System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>
struct List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8;
// System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>
struct List_1_t851C791428040565EF5A850706116C0386A85D19;
// System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>
struct List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46;
// System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>
struct List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay>
struct List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11;
// System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>
struct List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<ClothesShopSim.ItemInfo>
struct UnityEvent_1_t72C85DC0B1ACDC72F912E095DB0C63B9445FBFF7;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// ClothesShopSim.AnimationSet[]
struct AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UberGameware.GameEventListener[]
struct GameEventListenerU5BU5D_t88868ABFB2871307BEA574719892FB4B925D3804;
// UberGameware.GameEventListenerBool[]
struct GameEventListenerBoolU5BU5D_t4233E40AFB60D8F6A743181375294F4775931F62;
// UberGameware.GameEventListenerInt[]
struct GameEventListenerIntU5BU5D_t87FE23907E65252825F1537B49A8A99DA9AC83A3;
// UberGameware.GameEventListenerIntInt[]
struct GameEventListenerIntIntU5BU5D_t8B3618DAB256570AFE0E42F9AADBBBE723D6F62C;
// ClothesShopSim.GameEventListenerItemInfo[]
struct GameEventListenerItemInfoU5BU5D_t8C89F994748FEC885BE13533F4E2884032CFBB64;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// ClothesShopSim.InventoryItemDisplay[]
struct InventoryItemDisplayU5BU5D_t34157B0BD38EEE03BF6352A8807AC753C04D387E;
// ClothesShopSim.ItemInfo[]
struct ItemInfoU5BU5D_tB180B3BB2C89EBEE98EECF02827CB0D2CC1120E5;
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
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
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
// ClothesShopSim.AnimationSet
struct AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ClothesShopSim.Catwalk
struct Catwalk_t3A18B28F47BF0CB00BFC9FC734A2D556FF91A06E;
// ClothesShopSim.CatwalkEndpoint
struct CatwalkEndpoint_t261B8096291849989F5E790C759E5A787D1BA989;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UberGameware.ComboStatus
struct ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ClothesShopSim.DisplayPodium
struct DisplayPodium_tFC1A986B4AB0EBED93F0E5267D8BA8FAAC6A7956;
// ClothesShopSim.FittingRoomInterior
struct FittingRoomInterior_t1DEECA8CBCD71DE0726F63B842864BDE98BB0F21;
// UberGameware.FloatVariable
struct FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96;
// UberGameware.GameEvent
struct GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF;
// UberGameware.GameEventBool
struct GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002;
// UberGameware.GameEventInt
struct GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1;
// UberGameware.GameEventIntInt
struct GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A;
// ClothesShopSim.GameEventItemInfo
struct GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8;
// UberGameware.GameEventListener
struct GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D;
// UberGameware.GameEventListenerBool
struct GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034;
// UberGameware.GameEventListenerInt
struct GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D;
// UberGameware.GameEventListenerIntInt
struct GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA;
// ClothesShopSim.GameEventListenerItemInfo
struct GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36;
// ClothesShopSim.GameManager
struct GameManager_tC10DBADDFAAF3741805C402B870CFD2D11233139;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UberGameware.IntArray
struct IntArray_tA8B3F80111405AA26EBCCE499717950D9A2F0F0C;
// UberGameware.IntVariable
struct IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C;
// ClothesShopSim.InventoryController
struct InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8;
// ClothesShopSim.InventoryItemDisplay
struct InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// ClothesShopSim.ItemInfo
struct ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614;
// ClothesShopSim.ItemInfoHolder
struct ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UberGameware.LevelRequirements
struct LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08;
// UberGameware.LevelStats
struct LevelStats_tEEE06A3F490878A6AEEDF7379881F625A1EDCA21;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ClothesShopSim.OutfitIDEnumVariable
struct OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// ClothesShopSim.Player
struct Player_t95480B4C431450EE5CC638C6855F3FD08AF36026;
// ClothesShopSim.PlayerInventory
struct PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83;
// ClothesShopSim.PlayerInventoryItemDetails
struct PlayerInventoryItemDetails_tE331B5B8A9E5B1D7AEBAC02160956D2CD3ABB1C6;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SelectedItemInfo
struct SelectedItemInfo_tB0FDFB600176681D40E8DAC7CB2ECF0C03619127;
// ClothesShopSim.SellTrigger
struct SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B;
// ClothesShopSim.ShopInventory
struct ShopInventory_tA0EE74857B9D1E279ECC5FFD4049F15801264AF2;
// ClothesShopSim.ShopInventoryItemDetails
struct ShopInventoryItemDetails_tB748A130407A8B8F13984EC494B6FB534C8B3AAB;
// ClothesShopSim.Shopkeeper
struct Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UberGameware.SpriteList
struct SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF;
// System.String
struct String_t;
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
// UberGameware.Texture2DList
struct Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UberGameware.TransformArray
struct TransformArray_tDB5F150AACB1FE52FD7D7F0E549C9F2C8D6C3FDB;
// UberGameware.TransformList
struct TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UberGameware.Vector3Variable
struct Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t851C791428040565EF5A850706116C0386A85D19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CBA279EF429BB47A07A9562B72801A9CAD21821;
IL2CPP_EXTERN_C String_t* _stringLiteral0D59B67F9A06ADCC80406D21A0F7C781955721A6;
IL2CPP_EXTERN_C String_t* _stringLiteral1070CC8E184BE861929977BFA671BAA7E9E0CEDA;
IL2CPP_EXTERN_C String_t* _stringLiteral160E61B00B70256608EF7998FD991410867E06C1;
IL2CPP_EXTERN_C String_t* _stringLiteral17392F0AD497B77D680C82936B7BA35FB660453E;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral34BDE2A44E6DCCB029C698B78BFC7F26540D56E5;
IL2CPP_EXTERN_C String_t* _stringLiteral3916019D8F5356380CA00EA9F0E9AB88D4EA1862;
IL2CPP_EXTERN_C String_t* _stringLiteral52D95362BBDAF2CD44C69883430D7B62C3B82DE8;
IL2CPP_EXTERN_C String_t* _stringLiteral5EC1A88CA446441BF971AB8F303A763947C4A5BD;
IL2CPP_EXTERN_C String_t* _stringLiteral6A226252B0C9FFA94AD65E379D933D22282F0129;
IL2CPP_EXTERN_C String_t* _stringLiteral6F2043C237E1AB3C4B9EAF769DF74E5432D57658;
IL2CPP_EXTERN_C String_t* _stringLiteral708E182BA1D05C5FB228FD9CA153E95BC851C919;
IL2CPP_EXTERN_C String_t* _stringLiteral8AA388378BADFB97A6BF31EDCB6489F1FEFDD598;
IL2CPP_EXTERN_C String_t* _stringLiteral8CC2154BA99A342FCE979C29AE9C29FFDC415950;
IL2CPP_EXTERN_C String_t* _stringLiteralA966F1C4081763B32BB3992FE33ED9867B16353A;
IL2CPP_EXTERN_C String_t* _stringLiteralC8474D8A136B7A6AE1CA94D4857D4D4DCB21EFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCE04BE753EAC6C5B41C17B30861DDD5FEB32F952;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F94FC2A16C1F2B4CDA11AB2CFFF94EA6567A68;
IL2CPP_EXTERN_C String_t* _stringLiteralD917CC3ADA385403DF1B03E665B0A470B3E71F32;
IL2CPP_EXTERN_C String_t* _stringLiteralE27F42D69CCA7FE22845E11E97F0E1807417FF82;
IL2CPP_EXTERN_C String_t* _stringLiteralE991B0CE9D022540A828552AFEDC503238464CE1;
IL2CPP_EXTERN_C String_t* _stringLiteralE9963D9C2A47A709FF6F1B4C63966AD3072C89BA;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAB90D9910982B938A2C681CA6D6F449480089B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_mB6B3EB24AF663B9823AD6EB8AEA882A08380D81D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4D750C40CFC1312A0FB6656469ED81C1B3171057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6CCFD695DEB4D88BEA21B73899E18FD9306FE83E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D580E22F2B40A10CB8DA12313EF07F7473960F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF_m7D374931E1CF107DE66703353873162EEC286051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m3CA530E64A865DC36BB8F753BCFE66A252CCDE65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m985F6E1C9134801737199F22354F36F9AACCF339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mE057CF4032DB4BC8DFEFD0F90228EEBBB8A0838A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF43562D9973F4CEA30890C08CC556AA05CB577FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m024BF4F8798C600627FEF8A95B896904198DE2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DE56F21B184504073655958E963A292C262D1C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8A9F63DE8E4B47934675204F6BFFC5692D3CCACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8D25072661CF852BA22B0FB2F14BB161C29A037B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m99FE132FA7C55B8D96E2087F957C174836BADF4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE308B9B2D8AED0E12CFC56FABAE138E8AA2BC577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEFDC82CDA456C406FD951A392E66DE6E11D80F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDD74167D509775966D129A0CBF58A6C94C608AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC86750A96693FCB7DE5CC14B79D2B37B24EBD9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m08275F792C69425DAD2F56508E21E8C0AB9D3A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m8C839AA4121E67AEF694EEAE17711545B8D225E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m8D1FE6734590627423CA15846451A82C89BD09F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mACD96CDDEEBE2C2AC0CFFEB145309B601BCF1670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mEA894631F403F81F936D32EBB1103F03B9919C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF1DAC4A6A32814C876E8F1DF300C7361F08006BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1570A8B17DCAEF2A400D852CC1FB902A67895488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E1B129BD009F1E03894A8E6372CD83ACBCAA017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m360F82E933395E29D879FC97D1C742A7A7EDF912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m952A2B12B1DF219F0559502ED5B9E63D88AE6B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA289A9C0DFD00848B4C385FE3C01C18C0DD16B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB4EC08575F2319542949488A97A5C71A0F3B9226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE66B9FAEF48492339DA4DAD534933A0F0C648BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m502E599B65A6EB3CB49650BAAE8E9613824201B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m700C2EF90BCA973ADB57DEC1E9397123DCFB97B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m749FB694594A7EB8DF44FD076DB0262D8BDBA2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBA37E3E644FDA0FB1E6BABCCBB8082D75F12E8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC1AE38D4321F040532C81A63D4C8BF8A44E80988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCA428BE0C25023D8B4DEB6A370F584844648AED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m72BA59C1EDDBBD24E8E55FCC23C31512B2075626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m797DACBA8C027ECBE075D1D6140C184AE65D6C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBD4B4D88E89A9D45F04F66C55AE03E6C2AA9052E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC7C33A113B26A7DA58A5A761D33F34AE23AC7887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD9C951DF1B4F300CBC8FE07187808D8C1B23775A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEC93AC99AFA643FF613E2B7A65D5A7B71DC459EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mBD18D5529B0416808C7E3088C56D3FB699F49DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD0A6A584AF4C78BFF7C6BFA1892AA098483C2CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UberGameware.GameEventListener>
struct List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameEventListenerU5BU5D_t88868ABFB2871307BEA574719892FB4B925D3804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameEventListenerU5BU5D_t88868ABFB2871307BEA574719892FB4B925D3804* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>
struct List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameEventListenerBoolU5BU5D_t4233E40AFB60D8F6A743181375294F4775931F62* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameEventListenerBoolU5BU5D_t4233E40AFB60D8F6A743181375294F4775931F62* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>
struct List_1_t851C791428040565EF5A850706116C0386A85D19  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameEventListenerIntU5BU5D_t87FE23907E65252825F1537B49A8A99DA9AC83A3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t851C791428040565EF5A850706116C0386A85D19_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameEventListenerIntU5BU5D_t87FE23907E65252825F1537B49A8A99DA9AC83A3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>
struct List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameEventListenerIntIntU5BU5D_t8B3618DAB256570AFE0E42F9AADBBBE723D6F62C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameEventListenerIntIntU5BU5D_t8B3618DAB256570AFE0E42F9AADBBBE723D6F62C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>
struct List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameEventListenerItemInfoU5BU5D_t8C89F994748FEC885BE13533F4E2884032CFBB64* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameEventListenerItemInfoU5BU5D_t8C89F994748FEC885BE13533F4E2884032CFBB64* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay>
struct List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InventoryItemDisplayU5BU5D_t34157B0BD38EEE03BF6352A8807AC753C04D387E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InventoryItemDisplayU5BU5D_t34157B0BD38EEE03BF6352A8807AC753C04D387E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>
struct List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemInfoU5BU5D_tB180B3BB2C89EBEE98EECF02827CB0D2CC1120E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemInfoU5BU5D_tB180B3BB2C89EBEE98EECF02827CB0D2CC1120E5* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Collections.Generic.List`1/Enumerator<ClothesShopSim.ItemInfo>
struct Enumerator_t6A5199477F9A872DCFF438274257403095B60706 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ____current_3;
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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<ClothesShopSim.ItemInfo>
struct UnityEvent_1_t72C85DC0B1ACDC72F912E095DB0C63B9445FBFF7  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
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

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UberGameware.ComboStatus
struct ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 UberGameware.ComboStatus::multiplierUnlockedMax
	int32_t ___multiplierUnlockedMax_4;
	// System.Int32 UberGameware.ComboStatus::currentMultiplier
	int32_t ___currentMultiplier_5;
	// System.Int32 UberGameware.ComboStatus::currentComboSteps
	int32_t ___currentComboSteps_6;
	// System.Action`1<System.Int32> UberGameware.ComboStatus::comboStepsUpdateAction
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___comboStepsUpdateAction_7;
	// System.Action`1<System.Int32> UberGameware.ComboStatus::multiplierUpdateAction
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___multiplierUpdateAction_8;
	// System.Action`1<System.Int32> UberGameware.ComboStatus::multiplierUnlockedAction
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___multiplierUnlockedAction_9;
};

// UberGameware.FloatVariable
struct FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Single UberGameware.FloatVariable::Value
	float ___Value_4;
};

// UberGameware.GameEvent
struct GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UberGameware.GameEventListener> UberGameware.GameEvent::eventListeners
	List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* ___eventListeners_4;
};

// UberGameware.GameEventBool
struct GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UberGameware.GameEventListenerBool> UberGameware.GameEventBool::eventListeners
	List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* ___eventListeners_4;
};

// UberGameware.GameEventInt
struct GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UberGameware.GameEventListenerInt> UberGameware.GameEventInt::eventListeners
	List_1_t851C791428040565EF5A850706116C0386A85D19* ___eventListeners_4;
};

// UberGameware.GameEventIntInt
struct GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt> UberGameware.GameEventIntInt::eventListeners
	List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* ___eventListeners_4;
};

// ClothesShopSim.GameEventItemInfo
struct GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo> ClothesShopSim.GameEventItemInfo::eventListeners
	List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* ___eventListeners_4;
};

// UberGameware.IntArray
struct IntArray_tA8B3F80111405AA26EBCCE499717950D9A2F0F0C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32[] UberGameware.IntArray::elements
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___elements_4;
	// System.Int32 UberGameware.IntArray::lastIndex
	int32_t ___lastIndex_5;
};

// UberGameware.IntVariable
struct IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 UberGameware.IntVariable::Value
	int32_t ___Value_4;
};

// ClothesShopSim.ItemInfo
struct ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// ClothesShopSim.OutfitID ClothesShopSim.ItemInfo::outfitID
	int32_t ___outfitID_4;
	// UnityEngine.Sprite ClothesShopSim.ItemInfo::itemSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___itemSprite_5;
	// System.Int32 ClothesShopSim.ItemInfo::buyPrice
	int32_t ___buyPrice_6;
	// System.Int32 ClothesShopSim.ItemInfo::sellPrice
	int32_t ___sellPrice_7;
	// System.Int32 ClothesShopSim.ItemInfo::quantityPurchased
	int32_t ___quantityPurchased_8;
	// System.Boolean ClothesShopSim.ItemInfo::equipped
	bool ___equipped_9;
};

// ClothesShopSim.ItemInfoHolder
struct ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// ClothesShopSim.ItemInfo ClothesShopSim.ItemInfoHolder::itemInfo
	ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo_4;
};

// UberGameware.LevelRequirements
struct LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Double UberGameware.LevelRequirements::targetValue
	double ___targetValue_4;
	// System.Int32 UberGameware.LevelRequirements::valueTypesQuantity
	int32_t ___valueTypesQuantity_5;
	// System.Int32 UberGameware.LevelRequirements::additionalTypesQuantity
	int32_t ___additionalTypesQuantity_6;
	// System.Collections.Generic.List`1<System.Int32> UberGameware.LevelRequirements::valueQuantityToSpawnPerType
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___valueQuantityToSpawnPerType_7;
	// System.Collections.Generic.List`1<System.Double> UberGameware.LevelRequirements::pricePerValueType
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___pricePerValueType_8;
	// System.Int32 UberGameware.LevelRequirements::additionalItemsQuantity
	int32_t ___additionalItemsQuantity_9;
	// System.Single UberGameware.LevelRequirements::speedMultiplier
	float ___speedMultiplier_10;
	// System.Single UberGameware.LevelRequirements::spawnInterval
	float ___spawnInterval_11;
	// System.Int32 UberGameware.LevelRequirements::quantityPerSet
	int32_t ___quantityPerSet_12;
};

// UberGameware.LevelStats
struct LevelStats_tEEE06A3F490878A6AEEDF7379881F625A1EDCA21  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 UberGameware.LevelStats::LevelDisplayed
	int32_t ___LevelDisplayed_4;
	// System.Int32 UberGameware.LevelStats::CurrentLevel
	int32_t ___CurrentLevel_5;
	// System.Int32 UberGameware.LevelStats::LivesLeft
	int32_t ___LivesLeft_6;
	// System.Double UberGameware.LevelStats::TotalValueAvailable
	double ___TotalValueAvailable_7;
	// System.Double UberGameware.LevelStats::LevelValueCollected
	double ___LevelValueCollected_8;
	// System.Single UberGameware.LevelStats::LevelProportionCompleted
	float ___LevelProportionCompleted_9;
};

// ClothesShopSim.OutfitIDEnumVariable
struct OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// ClothesShopSim.OutfitID ClothesShopSim.OutfitIDEnumVariable::Value
	int32_t ___Value_4;
};

// ClothesShopSim.PlayerInventoryItemDetails
struct PlayerInventoryItemDetails_tE331B5B8A9E5B1D7AEBAC02160956D2CD3ABB1C6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UberGameware.SpriteList
struct SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.Sprite> UberGameware.SpriteList::elements
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___elements_4;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UberGameware.Texture2DList
struct Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UberGameware.Texture2DList::elements
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___elements_4;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UberGameware.TransformArray
struct TransformArray_tDB5F150AACB1FE52FD7D7F0E549C9F2C8D6C3FDB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Transform[] UberGameware.TransformArray::transforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___transforms_4;
};

// UberGameware.TransformList
struct TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.Transform> UberGameware.TransformList::elements
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___elements_4;
};

// UberGameware.Vector3Variable
struct Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Vector3 UberGameware.Vector3Variable::Value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value_4;
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

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ClothesShopSim.AnimationSet
struct AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothesShopSim.OutfitID ClothesShopSim.AnimationSet::outfitID
	int32_t ___outfitID_4;
	// UnityEngine.GameObject ClothesShopSim.AnimationSet::walkRightAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walkRightAnimGameObject_5;
	// UnityEngine.GameObject ClothesShopSim.AnimationSet::walkForwardAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walkForwardAnimGameObject_6;
	// UnityEngine.GameObject ClothesShopSim.AnimationSet::walkBackAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walkBackAnimGameObject_7;
	// UnityEngine.GameObject ClothesShopSim.AnimationSet::idleRightAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___idleRightAnimGameObject_8;
	// UnityEngine.GameObject ClothesShopSim.AnimationSet::idleForwardAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___idleForwardAnimGameObject_9;
	// UnityEngine.GameObject ClothesShopSim.AnimationSet::idleBackAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___idleBackAnimGameObject_10;
};

// ClothesShopSim.Catwalk
struct Catwalk_t3A18B28F47BF0CB00BFC9FC734A2D556FF91A06E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ClothesShopSim.CatwalkEndpoint
struct CatwalkEndpoint_t261B8096291849989F5E790C759E5A787D1BA989  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ClothesShopSim.DisplayPodium
struct DisplayPodium_tFC1A986B4AB0EBED93F0E5267D8BA8FAAC6A7956  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothesShopSim.GameEventItemInfo ClothesShopSim.DisplayPodium::itemPurchased
	GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* ___itemPurchased_4;
	// ClothesShopSim.ItemInfo ClothesShopSim.DisplayPodium::itemInfo
	ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo_5;
	// UberGameware.IntVariable ClothesShopSim.DisplayPodium::playerCash
	IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* ___playerCash_6;
	// TMPro.TextMeshPro ClothesShopSim.DisplayPodium::itemDisplayPrice
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___itemDisplayPrice_7;
	// TMPro.TextMeshPro ClothesShopSim.DisplayPodium::transactionResult
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___transactionResult_8;
	// System.Boolean ClothesShopSim.DisplayPodium::isActive
	bool ___isActive_9;
};

// ClothesShopSim.FittingRoomInterior
struct FittingRoomInterior_t1DEECA8CBCD71DE0726F63B842864BDE98BB0F21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothesShopSim.GameEventItemInfo ClothesShopSim.FittingRoomInterior::itemEquipedGameEventItemInfo
	GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* ___itemEquipedGameEventItemInfo_4;
	// ClothesShopSim.ItemInfoHolder ClothesShopSim.FittingRoomInterior::selectedItemInfoHolder
	ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* ___selectedItemInfoHolder_5;
	// TMPro.TextMeshPro ClothesShopSim.FittingRoomInterior::transactionResult
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___transactionResult_6;
	// ClothesShopSim.PlayerInventory ClothesShopSim.FittingRoomInterior::playerInventory
	PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* ___playerInventory_7;
	// System.Boolean ClothesShopSim.FittingRoomInterior::isActive
	bool ___isActive_8;
};

// UberGameware.GameEventListener
struct GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UberGameware.GameEvent UberGameware.GameEventListener::Event
	GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* ___Event_4;
	// UnityEngine.Events.UnityEvent UberGameware.GameEventListener::Response
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Response_5;
};

// UberGameware.GameEventListenerBool
struct GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UberGameware.GameEventBool UberGameware.GameEventListenerBool::Event
	GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* ___Event_4;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> UberGameware.GameEventListenerBool::Response
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___Response_5;
};

// UberGameware.GameEventListenerInt
struct GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UberGameware.GameEventInt UberGameware.GameEventListenerInt::Event
	GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* ___Event_4;
	// UnityEngine.Events.UnityEvent`1<System.Int32> UberGameware.GameEventListenerInt::Response
	UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* ___Response_5;
};

// UberGameware.GameEventListenerIntInt
struct GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UberGameware.GameEventIntInt UberGameware.GameEventListenerIntInt::Event
	GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* ___Event_4;
	// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> UberGameware.GameEventListenerIntInt::Response
	UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* ___Response_5;
};

// ClothesShopSim.GameEventListenerItemInfo
struct GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothesShopSim.GameEventItemInfo ClothesShopSim.GameEventListenerItemInfo::Event
	GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* ___Event_4;
	// UnityEngine.Events.UnityEvent`1<ClothesShopSim.ItemInfo> ClothesShopSim.GameEventListenerItemInfo::Response
	UnityEvent_1_t72C85DC0B1ACDC72F912E095DB0C63B9445FBFF7* ___Response_5;
};

// ClothesShopSim.GameManager
struct GameManager_tC10DBADDFAAF3741805C402B870CFD2D11233139  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ClothesShopSim.InventoryController
struct InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothesShopSim.ItemInfoHolder ClothesShopSim.InventoryController::selectedItemInfoHolder
	ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* ___selectedItemInfoHolder_5;
	// UnityEngine.GameObject ClothesShopSim.InventoryController::inventoryUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inventoryUI_6;
	// UnityEngine.GameObject ClothesShopSim.InventoryController::inventoryContent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inventoryContent_7;
	// UnityEngine.GameObject ClothesShopSim.InventoryController::inventoryItemDisplayPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inventoryItemDisplayPrefab_8;
	// System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay> ClothesShopSim.InventoryController::currentDisplays
	List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* ___currentDisplays_9;
};

struct InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields
{
	// ClothesShopSim.InventoryController ClothesShopSim.InventoryController::<Instance>k__BackingField
	InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* ___U3CInstanceU3Ek__BackingField_4;
	// ClothesShopSim.PlayerInventory ClothesShopSim.InventoryController::inventory
	PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* ___inventory_10;
};

// ClothesShopSim.InventoryItemDisplay
struct InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothesShopSim.ItemInfo ClothesShopSim.InventoryItemDisplay::displayedItem
	ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___displayedItem_4;
	// ClothesShopSim.ItemInfoHolder ClothesShopSim.InventoryItemDisplay::selectedItemInfoHolder
	ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* ___selectedItemInfoHolder_5;
	// TMPro.TextMeshProUGUI ClothesShopSim.InventoryItemDisplay::valueDisplay
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___valueDisplay_6;
	// TMPro.TextMeshProUGUI ClothesShopSim.InventoryItemDisplay::countDisplay
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___countDisplay_7;
	// UnityEngine.UI.Image ClothesShopSim.InventoryItemDisplay::iconDisplay
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___iconDisplay_8;
	// UnityEngine.GameObject ClothesShopSim.InventoryItemDisplay::equippedOverlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___equippedOverlay_9;
	// UnityEngine.UI.Button ClothesShopSim.InventoryItemDisplay::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_10;
};

// ClothesShopSim.Player
struct Player_t95480B4C431450EE5CC638C6855F3FD08AF36026  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D ClothesShopSim.Player::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_4;
	// ClothesShopSim.PlayerInventory ClothesShopSim.Player::playerInventory
	PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* ___playerInventory_5;
	// ClothesShopSim.OutfitIDEnumVariable ClothesShopSim.Player::currentOutfitId
	OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* ___currentOutfitId_6;
	// ClothesShopSim.AnimationSet[] ClothesShopSim.Player::animationSets
	AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C* ___animationSets_7;
	// System.Single ClothesShopSim.Player::speed
	float ___speed_8;
	// UnityEngine.Events.UnityEvent ClothesShopSim.Player::equipSuccess
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___equipSuccess_9;
	// UnityEngine.GameObject ClothesShopSim.Player::currentWalkRightAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentWalkRightAnimGameObject_10;
	// UnityEngine.GameObject ClothesShopSim.Player::currentWalkForwardAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentWalkForwardAnimGameObject_11;
	// UnityEngine.GameObject ClothesShopSim.Player::currentWalkBackAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentWalkBackAnimGameObject_12;
	// UnityEngine.GameObject ClothesShopSim.Player::currentIdleRightAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentIdleRightAnimGameObject_13;
	// UnityEngine.GameObject ClothesShopSim.Player::currentIdleForwardAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentIdleForwardAnimGameObject_14;
	// UnityEngine.GameObject ClothesShopSim.Player::currentIdleBackAnimGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentIdleBackAnimGameObject_15;
	// ClothesShopSim.AnimationSet ClothesShopSim.Player::activeAnimationSet
	AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* ___activeAnimationSet_16;
	// ClothesShopSim.AnimationSet ClothesShopSim.Player::previousAnimationSet
	AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* ___previousAnimationSet_17;
	// ClothesShopSim.Player/ActiveAnimation ClothesShopSim.Player::activeAnimation
	int32_t ___activeAnimation_18;
	// System.Boolean ClothesShopSim.Player::hitObstacleForward
	bool ___hitObstacleForward_19;
	// System.Boolean ClothesShopSim.Player::hitObstacleBack
	bool ___hitObstacleBack_20;
	// System.Boolean ClothesShopSim.Player::hitObstacleLeft
	bool ___hitObstacleLeft_21;
	// System.Boolean ClothesShopSim.Player::movingForward
	bool ___movingForward_22;
	// System.Boolean ClothesShopSim.Player::movingBack
	bool ___movingBack_23;
	// System.Boolean ClothesShopSim.Player::movingLeft
	bool ___movingLeft_24;
	// System.Boolean ClothesShopSim.Player::movingRight
	bool ___movingRight_25;
};

// ClothesShopSim.PlayerInventory
struct PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ClothesShopSim.PlayerInventory::startingCash
	int32_t ___startingCash_4;
	// UberGameware.IntVariable ClothesShopSim.PlayerInventory::playerCash
	IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* ___playerCash_5;
	// TMPro.TextMeshProUGUI ClothesShopSim.PlayerInventory::cashDisplay
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___cashDisplay_6;
	// UnityEngine.Events.UnityEvent ClothesShopSim.PlayerInventory::responsePurchaseSuccess
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___responsePurchaseSuccess_7;
	// UnityEngine.Events.UnityEvent ClothesShopSim.PlayerInventory::saleSuccess
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___saleSuccess_8;
	// System.Collections.Generic.List`1<ClothesShopSim.ItemInfo> ClothesShopSim.PlayerInventory::inventory
	List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* ___inventory_9;
};

// SelectedItemInfo
struct SelectedItemInfo_tB0FDFB600176681D40E8DAC7CB2ECF0C03619127  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ClothesShopSim.SellTrigger
struct SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro ClothesShopSim.SellTrigger::transactionResult
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___transactionResult_4;
	// System.Boolean ClothesShopSim.SellTrigger::isActive
	bool ___isActive_5;
};

// ClothesShopSim.ShopInventory
struct ShopInventory_tA0EE74857B9D1E279ECC5FFD4049F15801264AF2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ClothesShopSim.ShopInventoryItemDetails
struct ShopInventoryItemDetails_tB748A130407A8B8F13984EC494B6FB534C8B3AAB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ClothesShopSim.Shopkeeper
struct Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ClothesShopSim.GameEventItemInfo ClothesShopSim.Shopkeeper::itemSoldGameEventItemInfo
	GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* ___itemSoldGameEventItemInfo_5;
	// ClothesShopSim.ItemInfoHolder ClothesShopSim.Shopkeeper::selectedItemInfoHolder
	ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* ___selectedItemInfoHolder_6;
	// TMPro.TextMeshPro ClothesShopSim.Shopkeeper::transactionResult
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___transactionResult_7;
	// ClothesShopSim.SellTrigger ClothesShopSim.Shopkeeper::sellTrigger
	SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* ___sellTrigger_8;
	// ClothesShopSim.PlayerInventory ClothesShopSim.Shopkeeper::playerInventory
	PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* ___playerInventory_9;
};

struct Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_StaticFields
{
	// ClothesShopSim.Shopkeeper ClothesShopSim.Shopkeeper::<Instance>k__BackingField
	Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* ___U3CInstanceU3Ek__BackingField_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
// ClothesShopSim.AnimationSet[]
struct AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* m_Items[1];

	inline AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* value)
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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_gshared (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF43562D9973F4CEA30890C08CC556AA05CB577FB_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UberGameware.GameEventListener>::get_Count()
inline int32_t List_1_get_Count_m502E599B65A6EB3CB49650BAAE8E9613824201B8_inline (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UberGameware.GameEventListener>::get_Item(System.Int32)
inline GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* List_1_get_Item_mEC93AC99AFA643FF613E2B7A65D5A7B71DC459EE (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* (*) (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UberGameware.GameEventListener::OnEventRaised()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEventRaised_m841D629462526CBB4B513C86165E94D5048AAFD3 (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListener>::Contains(T)
inline bool List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4*, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListener>::Add(T)
inline void List_1_Add_m8A9F63DE8E4B47934675204F6BFFC5692D3CCACB_inline (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4*, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListener>::Remove(T)
inline bool List_1_Remove_m8D1FE6734590627423CA15846451A82C89BD09F5 (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4*, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListener>::.ctor()
inline void List_1__ctor_m1570A8B17DCAEF2A400D852CC1FB902A67895488 (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>::get_Count()
inline int32_t List_1_get_Count_m700C2EF90BCA973ADB57DEC1E9397123DCFB97B3_inline (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>::get_Item(System.Int32)
inline GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* List_1_get_Item_m72BA59C1EDDBBD24E8E55FCC23C31512B2075626 (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* (*) (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UberGameware.GameEventListenerBool::OnEventRaised(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerBool_OnEventRaised_mC9F756AACE8D474CE055EFD77D4EC5060C627EC8 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, bool ___state0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>::Contains(T)
inline bool List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4 (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8*, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>::Add(T)
inline void List_1_Add_mEFDC82CDA456C406FD951A392E66DE6E11D80F27_inline (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8*, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>::Remove(T)
inline bool List_1_Remove_mEA894631F403F81F936D32EBB1103F03B9919C60 (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8*, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListenerBool>::.ctor()
inline void List_1__ctor_mA289A9C0DFD00848B4C385FE3C01C18C0DD16B49 (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>::get_Count()
inline int32_t List_1_get_Count_mC1AE38D4321F040532C81A63D4C8BF8A44E80988_inline (List_1_t851C791428040565EF5A850706116C0386A85D19* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t851C791428040565EF5A850706116C0386A85D19*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>::get_Item(System.Int32)
inline GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* List_1_get_Item_mBD4B4D88E89A9D45F04F66C55AE03E6C2AA9052E (List_1_t851C791428040565EF5A850706116C0386A85D19* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* (*) (List_1_t851C791428040565EF5A850706116C0386A85D19*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UberGameware.GameEventListenerInt::OnEventRaised(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerInt_OnEventRaised_m4ED57DA289B9E44F46A347E4110FB7D0F48A98CB (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>::Contains(T)
inline bool List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40 (List_1_t851C791428040565EF5A850706116C0386A85D19* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t851C791428040565EF5A850706116C0386A85D19*, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>::Add(T)
inline void List_1_Add_m8D25072661CF852BA22B0FB2F14BB161C29A037B_inline (List_1_t851C791428040565EF5A850706116C0386A85D19* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t851C791428040565EF5A850706116C0386A85D19*, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>::Remove(T)
inline bool List_1_Remove_mF1DAC4A6A32814C876E8F1DF300C7361F08006BB (List_1_t851C791428040565EF5A850706116C0386A85D19* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t851C791428040565EF5A850706116C0386A85D19*, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListenerInt>::.ctor()
inline void List_1__ctor_m952A2B12B1DF219F0559502ED5B9E63D88AE6B86 (List_1_t851C791428040565EF5A850706116C0386A85D19* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t851C791428040565EF5A850706116C0386A85D19*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>::get_Count()
inline int32_t List_1_get_Count_mBA37E3E644FDA0FB1E6BABCCBB8082D75F12E8FB_inline (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>::get_Item(System.Int32)
inline GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* List_1_get_Item_m797DACBA8C027ECBE075D1D6140C184AE65D6C3E (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* (*) (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UberGameware.GameEventListenerIntInt::OnEventRaised(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerIntInt_OnEventRaised_m431825D53C6DCA97D488C277F8647206942FFC8A (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, int32_t ___id10, int32_t ___id21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>::Contains(T)
inline bool List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5 (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46*, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>::Add(T)
inline void List_1_Add_m3DE56F21B184504073655958E963A292C262D1C9_inline (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46*, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>::Remove(T)
inline bool List_1_Remove_m8C839AA4121E67AEF694EEAE17711545B8D225E3 (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46*, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UberGameware.GameEventListenerIntInt>::.ctor()
inline void List_1__ctor_mE66B9FAEF48492339DA4DAD534933A0F0C648BE2 (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UberGameware.GameEvent::RegisterListener(UberGameware.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_RegisterListener_m51CCAF8B803B9A294F2028A04845F09539DA83CC (GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___listener0, const RuntimeMethod* method) ;
// System.Void UberGameware.GameEvent::UnregisterListener(UberGameware.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_UnregisterListener_mA572EC0AB0902387FA642273BD8937C3385C585E (GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean UberGameware.GameEventListener::Equals(UberGameware.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListener_Equals_m1DA696B7A4BCB3C1C3D996E6EAD949FFA1D642AD (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___other0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UberGameware.GameEventBool::RegisterListener(UberGameware.GameEventListenerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBool_RegisterListener_mFDED4828EE31B7318CFF52F66ACC1F537F34E6A3 (GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___listener0, const RuntimeMethod* method) ;
// System.Void UberGameware.GameEventBool::UnregisterListener(UberGameware.GameEventListenerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBool_UnregisterListener_mA36D6506C8648855F4B3FAF77B80658D29553941 (GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// System.Boolean UberGameware.GameEventListenerBool::Equals(UberGameware.GameEventListenerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerBool_Equals_m12959CD03983AF5D56ED701EAC7D65B4F7862391 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___other0, const RuntimeMethod* method) ;
// System.Void UberGameware.GameEventInt::RegisterListener(UberGameware.GameEventListenerInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventInt_RegisterListener_m3AE6D13215E9142FAFDE9528F3723E80EAE3C4C1 (GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___listener0, const RuntimeMethod* method) ;
// System.Void UberGameware.GameEventInt::UnregisterListener(UberGameware.GameEventListenerInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventInt_UnregisterListener_m1E12E305D5C12CB424FAD50AA158B39778B2910F (GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared)(__this, ___arg00, method);
}
// System.Boolean UberGameware.GameEventListenerInt::Equals(UberGameware.GameEventListenerInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerInt_Equals_m6DBE0BDFF28DF70E703CAD3C1BE92D7DB94B4BFC (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___other0, const RuntimeMethod* method) ;
// System.Void UberGameware.GameEventIntInt::RegisterListener(UberGameware.GameEventListenerIntInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventIntInt_RegisterListener_mC037B98E8B8DAF3E4642A7A832CCE0B17D3FBF3B (GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___listener0, const RuntimeMethod* method) ;
// System.Void UberGameware.GameEventIntInt::UnregisterListener(UberGameware.GameEventListenerIntInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventIntInt_UnregisterListener_m8804624F41B7BBF8314FE170F7C617ADCABD31A2 (GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*, int32_t, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Boolean UberGameware.GameEventListenerIntInt::Equals(UberGameware.GameEventListenerIntInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerIntInt_Equals_m8B558E475EDB83634677282247DA43766BA34724 (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___other0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
inline int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
inline void List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF43562D9973F4CEA30890C08CC556AA05CB577FB (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF43562D9973F4CEA30890C08CC556AA05CB577FB_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared)(__this, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::Add(T)
inline void List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m3CA530E64A865DC36BB8F753BCFE66A252CCDE65 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Count()
inline int32_t List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::Clear()
inline void List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Add(T)
inline void List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m985F6E1C9134801737199F22354F36F9AACCF339 (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Count()
inline int32_t List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Clear()
inline void List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mE057CF4032DB4BC8DFEFD0F90228EEBBB8A0838A (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
inline void List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean ClothesShopSim.AnimationSet::ValidateAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationSet_ValidateAnimations_mFB98D191D87392371E7AE06A7ADD62322E62945D (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// System.Boolean ClothesShopSim.AnimationSet::ValidateOutfitID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationSet_ValidateOutfitID_m9BEF03319CE6325D0534546BE2EFC74EB87BE437 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* Component_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_mB6B3EB24AF663B9823AD6EB8AEA882A08380D81D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Int32 ClothesShopSim.ItemInfo::get_BuyPrice()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_BuyPrice_m11795B99EE5E5AA75D328CB7F3176CBF4289B017_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.ItemInfo::ResetItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfo_ResetItem_m02877AE9C05C54C650DD71E1080B7704FBE56B2D (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.GameEventItemInfo::Raise(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventItemInfo_Raise_mEB221B588E7441A23BB1F4F881BA43A41592C8E7 (GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ClothesShopSim.PlayerInventory>()
inline PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// ClothesShopSim.ItemInfo ClothesShopSim.ItemInfoHolder::get_ItemInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline (ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* __this, const RuntimeMethod* method) ;
// ClothesShopSim.OutfitID ClothesShopSim.ItemInfo::get_OutfitID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ClothesShopSim.ItemInfo> ClothesShopSim.PlayerInventory::get_Inventory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline (PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>::get_Item(System.Int32)
inline ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188 (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* (*) (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>::get_Count()
inline int32_t List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_inline (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// ClothesShopSim.InventoryController ClothesShopSim.InventoryController::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* InventoryController_get_Instance_m3D0484A27843794F79F266C64861C8018F04B564_inline (const RuntimeMethod* method) ;
// System.Void ClothesShopSim.InventoryController::set_Instance(ClothesShopSim.InventoryController)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryController_set_Instance_mE55E606CC1E9C4F6CD02AC4A9E185E726C6A2274_inline (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<ClothesShopSim.PlayerInventory>()
inline PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* Object_FindObjectOfType_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mBD18D5529B0416808C7E3088C56D3FB699F49DAD (const RuntimeMethod* method)
{
	return ((  PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void ClothesShopSim.InventoryController::GenerateInventoryUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_GenerateInventoryUI_m6F75F1C48656F490DC6CACB83E14192ECE4A7DAA (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay>::get_Item(System.Int32)
inline InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* List_1_get_Item_mC7C33A113B26A7DA58A5A761D33F34AE23AC7887 (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* (*) (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC86750A96693FCB7DE5CC14B79D2B37B24EBD9EB (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay>::get_Count()
inline int32_t List_1_get_Count_m749FB694594A7EB8DF44FD076DB0262D8BDBA2A0_inline (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>::GetEnumerator()
inline Enumerator_t6A5199477F9A872DCFF438274257403095B60706 List_1_GetEnumerator_mDD74167D509775966D129A0CBF58A6C94C608AEA (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A5199477F9A872DCFF438274257403095B60706 (*) (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ClothesShopSim.ItemInfo>::Dispose()
inline void Enumerator_Dispose_m4D750C40CFC1312A0FB6656469ED81C1B3171057 (Enumerator_t6A5199477F9A872DCFF438274257403095B60706* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A5199477F9A872DCFF438274257403095B60706*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ClothesShopSim.ItemInfo>::get_Current()
inline ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* Enumerator_get_Current_m7D580E22F2B40A10CB8DA12313EF07F7473960F5_inline (Enumerator_t6A5199477F9A872DCFF438274257403095B60706* __this, const RuntimeMethod* method)
{
	return ((  ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* (*) (Enumerator_t6A5199477F9A872DCFF438274257403095B60706*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void ClothesShopSim.InventoryController::GenerateDisplayForItem(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_GenerateDisplayForItem_mA7BC5CE5B42C2EABB2BC0A570E099159A0A952DC (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<ClothesShopSim.ItemInfo>::MoveNext()
inline bool Enumerator_MoveNext_m6CCFD695DEB4D88BEA21B73899E18FD9306FE83E (Enumerator_t6A5199477F9A872DCFF438274257403095B60706* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A5199477F9A872DCFF438274257403095B60706*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<ClothesShopSim.InventoryItemDisplay>()
inline InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* GameObject_GetComponent_TisInventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF_m7D374931E1CF107DE66703353873162EEC286051 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ClothesShopSim.InventoryItemDisplay::SetDisplayedItem(ClothesShopSim.ItemInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItemDisplay_SetDisplayedItem_mA4DA3D1819D090AE52AAE2FCCDE00DA62C8E657F_inline (InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___displayedItem0, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.InventoryItemDisplay::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItemDisplay_UpdateUI_m27D63F678E7B9C260F0A628A5144503BA91A3BA4 (InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay>::Add(T)
inline void List_1_Add_m024BF4F8798C600627FEF8A95B896904198DE2A3_inline (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* __this, InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11*, InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<ClothesShopSim.InventoryItemDisplay>::.ctor()
inline void List_1__ctor_mB4EC08575F2319542949488A97A5C71A0F3B9226 (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Sprite ClothesShopSim.ItemInfo::get_ItemSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ItemInfo_get_ItemSprite_m564CCDE2163CE8C850B3D374BB50D0ACAD85D2C6_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Int32 ClothesShopSim.ItemInfo::get_SellPrice()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_SellPrice_mF111FBE59C2C8030C2078B3FA30F626F062ED25F_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 ClothesShopSim.ItemInfo::get_QuantityPurchased()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_QuantityPurchased_m14C72A0E70838141F4A180CD97FC58A27C2B8EC8_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Boolean ClothesShopSim.ItemInfo::get_Equipped()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ItemInfo_get_Equipped_m82CC6C28EB5D096F0CBA042238166ACF8FADEED2_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.ItemInfoHolder::set_ItemInfo(ClothesShopSim.ItemInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ItemInfoHolder_set_ItemInfo_m0D73F7509B2E6BB25460B98E37A638C28C8AC7D5_inline (ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___value0, const RuntimeMethod* method) ;
// System.Boolean ClothesShopSim.Player::ValidateAnimationSets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_ValidateAnimationSets_mA9AD5A52C5518700C28994F73338A0941EE24D74 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.Player::Equip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Equip_mEE01AADF7E3D11F1A1FBB7672AE216E352610CC5 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.Player::ActivateAnimation(ClothesShopSim.Player/ActiveAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, int32_t ___activeAnimation0, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint2D UnityEngine.Collision2D::GetContact(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// ClothesShopSim.OutfitID ClothesShopSim.AnimationSet::get_OutfitID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimationSet_get_OutfitID_mCCC6717E48D139169FADACA8295877DA41C33F99_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_WalkRightAnimGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkRightAnimGameObject_m5CD11DB64AAA4E288673A613970CF6FB6D295306_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_WalkForwardAnimGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkForwardAnimGameObject_mD027946170FE6A9D9525DF80206828D2306C78E9_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_WalkBackAnimGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkBackAnimGameObject_m92A5AB46EAB8774B75495A8A370846BDE248D563_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_IdleRightAnimGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleRightAnimGameObject_mE429E8AF2591A27587D118523669EB04FFB39A45_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_IdleForwardAnimGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleForwardAnimGameObject_m2EB6144EB0194E574BBAEDF9194D4E2561D3A58F_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_IdleBackAnimGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleBackAnimGameObject_m23391E94765F76887DDE0AA370F883D2360D3F74_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UberGameware.IntVariable::ApplyChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVariable_ApplyChange_mE335BEBB257DA8A240F0D6A9D97C6F600D0DA14C (IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.ItemInfo::set_QuantityPurchased(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ItemInfo_set_QuantityPurchased_m2506DE8D91D17CEBE7E572FAC5977572FF7E6E8C_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>::Contains(T)
inline bool List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98 (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>::Add(T)
inline void List_1_Add_mE308B9B2D8AED0E12CFC56FABAE138E8AA2BC577_inline (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>::Remove(T)
inline bool List_1_Remove_m08275F792C69425DAD2F56508E21E8C0AB9D3A10 (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<ClothesShopSim.ItemInfo>::.ctor()
inline void List_1__ctor_m2E1B129BD009F1E03894A8E6372CD83ACBCAA017 (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>::get_Count()
inline int32_t List_1_get_Count_mCA428BE0C25023D8B4DEB6A370F584844648AED3_inline (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>::get_Item(System.Int32)
inline GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* List_1_get_Item_mD9C951DF1B4F300CBC8FE07187808D8C1B23775A (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* (*) (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void ClothesShopSim.GameEventListenerItemInfo::OnEventRaised(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerItemInfo_OnEventRaised_m10145BEA72586A8667189E0A77B609EA7C9A8B23 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>::Contains(T)
inline bool List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20 (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518*, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>::Add(T)
inline void List_1_Add_m99FE132FA7C55B8D96E2087F957C174836BADF4B_inline (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518*, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>::Remove(T)
inline bool List_1_Remove_mACD96CDDEEBE2C2AC0CFFEB145309B601BCF1670 (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518*, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<ClothesShopSim.GameEventListenerItemInfo>::.ctor()
inline void List_1__ctor_m360F82E933395E29D879FC97D1C742A7A7EDF912 (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ClothesShopSim.GameEventItemInfo::RegisterListener(ClothesShopSim.GameEventListenerItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventItemInfo_RegisterListener_m2AB1A4B004D429BD3ADF45C530366D3BAD240B64 (GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___listener0, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.GameEventItemInfo::UnregisterListener(ClothesShopSim.GameEventListenerItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventItemInfo_UnregisterListener_m14E15360FADCE8B38036E225F68449684CC0063A (GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<ClothesShopSim.ItemInfo>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD0A6A584AF4C78BFF7C6BFA1892AA098483C2CAA (UnityEvent_1_t72C85DC0B1ACDC72F912E095DB0C63B9445FBFF7* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t72C85DC0B1ACDC72F912E095DB0C63B9445FBFF7*, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Boolean ClothesShopSim.GameEventListenerItemInfo::Equals(ClothesShopSim.GameEventListenerItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerItemInfo_Equals_m810957FBDE8AFFD37B4257FEDA1C58491DE8FE73 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___other0, const RuntimeMethod* method) ;
// System.Boolean ClothesShopSim.SellTrigger::get_IsActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SellTrigger_get_IsActive_mF7FA6464B4A9933BE170A1B66371952698E65190_inline (SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* __this, const RuntimeMethod* method) ;
// ClothesShopSim.Shopkeeper ClothesShopSim.Shopkeeper::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* Shopkeeper_get_Instance_mA1DAE2F2B5F81E56AA289C41179760A9F8F81132_inline (const RuntimeMethod* method) ;
// System.Void ClothesShopSim.Shopkeeper::set_Instance(ClothesShopSim.Shopkeeper)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Shopkeeper_set_Instance_mA00D079FA3EAE8C590E4257D077454B095441975_inline (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* ___value0, const RuntimeMethod* method) ;
// System.Boolean ClothesShopSim.Shopkeeper::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shopkeeper_get_IsActive_m687D30EE2BD4CD62133B4AF3B2C6F2280F289000 (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.Shopkeeper::TransactionSucceed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper_TransactionSucceed_m8F01511C0462B8D41522B2EE3759BB38C1381AFD (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) ;
// System.Void ClothesShopSim.Shopkeeper::TransactionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper_TransactionFailed_m49DD5C0AEA8A2CDC2E5D707473479639287742AF (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) ;
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
// System.Void SelectedItemInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectedItemInfo_Start_m21983F0C353916DE54D74A6352D8900F159001B7 (SelectedItemInfo_tB0FDFB600176681D40E8DAC7CB2ECF0C03619127* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SelectedItemInfo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectedItemInfo_Update_mF4321A560111FF83428E2EBBD41C11EBC661BA59 (SelectedItemInfo_tB0FDFB600176681D40E8DAC7CB2ECF0C03619127* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SelectedItemInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectedItemInfo__ctor_m6DABE80F8AE114CEDD743B0D72A809E2F8BE9086 (SelectedItemInfo_tB0FDFB600176681D40E8DAC7CB2ECF0C03619127* __this, const RuntimeMethod* method) 
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
// System.Void UberGameware.GameEvent::Raise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_Raise_m9A6D3564EC3A6DF76295CCCC85F7EEC859A25779 (GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m502E599B65A6EB3CB49650BAAE8E9613824201B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEC93AC99AFA643FF613E2B7A65D5A7B71DC459EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* L_0 = __this->___eventListeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m502E599B65A6EB3CB49650BAAE8E9613824201B8_inline(L_0, List_1_get_Count_m502E599B65A6EB3CB49650BAAE8E9613824201B8_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0025;
	}

IL_0010:
	{
		// eventListeners[i].OnEventRaised();
		List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* L_2 = __this->___eventListeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* L_4;
		L_4 = List_1_get_Item_mEC93AC99AFA643FF613E2B7A65D5A7B71DC459EE(L_2, L_3, List_1_get_Item_mEC93AC99AFA643FF613E2B7A65D5A7B71DC459EE_RuntimeMethod_var);
		NullCheck(L_4);
		GameEventListener_OnEventRaised_m841D629462526CBB4B513C86165E94D5048AAFD3(L_4, NULL);
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0025:
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEvent::RegisterListener(UberGameware.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_RegisterListener_m51CCAF8B803B9A294F2028A04845F09539DA83CC (GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8A9F63DE8E4B47934675204F6BFFC5692D3CCACB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!eventListeners.Contains(listener))
		List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* L_0 = __this->___eventListeners_4;
		GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA(L_0, L_1, List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// eventListeners.Add(listener);
		List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* L_3 = __this->___eventListeners_4;
		GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* L_4 = ___listener0;
		NullCheck(L_3);
		List_1_Add_m8A9F63DE8E4B47934675204F6BFFC5692D3CCACB_inline(L_3, L_4, List_1_Add_m8A9F63DE8E4B47934675204F6BFFC5692D3CCACB_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEvent::UnregisterListener(UberGameware.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_UnregisterListener_mA572EC0AB0902387FA642273BD8937C3385C585E (GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m8D1FE6734590627423CA15846451A82C89BD09F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventListeners.Contains(listener))
		List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* L_0 = __this->___eventListeners_4;
		GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA(L_0, L_1, List_1_Contains_m3849C413FDF65F337696F9B5C56E90B40A4911EA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// eventListeners.Remove(listener);
		List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* L_3 = __this->___eventListeners_4;
		GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* L_4 = ___listener0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m8D1FE6734590627423CA15846451A82C89BD09F5(L_3, L_4, List_1_Remove_m8D1FE6734590627423CA15846451A82C89BD09F5_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_mDC544751A84D0C79862ECD8091C8CD1B09E71F79 (GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1570A8B17DCAEF2A400D852CC1FB902A67895488_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameEventListener> eventListeners = new List<GameEventListener>();
		List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4* L_0 = (List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4*)il2cpp_codegen_object_new(List_1_t6C2CC77D06CE29412DF37B7EE8270880A811E7C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1570A8B17DCAEF2A400D852CC1FB902A67895488(L_0, List_1__ctor_m1570A8B17DCAEF2A400D852CC1FB902A67895488_RuntimeMethod_var);
		__this->___eventListeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventListeners_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.GameEventBool::Raise(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBool_Raise_m8F38FB6E353E5656A38290277A66DE6A4769B8A1 (GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m700C2EF90BCA973ADB57DEC1E9397123DCFB97B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72BA59C1EDDBBD24E8E55FCC23C31512B2075626_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* L_0 = __this->___eventListeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m700C2EF90BCA973ADB57DEC1E9397123DCFB97B3_inline(L_0, List_1_get_Count_m700C2EF90BCA973ADB57DEC1E9397123DCFB97B3_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0026;
	}

IL_0010:
	{
		// eventListeners[i].OnEventRaised(state);
		List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* L_2 = __this->___eventListeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* L_4;
		L_4 = List_1_get_Item_m72BA59C1EDDBBD24E8E55FCC23C31512B2075626(L_2, L_3, List_1_get_Item_m72BA59C1EDDBBD24E8E55FCC23C31512B2075626_RuntimeMethod_var);
		bool L_5 = ___state0;
		NullCheck(L_4);
		GameEventListenerBool_OnEventRaised_mC9F756AACE8D474CE055EFD77D4EC5060C627EC8(L_4, L_5, NULL);
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0026:
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventBool::RegisterListener(UberGameware.GameEventListenerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBool_RegisterListener_mFDED4828EE31B7318CFF52F66ACC1F537F34E6A3 (GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEFDC82CDA456C406FD951A392E66DE6E11D80F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!eventListeners.Contains(listener))
		List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* L_0 = __this->___eventListeners_4;
		GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4(L_0, L_1, List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// eventListeners.Add(listener);
		List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* L_3 = __this->___eventListeners_4;
		GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* L_4 = ___listener0;
		NullCheck(L_3);
		List_1_Add_mEFDC82CDA456C406FD951A392E66DE6E11D80F27_inline(L_3, L_4, List_1_Add_mEFDC82CDA456C406FD951A392E66DE6E11D80F27_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventBool::UnregisterListener(UberGameware.GameEventListenerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBool_UnregisterListener_mA36D6506C8648855F4B3FAF77B80658D29553941 (GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mEA894631F403F81F936D32EBB1103F03B9919C60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventListeners.Contains(listener))
		List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* L_0 = __this->___eventListeners_4;
		GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4(L_0, L_1, List_1_Contains_mE6E318733A0451ED989B1ADD71EA51830DB8D1F4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// eventListeners.Remove(listener);
		List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* L_3 = __this->___eventListeners_4;
		GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* L_4 = ___listener0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mEA894631F403F81F936D32EBB1103F03B9919C60(L_3, L_4, List_1_Remove_mEA894631F403F81F936D32EBB1103F03B9919C60_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBool__ctor_m98ABE31EB47C83F4B9DE8C22066B1683E317FC2F (GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA289A9C0DFD00848B4C385FE3C01C18C0DD16B49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameEventListenerBool> eventListeners = new List<GameEventListenerBool>();
		List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8* L_0 = (List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8*)il2cpp_codegen_object_new(List_1_t383E037A205B5560AF42AB4D1FDEE5F70D1B3AE8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA289A9C0DFD00848B4C385FE3C01C18C0DD16B49(L_0, List_1__ctor_mA289A9C0DFD00848B4C385FE3C01C18C0DD16B49_RuntimeMethod_var);
		__this->___eventListeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventListeners_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.GameEventInt::Raise(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventInt_Raise_m9F9A96866B034F8839B9F35DC27349650B1F9498 (GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC1AE38D4321F040532C81A63D4C8BF8A44E80988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBD4B4D88E89A9D45F04F66C55AE03E6C2AA9052E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		List_1_t851C791428040565EF5A850706116C0386A85D19* L_0 = __this->___eventListeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC1AE38D4321F040532C81A63D4C8BF8A44E80988_inline(L_0, List_1_get_Count_mC1AE38D4321F040532C81A63D4C8BF8A44E80988_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0026;
	}

IL_0010:
	{
		// eventListeners[i].OnEventRaised(id);
		List_1_t851C791428040565EF5A850706116C0386A85D19* L_2 = __this->___eventListeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* L_4;
		L_4 = List_1_get_Item_mBD4B4D88E89A9D45F04F66C55AE03E6C2AA9052E(L_2, L_3, List_1_get_Item_mBD4B4D88E89A9D45F04F66C55AE03E6C2AA9052E_RuntimeMethod_var);
		int32_t L_5 = ___id0;
		NullCheck(L_4);
		GameEventListenerInt_OnEventRaised_m4ED57DA289B9E44F46A347E4110FB7D0F48A98CB(L_4, L_5, NULL);
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0026:
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventInt::RegisterListener(UberGameware.GameEventListenerInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventInt_RegisterListener_m3AE6D13215E9142FAFDE9528F3723E80EAE3C4C1 (GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8D25072661CF852BA22B0FB2F14BB161C29A037B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!eventListeners.Contains(listener))
		List_1_t851C791428040565EF5A850706116C0386A85D19* L_0 = __this->___eventListeners_4;
		GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40(L_0, L_1, List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// eventListeners.Add(listener);
		List_1_t851C791428040565EF5A850706116C0386A85D19* L_3 = __this->___eventListeners_4;
		GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* L_4 = ___listener0;
		NullCheck(L_3);
		List_1_Add_m8D25072661CF852BA22B0FB2F14BB161C29A037B_inline(L_3, L_4, List_1_Add_m8D25072661CF852BA22B0FB2F14BB161C29A037B_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventInt::UnregisterListener(UberGameware.GameEventListenerInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventInt_UnregisterListener_m1E12E305D5C12CB424FAD50AA158B39778B2910F (GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF1DAC4A6A32814C876E8F1DF300C7361F08006BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventListeners.Contains(listener))
		List_1_t851C791428040565EF5A850706116C0386A85D19* L_0 = __this->___eventListeners_4;
		GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40(L_0, L_1, List_1_Contains_mA677E45111506C376F0C6FDE10F5DDADC1682A40_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// eventListeners.Remove(listener);
		List_1_t851C791428040565EF5A850706116C0386A85D19* L_3 = __this->___eventListeners_4;
		GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* L_4 = ___listener0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mF1DAC4A6A32814C876E8F1DF300C7361F08006BB(L_3, L_4, List_1_Remove_mF1DAC4A6A32814C876E8F1DF300C7361F08006BB_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventInt__ctor_mDA86D3739CB0F23E2F329E5A8339FABAD07C0AA2 (GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m952A2B12B1DF219F0559502ED5B9E63D88AE6B86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t851C791428040565EF5A850706116C0386A85D19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameEventListenerInt> eventListeners = new List<GameEventListenerInt>();
		List_1_t851C791428040565EF5A850706116C0386A85D19* L_0 = (List_1_t851C791428040565EF5A850706116C0386A85D19*)il2cpp_codegen_object_new(List_1_t851C791428040565EF5A850706116C0386A85D19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m952A2B12B1DF219F0559502ED5B9E63D88AE6B86(L_0, List_1__ctor_m952A2B12B1DF219F0559502ED5B9E63D88AE6B86_RuntimeMethod_var);
		__this->___eventListeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventListeners_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.GameEventIntInt::Raise(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventIntInt_Raise_m52F0E50C23FCCF970B404DD08B0BC5622855078D (GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* __this, int32_t ___id10, int32_t ___id21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBA37E3E644FDA0FB1E6BABCCBB8082D75F12E8FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m797DACBA8C027ECBE075D1D6140C184AE65D6C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* L_0 = __this->___eventListeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mBA37E3E644FDA0FB1E6BABCCBB8082D75F12E8FB_inline(L_0, List_1_get_Count_mBA37E3E644FDA0FB1E6BABCCBB8082D75F12E8FB_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0027;
	}

IL_0010:
	{
		// eventListeners[i].OnEventRaised(id1, id2);
		List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* L_2 = __this->___eventListeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* L_4;
		L_4 = List_1_get_Item_m797DACBA8C027ECBE075D1D6140C184AE65D6C3E(L_2, L_3, List_1_get_Item_m797DACBA8C027ECBE075D1D6140C184AE65D6C3E_RuntimeMethod_var);
		int32_t L_5 = ___id10;
		int32_t L_6 = ___id21;
		NullCheck(L_4);
		GameEventListenerIntInt_OnEventRaised_m431825D53C6DCA97D488C277F8647206942FFC8A(L_4, L_5, L_6, NULL);
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0027:
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventIntInt::RegisterListener(UberGameware.GameEventListenerIntInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventIntInt_RegisterListener_mC037B98E8B8DAF3E4642A7A832CCE0B17D3FBF3B (GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DE56F21B184504073655958E963A292C262D1C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!eventListeners.Contains(listener))
		List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* L_0 = __this->___eventListeners_4;
		GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5(L_0, L_1, List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// eventListeners.Add(listener);
		List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* L_3 = __this->___eventListeners_4;
		GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* L_4 = ___listener0;
		NullCheck(L_3);
		List_1_Add_m3DE56F21B184504073655958E963A292C262D1C9_inline(L_3, L_4, List_1_Add_m3DE56F21B184504073655958E963A292C262D1C9_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventIntInt::UnregisterListener(UberGameware.GameEventListenerIntInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventIntInt_UnregisterListener_m8804624F41B7BBF8314FE170F7C617ADCABD31A2 (GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m8C839AA4121E67AEF694EEAE17711545B8D225E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventListeners.Contains(listener))
		List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* L_0 = __this->___eventListeners_4;
		GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5(L_0, L_1, List_1_Contains_m10471AEC28F24CF036B4E7B592FB9B72899232E5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// eventListeners.Remove(listener);
		List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* L_3 = __this->___eventListeners_4;
		GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* L_4 = ___listener0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m8C839AA4121E67AEF694EEAE17711545B8D225E3(L_3, L_4, List_1_Remove_m8C839AA4121E67AEF694EEAE17711545B8D225E3_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UberGameware.GameEventIntInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventIntInt__ctor_m1819ECFB34E02462C228014062C599F2050AD48A (GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE66B9FAEF48492339DA4DAD534933A0F0C648BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameEventListenerIntInt> eventListeners = new List<GameEventListenerIntInt>();
		List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46* L_0 = (List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46*)il2cpp_codegen_object_new(List_1_t96D2B9F014D9ABFE75C664E8F5BA26B5BA284A46_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE66B9FAEF48492339DA4DAD534933A0F0C648BE2(L_0, List_1__ctor_mE66B9FAEF48492339DA4DAD534933A0F0C648BE2_RuntimeMethod_var);
		__this->___eventListeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventListeners_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.GameEventListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEnable_m75DA6D6584A85E515CFE27B67D8FACCE94C9693C (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, const RuntimeMethod* method) 
{
	{
		// Event.RegisterListener(this);
		GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEvent_RegisterListener_m51CCAF8B803B9A294F2028A04845F09539DA83CC(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnDisable_mDB5D79E5A7F46E0B45FA9EA0459B8D2E72E321CF (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, const RuntimeMethod* method) 
{
	{
		// Event.UnregisterListener(this);
		GameEvent_t2BA34ADADC37389BD0EE2C43D15D7193ADB4D5BF* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEvent_UnregisterListener_mA572EC0AB0902387FA642273BD8937C3385C585E(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListener::OnEventRaised()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEventRaised_m841D629462526CBB4B513C86165E94D5048AAFD3 (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, const RuntimeMethod* method) 
{
	{
		// Response.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___Response_5;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean UberGameware.GameEventListener::Equals(UberGameware.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListener_Equals_m1DA696B7A4BCB3C1C3D996E6EAD949FFA1D642AD (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* ___other0, const RuntimeMethod* method) 
{
	{
		// return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
		GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean UberGameware.GameEventListener::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListener_Equals_m87159E783AC2105FB8A29D1B5EBC0F5774145BB0 (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) return true;
		RuntimeObject* L_1 = ___obj0;
		if ((!(((RuntimeObject*)(GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != this.GetType()) return false;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (obj.GetType() != this.GetType()) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((GameEventListener) obj);
		RuntimeObject* L_6 = ___obj0;
		bool L_7;
		L_7 = GameEventListener_Equals_m1DA696B7A4BCB3C1C3D996E6EAD949FFA1D642AD(__this, ((GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D*)CastclassClass((RuntimeObject*)L_6, GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Int32 UberGameware.GameEventListener::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameEventListener_GetHashCode_m70E3B5503D10BBAE75E2FCA315319536713D87EF (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.GetInstanceID().GetHashCode();
		int32_t L_0;
		L_0 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return L_1;
	}
}
// System.Void UberGameware.GameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener__ctor_m2078F331E60A72877FDB7FE5DBFB9D944536B6F8 (GameEventListener_t8EC593D2E3CED6BDB289C4A974218FEFB204444D* __this, const RuntimeMethod* method) 
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
// System.Void UberGameware.GameEventListenerBool::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerBool_OnEnable_m8B4458CD0420CC8578E20E194B1680F8E3732C84 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, const RuntimeMethod* method) 
{
	{
		// Event.RegisterListener(this);
		GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventBool_RegisterListener_mFDED4828EE31B7318CFF52F66ACC1F537F34E6A3(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListenerBool::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerBool_OnDisable_mA8E645E8E760EA1F1AF7EDB7716DE3994EB90247 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, const RuntimeMethod* method) 
{
	{
		// Event.UnregisterListener(this);
		GameEventBool_t4618260372F9A2EBD0882A3169F5F2BD6A8DF002* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventBool_UnregisterListener_mA36D6506C8648855F4B3FAF77B80658D29553941(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListenerBool::OnEventRaised(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerBool_OnEventRaised_mC9F756AACE8D474CE055EFD77D4EC5060C627EC8 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Response.Invoke(state);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_0 = __this->___Response_5;
		bool L_1 = ___state0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, L_1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UberGameware.GameEventListenerBool::Equals(UberGameware.GameEventListenerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerBool_Equals_m12959CD03983AF5D56ED701EAC7D65B4F7862391 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* ___other0, const RuntimeMethod* method) 
{
	{
		// return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
		GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean UberGameware.GameEventListenerBool::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerBool_Equals_mE71CA96A2EF2598445CFF280920405C7349F7944 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) return true;
		RuntimeObject* L_1 = ___obj0;
		if ((!(((RuntimeObject*)(GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != this.GetType()) return false;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (obj.GetType() != this.GetType()) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((GameEventListenerBool) obj);
		RuntimeObject* L_6 = ___obj0;
		bool L_7;
		L_7 = GameEventListenerBool_Equals_m12959CD03983AF5D56ED701EAC7D65B4F7862391(__this, ((GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034*)CastclassClass((RuntimeObject*)L_6, GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Int32 UberGameware.GameEventListenerBool::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameEventListenerBool_GetHashCode_m92D8E9BC2BC9CB8B38072B7FD851AE8BF0CB3421 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.GetInstanceID().GetHashCode();
		int32_t L_0;
		L_0 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return L_1;
	}
}
// System.Void UberGameware.GameEventListenerBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerBool__ctor_mCCE67EF82E70F20E65E5812C39ACF8F0EBEB9D62 (GameEventListenerBool_t593DCA9944E547583C3E684A9340F25EECF23034* __this, const RuntimeMethod* method) 
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
// System.Void UberGameware.GameEventListenerInt::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerInt_OnEnable_m7AAC48A76024357C0CFDBA1F93A3F0BF3A3E8CB7 (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, const RuntimeMethod* method) 
{
	{
		// Event.RegisterListener(this);
		GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventInt_RegisterListener_m3AE6D13215E9142FAFDE9528F3723E80EAE3C4C1(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListenerInt::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerInt_OnDisable_m7A1D3CD3823AC9E1969271AD12DB8368E20FB076 (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, const RuntimeMethod* method) 
{
	{
		// Event.UnregisterListener(this);
		GameEventInt_tE9C7D8137A9FB2C0474A37473898B00022DEA9B1* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventInt_UnregisterListener_m1E12E305D5C12CB424FAD50AA158B39778B2910F(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListenerInt::OnEventRaised(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerInt_OnEventRaised_m4ED57DA289B9E44F46A347E4110FB7D0F48A98CB (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Response.Invoke(id);
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_0 = __this->___Response_5;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_0, L_1, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UberGameware.GameEventListenerInt::Equals(UberGameware.GameEventListenerInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerInt_Equals_m6DBE0BDFF28DF70E703CAD3C1BE92D7DB94B4BFC (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* ___other0, const RuntimeMethod* method) 
{
	{
		// return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
		GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean UberGameware.GameEventListenerInt::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerInt_Equals_m25192A9BC8C04A167D3EF19CE17DFDE5447D12BA (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) return true;
		RuntimeObject* L_1 = ___obj0;
		if ((!(((RuntimeObject*)(GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != this.GetType()) return false;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (obj.GetType() != this.GetType()) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((GameEventListenerInt) obj);
		RuntimeObject* L_6 = ___obj0;
		bool L_7;
		L_7 = GameEventListenerInt_Equals_m6DBE0BDFF28DF70E703CAD3C1BE92D7DB94B4BFC(__this, ((GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D*)CastclassClass((RuntimeObject*)L_6, GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Int32 UberGameware.GameEventListenerInt::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameEventListenerInt_GetHashCode_mA27A7A8E88CC4F30DA6FA39C0409415C542577C7 (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.GetInstanceID().GetHashCode();
		int32_t L_0;
		L_0 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return L_1;
	}
}
// System.Void UberGameware.GameEventListenerInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerInt__ctor_m0A4EF9FEEAFD0AD3565FFAC4DFF54249FDA31751 (GameEventListenerInt_tA96FBB6B67AC729FB5D44EFE52AEB1AF617CB71D* __this, const RuntimeMethod* method) 
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
// System.Void UberGameware.GameEventListenerIntInt::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerIntInt_OnEnable_m7D0C070733F0C197C85EDCE764666F83D1E3BEA6 (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, const RuntimeMethod* method) 
{
	{
		// Event.RegisterListener(this);
		GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventIntInt_RegisterListener_mC037B98E8B8DAF3E4642A7A832CCE0B17D3FBF3B(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListenerIntInt::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerIntInt_OnDisable_m53186CA12C75AAC5134ADFA0E40C9865710CD2E3 (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, const RuntimeMethod* method) 
{
	{
		// Event.UnregisterListener(this);
		GameEventIntInt_t369A2131AF43FC02F1E507AF7EDEE006B258795A* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventIntInt_UnregisterListener_m8804624F41B7BBF8314FE170F7C617ADCABD31A2(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.GameEventListenerIntInt::OnEventRaised(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerIntInt_OnEventRaised_m431825D53C6DCA97D488C277F8647206942FFC8A (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, int32_t ___id10, int32_t ___id21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Response.Invoke(id1, id2);
		UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* L_0 = __this->___Response_5;
		int32_t L_1 = ___id10;
		int32_t L_2 = ___id21;
		NullCheck(L_0);
		UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F(L_0, L_1, L_2, UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UberGameware.GameEventListenerIntInt::Equals(UberGameware.GameEventListenerIntInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerIntInt_Equals_m8B558E475EDB83634677282247DA43766BA34724 (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* ___other0, const RuntimeMethod* method) 
{
	{
		// return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
		GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean UberGameware.GameEventListenerIntInt::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerIntInt_Equals_m0093D4F23002A929C1481C3A0EC2D3571925DEAD (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) return true;
		RuntimeObject* L_1 = ___obj0;
		if ((!(((RuntimeObject*)(GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != this.GetType()) return false;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (obj.GetType() != this.GetType()) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((GameEventListenerIntInt) obj);
		RuntimeObject* L_6 = ___obj0;
		bool L_7;
		L_7 = GameEventListenerIntInt_Equals_m8B558E475EDB83634677282247DA43766BA34724(__this, ((GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA*)CastclassClass((RuntimeObject*)L_6, GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Int32 UberGameware.GameEventListenerIntInt::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameEventListenerIntInt_GetHashCode_m5EF881C89B0B6EA39ED2CE1F5FAB307FE0010112 (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.GetInstanceID().GetHashCode();
		int32_t L_0;
		L_0 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return L_1;
	}
}
// System.Void UberGameware.GameEventListenerIntInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerIntInt__ctor_m5BD550FD8FE3A3F1E21F02AB06A76FD975CF6305 (GameEventListenerIntInt_tC3B5381FA6E4DD28ABEDC80C791A432557B77BAA* __this, const RuntimeMethod* method) 
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
// System.Void UberGameware.ComboStatus::SetComboStepsUpdateAction(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboStatus_SetComboStepsUpdateAction_m6C1D2F9670951975F3E6BC5C79EFD4E99A2199A6 (ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___comboStepsAction0, const RuntimeMethod* method) 
{
	{
		// comboStepsUpdateAction = comboStepsAction;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___comboStepsAction0;
		__this->___comboStepsUpdateAction_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comboStepsUpdateAction_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void UberGameware.ComboStatus::SetMultiplierUpdateAction(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboStatus_SetMultiplierUpdateAction_mF4C1C7E92DE0B7818B1A4F8F28282F7D683F6B01 (ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___multiplierAction0, const RuntimeMethod* method) 
{
	{
		// multiplierUpdateAction = multiplierAction;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___multiplierAction0;
		__this->___multiplierUpdateAction_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multiplierUpdateAction_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void UberGameware.ComboStatus::SetMultiplierUnlockAction(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboStatus_SetMultiplierUnlockAction_m6129953A30EB5E18E23C8FC7E22CB7365B47CEDC (ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___multiplierUnlockAction0, const RuntimeMethod* method) 
{
	{
		// multiplierUnlockedAction = multiplierUnlockAction;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___multiplierUnlockAction0;
		__this->___multiplierUnlockedAction_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multiplierUnlockedAction_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void UberGameware.ComboStatus::SetComboSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboStatus_SetComboSteps_m5834B985CB60DB09057D5057EDEC30A9A68DC0AE (ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D* __this, int32_t ___newComboSteps0, const RuntimeMethod* method) 
{
	{
		// currentComboSteps = newComboSteps;
		int32_t L_0 = ___newComboSteps0;
		__this->___currentComboSteps_6 = L_0;
		// comboStepsUpdateAction(currentComboSteps);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = __this->___comboStepsUpdateAction_7;
		int32_t L_2 = __this->___currentComboSteps_6;
		NullCheck(L_1);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.ComboStatus::SetMultiplier(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboStatus_SetMultiplier_mE7C1A6BF9600451D2F05F9351517668A6E9AF94A (ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D* __this, int32_t ___newMultiplier0, const RuntimeMethod* method) 
{
	{
		// currentMultiplier = newMultiplier;
		int32_t L_0 = ___newMultiplier0;
		__this->___currentMultiplier_5 = L_0;
		// multiplierUpdateAction(currentMultiplier);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = __this->___multiplierUpdateAction_8;
		int32_t L_2 = __this->___currentMultiplier_5;
		NullCheck(L_1);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.ComboStatus::UnlockMultiplier(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboStatus_UnlockMultiplier_m46BA76B1B43C4D21D065066CE77D24AEA67B764D (ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D* __this, int32_t ___unlockedMultiplier0, const RuntimeMethod* method) 
{
	{
		// multiplierUnlockedMax = unlockedMultiplier;
		int32_t L_0 = ___unlockedMultiplier0;
		__this->___multiplierUnlockedMax_4 = L_0;
		// multiplierUnlockedAction(multiplierUnlockedMax);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = __this->___multiplierUnlockedAction_9;
		int32_t L_2 = __this->___multiplierUnlockedMax_4;
		NullCheck(L_1);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.ComboStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboStatus__ctor_m1A9DD1DE32B6D341C51CC7751832B37E8F777037 (ComboStatus_tE8F9BD5D06B0734AECE4EE00E0BF112999F12F6D* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Int32 UberGameware.LevelRequirements::get_ValueTypesQuantity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelRequirements_get_ValueTypesQuantity_m127754AB7F93F9843D1C02357DA540ADA51F6CD9 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return valueTypesQuantity; }
		int32_t L_0 = __this->___valueTypesQuantity_5;
		return L_0;
	}
}
// System.Int32 UberGameware.LevelRequirements::get_AdditionalTypesQuantity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelRequirements_get_AdditionalTypesQuantity_mDC3ADE0F951D9B1F1ED9A88077D9620EB6036974 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return additionalTypesQuantity; }
		int32_t L_0 = __this->___additionalTypesQuantity_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Int32> UberGameware.LevelRequirements::get_ValueQuantityToSpawnPerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* LevelRequirements_get_ValueQuantityToSpawnPerType_m9824E0E202B08AFDA34B8AFAF2971CA5D6066465 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return valueQuantityToSpawnPerType; }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___valueQuantityToSpawnPerType_7;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Double> UberGameware.LevelRequirements::get_PricePerValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t495F03F47D827883530F951D563C0BB7340E5995* LevelRequirements_get_PricePerValueType_mE95E7AEC34BA1FCE9AC2987BE33342603AF65237 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return pricePerValueType; }
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_0 = __this->___pricePerValueType_8;
		return L_0;
	}
}
// System.Double UberGameware.LevelRequirements::get_TargetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LevelRequirements_get_TargetValue_mA9162873CFBE1BA66E37E32BEE68C8AEE0DFF04A (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return targetValue; }
		double L_0 = __this->___targetValue_4;
		return L_0;
	}
}
// System.Int32 UberGameware.LevelRequirements::get_AdditionalItemsQuantity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelRequirements_get_AdditionalItemsQuantity_m80BB7976F4106542B372A4F18236ECCC1ED42012 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return additionalItemsQuantity; }
		int32_t L_0 = __this->___additionalItemsQuantity_9;
		return L_0;
	}
}
// System.Single UberGameware.LevelRequirements::get_SpeedMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LevelRequirements_get_SpeedMultiplier_mF97D8EE29132EDA5CB54AAD472486619248B0AC9 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return speedMultiplier; }
		float L_0 = __this->___speedMultiplier_10;
		return L_0;
	}
}
// System.Single UberGameware.LevelRequirements::get_SpawnInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LevelRequirements_get_SpawnInterval_mD46E77FD1135A33FA5DB0F65078552F52271BF99 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return spawnInterval; }
		float L_0 = __this->___spawnInterval_11;
		return L_0;
	}
}
// System.Int32 UberGameware.LevelRequirements::get_QuantityPerSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelRequirements_get_QuantityPerSet_mC646DD46AEDD9A6695D78370F2832A4DD761B515 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	{
		// get { return quantityPerSet; }
		int32_t L_0 = __this->___quantityPerSet_12;
		return L_0;
	}
}
// System.Void UberGameware.LevelRequirements::SetValueTypesQuantity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetValueTypesQuantity_m66B653F8E23FDD0235BA8E6DAE95A021D78284D6 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, int32_t ___typesQuantity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE27F42D69CCA7FE22845E11E97F0E1807417FF82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (typesQuantity >= ValueTypesQuantityMin && typesQuantity <= ValueTypesQuantityMax)
		int32_t L_0 = ___typesQuantity0;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___typesQuantity0;
		if ((((int32_t)L_1) > ((int32_t)7)))
		{
			goto IL_0010;
		}
	}
	{
		// valueTypesQuantity = typesQuantity;
		int32_t L_2 = ___typesQuantity0;
		__this->___valueTypesQuantity_5 = L_2;
		return;
	}

IL_0010:
	{
		// Debug.LogError(name + ": Invalid Value Types Quantity: " + typesQuantity);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___typesQuantity0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteralE27F42D69CCA7FE22845E11E97F0E1807417FF82, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_5, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetAdditionalTypesQuantity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetAdditionalTypesQuantity_m5DC8A9C825E135096CFAA8456ABD4BE73FCB73AC (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, int32_t ___typesQuantity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34BDE2A44E6DCCB029C698B78BFC7F26540D56E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (typesQuantity >= AdditionalTypesQuantityMin && typesQuantity <= AdditionalTypesQuantityMax)
		int32_t L_0 = ___typesQuantity0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___typesQuantity0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)30))))
		{
			goto IL_0011;
		}
	}
	{
		// additionalTypesQuantity = typesQuantity;
		int32_t L_2 = ___typesQuantity0;
		__this->___additionalTypesQuantity_6 = L_2;
		return;
	}

IL_0011:
	{
		// Debug.LogError(name + ": Invalid Additional Types Quantity: " + typesQuantity);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___typesQuantity0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteral34BDE2A44E6DCCB029C698B78BFC7F26540D56E5, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_5, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetTargetValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetTargetValue_mC40EEC9A9BF52AB74D1D2C51CD0019EDCF1EA721 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, double ___targetValue0, const RuntimeMethod* method) 
{
	{
		// if (targetValue > 0 && targetValue <= double.MaxValue)
		double L_0 = ___targetValue0;
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_001f;
		}
	}
	{
		double L_1 = ___targetValue0;
		if ((!(((double)L_1) <= ((double)(1.7976931348623157E+308)))))
		{
			goto IL_001f;
		}
	}
	{
		// this.targetValue = targetValue;
		double L_2 = ___targetValue0;
		__this->___targetValue_4 = L_2;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetValueQuantityToSpawnPerType(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetValueQuantityToSpawnPerType_mA96CCFFBADCDFA038093399F1963CFBC110A2218 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___quantities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EC1A88CA446441BF971AB8F303A763947C4A5BD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (quantities.Count == valueTypesQuantity)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___quantities0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_2 = __this->___valueTypesQuantity_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0026;
		}
	}
	{
		// valueQuantityToSpawnPerType.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___valueQuantityToSpawnPerType_7;
		NullCheck(L_3);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_3, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// valueQuantityToSpawnPerType.AddRange(quantities);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = __this->___valueQuantityToSpawnPerType_7;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = ___quantities0;
		NullCheck(L_4);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_4, L_5, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		return;
	}

IL_0026:
	{
		// Debug.LogError(name + ": Invalid number of Value Quantities: " + quantities.Count);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = ___quantities0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_7, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, _stringLiteral5EC1A88CA446441BF971AB8F303A763947C4A5BD, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_10, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetPricePerValueType(System.Collections.Generic.List`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetPricePerValueType_m05CC4A64EA4D10264D71E05ED6A374F06A1DD2F9 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___prices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF43562D9973F4CEA30890C08CC556AA05CB577FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE991B0CE9D022540A828552AFEDC503238464CE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (prices.Count == valueTypesQuantity)
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_0 = ___prices0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_0, List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		int32_t L_2 = __this->___valueTypesQuantity_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0026;
		}
	}
	{
		// pricePerValueType.Clear();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_3 = __this->___pricePerValueType_8;
		NullCheck(L_3);
		List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_inline(L_3, List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_RuntimeMethod_var);
		// pricePerValueType.AddRange(prices);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_4 = __this->___pricePerValueType_8;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_5 = ___prices0;
		NullCheck(L_4);
		List_1_AddRange_mF43562D9973F4CEA30890C08CC556AA05CB577FB(L_4, L_5, List_1_AddRange_mF43562D9973F4CEA30890C08CC556AA05CB577FB_RuntimeMethod_var);
		return;
	}

IL_0026:
	{
		// Debug.LogError(name + ": Invalid number of Value Prices: " + prices.Count);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_7 = ___prices0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_7, List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, _stringLiteralE991B0CE9D022540A828552AFEDC503238464CE1, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_10, NULL);
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetAdditionalItemsQuantity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetAdditionalItemsQuantity_m841C9B342A5F88A7B2E1F07C4DFB8430C792FA1C (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, int32_t ___quantity0, const RuntimeMethod* method) 
{
	{
		// if (quantity > 0)
		int32_t L_0 = ___quantity0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// additionalItemsQuantity = quantity;
		int32_t L_1 = ___quantity0;
		__this->___additionalItemsQuantity_9 = L_1;
	}

IL_000b:
	{
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetSpeedMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetSpeedMultiplier_m5A7DC98DCC28F09A2A239BF29F1A7B776E9ED870 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// if (speed > 0)
		float L_0 = ___speed0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// speedMultiplier = speed;
		float L_1 = ___speed0;
		__this->___speedMultiplier_10 = L_1;
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetSpawnInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetSpawnInterval_m109F34EAF593D194A295B8ADA948A8A54E9CA0DD (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, float ___interval0, const RuntimeMethod* method) 
{
	{
		// spawnInterval = interval;
		float L_0 = ___interval0;
		__this->___spawnInterval_11 = L_0;
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::SetQuantityPerSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements_SetQuantityPerSet_m058530919CE841DFA55B956232EDDB85BA54D2F5 (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, int32_t ___quantity0, const RuntimeMethod* method) 
{
	{
		// if (quantity > 0 && quantity <=5)
		int32_t L_0 = ___quantity0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___quantity0;
		if ((((int32_t)L_1) > ((int32_t)5)))
		{
			goto IL_000f;
		}
	}
	{
		// quantityPerSet = quantity;
		int32_t L_2 = ___quantity0;
		__this->___quantityPerSet_12 = L_2;
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void UberGameware.LevelRequirements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelRequirements__ctor_mDACA9BB2D48334636A5CFD3C9944962518926EFE (LevelRequirements_t2E3DAD05727A5C3111188CF1FB934CB743F72B08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> valueQuantityToSpawnPerType = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___valueQuantityToSpawnPerType_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueQuantityToSpawnPerType_7), (void*)L_0);
		// private List<double> pricePerValueType = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_1 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_1, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		__this->___pricePerValueType_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pricePerValueType_8), (void*)L_1);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.LevelStats::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelStats_Reset_mAF6409EB5B8D90589BBECEDF385CAB0EE87D8C3A (LevelStats_tEEE06A3F490878A6AEEDF7379881F625A1EDCA21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA388378BADFB97A6BF31EDCB6489F1FEFDD598);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD917CC3ADA385403DF1B03E665B0A470B3E71F32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LevelDisplayed = 0;
		__this->___LevelDisplayed_4 = 0;
		// CurrentLevel = 0;
		__this->___CurrentLevel_5 = 0;
		// LivesLeft = 0;
		__this->___LivesLeft_6 = 0;
		// TotalValueAvailable = 0d;
		__this->___TotalValueAvailable_7 = (0.0);
		// LevelValueCollected = 0d;
		__this->___LevelValueCollected_8 = (0.0);
		// LevelProportionCompleted = 0f;
		__this->___LevelProportionCompleted_9 = (0.0f);
		// if (PlayerPrefs.HasKey(LevelDisplayedKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral8AA388378BADFB97A6BF31EDCB6489F1FEFDD598, NULL);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		// PlayerPrefs.DeleteKey(LevelDisplayedKey);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral8AA388378BADFB97A6BF31EDCB6489F1FEFDD598, NULL);
	}

IL_0054:
	{
		// if (PlayerPrefs.HasKey(TotalValueAvailableKey))
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralD917CC3ADA385403DF1B03E665B0A470B3E71F32, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// PlayerPrefs.DeleteKey(TotalValueAvailableKey);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralD917CC3ADA385403DF1B03E665B0A470B3E71F32, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void UberGameware.LevelStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelStats__ctor_m41C0D0205B1F0C111D64ECCD5B6BE3BD48D30A75 (LevelStats_tEEE06A3F490878A6AEEDF7379881F625A1EDCA21* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.FloatVariable::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_SetValue_mE34CB4643E27DB66CFE0C597446A1D4362CE962B (FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value;
		float L_0 = ___value0;
		__this->___Value_4 = L_0;
		// }
		return;
	}
}
// System.Void UberGameware.FloatVariable::SetValue(UberGameware.FloatVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_SetValue_m8A1F42D6B76BF46350339973ADAF5ED5EA891019 (FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* __this, FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value.Value;
		FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* L_0 = ___value0;
		NullCheck(L_0);
		float L_1 = L_0->___Value_4;
		__this->___Value_4 = L_1;
		// }
		return;
	}
}
// System.Void UberGameware.FloatVariable::ApplyChange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_ApplyChange_mE7A9848008FE6FD5659B227FFF03671953FD9FE9 (FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* __this, float ___amount0, const RuntimeMethod* method) 
{
	{
		// Value += amount;
		float L_0 = __this->___Value_4;
		float L_1 = ___amount0;
		__this->___Value_4 = ((float)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void UberGameware.FloatVariable::ApplyChange(UberGameware.FloatVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_ApplyChange_m650CF33788FB2022C67B02DA851195EB39D3466F (FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* __this, FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* ___amount0, const RuntimeMethod* method) 
{
	{
		// Value += amount.Value;
		float L_0 = __this->___Value_4;
		FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* L_1 = ___amount0;
		NullCheck(L_1);
		float L_2 = L_1->___Value_4;
		__this->___Value_4 = ((float)il2cpp_codegen_add(L_0, L_2));
		// }
		return;
	}
}
// System.Void UberGameware.FloatVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable__ctor_m2DEF378B60D647110FD12D9313596302F2FE2434 (FloatVariable_t71E2FE2054E178CAA340B16D902E338A7D931B96* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Int32[] UberGameware.IntArray::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* IntArray_get_Elements_m4D00657B4DDCB7E788D4E943501557FBC15E8873 (IntArray_tA8B3F80111405AA26EBCCE499717950D9A2F0F0C* __this, const RuntimeMethod* method) 
{
	{
		// get { return elements; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___elements_4;
		return L_0;
	}
}
// System.Void UberGameware.IntArray::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntArray_Initialize_m41036F060D3E5F01968FE53B708C2FCF8D6D659E (IntArray_tA8B3F80111405AA26EBCCE499717950D9A2F0F0C* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements = new int[size];
		int32_t L_0 = ___size0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___elements_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elements_4), (void*)L_1);
		// }
		return;
	}
}
// System.Int32 UberGameware.IntArray::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntArray_Count_mC4035B23AE0E4F0006D226A2D47EA40BF9AE506C (IntArray_tA8B3F80111405AA26EBCCE499717950D9A2F0F0C* __this, const RuntimeMethod* method) 
{
	{
		// return elements.Length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___elements_4;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Void UberGameware.IntArray::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntArray_Clear_mAB0FA718D9C1BA379D6E8B31CC5FE1FBE71CE32A (IntArray_tA8B3F80111405AA26EBCCE499717950D9A2F0F0C* __this, const RuntimeMethod* method) 
{
	{
		// Array.Clear(elements, 0, elements.Length);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___elements_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___elements_4;
		NullCheck(L_1);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void UberGameware.IntArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntArray__ctor_mF77FAE79C8E3848FD0BD0FD681C1C762673D6AB4 (IntArray_tA8B3F80111405AA26EBCCE499717950D9A2F0F0C* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.IntVariable::SetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVariable_SetValue_m82EAA3A294BBB18F15F547630D04987AF9373E9F (IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value;
		int32_t L_0 = ___value0;
		__this->___Value_4 = L_0;
		// }
		return;
	}
}
// System.Void UberGameware.IntVariable::SetValue(UberGameware.IntVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVariable_SetValue_mC5A390792C54CCD966F08AA0FB1EF437A31BFC4C (IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* __this, IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value.Value;
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Value_4;
		__this->___Value_4 = L_1;
		// }
		return;
	}
}
// System.Void UberGameware.IntVariable::ApplyChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVariable_ApplyChange_mE335BEBB257DA8A240F0D6A9D97C6F600D0DA14C (IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// Value += amount;
		int32_t L_0 = __this->___Value_4;
		int32_t L_1 = ___amount0;
		__this->___Value_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void UberGameware.IntVariable::ApplyChange(UberGameware.IntVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVariable_ApplyChange_m1C9890E3A60EA7AA01534AA66EDCF176C083BB68 (IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* __this, IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* ___amount0, const RuntimeMethod* method) 
{
	{
		// Value += amount.Value;
		int32_t L_0 = __this->___Value_4;
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_1 = ___amount0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Value_4;
		__this->___Value_4 = ((int32_t)il2cpp_codegen_add(L_0, L_2));
		// }
		return;
	}
}
// System.Void UberGameware.IntVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVariable__ctor_mAE9009B3115DF6369843B13C9CF894802E72491D (IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Collections.Generic.List`1<UnityEngine.Sprite> UberGameware.SpriteList::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* SpriteList_get_Elements_m06685C311EA2F4AB81AEE11FA84187AF01A8E1A9 (SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF* __this, const RuntimeMethod* method) 
{
	{
		// get { return elements; }
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___elements_4;
		return L_0;
	}
}
// System.Void UberGameware.SpriteList::Add(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteList_Add_m5DBBFA5643D26DF3A97AE7DBCA55AE57A5065FB1 (SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.Add(element);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___elements_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___element0;
		NullCheck(L_0);
		List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_inline(L_0, L_1, List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UberGameware.SpriteList::AddRange(System.Collections.Generic.List`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteList_AddRange_m3D2733F21B10B29071710A0B02A35C17CECF16C2 (SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF* __this, List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___newList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m3CA530E64A865DC36BB8F753BCFE66A252CCDE65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.AddRange(newList);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___elements_4;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = ___newList0;
		NullCheck(L_0);
		List_1_AddRange_m3CA530E64A865DC36BB8F753BCFE66A252CCDE65(L_0, L_1, List_1_AddRange_m3CA530E64A865DC36BB8F753BCFE66A252CCDE65_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 UberGameware.SpriteList::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteList_Count_m06EB8ABA3481173DF970B8D660438A480D5950A4 (SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return elements.Count;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___elements_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_0, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UberGameware.SpriteList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteList_Clear_mE4252AB3794C0CC84A6DC396B4A85EE4C00CB1AC (SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.Clear();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___elements_4;
		NullCheck(L_0);
		List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_inline(L_0, List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UberGameware.SpriteList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteList__ctor_m50D18312B882E0A357B7C63D5C74101FF350CE2C (SpriteList_t2FAD9F49DBC784DCA5E5C5B64458C6001B6DD0BF* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Collections.Generic.List`1<UnityEngine.Texture2D> UberGameware.Texture2DList::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* Texture2DList_get_Elements_m6FB9C2243D157F6111D67C9051F7E1F4594F4713 (Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F* __this, const RuntimeMethod* method) 
{
	{
		// get { return elements; }
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = __this->___elements_4;
		return L_0;
	}
}
// System.Void UberGameware.Texture2DList::Add(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DList_Add_mA238E479473E459407FFB98526D2EA4AA0049080 (Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.Add(element);
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = __this->___elements_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___element0;
		NullCheck(L_0);
		List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_inline(L_0, L_1, List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UberGameware.Texture2DList::AddRange(System.Collections.Generic.List`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DList_AddRange_m7547D98AB5553620A407B29C4764F45AA0FA1998 (Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F* __this, List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___newList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m985F6E1C9134801737199F22354F36F9AACCF339_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.AddRange(newList);
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = __this->___elements_4;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_1 = ___newList0;
		NullCheck(L_0);
		List_1_AddRange_m985F6E1C9134801737199F22354F36F9AACCF339(L_0, L_1, List_1_AddRange_m985F6E1C9134801737199F22354F36F9AACCF339_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 UberGameware.Texture2DList::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2DList_Count_mEE2A33160119DF14FDFB3B988FECF068E40BA56B (Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return elements.Count;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = __this->___elements_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_inline(L_0, List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UberGameware.Texture2DList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DList_Clear_m209840B23BF926A7EE44DC60C326FC0E26228252 (Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.Clear();
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = __this->___elements_4;
		NullCheck(L_0);
		List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_inline(L_0, List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UberGameware.Texture2DList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DList__ctor_m7E79B2A780B153E8564DBFAEB3F9A88ECBF15FFD (Texture2DList_tFEC67F77A546E7BB3F9701FB4ED19C5379BE557F* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// UnityEngine.Transform[] UberGameware.TransformArray::get_Transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* TransformArray_get_Transforms_m7C74E1917740734D02BF9A11BC3D3BFD1243AE8B (TransformArray_tDB5F150AACB1FE52FD7D7F0E549C9F2C8D6C3FDB* __this, const RuntimeMethod* method) 
{
	{
		// get { return transforms; }
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___transforms_4;
		return L_0;
	}
}
// System.Void UberGameware.TransformArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformArray__ctor_mD6934B1CC18A42ADDE7CD393540E519530DC1E03 (TransformArray_tDB5F150AACB1FE52FD7D7F0E549C9F2C8D6C3FDB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Collections.Generic.List`1<UnityEngine.Transform> UberGameware.TransformList::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* TransformList_get_Elements_m062AF68C43F6E42EB9E3B1AB72A26F75437A432F (TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479* __this, const RuntimeMethod* method) 
{
	{
		// get { return elements; }
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___elements_4;
		return L_0;
	}
}
// System.Void UberGameware.TransformList::Add(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformList_Add_m06AE620D413F4AF62C3803EB0C4359AD101289AB (TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.Add(element);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___elements_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___element0;
		NullCheck(L_0);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_0, L_1, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UberGameware.TransformList::AddRange(System.Collections.Generic.List`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformList_AddRange_m278238AC53AEAA82804093BE937D099929DFBB65 (TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479* __this, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___newList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mE057CF4032DB4BC8DFEFD0F90228EEBBB8A0838A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.AddRange(newList);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___elements_4;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = ___newList0;
		NullCheck(L_0);
		List_1_AddRange_mE057CF4032DB4BC8DFEFD0F90228EEBBB8A0838A(L_0, L_1, List_1_AddRange_mE057CF4032DB4BC8DFEFD0F90228EEBBB8A0838A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 UberGameware.TransformList::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformList_Count_mC12E4E80EC88725C65DBB329F645F12BDEA5F0EC (TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return elements.Count;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___elements_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_0, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UberGameware.TransformList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformList_Clear_mB7EE54BDE4285F2E9A4B9B924ADB1170F5675AF6 (TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elements.Clear();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___elements_4;
		NullCheck(L_0);
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_0, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UberGameware.TransformList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformList__ctor_m9D938C4F0EBEBB0FA25FD39DFB06C37647403D25 (TransformList_t29B6EE3C925D0600AC313DC91B72BAA156836479* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UberGameware.Vector3Variable::SetValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Variable_SetValue_mD0D1720AE5DFAD3D95E5A02C0FA2E6F5F129F81B (Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___Value_4 = L_0;
		// }
		return;
	}
}
// System.Void UberGameware.Vector3Variable::SetValue(UberGameware.Vector3Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Variable_SetValue_m7BCBBA934F70FB98862AF35FE7EE2A2F284D3F9A (Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* __this, Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value.Value;
		Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* L_0 = ___value0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___Value_4;
		__this->___Value_4 = L_1;
		// }
		return;
	}
}
// System.Void UberGameware.Vector3Variable::ApplyChange(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Variable_ApplyChange_m1858266DB50D149D2CAD371CBCB8F7E51374F384 (Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___amount0, const RuntimeMethod* method) 
{
	{
		// Value += amount;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___Value_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___amount0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_1, NULL);
		__this->___Value_4 = L_2;
		// }
		return;
	}
}
// System.Void UberGameware.Vector3Variable::ApplyChange(UberGameware.Vector3Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Variable_ApplyChange_mE160921C217BA41AC3A281943A8EB185C2370338 (Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* __this, Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* ___amount0, const RuntimeMethod* method) 
{
	{
		// Value += amount.Value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___Value_4;
		Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* L_1 = ___amount0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___Value_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_2, NULL);
		__this->___Value_4 = L_3;
		// }
		return;
	}
}
// System.Void UberGameware.Vector3Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Variable__ctor_mC1B6E806293C31A17DA30DC6A7E1905227A8DC2F (Vector3Variable_tA71D96B64AE29CFEBC22EB97C86EA3F07B77B543* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// ClothesShopSim.OutfitID ClothesShopSim.AnimationSet::get_OutfitID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSet_get_OutfitID_mCCC6717E48D139169FADACA8295877DA41C33F99 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return outfitID; }
		int32_t L_0 = __this->___outfitID_4;
		return L_0;
	}
}
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_WalkRightAnimGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkRightAnimGameObject_m5CD11DB64AAA4E288673A613970CF6FB6D295306 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return walkRightAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___walkRightAnimGameObject_5;
		return L_0;
	}
}
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_WalkForwardAnimGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkForwardAnimGameObject_mD027946170FE6A9D9525DF80206828D2306C78E9 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return walkForwardAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___walkForwardAnimGameObject_6;
		return L_0;
	}
}
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_WalkBackAnimGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkBackAnimGameObject_m92A5AB46EAB8774B75495A8A370846BDE248D563 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return walkBackAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___walkBackAnimGameObject_7;
		return L_0;
	}
}
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_IdleRightAnimGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleRightAnimGameObject_mE429E8AF2591A27587D118523669EB04FFB39A45 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return idleRightAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___idleRightAnimGameObject_8;
		return L_0;
	}
}
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_IdleForwardAnimGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleForwardAnimGameObject_m2EB6144EB0194E574BBAEDF9194D4E2561D3A58F (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return idleForwardAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___idleForwardAnimGameObject_9;
		return L_0;
	}
}
// UnityEngine.GameObject ClothesShopSim.AnimationSet::get_IdleBackAnimGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleBackAnimGameObject_m23391E94765F76887DDE0AA370F883D2360D3F74 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return idleBackAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___idleBackAnimGameObject_10;
		return L_0;
	}
}
// System.Void ClothesShopSim.AnimationSet::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSet_Awake_mE1250C3A8EE4E73238B7FC47A974C2A0646B642B (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D59B67F9A06ADCC80406D21A0F7C781955721A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAB90D9910982B938A2C681CA6D6F449480089B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool animationsValid = ValidateAnimations();
		bool L_0;
		L_0 = AnimationSet_ValidateAnimations_mFB98D191D87392371E7AE06A7ADD62322E62945D(__this, NULL);
		// bool outfitIDValid = ValidateOutfitID();
		bool L_1;
		L_1 = AnimationSet_ValidateOutfitID_m9BEF03319CE6325D0534546BE2EFC74EB87BE437(__this, NULL);
		V_0 = L_1;
		// if (!animationsValid)
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("Animations missing from AnimationSet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralFBAB90D9910982B938A2C681CA6D6F449480089B, NULL);
	}

IL_0019:
	{
		// if (!outfitIDValid)
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogError("OutfitID not set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral0D59B67F9A06ADCC80406D21A0F7C781955721A6, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean ClothesShopSim.AnimationSet::ValidateAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationSet_ValidateAnimations_mFB98D191D87392371E7AE06A7ADD62322E62945D (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!walkRightAnimGameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___walkRightAnimGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if (!walkForwardAnimGameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___walkForwardAnimGameObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// if (!walkBackAnimGameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___walkBackAnimGameObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// if (!idleRightAnimGameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___idleRightAnimGameObject_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (L_7)
		{
			goto IL_003c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003c:
	{
		// if (!idleForwardAnimGameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___idleForwardAnimGameObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// if (!idleBackAnimGameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___idleBackAnimGameObject_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (L_11)
		{
			goto IL_005a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_005a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean ClothesShopSim.AnimationSet::ValidateOutfitID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationSet_ValidateOutfitID_m9BEF03319CE6325D0534546BE2EFC74EB87BE437 (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// if (outfitID == OutfitID.None)
		int32_t L_0 = __this->___outfitID_4;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void ClothesShopSim.AnimationSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSet__ctor_mA8417CF24173BE827A604428F2077ACFB9AF7BEF (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.Catwalk::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Catwalk_Start_m81E3C30D26F196EB71E463031EC4C05727747435 (Catwalk_t3A18B28F47BF0CB00BFC9FC734A2D556FF91A06E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Catwalk::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Catwalk_Update_m2460073E0BC9F28A060ECC7694621E08CEC0F40A (Catwalk_t3A18B28F47BF0CB00BFC9FC734A2D556FF91A06E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Catwalk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Catwalk__ctor_m23D9B215BBC7DAD8C3694510EA8DF3658115B7F2 (Catwalk_t3A18B28F47BF0CB00BFC9FC734A2D556FF91A06E* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.CatwalkEndpoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatwalkEndpoint_Start_m89628788FA5D0F5EDD6C1E93765498976EC3D25E (CatwalkEndpoint_t261B8096291849989F5E790C759E5A787D1BA989* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.CatwalkEndpoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatwalkEndpoint_Update_mFFE53BBE2C99B05092679A0625BD50261AE64E32 (CatwalkEndpoint_t261B8096291849989F5E790C759E5A787D1BA989* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.CatwalkEndpoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatwalkEndpoint__ctor_m76472224BBBCBA5522CA1197B803E51DBD8978D8 (CatwalkEndpoint_t261B8096291849989F5E790C759E5A787D1BA989* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.DisplayPodium::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayPodium_Awake_mF41611EC4EDB4A2F1AB1C40583BBE5741C00BB21 (DisplayPodium_tFC1A986B4AB0EBED93F0E5267D8BA8FAAC6A7956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_mB6B3EB24AF663B9823AD6EB8AEA882A08380D81D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CC2154BA99A342FCE979C29AE9C29FFDC415950);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// itemDisplayPrice = GetComponentInChildren<TextMeshPro>();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0;
		L_0 = Component_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_mB6B3EB24AF663B9823AD6EB8AEA882A08380D81D(__this, Component_GetComponentInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_mB6B3EB24AF663B9823AD6EB8AEA882A08380D81D_RuntimeMethod_var);
		__this->___itemDisplayPrice_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemDisplayPrice_7), (void*)L_0);
		// itemDisplayPrice.text = "$ " + itemInfo.BuyPrice.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->___itemDisplayPrice_7;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_2 = __this->___itemInfo_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ItemInfo_get_BuyPrice_m11795B99EE5E5AA75D328CB7F3176CBF4289B017_inline(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8CC2154BA99A342FCE979C29AE9C29FFDC415950, L_4, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_5);
		// itemInfo.ResetItem();
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_6 = __this->___itemInfo_5;
		NullCheck(L_6);
		ItemInfo_ResetItem_m02877AE9C05C54C650DD71E1080B7704FBE56B2D(L_6, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.DisplayPodium::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayPodium_Update_m6E67F49ED33513595788A0D0853BFDF72302800B (DisplayPodium_tFC1A986B4AB0EBED93F0E5267D8BA8FAAC6A7956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CBA279EF429BB47A07A9562B72801A9CAD21821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F94FC2A16C1F2B4CDA11AB2CFFF94EA6567A68);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isActive)
		bool L_0 = __this->___isActive_9;
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.B))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)98), NULL);
		if (!L_1)
		{
			goto IL_006d;
		}
	}
	{
		// if (playerCash.Value >= itemInfo.BuyPrice)
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_2 = __this->___playerCash_6;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Value_4;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_4 = __this->___itemInfo_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ItemInfo_get_BuyPrice_m11795B99EE5E5AA75D328CB7F3176CBF4289B017_inline(L_4, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		// itemPurchased.Raise(itemInfo);
		GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* L_6 = __this->___itemPurchased_4;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_7 = __this->___itemInfo_5;
		NullCheck(L_6);
		GameEventItemInfo_Raise_mEB221B588E7441A23BB1F4F881BA43A41592C8E7(L_6, L_7, NULL);
		// transactionResult.text = PurchaseSucceededName;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_8 = __this->___transactionResult_8;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral0CBA279EF429BB47A07A9562B72801A9CAD21821);
		goto IL_005c;
	}

IL_004c:
	{
		// transactionResult.text = PurchaseFailedName;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_9 = __this->___transactionResult_8;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, _stringLiteralD4F94FC2A16C1F2B4CDA11AB2CFFF94EA6567A68);
	}

IL_005c:
	{
		// transactionResult.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_10 = __this->___transactionResult_8;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.DisplayPodium::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayPodium_OnTriggerStay2D_m5E8466FA53154EA251136BFA49A708665CB9CADD (DisplayPodium_tFC1A986B4AB0EBED93F0E5267D8BA8FAAC6A7956* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// isActive = true;
		__this->___isActive_9 = (bool)1;
		// }
		return;
	}
}
// System.Void ClothesShopSim.DisplayPodium::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayPodium_OnTriggerExit2D_m7D3860D0A3611A73BF3C94A918E0423E835ACF4F (DisplayPodium_tFC1A986B4AB0EBED93F0E5267D8BA8FAAC6A7956* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// isActive = false;
		__this->___isActive_9 = (bool)0;
		// transactionResult.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___transactionResult_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.DisplayPodium::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayPodium__ctor_m86FF1569C67076C7411551CA9162EE54FAA421F6 (DisplayPodium_tFC1A986B4AB0EBED93F0E5267D8BA8FAAC6A7956* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.FittingRoomInterior::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FittingRoomInterior_Awake_m0CA4161683D7A0C042A63F3B8234C099C0C5BD95 (FittingRoomInterior_t1DEECA8CBCD71DE0726F63B842864BDE98BB0F21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA966F1C4081763B32BB3992FE33ED9867B16353A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerInventory = GameObject.FindGameObjectWithTag(PlayerTag).GetComponent<PlayerInventory>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_1;
		L_1 = GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD(L_0, GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD_RuntimeMethod_var);
		__this->___playerInventory_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInventory_7), (void*)L_1);
		// if (!playerInventory)
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_2 = __this->___playerInventory_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.LogError("Player Inventory not found.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA966F1C4081763B32BB3992FE33ED9867B16353A, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.FittingRoomInterior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FittingRoomInterior_Update_mA3AF43585C9662126B6DB5602B2E79A5FDB043F5 (FittingRoomInterior_t1DEECA8CBCD71DE0726F63B842864BDE98BB0F21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A226252B0C9FFA94AD65E379D933D22282F0129);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2043C237E1AB3C4B9EAF769DF74E5432D57658);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral708E182BA1D05C5FB228FD9CA153E95BC851C919);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (isActive)
		bool L_0 = __this->___isActive_8;
		if (!L_0)
		{
			goto IL_00d9;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.E))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)101), NULL);
		if (!L_1)
		{
			goto IL_00d9;
		}
	}
	{
		// bool found = false;
		V_0 = (bool)0;
		// if (selectedItemInfoHolder != null && selectedItemInfoHolder.ItemInfo.OutfitID != OutfitID.None)
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_2 = __this->___selectedItemInfoHolder_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00cf;
		}
	}
	{
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_4 = __this->___selectedItemInfoHolder_5;
		NullCheck(L_4);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_5;
		L_5 = ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_00cf;
		}
	}
	{
		// for (int i = 0; i < playerInventory.Inventory.Count; i++)
		V_1 = 0;
		goto IL_0097;
	}

IL_0043:
	{
		// if (playerInventory.Inventory[i].OutfitID == selectedItemInfoHolder.ItemInfo.OutfitID)
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_7 = __this->___playerInventory_7;
		NullCheck(L_7);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_8;
		L_8 = PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline(L_7, NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_10;
		L_10 = List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188(L_8, L_9, List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_10, NULL);
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_12 = __this->___selectedItemInfoHolder_5;
		NullCheck(L_12);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_13;
		L_13 = ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline(L_12, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_13, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_14))))
		{
			goto IL_0093;
		}
	}
	{
		// itemEquipedGameEventItemInfo.Raise(selectedItemInfoHolder.ItemInfo);
		GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* L_15 = __this->___itemEquipedGameEventItemInfo_4;
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_16 = __this->___selectedItemInfoHolder_5;
		NullCheck(L_16);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_17;
		L_17 = ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline(L_16, NULL);
		NullCheck(L_15);
		GameEventItemInfo_Raise_mEB221B588E7441A23BB1F4F881BA43A41592C8E7(L_15, L_17, NULL);
		// transactionResult.text = EquipSucceededName;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_18 = __this->___transactionResult_6;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, _stringLiteral708E182BA1D05C5FB228FD9CA153E95BC851C919);
		// found = true;
		V_0 = (bool)1;
	}

IL_0093:
	{
		// for (int i = 0; i < playerInventory.Inventory.Count; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0097:
	{
		// for (int i = 0; i < playerInventory.Inventory.Count; i++)
		int32_t L_20 = V_1;
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_21 = __this->___playerInventory_7;
		NullCheck(L_21);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_22;
		L_22 = PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline(L_21, NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_inline(L_22, List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_0043;
		}
	}
	{
		// if (!found)
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_00bd;
		}
	}
	{
		// transactionResult.text = EquipFailedName;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_25 = __this->___transactionResult_6;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, _stringLiteral6F2043C237E1AB3C4B9EAF769DF74E5432D57658);
	}

IL_00bd:
	{
		// transactionResult.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_26 = __this->___transactionResult_6;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		return;
	}

IL_00cf:
	{
		// Debug.LogError("Invalid selectedItemInfo.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral6A226252B0C9FFA94AD65E379D933D22282F0129, NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.FittingRoomInterior::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FittingRoomInterior_OnTriggerStay2D_m66673BB1608C64F271A4A58AD163109B53D879E6 (FittingRoomInterior_t1DEECA8CBCD71DE0726F63B842864BDE98BB0F21* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// isActive = true;
		__this->___isActive_8 = (bool)1;
		// }
		return;
	}
}
// System.Void ClothesShopSim.FittingRoomInterior::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FittingRoomInterior_OnTriggerExit2D_mF91915A5AC771D44A6208CD8EA80ADEE731DC01D (FittingRoomInterior_t1DEECA8CBCD71DE0726F63B842864BDE98BB0F21* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// isActive = false;
		__this->___isActive_8 = (bool)0;
		// transactionResult.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___transactionResult_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.FittingRoomInterior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FittingRoomInterior__ctor_m8E6A134E544B10CA1F1EC4048AE15F4B0C30C749 (FittingRoomInterior_t1DEECA8CBCD71DE0726F63B842864BDE98BB0F21* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.GameManager::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Exit_mA458165A9AE3820A2228B830D6A9E54FE6B29ADF (GameManager_tC10DBADDFAAF3741805C402B870CFD2D11233139* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m3AB75E10EAC772CB316BD57488D7E1D206841621 (GameManager_tC10DBADDFAAF3741805C402B870CFD2D11233139* __this, const RuntimeMethod* method) 
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
// ClothesShopSim.InventoryController ClothesShopSim.InventoryController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* InventoryController_get_Instance_m3D0484A27843794F79F266C64861C8018F04B564 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InventoryController Instance { get; private set; }
		InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* L_0 = ((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ClothesShopSim.InventoryController::set_Instance(ClothesShopSim.InventoryController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_set_Instance_mE55E606CC1E9C4F6CD02AC4A9E185E726C6A2274 (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InventoryController Instance { get; private set; }
		InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* L_0 = ___value0;
		((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_Awake_mE5D0AF51B731718571ACE17699AA717E54483849 (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3916019D8F5356380CA00EA9F0E9AB88D4EA1862);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance && Instance != this) Debug.LogError("Inventory controller exists more than once but is a Singleton!");
		InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* L_0;
		L_0 = InventoryController_get_Instance_m3D0484A27843794F79F266C64861C8018F04B564_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* L_2;
		L_2 = InventoryController_get_Instance_m3D0484A27843794F79F266C64861C8018F04B564_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// if (Instance && Instance != this) Debug.LogError("Inventory controller exists more than once but is a Singleton!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3916019D8F5356380CA00EA9F0E9AB88D4EA1862, NULL);
		return;
	}

IL_0024:
	{
		// else Instance = this;
		InventoryController_set_Instance_mE55E606CC1E9C4F6CD02AC4A9E185E726C6A2274_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_Start_m53E7D5D0C28D24BD0FDC5349AA248AE3341F91E5 (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mBD18D5529B0416808C7E3088C56D3FB699F49DAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inventory = FindObjectOfType<PlayerInventory>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_0;
		L_0 = Object_FindObjectOfType_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mBD18D5529B0416808C7E3088C56D3FB699F49DAD(Object_FindObjectOfType_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mBD18D5529B0416808C7E3088C56D3FB699F49DAD_RuntimeMethod_var);
		((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___inventory_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___inventory_10), (void*)L_0);
		// GenerateInventoryUI();
		InventoryController_GenerateInventoryUI_m6F75F1C48656F490DC6CACB83E14192ECE4A7DAA(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_Update_m5D25797CF5956327E450229D0484AFEC11F2A0C0 (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.I))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)105), NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// inventoryUI.SetActive(!inventoryUI.activeInHierarchy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___inventoryUI_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___inventoryUI_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// if (inventoryUI.activeInHierarchy) GenerateInventoryUI();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___inventoryUI_6;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_4, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// if (inventoryUI.activeInHierarchy) GenerateInventoryUI();
		InventoryController_GenerateInventoryUI_m6F75F1C48656F490DC6CACB83E14192ECE4A7DAA(__this, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::GenerateInventoryUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_GenerateInventoryUI_m6F75F1C48656F490DC6CACB83E14192ECE4A7DAA (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4D750C40CFC1312A0FB6656469ED81C1B3171057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6CCFD695DEB4D88BEA21B73899E18FD9306FE83E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D580E22F2B40A10CB8DA12313EF07F7473960F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDD74167D509775966D129A0CBF58A6C94C608AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC86750A96693FCB7DE5CC14B79D2B37B24EBD9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m749FB694594A7EB8DF44FD076DB0262D8BDBA2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7C33A113B26A7DA58A5A761D33F34AE23AC7887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6A5199477F9A872DCFF438274257403095B60706 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* V_1 = NULL;
	{
		goto IL_0024;
	}

IL_0002:
	{
		// Destroy(currentDisplays[0].gameObject);
		List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* L_0 = __this->___currentDisplays_9;
		NullCheck(L_0);
		InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* L_1;
		L_1 = List_1_get_Item_mC7C33A113B26A7DA58A5A761D33F34AE23AC7887(L_0, 0, List_1_get_Item_mC7C33A113B26A7DA58A5A761D33F34AE23AC7887_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// currentDisplays.RemoveAt(0);
		List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* L_3 = __this->___currentDisplays_9;
		NullCheck(L_3);
		List_1_RemoveAt_mC86750A96693FCB7DE5CC14B79D2B37B24EBD9EB(L_3, 0, List_1_RemoveAt_mC86750A96693FCB7DE5CC14B79D2B37B24EBD9EB_RuntimeMethod_var);
	}

IL_0024:
	{
		// while (currentDisplays.Count > 0)
		List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* L_4 = __this->___currentDisplays_9;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m749FB694594A7EB8DF44FD076DB0262D8BDBA2A0_inline(L_4, List_1_get_Count_m749FB694594A7EB8DF44FD076DB0262D8BDBA2A0_RuntimeMethod_var);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// foreach (var item in inventory.Inventory)
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_6 = ((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___inventory_10;
		NullCheck(L_6);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_7;
		L_7 = PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline(L_6, NULL);
		NullCheck(L_7);
		Enumerator_t6A5199477F9A872DCFF438274257403095B60706 L_8;
		L_8 = List_1_GetEnumerator_mDD74167D509775966D129A0CBF58A6C94C608AEA(L_7, List_1_GetEnumerator_mDD74167D509775966D129A0CBF58A6C94C608AEA_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4D750C40CFC1312A0FB6656469ED81C1B3171057((&V_0), Enumerator_Dispose_m4D750C40CFC1312A0FB6656469ED81C1B3171057_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_0044_1:
			{
				// foreach (var item in inventory.Inventory)
				ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_9;
				L_9 = Enumerator_get_Current_m7D580E22F2B40A10CB8DA12313EF07F7473960F5_inline((&V_0), Enumerator_get_Current_m7D580E22F2B40A10CB8DA12313EF07F7473960F5_RuntimeMethod_var);
				V_1 = L_9;
				// GenerateDisplayForItem(item);
				ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_10 = V_1;
				InventoryController_GenerateDisplayForItem_mA7BC5CE5B42C2EABB2BC0A570E099159A0A952DC(__this, L_10, NULL);
			}

IL_0053_1:
			{
				// foreach (var item in inventory.Inventory)
				bool L_11;
				L_11 = Enumerator_MoveNext_m6CCFD695DEB4D88BEA21B73899E18FD9306FE83E((&V_0), Enumerator_MoveNext_m6CCFD695DEB4D88BEA21B73899E18FD9306FE83E_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::GenerateDisplayForItem(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_GenerateDisplayForItem_mA7BC5CE5B42C2EABB2BC0A570E099159A0A952DC (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF_m7D374931E1CF107DE66703353873162EEC286051_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m024BF4F8798C600627FEF8A95B896904198DE2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* V_0 = NULL;
	{
		// var d = Instantiate(inventoryItemDisplayPrefab, inventoryContent.transform)
		//     .GetComponent<InventoryItemDisplay>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___inventoryItemDisplayPrefab_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___inventoryContent_7;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_3);
		InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* L_4;
		L_4 = GameObject_GetComponent_TisInventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF_m7D374931E1CF107DE66703353873162EEC286051(L_3, GameObject_GetComponent_TisInventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF_m7D374931E1CF107DE66703353873162EEC286051_RuntimeMethod_var);
		V_0 = L_4;
		// d.SetDisplayedItem(item);
		InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* L_5 = V_0;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_6 = ___item0;
		NullCheck(L_5);
		InventoryItemDisplay_SetDisplayedItem_mA4DA3D1819D090AE52AAE2FCCDE00DA62C8E657F_inline(L_5, L_6, NULL);
		// d.UpdateUI();
		InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* L_7 = V_0;
		NullCheck(L_7);
		InventoryItemDisplay_UpdateUI_m27D63F678E7B9C260F0A628A5144503BA91A3BA4(L_7, NULL);
		// currentDisplays.Add(d);
		List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* L_8 = __this->___currentDisplays_9;
		InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_m024BF4F8798C600627FEF8A95B896904198DE2A3_inline(L_8, L_9, List_1_Add_m024BF4F8798C600627FEF8A95B896904198DE2A3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::OnItemEquipped(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_OnItemEquipped_mE037F23392623CE399326B89EBCFEBD83DAD1A36 (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___equippedItem0, const RuntimeMethod* method) 
{
	{
		// if (!inventoryUI.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___inventoryUI_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!inventoryUI.activeInHierarchy) return;
		return;
	}

IL_000e:
	{
		// GenerateInventoryUI();
		InventoryController_GenerateInventoryUI_m6F75F1C48656F490DC6CACB83E14192ECE4A7DAA(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::OnItemPurchased(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_OnItemPurchased_mBC4C584EAD8C4AE7618599015A7C8061CD99F9DA (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___purchasedItem0, const RuntimeMethod* method) 
{
	{
		// if (!inventoryUI.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___inventoryUI_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!inventoryUI.activeInHierarchy) return;
		return;
	}

IL_000e:
	{
		// GenerateInventoryUI();
		InventoryController_GenerateInventoryUI_m6F75F1C48656F490DC6CACB83E14192ECE4A7DAA(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::OnItemSold(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController_OnItemSold_m281012473DDE8DB726214C516796B2E5702BA3AB (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemSold0, const RuntimeMethod* method) 
{
	{
		// if (!inventoryUI.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___inventoryUI_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!inventoryUI.activeInHierarchy) return;
		return;
	}

IL_000e:
	{
		// GenerateInventoryUI();
		InventoryController_GenerateInventoryUI_m6F75F1C48656F490DC6CACB83E14192ECE4A7DAA(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryController__ctor_mEB020B04168A7780C8358C8EC9C065FE4C0E1836 (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB4EC08575F2319542949488A97A5C71A0F3B9226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<InventoryItemDisplay> currentDisplays = new List<InventoryItemDisplay>();
		List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11* L_0 = (List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11*)il2cpp_codegen_object_new(List_1_t2C5716952A808637D5F9E32B51862CEB27B49A11_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB4EC08575F2319542949488A97A5C71A0F3B9226(L_0, List_1__ctor_mB4EC08575F2319542949488A97A5C71A0F3B9226_RuntimeMethod_var);
		__this->___currentDisplays_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentDisplays_9), (void*)L_0);
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
// System.Void ClothesShopSim.InventoryItemDisplay::SetDisplayedItem(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItemDisplay_SetDisplayedItem_mA4DA3D1819D090AE52AAE2FCCDE00DA62C8E657F (InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___displayedItem0, const RuntimeMethod* method) 
{
	{
		// this.displayedItem = displayedItem;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_0 = ___displayedItem0;
		__this->___displayedItem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayedItem_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryItemDisplay::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItemDisplay_UpdateUI_m27D63F678E7B9C260F0A628A5144503BA91A3BA4 (InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17392F0AD497B77D680C82936B7BA35FB660453E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// iconDisplay.sprite = displayedItem.ItemSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___iconDisplay_8;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_1 = __this->___displayedItem_4;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2;
		L_2 = ItemInfo_get_ItemSprite_m564CCDE2163CE8C850B3D374BB50D0ACAD85D2C6_inline(L_1, NULL);
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_2, NULL);
		// valueDisplay.text = $"${displayedItem.SellPrice}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___valueDisplay_6;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_4 = __this->___displayedItem_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ItemInfo_get_SellPrice_mF111FBE59C2C8030C2078B3FA30F626F062ED25F_inline(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral17392F0AD497B77D680C82936B7BA35FB660453E, L_7, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_8);
		// countDisplay.text = displayedItem.QuantityPurchased.ToString("F0");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___countDisplay_7;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_10 = __this->___displayedItem_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ItemInfo_get_QuantityPurchased_m14C72A0E70838141F4A180CD97FC58A27C2B8EC8_inline(L_10, NULL);
		V_0 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_12);
		// equippedOverlay.SetActive(displayedItem.Equipped);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___equippedOverlay_9;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_14 = __this->___displayedItem_4;
		NullCheck(L_14);
		bool L_15;
		L_15 = ItemInfo_get_Equipped_m82CC6C28EB5D096F0CBA042238166ACF8FADEED2_inline(L_14, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, L_15, NULL);
		// btn.interactable = !displayedItem.Equipped;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___btn_10;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_17 = __this->___displayedItem_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = ItemInfo_get_Equipped_m82CC6C28EB5D096F0CBA042238166ACF8FADEED2_inline(L_17, NULL);
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryItemDisplay::SelectItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItemDisplay_SelectItem_m52F5C11DD6135057EF24B7EABB39C58C25CD45AD (InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* __this, const RuntimeMethod* method) 
{
	{
		// selectedItemInfoHolder.ItemInfo = displayedItem;
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_0 = __this->___selectedItemInfoHolder_5;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_1 = __this->___displayedItem_4;
		NullCheck(L_0);
		ItemInfoHolder_set_ItemInfo_m0D73F7509B2E6BB25460B98E37A638C28C8AC7D5_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.InventoryItemDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItemDisplay__ctor_m8624EA6A090895CBBE714D5CBEC59F9256D7EB6E (InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m15680132B314DBEFC2DA8C73C78EE322DFFEA2E1 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE04BE753EAC6C5B41C17B30861DDD5FEB32F952);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool animationSetsValid = ValidateAnimationSets();
		bool L_0;
		L_0 = Player_ValidateAnimationSets_mA9AD5A52C5518700C28994F73338A0941EE24D74(__this, NULL);
		// if (!animationSetsValid)
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogError("AnimationSet missing from Array");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralCE04BE753EAC6C5B41C17B30861DDD5FEB32F952, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mCEE9BEE65DDAA5CBAA4983104B207FEC34863010 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) 
{
	{
		// Equip();
		Player_Equip_mEE01AADF7E3D11F1A1FBB7672AE216E352610CC5(__this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_m471D7A0883AFCC1F505EA45BEC5CA32785FEB8F0 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)119), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)273), NULL);
		if (!L_1)
		{
			goto IL_0092;
		}
	}

IL_0015:
	{
		// rb.MovePosition(new Vector2(rb.position.x, rb.position.y + (speed * Time.fixedDeltaTime)));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_4;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_3, NULL);
		float L_5 = L_4.___x_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rb_4;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_6, NULL);
		float L_8 = L_7.___y_1;
		float L_9 = __this->___speed_8;
		float L_10;
		L_10 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_5, ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)))), /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_2, L_11, NULL);
		// movingForward = true;
		__this->___movingForward_22 = (bool)1;
		// movingBack = false;
		__this->___movingBack_23 = (bool)0;
		// movingLeft = false;
		__this->___movingLeft_24 = (bool)0;
		// movingRight = false;
		__this->___movingRight_25 = (bool)0;
		// if (!hitObstacleForward)
		bool L_12 = __this->___hitObstacleForward_19;
		if (L_12)
		{
			goto IL_008a;
		}
	}
	{
		// if (activeAnimation != ActiveAnimation.WalkForward)
		int32_t L_13 = __this->___activeAnimation_18;
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.WalkForward);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 3, NULL);
		return;
	}

IL_008a:
	{
		// ActivateAnimation(ActiveAnimation.IdleForward);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 7, NULL);
		return;
	}

IL_0092:
	{
		// else if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
		bool L_14;
		L_14 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)115), NULL);
		if (L_14)
		{
			goto IL_00a7;
		}
	}
	{
		bool L_15;
		L_15 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)274), NULL);
		if (!L_15)
		{
			goto IL_0124;
		}
	}

IL_00a7:
	{
		// rb.MovePosition(new Vector2(rb.position.x, rb.position.y - (speed * Time.fixedDeltaTime)));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_16 = __this->___rb_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_17 = __this->___rb_4;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_17, NULL);
		float L_19 = L_18.___x_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20 = __this->___rb_4;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_20, NULL);
		float L_22 = L_21.___y_1;
		float L_23 = __this->___speed_8;
		float L_24;
		L_24 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), L_19, ((float)il2cpp_codegen_subtract(L_22, ((float)il2cpp_codegen_multiply(L_23, L_24)))), /*hidden argument*/NULL);
		NullCheck(L_16);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_16, L_25, NULL);
		// movingForward = false;
		__this->___movingForward_22 = (bool)0;
		// movingBack = true;
		__this->___movingBack_23 = (bool)1;
		// movingLeft = false;
		__this->___movingLeft_24 = (bool)0;
		// movingRight = false;
		__this->___movingRight_25 = (bool)0;
		// if (!hitObstacleBack)
		bool L_26 = __this->___hitObstacleBack_20;
		if (L_26)
		{
			goto IL_011c;
		}
	}
	{
		// if (activeAnimation != ActiveAnimation.WalkBack)
		int32_t L_27 = __this->___activeAnimation_18;
		if ((((int32_t)L_27) == ((int32_t)4)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.WalkBack);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 4, NULL);
		return;
	}

IL_011c:
	{
		// ActivateAnimation(ActiveAnimation.IdleBack);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 8, NULL);
		return;
	}

IL_0124:
	{
		// else if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
		bool L_28;
		L_28 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (L_28)
		{
			goto IL_0139;
		}
	}
	{
		bool L_29;
		L_29 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)276), NULL);
		if (!L_29)
		{
			goto IL_01b6;
		}
	}

IL_0139:
	{
		// rb.MovePosition(new Vector2(rb.position.x - (speed * Time.fixedDeltaTime), rb.position.y));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_30 = __this->___rb_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_31 = __this->___rb_4;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_31, NULL);
		float L_33 = L_32.___x_0;
		float L_34 = __this->___speed_8;
		float L_35;
		L_35 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_36 = __this->___rb_4;
		NullCheck(L_36);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_36, NULL);
		float L_38 = L_37.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), ((float)il2cpp_codegen_subtract(L_33, ((float)il2cpp_codegen_multiply(L_34, L_35)))), L_38, /*hidden argument*/NULL);
		NullCheck(L_30);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_30, L_39, NULL);
		// movingForward = false;
		__this->___movingForward_22 = (bool)0;
		// movingBack = false;
		__this->___movingBack_23 = (bool)0;
		// movingLeft = true;
		__this->___movingLeft_24 = (bool)1;
		// movingRight = false;
		__this->___movingRight_25 = (bool)0;
		// if (!hitObstacleLeft)
		bool L_40 = __this->___hitObstacleLeft_21;
		if (L_40)
		{
			goto IL_01ae;
		}
	}
	{
		// if (activeAnimation != ActiveAnimation.WalkLeft)
		int32_t L_41 = __this->___activeAnimation_18;
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.WalkLeft);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 2, NULL);
		return;
	}

IL_01ae:
	{
		// ActivateAnimation(ActiveAnimation.IdleLeft);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 6, NULL);
		return;
	}

IL_01b6:
	{
		// else if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
		bool L_42;
		L_42 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (L_42)
		{
			goto IL_01cb;
		}
	}
	{
		bool L_43;
		L_43 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)275), NULL);
		if (!L_43)
		{
			goto IL_0245;
		}
	}

IL_01cb:
	{
		// rb.MovePosition(new Vector2(rb.position.x + (speed * Time.fixedDeltaTime), rb.position.y));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_44 = __this->___rb_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_45 = __this->___rb_4;
		NullCheck(L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_45, NULL);
		float L_47 = L_46.___x_0;
		float L_48 = __this->___speed_8;
		float L_49;
		L_49 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_50 = __this->___rb_4;
		NullCheck(L_50);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_50, NULL);
		float L_52 = L_51.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), ((float)il2cpp_codegen_add(L_47, ((float)il2cpp_codegen_multiply(L_48, L_49)))), L_52, /*hidden argument*/NULL);
		NullCheck(L_44);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_44, L_53, NULL);
		// movingForward = false;
		__this->___movingForward_22 = (bool)0;
		// movingBack = false;
		__this->___movingBack_23 = (bool)0;
		// movingLeft = false;
		__this->___movingLeft_24 = (bool)0;
		// movingRight = true;
		__this->___movingRight_25 = (bool)1;
		// if (!hitObstacleForward)
		bool L_54 = __this->___hitObstacleForward_19;
		if (L_54)
		{
			goto IL_023d;
		}
	}
	{
		// if (activeAnimation!= ActiveAnimation.WalkRight)
		int32_t L_55 = __this->___activeAnimation_18;
		if ((((int32_t)L_55) == ((int32_t)1)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.WalkRight);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 1, NULL);
		return;
	}

IL_023d:
	{
		// ActivateAnimation(ActiveAnimation.IdleRight);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 5, NULL);
		return;
	}

IL_0245:
	{
		// if (movingForward)
		bool L_56 = __this->___movingForward_22;
		if (!L_56)
		{
			goto IL_025e;
		}
	}
	{
		// if (activeAnimation != ActiveAnimation.IdleForward)
		int32_t L_57 = __this->___activeAnimation_18;
		if ((((int32_t)L_57) == ((int32_t)7)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.IdleForward);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 7, NULL);
		return;
	}

IL_025e:
	{
		// else if (movingBack)
		bool L_58 = __this->___movingBack_23;
		if (!L_58)
		{
			goto IL_0277;
		}
	}
	{
		// if (activeAnimation != ActiveAnimation.IdleBack)
		int32_t L_59 = __this->___activeAnimation_18;
		if ((((int32_t)L_59) == ((int32_t)8)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.IdleBack);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 8, NULL);
		return;
	}

IL_0277:
	{
		// else if (movingLeft)
		bool L_60 = __this->___movingLeft_24;
		if (!L_60)
		{
			goto IL_0290;
		}
	}
	{
		// if (activeAnimation != ActiveAnimation.IdleLeft)
		int32_t L_61 = __this->___activeAnimation_18;
		if ((((int32_t)L_61) == ((int32_t)6)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.IdleLeft);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 6, NULL);
		return;
	}

IL_0290:
	{
		// else if (movingRight)
		bool L_62 = __this->___movingRight_25;
		if (!L_62)
		{
			goto IL_02a8;
		}
	}
	{
		// if (activeAnimation != ActiveAnimation.IdleRight)
		int32_t L_63 = __this->___activeAnimation_18;
		if ((((int32_t)L_63) == ((int32_t)5)))
		{
			goto IL_02a8;
		}
	}
	{
		// ActivateAnimation(ActiveAnimation.IdleRight);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 5, NULL);
	}

IL_02a8:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Player::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionEnter2D_m0690B42734DE54E424407E0AEDA6E2F4EA6AA1E8 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collision.GetContact(0).normal.y < 0)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_1;
		L_1 = Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95(L_0, 0, NULL);
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_0), NULL);
		float L_3 = L_2.___y_1;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// hitObstacleForward = true;
		__this->___hitObstacleForward_19 = (bool)1;
		// hitObstacleBack = false;
		__this->___hitObstacleBack_20 = (bool)0;
		// hitObstacleLeft = false;
		__this->___hitObstacleLeft_21 = (bool)0;
		return;
	}

IL_0031:
	{
		// else if (collision.GetContact(0).normal.y > 0)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		NullCheck(L_4);
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_5;
		L_5 = Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95(L_4, 0, NULL);
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_0), NULL);
		float L_7 = L_6.___y_1;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		// hitObstacleForward = false;
		__this->___hitObstacleForward_19 = (bool)0;
		// hitObstacleBack = true;
		__this->___hitObstacleBack_20 = (bool)1;
		// hitObstacleLeft = false;
		__this->___hitObstacleLeft_21 = (bool)0;
		return;
	}

IL_0062:
	{
		// else if (collision.GetContact(0).normal.x > 0)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_8 = ___collision0;
		NullCheck(L_8);
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_9;
		L_9 = Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95(L_8, 0, NULL);
		V_0 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_0), NULL);
		float L_11 = L_10.___x_0;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0093;
		}
	}
	{
		// hitObstacleForward = false;
		__this->___hitObstacleForward_19 = (bool)0;
		// hitObstacleBack = false;
		__this->___hitObstacleBack_20 = (bool)0;
		// hitObstacleLeft = true;
		__this->___hitObstacleLeft_21 = (bool)1;
		return;
	}

IL_0093:
	{
		// else if (collision.GetContact(0).normal.x < 0)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_12 = ___collision0;
		NullCheck(L_12);
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_13;
		L_13 = Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95(L_12, 0, NULL);
		V_0 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_0), NULL);
		float L_15 = L_14.___x_0;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00c3;
		}
	}
	{
		// hitObstacleForward = false;
		__this->___hitObstacleForward_19 = (bool)0;
		// hitObstacleBack = false;
		__this->___hitObstacleBack_20 = (bool)0;
		// hitObstacleLeft = false;
		__this->___hitObstacleLeft_21 = (bool)0;
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Player::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionExit2D_mDAF904DF8E168B7AB5BD613BE0C704DDD7A1900F (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	{
		// hitObstacleForward = false;
		__this->___hitObstacleForward_19 = (bool)0;
		// hitObstacleBack = false;
		__this->___hitObstacleBack_20 = (bool)0;
		// hitObstacleLeft = false;
		__this->___hitObstacleLeft_21 = (bool)0;
		// }
		return;
	}
}
// System.Void ClothesShopSim.Player::Equip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Equip_mEE01AADF7E3D11F1A1FBB7672AE216E352610CC5 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) 
{
	AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < animationSets.Length; i++)
		V_1 = 0;
		goto IL_008a;
	}

IL_0007:
	{
		// currentAnimationSet = animationSets[i];
		AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C* L_0 = __this->___animationSets_7;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (currentAnimationSet.OutfitID == currentOutfitId.Value)
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationSet_get_OutfitID_mCCC6717E48D139169FADACA8295877DA41C33F99_inline(L_4, NULL);
		OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* L_6 = __this->___currentOutfitId_6;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Value_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0086;
		}
	}
	{
		// previousAnimationSet = activeAnimationSet;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_8 = __this->___activeAnimationSet_16;
		__this->___previousAnimationSet_17 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousAnimationSet_17), (void*)L_8);
		// activeAnimationSet = currentAnimationSet;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_9 = V_0;
		__this->___activeAnimationSet_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeAnimationSet_16), (void*)L_9);
		// currentWalkRightAnimGameObject = currentAnimationSet.WalkRightAnimGameObject;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_10 = V_0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = AnimationSet_get_WalkRightAnimGameObject_m5CD11DB64AAA4E288673A613970CF6FB6D295306_inline(L_10, NULL);
		__this->___currentWalkRightAnimGameObject_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWalkRightAnimGameObject_10), (void*)L_11);
		// currentWalkForwardAnimGameObject = currentAnimationSet.WalkForwardAnimGameObject;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_12 = V_0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = AnimationSet_get_WalkForwardAnimGameObject_mD027946170FE6A9D9525DF80206828D2306C78E9_inline(L_12, NULL);
		__this->___currentWalkForwardAnimGameObject_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWalkForwardAnimGameObject_11), (void*)L_13);
		// currentWalkBackAnimGameObject = currentAnimationSet.WalkBackAnimGameObject;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_14 = V_0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = AnimationSet_get_WalkBackAnimGameObject_m92A5AB46EAB8774B75495A8A370846BDE248D563_inline(L_14, NULL);
		__this->___currentWalkBackAnimGameObject_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWalkBackAnimGameObject_12), (void*)L_15);
		// currentIdleRightAnimGameObject = currentAnimationSet.IdleRightAnimGameObject;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_16 = V_0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = AnimationSet_get_IdleRightAnimGameObject_mE429E8AF2591A27587D118523669EB04FFB39A45_inline(L_16, NULL);
		__this->___currentIdleRightAnimGameObject_13 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentIdleRightAnimGameObject_13), (void*)L_17);
		// currentIdleForwardAnimGameObject = currentAnimationSet.IdleForwardAnimGameObject;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_18 = V_0;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = AnimationSet_get_IdleForwardAnimGameObject_m2EB6144EB0194E574BBAEDF9194D4E2561D3A58F_inline(L_18, NULL);
		__this->___currentIdleForwardAnimGameObject_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentIdleForwardAnimGameObject_14), (void*)L_19);
		// currentIdleBackAnimGameObject = currentAnimationSet.IdleBackAnimGameObject;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_20 = V_0;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = AnimationSet_get_IdleBackAnimGameObject_m23391E94765F76887DDE0AA370F883D2360D3F74_inline(L_20, NULL);
		__this->___currentIdleBackAnimGameObject_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentIdleBackAnimGameObject_15), (void*)L_21);
		// ActivateAnimation(ActiveAnimation.IdleBack);
		Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25(__this, 8, NULL);
		// break;
		return;
	}

IL_0086:
	{
		// for (int i = 0; i < animationSets.Length; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_008a:
	{
		// for (int i = 0; i < animationSets.Length; i++)
		int32_t L_23 = V_1;
		AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C* L_24 = __this->___animationSets_7;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Player::EquipSucceeded(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_EquipSucceeded_mCBB9BFCB06C8A5596221B62F6984D4C65ECDEF20 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D95362BBDAF2CD44C69883430D7B62C3B82DE8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool found = false;
		V_0 = (bool)0;
		// for (int i = 0; i < playerInventory.Inventory.Count; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_0006:
	{
		// if (playerInventory.Inventory[i].OutfitID == itemInfo.OutfitID)
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_0 = __this->___playerInventory_5;
		NullCheck(L_0);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_1;
		L_1 = PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline(L_0, NULL);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_3;
		L_3 = List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188(L_1, L_2, List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_3, NULL);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_5 = ___itemInfo0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_003d;
		}
	}
	{
		// currentOutfitId.Value = itemInfo.OutfitID;
		OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* L_7 = __this->___currentOutfitId_6;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_8 = ___itemInfo0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_8, NULL);
		NullCheck(L_7);
		L_7->___Value_4 = L_9;
		// Equip();
		Player_Equip_mEE01AADF7E3D11F1A1FBB7672AE216E352610CC5(__this, NULL);
		// found = true;
		V_0 = (bool)1;
	}

IL_003d:
	{
		// for (int i = 0; i < playerInventory.Inventory.Count; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < playerInventory.Inventory.Count; i++)
		int32_t L_11 = V_1;
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_12 = __this->___playerInventory_5;
		NullCheck(L_12);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_13;
		L_13 = PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline(L_12, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_inline(L_13, List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_14)))
		{
			goto IL_0006;
		}
	}
	{
		// if (!found)
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogError("Equip of item succeeded without having in the inventory?");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral52D95362BBDAF2CD44C69883430D7B62C3B82DE8, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Player::ActivateAnimation(ClothesShopSim.Player/ActiveAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ActivateAnimation_m83CDC84558EE887E247F6424C7FB8CF645367B25 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, int32_t ___activeAnimation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (previousAnimationSet != null)
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_0 = __this->___previousAnimationSet_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// foreach (Transform childTransform in previousAnimationSet.transform)
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_2 = __this->___previousAnimationSet_17;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_1;
					if (!L_6)
					{
						goto IL_0051;
					}
				}
				{
					RuntimeObject* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_0021_1:
			{
				// foreach (Transform childTransform in previousAnimationSet.transform)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				// childTransform.gameObject.SetActive(false);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
			}

IL_0037_1:
			{
				// foreach (Transform childTransform in previousAnimationSet.transform)
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		int32_t L_13 = ___activeAnimation0;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0081;
			}
			case 1:
			{
				goto IL_00d1;
			}
			case 2:
			{
				goto IL_0142;
			}
			case 3:
			{
				goto IL_01b3;
			}
			case 4:
			{
				goto IL_0200;
			}
			case 5:
			{
				goto IL_024d;
			}
			case 6:
			{
				goto IL_02be;
			}
			case 7:
			{
				goto IL_032f;
			}
			case 8:
			{
				goto IL_0379;
			}
		}
	}
	{
		goto IL_03c1;
	}

IL_0081:
	{
		// currentWalkRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// activeAnimation = ActiveAnimation.IdleBack;
		___activeAnimation0 = 8;
		// break;
		goto IL_03c1;
	}

IL_00d1:
	{
		// currentWalkRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_21, L_22, NULL);
		// currentWalkRightAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// break;
		goto IL_03c1;
	}

IL_0142:
	{
		// currentWalkRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 180f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_30, L_31, NULL);
		// currentWalkRightAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// break;
		goto IL_03c1;
	}

IL_01b3:
	{
		// currentWalkRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// currentWalkForwardAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// break;
		goto IL_03c1;
	}

IL_0200:
	{
		// currentWalkRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_44);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)0, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// currentIdleRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// break;
		goto IL_03c1;
	}

IL_024d:
	{
		// currentIdleRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_51, L_52, NULL);
		// currentWalkRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)0, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)1, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)0, NULL);
		// break;
		goto IL_03c1;
	}

IL_02be:
	{
		// currentIdleRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 180f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_60, L_61, NULL);
		// currentWalkRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_65);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_65, (bool)1, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_66);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_67);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_67, (bool)0, NULL);
		// break;
		goto IL_03c1;
	}

IL_032f:
	{
		// currentWalkRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_68);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_68, (bool)0, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_69);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_69, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_70);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_70, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)0, NULL);
		// currentIdleForwardAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_72);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_72, (bool)1, NULL);
		// currentIdleBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_73);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_73, (bool)0, NULL);
		// break;
		goto IL_03c1;
	}

IL_0379:
	{
		// currentWalkRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = __this->___currentWalkRightAnimGameObject_10;
		NullCheck(L_74);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_74, (bool)0, NULL);
		// currentWalkForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___currentWalkForwardAnimGameObject_11;
		NullCheck(L_75);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_75, (bool)0, NULL);
		// currentWalkBackAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___currentWalkBackAnimGameObject_12;
		NullCheck(L_76);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_76, (bool)0, NULL);
		// currentIdleRightAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___currentIdleRightAnimGameObject_13;
		NullCheck(L_77);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_77, (bool)0, NULL);
		// currentIdleForwardAnimGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___currentIdleForwardAnimGameObject_14;
		NullCheck(L_78);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_78, (bool)0, NULL);
		// currentIdleBackAnimGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = __this->___currentIdleBackAnimGameObject_15;
		NullCheck(L_79);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_79, (bool)1, NULL);
	}

IL_03c1:
	{
		// this.activeAnimation = activeAnimation;
		int32_t L_80 = ___activeAnimation0;
		__this->___activeAnimation_18 = L_80;
		// }
		return;
	}
}
// System.Boolean ClothesShopSim.Player::ValidateAnimationSets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_ValidateAnimationSets_mA9AD5A52C5518700C28994F73338A0941EE24D74 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < animationSets.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// if (animationSets[i] == null)
		AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C* L_0 = __this->___animationSets_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// for (int i = 0; i < animationSets.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < animationSets.Length; i++)
		int32_t L_6 = V_0;
		AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C* L_7 = __this->___animationSets_7;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void ClothesShopSim.Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m1C5A936A5C2ED1443D96147D6824B37ED366FF36 (Player_t95480B4C431450EE5CC638C6855F3FD08AF36026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private AnimationSet[] animationSets = new AnimationSet[9];
		AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C* L_0 = (AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C*)(AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C*)SZArrayNew(AnimationSetU5BU5D_tBA7D464FB7B594D4286D6EC52131C9C584D3CB5C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->___animationSets_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationSets_7), (void*)L_0);
		// [SerializeField] private float speed = 5f;
		__this->___speed_8 = (5.0f);
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
// System.Void ClothesShopSim.PlayerInventory::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInventory_Awake_mAFB91F5EE50A333AAB43A3ACC39693D30AF0D79F (PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* __this, const RuntimeMethod* method) 
{
	{
		// playerCash.Value = startingCash;
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_0 = __this->___playerCash_5;
		int32_t L_1 = __this->___startingCash_4;
		NullCheck(L_0);
		L_0->___Value_4 = L_1;
		// cashDisplay.text = playerCash.Value.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___cashDisplay_6;
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_3 = __this->___playerCash_5;
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___Value_4);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<ClothesShopSim.ItemInfo> ClothesShopSim.PlayerInventory::get_Inventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4 (PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* __this, const RuntimeMethod* method) 
{
	{
		// get { return inventory; }
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_0 = __this->___inventory_9;
		return L_0;
	}
}
// System.Void ClothesShopSim.PlayerInventory::PurchasedSucceeded(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInventory_PurchasedSucceeded_m8E431EA4014210968BCE721B850DDE895216BC70 (PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE308B9B2D8AED0E12CFC56FABAE138E8AA2BC577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// playerCash.ApplyChange(-itemInfo.BuyPrice);
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_0 = __this->___playerCash_5;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_1 = ___itemInfo0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ItemInfo_get_BuyPrice_m11795B99EE5E5AA75D328CB7F3176CBF4289B017_inline(L_1, NULL);
		NullCheck(L_0);
		IntVariable_ApplyChange_mE335BEBB257DA8A240F0D6A9D97C6F600D0DA14C(L_0, ((-L_2)), NULL);
		// cashDisplay.text = playerCash.Value.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___cashDisplay_6;
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_4 = __this->___playerCash_5;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___Value_4);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// itemInfo.QuantityPurchased++;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_7 = ___itemInfo0;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ItemInfo_get_QuantityPurchased_m14C72A0E70838141F4A180CD97FC58A27C2B8EC8_inline(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		ItemInfo_set_QuantityPurchased_m2506DE8D91D17CEBE7E572FAC5977572FF7E6E8C_inline(L_8, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		// if (!inventory.Contains(itemInfo))
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_11 = __this->___inventory_9;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_12 = ___itemInfo0;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98(L_11, L_12, List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		// inventory.Add(itemInfo);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_14 = __this->___inventory_9;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_15 = ___itemInfo0;
		NullCheck(L_14);
		List_1_Add_mE308B9B2D8AED0E12CFC56FABAE138E8AA2BC577_inline(L_14, L_15, List_1_Add_mE308B9B2D8AED0E12CFC56FABAE138E8AA2BC577_RuntimeMethod_var);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.PlayerInventory::SaleSucceeded(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInventory_SaleSucceeded_m97A979FAD4A34043A4C51C8C34512D503B6C28FD (PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m08275F792C69425DAD2F56508E21E8C0AB9D3A10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8474D8A136B7A6AE1CA94D4857D4D4DCB21EFD8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// playerCash.ApplyChange(itemInfo.SellPrice);
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_0 = __this->___playerCash_5;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_1 = ___itemInfo0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ItemInfo_get_SellPrice_mF111FBE59C2C8030C2078B3FA30F626F062ED25F_inline(L_1, NULL);
		NullCheck(L_0);
		IntVariable_ApplyChange_mE335BEBB257DA8A240F0D6A9D97C6F600D0DA14C(L_0, L_2, NULL);
		// cashDisplay.text = playerCash.Value.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___cashDisplay_6;
		IntVariable_t413C655A2CF03690824FDC98F825EC38A09A341C* L_4 = __this->___playerCash_5;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___Value_4);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// bool found = false;
		V_0 = (bool)0;
		// for (int i = 0; i < inventory.Count; i++)
		V_1 = 0;
		goto IL_007b;
	}

IL_0032:
	{
		// if (inventory[i].OutfitID == itemInfo.OutfitID)
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_7 = __this->___inventory_9;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_9;
		L_9 = List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188(L_7, L_8, List_1_get_Item_mA6C2FF72190893A84649D8B4A8BE1FD4D6972188_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_9, NULL);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_11 = ___itemInfo0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_11, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0077;
		}
	}
	{
		// if (itemInfo.QuantityPurchased > 1)
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_13 = ___itemInfo0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ItemInfo_get_QuantityPurchased_m14C72A0E70838141F4A180CD97FC58A27C2B8EC8_inline(L_13, NULL);
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		// itemInfo.QuantityPurchased--;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_15 = ___itemInfo0;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = ItemInfo_get_QuantityPurchased_m14C72A0E70838141F4A180CD97FC58A27C2B8EC8_inline(L_16, NULL);
		V_2 = L_17;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		ItemInfo_set_QuantityPurchased_m2506DE8D91D17CEBE7E572FAC5977572FF7E6E8C_inline(L_16, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), NULL);
		goto IL_0073;
	}

IL_0066:
	{
		// inventory.Remove(itemInfo);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_19 = __this->___inventory_9;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_20 = ___itemInfo0;
		NullCheck(L_19);
		bool L_21;
		L_21 = List_1_Remove_m08275F792C69425DAD2F56508E21E8C0AB9D3A10(L_19, L_20, List_1_Remove_m08275F792C69425DAD2F56508E21E8C0AB9D3A10_RuntimeMethod_var);
	}

IL_0073:
	{
		// found = true;
		V_0 = (bool)1;
		// break;
		goto IL_0089;
	}

IL_0077:
	{
		// for (int i = 0; i < inventory.Count; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007b:
	{
		// for (int i = 0; i < inventory.Count; i++)
		int32_t L_23 = V_1;
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_24 = __this->___inventory_9;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_inline(L_24, List_1_get_Count_m67914AE34E3593AD39BDD6A316A92438F395C7E3_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0032;
		}
	}

IL_0089:
	{
		// if (!found)
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_0096;
		}
	}
	{
		// Debug.LogError("Sale of item succeeded without having in the inventory?");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC8474D8A136B7A6AE1CA94D4857D4D4DCB21EFD8, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.PlayerInventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInventory__ctor_m03C93CC3530BA61CD5B0368269E0AB2C3A3DB91A (PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E1B129BD009F1E03894A8E6372CD83ACBCAA017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int startingCash = 10000;
		__this->___startingCash_4 = ((int32_t)10000);
		// private List<ItemInfo> inventory = new List<ItemInfo>();
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_0 = (List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046*)il2cpp_codegen_object_new(List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2E1B129BD009F1E03894A8E6372CD83ACBCAA017(L_0, List_1__ctor_m2E1B129BD009F1E03894A8E6372CD83ACBCAA017_RuntimeMethod_var);
		__this->___inventory_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inventory_9), (void*)L_0);
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
// System.Void ClothesShopSim.GameEventItemInfo::Raise(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventItemInfo_Raise_mEB221B588E7441A23BB1F4F881BA43A41592C8E7 (GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCA428BE0C25023D8B4DEB6A370F584844648AED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD9C951DF1B4F300CBC8FE07187808D8C1B23775A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* L_0 = __this->___eventListeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mCA428BE0C25023D8B4DEB6A370F584844648AED3_inline(L_0, List_1_get_Count_mCA428BE0C25023D8B4DEB6A370F584844648AED3_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0026;
	}

IL_0010:
	{
		// eventListeners[i].OnEventRaised(itemInfo);
		List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* L_2 = __this->___eventListeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* L_4;
		L_4 = List_1_get_Item_mD9C951DF1B4F300CBC8FE07187808D8C1B23775A(L_2, L_3, List_1_get_Item_mD9C951DF1B4F300CBC8FE07187808D8C1B23775A_RuntimeMethod_var);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_5 = ___itemInfo0;
		NullCheck(L_4);
		GameEventListenerItemInfo_OnEventRaised_m10145BEA72586A8667189E0A77B609EA7C9A8B23(L_4, L_5, NULL);
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0026:
	{
		// for (int i = eventListeners.Count - 1; i >= 0; i--)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.GameEventItemInfo::RegisterListener(ClothesShopSim.GameEventListenerItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventItemInfo_RegisterListener_m2AB1A4B004D429BD3ADF45C530366D3BAD240B64 (GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m99FE132FA7C55B8D96E2087F957C174836BADF4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!eventListeners.Contains(listener))
		List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* L_0 = __this->___eventListeners_4;
		GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20(L_0, L_1, List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// eventListeners.Add(listener);
		List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* L_3 = __this->___eventListeners_4;
		GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* L_4 = ___listener0;
		NullCheck(L_3);
		List_1_Add_m99FE132FA7C55B8D96E2087F957C174836BADF4B_inline(L_3, L_4, List_1_Add_m99FE132FA7C55B8D96E2087F957C174836BADF4B_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.GameEventItemInfo::UnregisterListener(ClothesShopSim.GameEventListenerItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventItemInfo_UnregisterListener_m14E15360FADCE8B38036E225F68449684CC0063A (GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mACD96CDDEEBE2C2AC0CFFEB145309B601BCF1670_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventListeners.Contains(listener))
		List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* L_0 = __this->___eventListeners_4;
		GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20(L_0, L_1, List_1_Contains_m13F7143BD3168868A0BCBC417C1817B4A98AAE20_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// eventListeners.Remove(listener);
		List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* L_3 = __this->___eventListeners_4;
		GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* L_4 = ___listener0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mACD96CDDEEBE2C2AC0CFFEB145309B601BCF1670(L_3, L_4, List_1_Remove_mACD96CDDEEBE2C2AC0CFFEB145309B601BCF1670_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.GameEventItemInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventItemInfo__ctor_m3208A4759DC9FFA69C20CE3F81A6EB8A9F237CE1 (GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m360F82E933395E29D879FC97D1C742A7A7EDF912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameEventListenerItemInfo> eventListeners = new List<GameEventListenerItemInfo>();
		List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518* L_0 = (List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518*)il2cpp_codegen_object_new(List_1_tA4F8653FFB82DC7DFCDBCF4C3D0C14E1E7464518_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m360F82E933395E29D879FC97D1C742A7A7EDF912(L_0, List_1__ctor_m360F82E933395E29D879FC97D1C742A7A7EDF912_RuntimeMethod_var);
		__this->___eventListeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventListeners_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ClothesShopSim.GameEventListenerItemInfo::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerItemInfo_OnEnable_mB2583F368388AD6B3E377A0BA4E53168CD5F1442 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, const RuntimeMethod* method) 
{
	{
		// Event.RegisterListener(this);
		GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventItemInfo_RegisterListener_m2AB1A4B004D429BD3ADF45C530366D3BAD240B64(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.GameEventListenerItemInfo::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerItemInfo_OnDisable_mA3CEA2C1F9F5936C6AE3768585E4044580BF8979 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, const RuntimeMethod* method) 
{
	{
		// Event.UnregisterListener(this);
		GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* L_0 = __this->___Event_4;
		NullCheck(L_0);
		GameEventItemInfo_UnregisterListener_m14E15360FADCE8B38036E225F68449684CC0063A(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.GameEventListenerItemInfo::OnEventRaised(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerItemInfo_OnEventRaised_m10145BEA72586A8667189E0A77B609EA7C9A8B23 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD0A6A584AF4C78BFF7C6BFA1892AA098483C2CAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Response.Invoke(itemInfo);
		UnityEvent_1_t72C85DC0B1ACDC72F912E095DB0C63B9445FBFF7* L_0 = __this->___Response_5;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_1 = ___itemInfo0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mD0A6A584AF4C78BFF7C6BFA1892AA098483C2CAA(L_0, L_1, UnityEvent_1_Invoke_mD0A6A584AF4C78BFF7C6BFA1892AA098483C2CAA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean ClothesShopSim.GameEventListenerItemInfo::Equals(ClothesShopSim.GameEventListenerItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerItemInfo_Equals_m810957FBDE8AFFD37B4257FEDA1C58491DE8FE73 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* ___other0, const RuntimeMethod* method) 
{
	{
		// return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
		GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean ClothesShopSim.GameEventListenerItemInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameEventListenerItemInfo_Equals_m328BD2AE8B47D6A8DEB90C895151C8162F9DE149 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) return true;
		RuntimeObject* L_1 = ___obj0;
		if ((!(((RuntimeObject*)(GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != this.GetType()) return false;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (obj.GetType() != this.GetType()) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((GameEventListenerItemInfo) obj);
		RuntimeObject* L_6 = ___obj0;
		bool L_7;
		L_7 = GameEventListenerItemInfo_Equals_m810957FBDE8AFFD37B4257FEDA1C58491DE8FE73(__this, ((GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36*)CastclassClass((RuntimeObject*)L_6, GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Int32 ClothesShopSim.GameEventListenerItemInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameEventListenerItemInfo_GetHashCode_m9F5FAAD295530D3F702853542E5F6D5F56462FD9 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.GetInstanceID().GetHashCode();
		int32_t L_0;
		L_0 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return L_1;
	}
}
// System.Void ClothesShopSim.GameEventListenerItemInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListenerItemInfo__ctor_m459EA9CA450388EFAE23F53D7D336AEA0C7B8CB0 (GameEventListenerItemInfo_tA61F003A33B96C3E2C9CF463449A01C1535EEA36* __this, const RuntimeMethod* method) 
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
// ClothesShopSim.OutfitID ClothesShopSim.ItemInfo::get_OutfitID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return outfitID; }
		int32_t L_0 = __this->___outfitID_4;
		return L_0;
	}
}
// UnityEngine.Sprite ClothesShopSim.ItemInfo::get_ItemSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ItemInfo_get_ItemSprite_m564CCDE2163CE8C850B3D374BB50D0ACAD85D2C6 (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return itemSprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___itemSprite_5;
		return L_0;
	}
}
// System.Int32 ClothesShopSim.ItemInfo::get_BuyPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemInfo_get_BuyPrice_m11795B99EE5E5AA75D328CB7F3176CBF4289B017 (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return buyPrice; }
		int32_t L_0 = __this->___buyPrice_6;
		return L_0;
	}
}
// System.Int32 ClothesShopSim.ItemInfo::get_SellPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemInfo_get_SellPrice_mF111FBE59C2C8030C2078B3FA30F626F062ED25F (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return sellPrice; }
		int32_t L_0 = __this->___sellPrice_7;
		return L_0;
	}
}
// System.Int32 ClothesShopSim.ItemInfo::get_QuantityPurchased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemInfo_get_QuantityPurchased_m14C72A0E70838141F4A180CD97FC58A27C2B8EC8 (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return quantityPurchased; }
		int32_t L_0 = __this->___quantityPurchased_8;
		return L_0;
	}
}
// System.Void ClothesShopSim.ItemInfo::set_QuantityPurchased(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfo_set_QuantityPurchased_m2506DE8D91D17CEBE7E572FAC5977572FF7E6E8C (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { quantityPurchased = value; }
		int32_t L_0 = ___value0;
		__this->___quantityPurchased_8 = L_0;
		// set { quantityPurchased = value; }
		return;
	}
}
// System.Boolean ClothesShopSim.ItemInfo::get_Equipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ItemInfo_get_Equipped_m82CC6C28EB5D096F0CBA042238166ACF8FADEED2 (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return equipped; }
		bool L_0 = __this->___equipped_9;
		return L_0;
	}
}
// System.Void ClothesShopSim.ItemInfo::set_Equipped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfo_set_Equipped_m5CBDEA14375587B277ADD27AAD2D01A079DAF4EF (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { equipped = value; }
		bool L_0 = ___value0;
		__this->___equipped_9 = L_0;
		// set { equipped = value; }
		return;
	}
}
// System.Boolean ClothesShopSim.ItemInfo::Equals(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ItemInfo_Equals_m91545DDC73C317DC0490FDE18CA0B17A4C03686E (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return outfitID == other.OutfitID && itemSprite == other.itemSprite && buyPrice == other.buyPrice &&
		//        sellPrice == other.sellPrice;
		int32_t L_0 = __this->___outfitID_4;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_1, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___itemSprite_5;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_4 = ___other0;
		NullCheck(L_4);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = L_4->___itemSprite_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = __this->___buyPrice_6;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_8 = ___other0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___buyPrice_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_10 = __this->___sellPrice_7;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_11 = ___other0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___sellPrice_7;
		return (bool)((((int32_t)L_10) == ((int32_t)L_12))? 1 : 0);
	}

IL_003e:
	{
		return (bool)0;
	}
}
// System.Void ClothesShopSim.ItemInfo::SetItemInfo(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfo_SetItemInfo_mA081F5AE48B67EAECDAC87171337425BAF237841 (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___itemInfo0, const RuntimeMethod* method) 
{
	{
		// outfitID = itemInfo.outfitID;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_0 = ___itemInfo0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___outfitID_4;
		__this->___outfitID_4 = L_1;
		// itemSprite = itemInfo.itemSprite;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_2 = ___itemInfo0;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___itemSprite_5;
		__this->___itemSprite_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemSprite_5), (void*)L_3);
		// buyPrice = itemInfo.buyPrice;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_4 = ___itemInfo0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___buyPrice_6;
		__this->___buyPrice_6 = L_5;
		// sellPrice = itemInfo.sellPrice;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_6 = ___itemInfo0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___sellPrice_7;
		__this->___sellPrice_7 = L_7;
		// }
		return;
	}
}
// System.Void ClothesShopSim.ItemInfo::ResetItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfo_ResetItem_m02877AE9C05C54C650DD71E1080B7704FBE56B2D (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// quantityPurchased = 0;
		__this->___quantityPurchased_8 = 0;
		// equipped = false;
		__this->___equipped_9 = (bool)0;
		// }
		return;
	}
}
// System.Void ClothesShopSim.ItemInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfo__ctor_mF6278AE4C31296ED6CC24ACD5C5BB88A91C1687B (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// ClothesShopSim.ItemInfo ClothesShopSim.ItemInfoHolder::get_ItemInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB (ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return itemInfo; }
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_0 = __this->___itemInfo_4;
		return L_0;
	}
}
// System.Void ClothesShopSim.ItemInfoHolder::set_ItemInfo(ClothesShopSim.ItemInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfoHolder_set_ItemInfo_m0D73F7509B2E6BB25460B98E37A638C28C8AC7D5 (ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___value0, const RuntimeMethod* method) 
{
	{
		// set { itemInfo = value; }
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_0 = ___value0;
		__this->___itemInfo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemInfo_4), (void*)L_0);
		// set { itemInfo = value; }
		return;
	}
}
// System.Void ClothesShopSim.ItemInfoHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInfoHolder__ctor_m185B9694F3DA49CBAA7D8210D4E141108DA50136 (ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ClothesShopSim.PlayerInventoryItemDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInventoryItemDetails__ctor_mDB342BBD2ED1AB4B5C3FA01494EA1AF70693F2B0 (PlayerInventoryItemDetails_tE331B5B8A9E5B1D7AEBAC02160956D2CD3ABB1C6* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ClothesShopSim.ShopInventoryItemDetails::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopInventoryItemDetails_Start_mDD34D925379A1AB6A908019BFFF31DEB2A97D0DE (ShopInventoryItemDetails_tB748A130407A8B8F13984EC494B6FB534C8B3AAB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.ShopInventoryItemDetails::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopInventoryItemDetails_Update_m1F861ED54F158B4879D0F02A70105107FAC70EDD (ShopInventoryItemDetails_tB748A130407A8B8F13984EC494B6FB534C8B3AAB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.ShopInventoryItemDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopInventoryItemDetails__ctor_m940D54F4E1EE6CF4C906373DA88EDB5789AAC0FC (ShopInventoryItemDetails_tB748A130407A8B8F13984EC494B6FB534C8B3AAB* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.OutfitIDEnumVariable::SetValue(ClothesShopSim.OutfitID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutfitIDEnumVariable_SetValue_mBC6D97F498710A285A525443316F90A146ADC8EC (OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value;
		int32_t L_0 = ___value0;
		__this->___Value_4 = L_0;
		// }
		return;
	}
}
// System.Void ClothesShopSim.OutfitIDEnumVariable::SetValue(ClothesShopSim.OutfitIDEnumVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutfitIDEnumVariable_SetValue_m6A011A6E07D2ECA16E48D27FA380AE4BBA5DC4FB (OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* __this, OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* ___value0, const RuntimeMethod* method) 
{
	{
		// Value = value.Value;
		OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Value_4;
		__this->___Value_4 = L_1;
		// }
		return;
	}
}
// System.Void ClothesShopSim.OutfitIDEnumVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutfitIDEnumVariable__ctor_m51F782541217C6DBACF33012145F6C09CCE38294 (OutfitIDEnumVariable_t91C17AD49AB7467B6EB1C3B7359E29079EE11DAC* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Boolean ClothesShopSim.SellTrigger::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SellTrigger_get_IsActive_mF7FA6464B4A9933BE170A1B66371952698E65190 (SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* __this, const RuntimeMethod* method) 
{
	{
		// get { return isActive; }
		bool L_0 = __this->___isActive_5;
		return L_0;
	}
}
// System.Void ClothesShopSim.SellTrigger::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellTrigger_OnTriggerStay2D_m302049E231399BCA71D5DE338F8C8F07F799CC50 (SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// isActive = true;
		__this->___isActive_5 = (bool)1;
		// }
		return;
	}
}
// System.Void ClothesShopSim.SellTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellTrigger_OnTriggerExit2D_m94C374D37B27D984749EA09F4BE0B516A75FF6F8 (SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// isActive = false;
		__this->___isActive_5 = (bool)0;
		// transactionResult.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___transactionResult_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.SellTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellTrigger__ctor_m84F4CB1D30E827587DA671843BB489D7E4F2E5EB (SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* __this, const RuntimeMethod* method) 
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
// System.Void ClothesShopSim.ShopInventory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopInventory_Start_m3997DD403AD6923FEFCA39C512B8272F3B75FE72 (ShopInventory_tA0EE74857B9D1E279ECC5FFD4049F15801264AF2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.ShopInventory::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopInventory_Update_m93D91E4A7BEA53E1808F00AD84135CB284EF5A6E (ShopInventory_tA0EE74857B9D1E279ECC5FFD4049F15801264AF2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.ShopInventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopInventory__ctor_m33888065A80FF0EB7DA794247B6010ACD10B21DE (ShopInventory_tA0EE74857B9D1E279ECC5FFD4049F15801264AF2* __this, const RuntimeMethod* method) 
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
// System.Boolean ClothesShopSim.Shopkeeper::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shopkeeper_get_IsActive_m687D30EE2BD4CD62133B4AF3B2C6F2280F289000 (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) 
{
	{
		// get { return sellTrigger.IsActive; }
		SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* L_0 = __this->___sellTrigger_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = SellTrigger_get_IsActive_mF7FA6464B4A9933BE170A1B66371952698E65190_inline(L_0, NULL);
		return L_1;
	}
}
// ClothesShopSim.Shopkeeper ClothesShopSim.Shopkeeper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* Shopkeeper_get_Instance_mA1DAE2F2B5F81E56AA289C41179760A9F8F81132 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Shopkeeper Instance { get; private set; }
		Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* L_0 = ((Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_StaticFields*)il2cpp_codegen_static_fields_for(Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ClothesShopSim.Shopkeeper::set_Instance(ClothesShopSim.Shopkeeper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper_set_Instance_mA00D079FA3EAE8C590E4257D077454B095441975 (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Shopkeeper Instance { get; private set; }
		Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* L_0 = ___value0;
		((Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_StaticFields*)il2cpp_codegen_static_fields_for(Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_StaticFields*)il2cpp_codegen_static_fields_for(Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void ClothesShopSim.Shopkeeper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper_Awake_m49B18C071BB856E7AA0A3B889105AA39448F1E76 (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1070CC8E184BE861929977BFA671BAA7E9E0CEDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA966F1C4081763B32BB3992FE33ED9867B16353A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance && Instance != this) Debug.LogError("Shopkeeper exists twice but is a singleton!");
		Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* L_0;
		L_0 = Shopkeeper_get_Instance_mA1DAE2F2B5F81E56AA289C41179760A9F8F81132_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* L_2;
		L_2 = Shopkeeper_get_Instance_mA1DAE2F2B5F81E56AA289C41179760A9F8F81132_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// if (Instance && Instance != this) Debug.LogError("Shopkeeper exists twice but is a singleton!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral1070CC8E184BE861929977BFA671BAA7E9E0CEDA, NULL);
		goto IL_002b;
	}

IL_0025:
	{
		// else Instance = this;
		Shopkeeper_set_Instance_mA00D079FA3EAE8C590E4257D077454B095441975_inline(__this, NULL);
	}

IL_002b:
	{
		// playerInventory = GameObject.FindGameObjectWithTag(PlayerTag).GetComponent<PlayerInventory>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_4);
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_5;
		L_5 = GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD(L_4, GameObject_GetComponent_TisPlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83_mC3BE12D66D90C97A1B329F07FBDEECF3A5EED2CD_RuntimeMethod_var);
		__this->___playerInventory_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInventory_9), (void*)L_5);
		// if (!playerInventory)
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_6 = __this->___playerInventory_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.LogError("Player Inventory not found.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA966F1C4081763B32BB3992FE33ED9867B16353A, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Shopkeeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper_Update_m397BECAC78C7D680CDBEEF09D0EDB834E871F45B (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A226252B0C9FFA94AD65E379D933D22282F0129);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsActive)
		bool L_0;
		L_0 = Shopkeeper_get_IsActive_m687D30EE2BD4CD62133B4AF3B2C6F2280F289000(__this, NULL);
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.N))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)110), NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// if (selectedItemInfoHolder != null && selectedItemInfoHolder.ItemInfo.OutfitID != OutfitID.None)
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_2 = __this->___selectedItemInfoHolder_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_4 = __this->___selectedItemInfoHolder_6;
		NullCheck(L_4);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_5;
		L_5 = ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		// if (playerInventory.Inventory.Contains(selectedItemInfoHolder.ItemInfo))
		PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* L_7 = __this->___playerInventory_9;
		NullCheck(L_7);
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_8;
		L_8 = PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline(L_7, NULL);
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_9 = __this->___selectedItemInfoHolder_6;
		NullCheck(L_9);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_10;
		L_10 = ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98(L_8, L_10, List_1_Contains_m69D08B097BE34E1ABB20413492C51C5080576E98_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// TransactionSucceed();
		Shopkeeper_TransactionSucceed_m8F01511C0462B8D41522B2EE3759BB38C1381AFD(__this, NULL);
		return;
	}

IL_0055:
	{
		// TransactionFailed();
		Shopkeeper_TransactionFailed_m49DD5C0AEA8A2CDC2E5D707473479639287742AF(__this, NULL);
		return;
	}

IL_005c:
	{
		// Debug.LogError("Invalid selectedItemInfo.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral6A226252B0C9FFA94AD65E379D933D22282F0129, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void ClothesShopSim.Shopkeeper::TransactionSucceed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper_TransactionSucceed_m8F01511C0462B8D41522B2EE3759BB38C1381AFD (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral160E61B00B70256608EF7998FD991410867E06C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// itemSoldGameEventItemInfo.Raise(selectedItemInfoHolder.ItemInfo);
		GameEventItemInfo_tBC091A68152D84FF2261C90FAAEB668D194FF4D8* L_0 = __this->___itemSoldGameEventItemInfo_5;
		ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* L_1 = __this->___selectedItemInfoHolder_6;
		NullCheck(L_1);
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_2;
		L_2 = ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline(L_1, NULL);
		NullCheck(L_0);
		GameEventItemInfo_Raise_mEB221B588E7441A23BB1F4F881BA43A41592C8E7(L_0, L_2, NULL);
		// transactionResult.text = SaleSucceededName;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___transactionResult_7;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteral160E61B00B70256608EF7998FD991410867E06C1);
		// transactionResult.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_4 = __this->___transactionResult_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.Shopkeeper::TransactionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper_TransactionFailed_m49DD5C0AEA8A2CDC2E5D707473479639287742AF (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9963D9C2A47A709FF6F1B4C63966AD3072C89BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transactionResult.text = SaleFailedName;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___transactionResult_7;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralE9963D9C2A47A709FF6F1B4C63966AD3072C89BA);
		// transactionResult.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->___transactionResult_7;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ClothesShopSim.Shopkeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shopkeeper__ctor_m11534BEE62FCCC2C6BEC3863951CD225BC7E73EB (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_BuyPrice_m11795B99EE5E5AA75D328CB7F3176CBF4289B017_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return buyPrice; }
		int32_t L_0 = __this->___buyPrice_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ItemInfoHolder_get_ItemInfo_m9C3DBA5F9D39E5E5ECE07EB0729F3E931B89CCAB_inline (ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return itemInfo; }
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_0 = __this->___itemInfo_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_OutfitID_m30292492524EC6B5099A17814EDEBFA05903822F_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return outfitID; }
		int32_t L_0 = __this->___outfitID_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* PlayerInventory_get_Inventory_m5920D153DE993B9B78F3B72788A615531BC4DBE4_inline (PlayerInventory_t1AEEEBFBB31DBF4088F19560AE92FA40B3C93C83* __this, const RuntimeMethod* method) 
{
	{
		// get { return inventory; }
		List_1_t266A5C7856E511E6377474B7ABE63BF1BA94D046* L_0 = __this->___inventory_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* InventoryController_get_Instance_m3D0484A27843794F79F266C64861C8018F04B564_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InventoryController Instance { get; private set; }
		InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* L_0 = ((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryController_set_Instance_mE55E606CC1E9C4F6CD02AC4A9E185E726C6A2274_inline (InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InventoryController Instance { get; private set; }
		InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8* L_0 = ___value0;
		((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_StaticFields*)il2cpp_codegen_static_fields_for(InventoryController_t7C3BAC75A175BE33CE086C42DC3ED6A1119832A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItemDisplay_SetDisplayedItem_mA4DA3D1819D090AE52AAE2FCCDE00DA62C8E657F_inline (InventoryItemDisplay_t0DAE607C72B51E1FD4970C010447A15D3AEEFDAF* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___displayedItem0, const RuntimeMethod* method) 
{
	{
		// this.displayedItem = displayedItem;
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_0 = ___displayedItem0;
		__this->___displayedItem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayedItem_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ItemInfo_get_ItemSprite_m564CCDE2163CE8C850B3D374BB50D0ACAD85D2C6_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return itemSprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___itemSprite_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_SellPrice_mF111FBE59C2C8030C2078B3FA30F626F062ED25F_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return sellPrice; }
		int32_t L_0 = __this->___sellPrice_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ItemInfo_get_QuantityPurchased_m14C72A0E70838141F4A180CD97FC58A27C2B8EC8_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return quantityPurchased; }
		int32_t L_0 = __this->___quantityPurchased_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ItemInfo_get_Equipped_m82CC6C28EB5D096F0CBA042238166ACF8FADEED2_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, const RuntimeMethod* method) 
{
	{
		// get { return equipped; }
		bool L_0 = __this->___equipped_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ItemInfoHolder_set_ItemInfo_m0D73F7509B2E6BB25460B98E37A638C28C8AC7D5_inline (ItemInfoHolder_tBF45D3ECEDE68A3B4FB3153F3FBD0C0314AD24AD* __this, ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* ___value0, const RuntimeMethod* method) 
{
	{
		// set { itemInfo = value; }
		ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* L_0 = ___value0;
		__this->___itemInfo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemInfo_4), (void*)L_0);
		// set { itemInfo = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimationSet_get_OutfitID_mCCC6717E48D139169FADACA8295877DA41C33F99_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return outfitID; }
		int32_t L_0 = __this->___outfitID_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkRightAnimGameObject_m5CD11DB64AAA4E288673A613970CF6FB6D295306_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return walkRightAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___walkRightAnimGameObject_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkForwardAnimGameObject_mD027946170FE6A9D9525DF80206828D2306C78E9_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return walkForwardAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___walkForwardAnimGameObject_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_WalkBackAnimGameObject_m92A5AB46EAB8774B75495A8A370846BDE248D563_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return walkBackAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___walkBackAnimGameObject_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleRightAnimGameObject_mE429E8AF2591A27587D118523669EB04FFB39A45_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return idleRightAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___idleRightAnimGameObject_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleForwardAnimGameObject_m2EB6144EB0194E574BBAEDF9194D4E2561D3A58F_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return idleForwardAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___idleForwardAnimGameObject_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnimationSet_get_IdleBackAnimGameObject_m23391E94765F76887DDE0AA370F883D2360D3F74_inline (AnimationSet_tB63A590E6FD13B92E95C0C9E16C4CADC9CE555B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return idleBackAnimGameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___idleBackAnimGameObject_10;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ItemInfo_set_QuantityPurchased_m2506DE8D91D17CEBE7E572FAC5977572FF7E6E8C_inline (ItemInfo_t2CC1115369D8AC5B7E92AA768D24BFAAEB46B614* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { quantityPurchased = value; }
		int32_t L_0 = ___value0;
		__this->___quantityPurchased_8 = L_0;
		// set { quantityPurchased = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SellTrigger_get_IsActive_mF7FA6464B4A9933BE170A1B66371952698E65190_inline (SellTrigger_t3B6716F2F5BE31527F40FC6C234FD40340E12D5B* __this, const RuntimeMethod* method) 
{
	{
		// get { return isActive; }
		bool L_0 = __this->___isActive_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* Shopkeeper_get_Instance_mA1DAE2F2B5F81E56AA289C41179760A9F8F81132_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Shopkeeper Instance { get; private set; }
		Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* L_0 = ((Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_StaticFields*)il2cpp_codegen_static_fields_for(Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Shopkeeper_set_Instance_mA00D079FA3EAE8C590E4257D077454B095441975_inline (Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Shopkeeper Instance { get; private set; }
		Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902* L_0 = ___value0;
		((Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_StaticFields*)il2cpp_codegen_static_fields_for(Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_StaticFields*)il2cpp_codegen_static_fields_for(Shopkeeper_tD881177CF27B70A62B035B6403C2639DB9CF9902_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mC43068F83C6DFF8A5101FB38691F27D6B4C954AB_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
