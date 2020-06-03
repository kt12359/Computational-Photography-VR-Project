#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A;
// Newtonsoft.Json.JsonReader
struct JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB;
// Newtonsoft.Json.Linq.JObject
struct JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7;
// Newtonsoft.Json.Linq.JToken
struct JToken_tCCEF558996D47101E43F6436A874C249291581AA;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t31A66E45D57A2A631CDC7F61F9E2F0AD6B5E2B0B;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1D9992313253D08FBF6EB4C80680A93759E8A6B6;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t25D6954E6355DD894B3344F0B37B81D3CADDC46F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t26E15D06C779BB491E05828824F4BA113222E5A7;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Reflection.MemberInfo>[]
struct EntryU5BU5D_t67B3659233AE33AC28B9B8A6580C405D99974275;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Reflection.MemberInfo>
struct KeyCollection_t8611F00EF5F19F32458D1C2F3AE57F068CEC31AF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Reflection.MemberInfo>
struct ValueCollection_t6CA464260D50CE3AE50E1CDDE5D2121440AEE66A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_tE20C5D62FCE8B90A457045AA28AD528E6F5A1401;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC;
// System.Func`2<System.String,System.Reflection.MemberInfo>
struct Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA;
// System.Func`2<System.String,System.String>
struct Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidProgramException
struct InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tCCEF558996D47101E43F6436A874C249291581AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral393F9AC43E8D3C0D64AB7C3F5A3D819491BBD225;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral3CCF56201D174A2E31BA5BB4AD9861BD5B410A5D;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral6D1AFBB48B79D4A81DC5F70E65842D7EC85548A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7264701AA7C4CD862F0B07ABBA5F2C7F635FF231;
IL2CPP_EXTERN_C String_t* _stringLiteralD0274B12B2586795DECE2C81DB51930E9B839C8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDE1DD65CC399E389B77F3F5EEE0585DE3AE1E8F0;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1_GetProperties_m8679E2B74DE0B0C91C19CACA9D37B0BAC7BB29D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1_GetProperties_m99029296D81D6122CD7A6FB5446C24413CB5D66C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1_GetProperties_mD4A7A2CD5529D465035C9129FFFA2E7DDD120179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1_Throw_m0288984DBC3AD263B84331D171B3ED29D9C006A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1_Throw_m61EAD2EE54212927EA25B92A204EC37BF71F5966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1_Throw_mDC2EEFA0B94B1D7B5310FAF5297F27F831D6A8B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_CanConvert_m0E880DE44DE4BAF385539DAA2C13FFAEA6BB74ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_CanConvert_mDE7F2AD48C3FE52E58F1AA828EDA3F98FD634CEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_CanConvert_mF41899924B83493D9148FE024A0C2585D8E6D83B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetMember_m42BE0242D67EEE5DDA447B9857AF720EEC20FA51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetMember_m62674E30254E2D55DCB227368F795FFF4790897A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetMember_mF29394176A68EE4DFBF839C885D486342C6D11BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetProperties_m8679E2B74DE0B0C91C19CACA9D37B0BAC7BB29D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetProperties_m99029296D81D6122CD7A6FB5446C24413CB5D66C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetProperties_mD4A7A2CD5529D465035C9129FFFA2E7DDD120179_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetValueType_m30B7B881EFB2BC891C00B2A6F829AA0DCB1D6F66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetValueType_m4289B27C3FBA1D5A3FDD48E64A11FFA09BEEAE70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetValueType_m8257593596179CFB62C1423152CE319BAFDD11E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetValue_mBCAB56BB8ADD3643C22AB2C71BDA941DA6FC73B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetValue_mF3CC0D9BD7BBDFDFE8C5D4413FEE0DDB9F7A8EB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_GetValue_mF5ADF6A8B7E18703D779475C5DB5861723953457_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_ReadJson_m1595E9D6106044534117E0F3FAFC40ACE2CF1A69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_ReadJson_m5EA48BDD4C22D2D033D53F108E503EBEB39C93C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_ReadJson_mCDF9B0FA515BAE2EB0546E840DEE5990126F47D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_SetValue_m1972EF85D3032F9A484659D7BC65AEB819023790_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_SetValue_m57E47BB3F5308570DED99BB4857A22767AE90A3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_SetValue_mFB5E03B6C5E38A831AF42ED8EA478F8DC8FC2007_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_Throw_m0288984DBC3AD263B84331D171B3ED29D9C006A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_Throw_m61EAD2EE54212927EA25B92A204EC37BF71F5966_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_Throw_mDC2EEFA0B94B1D7B5310FAF5297F27F831D6A8B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_WriteJson_m032ACBF72B9859683023D4146511F5811F9630EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_WriteJson_m03B6B7A0BA9CF5958486C36F7F4159BC32992E27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PartialConverter_1_WriteJson_mD556C6285B88AE89625F4C40817E8F6072253DFA_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Newtonsoft.Json.JsonConverter
struct  JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken
struct  JToken_tCCEF558996D47101E43F6436A874C249291581AA  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____parent_1)); }
	inline JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB * get__parent_1() const { return ____parent_1; }
	inline JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____previous_2)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get__previous_2() const { return ____previous_2; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____next_3)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get__next_3() const { return ____next_3; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t31A66E45D57A2A631CDC7F61F9E2F0AD6B5E2B0B * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t31A66E45D57A2A631CDC7F61F9E2F0AD6B5E2B0B * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t31A66E45D57A2A631CDC7F61F9E2F0AD6B5E2B0B ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t31A66E45D57A2A631CDC7F61F9E2F0AD6B5E2B0B * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t67B3659233AE33AC28B9B8A6580C405D99974275* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8611F00EF5F19F32458D1C2F3AE57F068CEC31AF * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6CA464260D50CE3AE50E1CDDE5D2121440AEE66A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___entries_1)); }
	inline EntryU5BU5D_t67B3659233AE33AC28B9B8A6580C405D99974275* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t67B3659233AE33AC28B9B8A6580C405D99974275** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t67B3659233AE33AC28B9B8A6580C405D99974275* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___keys_7)); }
	inline KeyCollection_t8611F00EF5F19F32458D1C2F3AE57F068CEC31AF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8611F00EF5F19F32458D1C2F3AE57F068CEC31AF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8611F00EF5F19F32458D1C2F3AE57F068CEC31AF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ___values_8)); }
	inline ValueCollection_t6CA464260D50CE3AE50E1CDDE5D2121440AEE66A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6CA464260D50CE3AE50E1CDDE5D2121440AEE66A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6CA464260D50CE3AE50E1CDDE5D2121440AEE66A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// WanzyeeStudio.Json.PartialConverter`1_<>c<UnityEngine.Vector2>
struct  U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields
{
public:
	// WanzyeeStudio.Json.PartialConverter`1_<>c<T> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9
	U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_0
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * ___U3CU3E9__6_0_1;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_1
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * ___U3CU3E9__6_1_2;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_2
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * ___U3CU3E9__6_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields, ___U3CU3E9__6_1_2)); }
	inline Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields, ___U3CU3E9__6_2_3)); }
	inline Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * get_U3CU3E9__6_2_3() const { return ___U3CU3E9__6_2_3; }
	inline Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA ** get_address_of_U3CU3E9__6_2_3() { return &___U3CU3E9__6_2_3; }
	inline void set_U3CU3E9__6_2_3(Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * value)
	{
		___U3CU3E9__6_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_2_3), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1_<>c<UnityEngine.Vector3>
struct  U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields
{
public:
	// WanzyeeStudio.Json.PartialConverter`1_<>c<T> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9
	U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_0
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * ___U3CU3E9__6_0_1;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_1
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * ___U3CU3E9__6_1_2;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_2
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * ___U3CU3E9__6_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields, ___U3CU3E9__6_1_2)); }
	inline Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields, ___U3CU3E9__6_2_3)); }
	inline Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * get_U3CU3E9__6_2_3() const { return ___U3CU3E9__6_2_3; }
	inline Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA ** get_address_of_U3CU3E9__6_2_3() { return &___U3CU3E9__6_2_3; }
	inline void set_U3CU3E9__6_2_3(Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * value)
	{
		___U3CU3E9__6_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_2_3), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1_<>c<UnityEngine.Vector4>
struct  U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields
{
public:
	// WanzyeeStudio.Json.PartialConverter`1_<>c<T> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9
	U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_0
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * ___U3CU3E9__6_0_1;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_1
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * ___U3CU3E9__6_1_2;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1_<>c::<>9__6_2
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * ___U3CU3E9__6_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields, ___U3CU3E9__6_1_2)); }
	inline Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields, ___U3CU3E9__6_2_3)); }
	inline Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * get_U3CU3E9__6_2_3() const { return ___U3CU3E9__6_2_3; }
	inline Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA ** get_address_of_U3CU3E9__6_2_3() { return &___U3CU3E9__6_2_3; }
	inline void set_U3CU3E9__6_2_3(Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * value)
	{
		___U3CU3E9__6_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_2_3), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JContainer
struct  JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB  : public JToken_tCCEF558996D47101E43F6436A874C249291581AA
{
public:
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_14), (void*)value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Reflection.MemberInfo>
struct  KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MemberInfo_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89, ___value_1)); }
	inline MemberInfo_t * get_value_1() const { return ___value_1; }
	inline MemberInfo_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MemberInfo_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct  PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct  PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct  PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// Newtonsoft.Json.ConstructorHandling
struct  ConstructorHandling_tB7A48A0C8797702C971906764E654E8FE6476256 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_tB7A48A0C8797702C971906764E654E8FE6476256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct  DateFormatHandling_tBEABF5EBD4389AF60F1DD291FFDC52DE507078F5 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_tBEABF5EBD4389AF60F1DD291FFDC52DE507078F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct  DateParseHandling_t5336000B4700644A263BAB4AC784678A106717EF 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t5336000B4700644A263BAB4AC784678A106717EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct  DateTimeZoneHandling_t0764F0AFBD234AE6CAAE3117B0ECB5536A436A50 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t0764F0AFBD234AE6CAAE3117B0ECB5536A436A50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct  DefaultValueHandling_t4846CA597C9165420107BB90AB79556F58CF599C 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t4846CA597C9165420107BB90AB79556F58CF599C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatFormatHandling
struct  FloatFormatHandling_t2032504A1B9247F1B38677F13C5F3F316F1172C1 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t2032504A1B9247F1B38677F13C5F3F316F1172C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct  FloatParseHandling_t7EF1009DE1C3D83868EEFDEEBAF6B837D3BCE236 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t7EF1009DE1C3D83868EEFDEEBAF6B837D3BCE236, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct  Formatting_tF676879523FFD8E8BF751B0A18B4C7638FD70034 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tF676879523FFD8E8BF751B0A18B4C7638FD70034, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonContainerType
struct  JsonContainerType_t896D1E853BEA3C818FF96DD8808A225B6B8E02B1 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContainerType_t896D1E853BEA3C818FF96DD8808A225B6B8E02B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonReader_State
struct  State_t4CF073DFB764A3277A009AD5717CBC66BDD70486 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t4CF073DFB764A3277A009AD5717CBC66BDD70486, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonToken
struct  JsonToken_tE966649264D950473499C1B76FCCF403CAEE6FCC 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_tE966649264D950473499C1B76FCCF403CAEE6FCC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter_State
struct  State_t02062233EAD193C670D5CC403BA32B986AA3F2C4 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t02062233EAD193C670D5CC403BA32B986AA3F2C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject
struct  JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B  : public JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ___PropertyChanged_17;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B, ____properties_16)); }
	inline JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_16), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_17), (void*)value);
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct  MetadataPropertyHandling_tDDD8630F7988FBE8E40B3C3077C61F4567F8920A 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_tDDD8630F7988FBE8E40B3C3077C61F4567F8920A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct  MissingMemberHandling_tD31B85A98D988916058F0A7DD7478C421DB150F3 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_tD31B85A98D988916058F0A7DD7478C421DB150F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.NullValueHandling
struct  NullValueHandling_t2EFB51A8C12F7748A4267AD176C09D9825E2AD1D 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t2EFB51A8C12F7748A4267AD176C09D9825E2AD1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct  ObjectCreationHandling_tBB5E4047843BB8852135FD9FA74943F70A996092 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_tBB5E4047843BB8852135FD9FA74943F70A996092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.PreserveReferencesHandling
struct  PreserveReferencesHandling_t564E802A311B4190913C5C038219F19F244934C1 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t564E802A311B4190913C5C038219F19F244934C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct  ReferenceLoopHandling_t652E187B4721B6368B3DCCDF477A0465C4D85C19 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t652E187B4721B6368B3DCCDF477A0465C4D85C19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct  StringEscapeHandling_t1DA4B22E860753CA8734C7297660D92A02ED0B40 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t1DA4B22E860753CA8734C7297660D92A02ED0B40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct  TypeNameHandling_t67FB8B52F55C9405E5BF584BA3156C73EFC06FDC 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t67FB8B52F55C9405E5BF584BA3156C73EFC06FDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.Reflection.MemberInfo>
struct  Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A, ___dictionary_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A, ___current_3)); }
	inline KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Newtonsoft.Json.JsonPosition
struct  JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct  Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct  Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct  Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct  Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct  Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct  Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct  Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.ParameterInfo
struct  ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Newtonsoft.Json.JsonReader
struct  JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader_State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____currentPosition_4)); }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3 * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  value)
	{
		____currentPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_4))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____culture_5)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_5), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____maxDepth_7)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____stack_12)); }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * get__stack_12() const { return ____stack_12; }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};


// Newtonsoft.Json.JsonSerializer
struct  JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB  : public RuntimeObject
{
public:
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormat
	int32_t ____typeNameAssemblyFormat_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 * ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::_binder
	SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * ____binder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * ___Error_30;

public:
	inline static int32_t get_offset_of__typeNameHandling_0() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____typeNameHandling_0)); }
	inline int32_t get__typeNameHandling_0() const { return ____typeNameHandling_0; }
	inline int32_t* get_address_of__typeNameHandling_0() { return &____typeNameHandling_0; }
	inline void set__typeNameHandling_0(int32_t value)
	{
		____typeNameHandling_0 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_1() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____typeNameAssemblyFormat_1)); }
	inline int32_t get__typeNameAssemblyFormat_1() const { return ____typeNameAssemblyFormat_1; }
	inline int32_t* get_address_of__typeNameAssemblyFormat_1() { return &____typeNameAssemblyFormat_1; }
	inline void set__typeNameAssemblyFormat_1(int32_t value)
	{
		____typeNameAssemblyFormat_1 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_2() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____preserveReferencesHandling_2)); }
	inline int32_t get__preserveReferencesHandling_2() const { return ____preserveReferencesHandling_2; }
	inline int32_t* get_address_of__preserveReferencesHandling_2() { return &____preserveReferencesHandling_2; }
	inline void set__preserveReferencesHandling_2(int32_t value)
	{
		____preserveReferencesHandling_2 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____referenceLoopHandling_3)); }
	inline int32_t get__referenceLoopHandling_3() const { return ____referenceLoopHandling_3; }
	inline int32_t* get_address_of__referenceLoopHandling_3() { return &____referenceLoopHandling_3; }
	inline void set__referenceLoopHandling_3(int32_t value)
	{
		____referenceLoopHandling_3 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____missingMemberHandling_4)); }
	inline int32_t get__missingMemberHandling_4() const { return ____missingMemberHandling_4; }
	inline int32_t* get_address_of__missingMemberHandling_4() { return &____missingMemberHandling_4; }
	inline void set__missingMemberHandling_4(int32_t value)
	{
		____missingMemberHandling_4 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____objectCreationHandling_5)); }
	inline int32_t get__objectCreationHandling_5() const { return ____objectCreationHandling_5; }
	inline int32_t* get_address_of__objectCreationHandling_5() { return &____objectCreationHandling_5; }
	inline void set__objectCreationHandling_5(int32_t value)
	{
		____objectCreationHandling_5 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____nullValueHandling_6)); }
	inline int32_t get__nullValueHandling_6() const { return ____nullValueHandling_6; }
	inline int32_t* get_address_of__nullValueHandling_6() { return &____nullValueHandling_6; }
	inline void set__nullValueHandling_6(int32_t value)
	{
		____nullValueHandling_6 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____defaultValueHandling_7)); }
	inline int32_t get__defaultValueHandling_7() const { return ____defaultValueHandling_7; }
	inline int32_t* get_address_of__defaultValueHandling_7() { return &____defaultValueHandling_7; }
	inline void set__defaultValueHandling_7(int32_t value)
	{
		____defaultValueHandling_7 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____constructorHandling_8)); }
	inline int32_t get__constructorHandling_8() const { return ____constructorHandling_8; }
	inline int32_t* get_address_of__constructorHandling_8() { return &____constructorHandling_8; }
	inline void set__constructorHandling_8(int32_t value)
	{
		____constructorHandling_8 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_9() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____metadataPropertyHandling_9)); }
	inline int32_t get__metadataPropertyHandling_9() const { return ____metadataPropertyHandling_9; }
	inline int32_t* get_address_of__metadataPropertyHandling_9() { return &____metadataPropertyHandling_9; }
	inline void set__metadataPropertyHandling_9(int32_t value)
	{
		____metadataPropertyHandling_9 = value;
	}

	inline static int32_t get_offset_of__converters_10() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____converters_10)); }
	inline JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 * get__converters_10() const { return ____converters_10; }
	inline JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 ** get_address_of__converters_10() { return &____converters_10; }
	inline void set__converters_10(JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 * value)
	{
		____converters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converters_10), (void*)value);
	}

	inline static int32_t get_offset_of__contractResolver_11() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____contractResolver_11)); }
	inline RuntimeObject* get__contractResolver_11() const { return ____contractResolver_11; }
	inline RuntimeObject** get_address_of__contractResolver_11() { return &____contractResolver_11; }
	inline void set__contractResolver_11(RuntimeObject* value)
	{
		____contractResolver_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contractResolver_11), (void*)value);
	}

	inline static int32_t get_offset_of__traceWriter_12() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____traceWriter_12)); }
	inline RuntimeObject* get__traceWriter_12() const { return ____traceWriter_12; }
	inline RuntimeObject** get_address_of__traceWriter_12() { return &____traceWriter_12; }
	inline void set__traceWriter_12(RuntimeObject* value)
	{
		____traceWriter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____traceWriter_12), (void*)value);
	}

	inline static int32_t get_offset_of__equalityComparer_13() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____equalityComparer_13)); }
	inline RuntimeObject* get__equalityComparer_13() const { return ____equalityComparer_13; }
	inline RuntimeObject** get_address_of__equalityComparer_13() { return &____equalityComparer_13; }
	inline void set__equalityComparer_13(RuntimeObject* value)
	{
		____equalityComparer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_13), (void*)value);
	}

	inline static int32_t get_offset_of__binder_14() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____binder_14)); }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * get__binder_14() const { return ____binder_14; }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 ** get_address_of__binder_14() { return &____binder_14; }
	inline void set__binder_14(SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * value)
	{
		____binder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____binder_14), (void*)value);
	}

	inline static int32_t get_offset_of__context_15() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____context_15)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get__context_15() const { return ____context_15; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of__context_15() { return &____context_15; }
	inline void set__context_15(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		____context_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____context_15))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__referenceResolver_16() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____referenceResolver_16)); }
	inline RuntimeObject* get__referenceResolver_16() const { return ____referenceResolver_16; }
	inline RuntimeObject** get_address_of__referenceResolver_16() { return &____referenceResolver_16; }
	inline void set__referenceResolver_16(RuntimeObject* value)
	{
		____referenceResolver_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceResolver_16), (void*)value);
	}

	inline static int32_t get_offset_of__formatting_17() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____formatting_17)); }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  get__formatting_17() const { return ____formatting_17; }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154 * get_address_of__formatting_17() { return &____formatting_17; }
	inline void set__formatting_17(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  value)
	{
		____formatting_17 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateFormatHandling_18)); }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  get__dateFormatHandling_18() const { return ____dateFormatHandling_18; }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41 * get_address_of__dateFormatHandling_18() { return &____dateFormatHandling_18; }
	inline void set__dateFormatHandling_18(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  value)
	{
		____dateFormatHandling_18 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateTimeZoneHandling_19)); }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  get__dateTimeZoneHandling_19() const { return ____dateTimeZoneHandling_19; }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1 * get_address_of__dateTimeZoneHandling_19() { return &____dateTimeZoneHandling_19; }
	inline void set__dateTimeZoneHandling_19(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  value)
	{
		____dateTimeZoneHandling_19 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateParseHandling_20)); }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  get__dateParseHandling_20() const { return ____dateParseHandling_20; }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99 * get_address_of__dateParseHandling_20() { return &____dateParseHandling_20; }
	inline void set__dateParseHandling_20(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  value)
	{
		____dateParseHandling_20 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____floatFormatHandling_21)); }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  get__floatFormatHandling_21() const { return ____floatFormatHandling_21; }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7 * get_address_of__floatFormatHandling_21() { return &____floatFormatHandling_21; }
	inline void set__floatFormatHandling_21(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  value)
	{
		____floatFormatHandling_21 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_22() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____floatParseHandling_22)); }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  get__floatParseHandling_22() const { return ____floatParseHandling_22; }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B * get_address_of__floatParseHandling_22() { return &____floatParseHandling_22; }
	inline void set__floatParseHandling_22(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  value)
	{
		____floatParseHandling_22 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____stringEscapeHandling_23)); }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  get__stringEscapeHandling_23() const { return ____stringEscapeHandling_23; }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E * get_address_of__stringEscapeHandling_23() { return &____stringEscapeHandling_23; }
	inline void set__stringEscapeHandling_23(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  value)
	{
		____stringEscapeHandling_23 = value;
	}

	inline static int32_t get_offset_of__culture_24() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____culture_24)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_24() const { return ____culture_24; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_24() { return &____culture_24; }
	inline void set__culture_24(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_24), (void*)value);
	}

	inline static int32_t get_offset_of__maxDepth_25() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____maxDepth_25)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get__maxDepth_25() const { return ____maxDepth_25; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of__maxDepth_25() { return &____maxDepth_25; }
	inline void set__maxDepth_25(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		____maxDepth_25 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_26() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____maxDepthSet_26)); }
	inline bool get__maxDepthSet_26() const { return ____maxDepthSet_26; }
	inline bool* get_address_of__maxDepthSet_26() { return &____maxDepthSet_26; }
	inline void set__maxDepthSet_26(bool value)
	{
		____maxDepthSet_26 = value;
	}

	inline static int32_t get_offset_of__checkAdditionalContent_27() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____checkAdditionalContent_27)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__checkAdditionalContent_27() const { return ____checkAdditionalContent_27; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__checkAdditionalContent_27() { return &____checkAdditionalContent_27; }
	inline void set__checkAdditionalContent_27(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____checkAdditionalContent_27 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_28() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateFormatString_28)); }
	inline String_t* get__dateFormatString_28() const { return ____dateFormatString_28; }
	inline String_t** get_address_of__dateFormatString_28() { return &____dateFormatString_28; }
	inline void set__dateFormatString_28(String_t* value)
	{
		____dateFormatString_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_28), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_29() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateFormatStringSet_29)); }
	inline bool get__dateFormatStringSet_29() const { return ____dateFormatStringSet_29; }
	inline bool* get_address_of__dateFormatStringSet_29() { return &____dateFormatStringSet_29; }
	inline void set__dateFormatStringSet_29(bool value)
	{
		____dateFormatStringSet_29 = value;
	}

	inline static int32_t get_offset_of_Error_30() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ___Error_30)); }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * get_Error_30() const { return ___Error_30; }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D ** get_address_of_Error_30() { return &___Error_30; }
	inline void set_Error_30(EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * value)
	{
		___Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_30), (void*)value);
	}
};


// Newtonsoft.Json.JsonWriter
struct  JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter_State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_12;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____stack_2)); }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * get__stack_2() const { return ____stack_2; }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____currentPosition_3)); }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3 * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  value)
	{
		____currentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_3))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_7() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____dateFormatHandling_7)); }
	inline int32_t get__dateFormatHandling_7() const { return ____dateFormatHandling_7; }
	inline int32_t* get_address_of__dateFormatHandling_7() { return &____dateFormatHandling_7; }
	inline void set__dateFormatHandling_7(int32_t value)
	{
		____dateFormatHandling_7 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____dateTimeZoneHandling_8)); }
	inline int32_t get__dateTimeZoneHandling_8() const { return ____dateTimeZoneHandling_8; }
	inline int32_t* get_address_of__dateTimeZoneHandling_8() { return &____dateTimeZoneHandling_8; }
	inline void set__dateTimeZoneHandling_8(int32_t value)
	{
		____dateTimeZoneHandling_8 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____stringEscapeHandling_9)); }
	inline int32_t get__stringEscapeHandling_9() const { return ____stringEscapeHandling_9; }
	inline int32_t* get_address_of__stringEscapeHandling_9() { return &____stringEscapeHandling_9; }
	inline void set__stringEscapeHandling_9(int32_t value)
	{
		____stringEscapeHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____floatFormatHandling_10)); }
	inline int32_t get__floatFormatHandling_10() const { return ____floatFormatHandling_10; }
	inline int32_t* get_address_of__floatFormatHandling_10() { return &____floatFormatHandling_10; }
	inline void set__floatFormatHandling_10(int32_t value)
	{
		____floatFormatHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__culture_12() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____culture_12)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_12() const { return ____culture_12; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_12() { return &____culture_12; }
	inline void set__culture_12(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_12), (void*)value);
	}
};

struct JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter_State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter_State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArrayTempate_1), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Func`2<System.String,System.Boolean>
struct  Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Reflection.MemberInfo>
struct  Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.String>
struct  Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidProgramException
struct  InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * m_Items[1];

public:
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * m_Items[1];

public:
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4855AE1389C1E454FF70D74FD49D3C642E0DF458_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m7F45944D8AA270D6F5F8897D9F81E3438A1E39FC_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisRuntimeObject_mFEDF598EC967CD7257677017B555410ABBB6D4B3_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC3F0226260742A07B413D9BE40D0009844D249DC_gshared (RuntimeObject* ___source0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___keySelector1, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___elementSelector2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * PropertyInfo_GetGetMethod_m90BA90BA1CAFEE1CC273BB8B3BD289890373CB8A (PropertyInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * PropertyInfo_GetSetMethod_m275171F734C49C398DC9E9F3970AA798725C7CA9 (PropertyInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4855AE1389C1E454FF70D74FD49D3C642E0DF458_gshared)(___source0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4855AE1389C1E454FF70D74FD49D3C642E0DF458_gshared)(___source0, method);
}
// System.Void System.InvalidProgramException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProgramException__ctor_m0A6EAC90493AED4549F5980E8110BD56A0E32C7F (InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline bool Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5 (RuntimeObject* ___source0, Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m7F45944D8AA270D6F5F8897D9F81E3438A1E39FC_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_mFEDF598EC967CD7257677017B555410ABBB6D4B3_gshared)(___source0, method);
}
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0 (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.String,System.Reflection.MemberInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852 (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.String,System.String,System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A (RuntimeObject* ___source0, Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * ___keySelector1, Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * (*) (RuntimeObject*, Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *, Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC3F0226260742A07B413D9BE40D0009844D249DC_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * JObject_Load_mEC8742E0DC6B16B1C4496B776F40F1D2922E8246 (JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::GetEnumerator()
inline Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC (Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  (*) (Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Reflection.MemberInfo>::get_Current()
inline KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_inline (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  (*) (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Reflection.MemberInfo>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_inline (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * JObject_get_Item_mE36F6406690517A4E5C3DC87F76BA34D3FB9E679 (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Reflection.MemberInfo>::get_Value()
inline MemberInfo_t * KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 * __this, const RuntimeMethod* method)
{
	return ((  MemberInfo_t * (*) (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Object Newtonsoft.Json.Linq.JToken::ToObject(System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_m2291B9FBA326FA8C82713218DC9578FEBEA68A7E (JToken_tCCEF558996D47101E43F6436A874C249291581AA * __this, Type_t * ___objectType0, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___jsonSerializer1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Reflection.MemberInfo>::MoveNext()
inline bool Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361 (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mE19999761FB1AA5208E901A36EF10F5C317427E8 (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * JToken_FromObject_mC1734D279F48193B1533F37EB07D483411E55CDC (RuntimeObject * ___o0, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___jsonSerializer1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::set_Item(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_Item_mEC511ED82B87681085F3BAB8A0CB60A2EEA9DCE2 (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * __this, String_t* ___propertyName0, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Newtonsoft.Json.JsonConverter>()
inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_inline (const RuntimeMethod* method)
{
	return ((  JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39 (JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_mF29394176A68EE4DFBF839C885D486342C6D11BF_gshared (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_mF29394176A68EE4DFBF839C885D486342C6D11BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		// var _flag = BindingFlags.Instance | BindingFlags.Public;
		V_0 = (int32_t)((int32_t)20);
		// var _field = typeof(T).GetField(name, _flag);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		// if(null != _field) return _field;
		FieldInfo_t * L_5 = V_1;
		bool L_6 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE((FieldInfo_t *)NULL, (FieldInfo_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		// if(null != _field) return _field;
		FieldInfo_t * L_7 = V_1;
		return L_7;
	}

IL_0020:
	{
		// var _property = typeof(T).GetProperty(name, _flag);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___name0;
		int32_t L_11 = V_0;
		NullCheck((Type_t *)L_9);
		PropertyInfo_t * L_12 = Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130((Type_t *)L_9, (String_t*)L_10, (int32_t)L_11, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_12;
		// if(null == _property) Throw(name, "Public instance field or property {0} is not found.");
		PropertyInfo_t * L_13 = V_2;
		bool L_14 = PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED((PropertyInfo_t *)NULL, (PropertyInfo_t *)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		// if(null == _property) Throw(name, "Public instance field or property {0} is not found.");
		String_t* L_15 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_15, (String_t*)_stringLiteral7264701AA7C4CD862F0B07ABBA5F2C7F635FF231, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0046:
	{
		// if(null == _property.GetGetMethod()) Throw(name, "Property {0} is not readable.");
		PropertyInfo_t * L_16 = V_2;
		NullCheck((PropertyInfo_t *)L_16);
		MethodInfo_t * L_17 = PropertyInfo_GetGetMethod_m90BA90BA1CAFEE1CC273BB8B3BD289890373CB8A((PropertyInfo_t *)L_16, /*hidden argument*/NULL);
		bool L_18 = MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0((MethodInfo_t *)NULL, (MethodInfo_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		// if(null == _property.GetGetMethod()) Throw(name, "Property {0} is not readable.");
		String_t* L_19 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_19, (String_t*)_stringLiteralD0274B12B2586795DECE2C81DB51930E9B839C8C, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_005f:
	{
		// if(null == _property.GetSetMethod()) Throw(name, "Property {0} is not writable.");
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		MethodInfo_t * L_21 = PropertyInfo_GetSetMethod_m275171F734C49C398DC9E9F3970AA798725C7CA9((PropertyInfo_t *)L_20, /*hidden argument*/NULL);
		bool L_22 = MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0((MethodInfo_t *)NULL, (MethodInfo_t *)L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// if(null == _property.GetSetMethod()) Throw(name, "Property {0} is not writable.");
		String_t* L_23 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_23, (String_t*)_stringLiteralDE1DD65CC399E389B77F3F5EEE0585DE3AE1E8F0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0078:
	{
		// if(_property.GetIndexParameters().Any()) Throw(name, "Not support property {0} with indexes.");
		PropertyInfo_t * L_24 = V_2;
		NullCheck((PropertyInfo_t *)L_24);
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_25 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_24);
		bool L_26 = Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB((RuntimeObject*)(RuntimeObject*)L_25, /*hidden argument*/Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_0090;
		}
	}
	{
		// if(_property.GetIndexParameters().Any()) Throw(name, "Not support property {0} with indexes.");
		String_t* L_27 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_27, (String_t*)_stringLiteral3CCF56201D174A2E31BA5BB4AD9861BD5B410A5D, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0090:
	{
		// return _property;
		PropertyInfo_t * L_28 = V_2;
		return L_28;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::Throw(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_mDC2EEFA0B94B1D7B5310FAF5297F27F831D6A8B5_gshared (String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_mDC2EEFA0B94B1D7B5310FAF5297F27F831D6A8B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new ArgumentException(string.Format(format, typeof(T).Name + "." + name), "name");
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_3, (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, PartialConverter_1_Throw_mDC2EEFA0B94B1D7B5310FAF5297F27F831D6A8B5_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_mBCAB56BB8ADD3643C22AB2C71BDA941DA6FC73B6_gshared (MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_mBCAB56BB8ADD3643C22AB2C71BDA941DA6FC73B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).GetValue(target);
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).GetValue(target);
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0015:
	{
		// else return (member as PropertyInfo).GetValue(target, null);
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m57E47BB3F5308570DED99BB4857A22767AE90A3C_gshared (MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m57E47BB3F5308570DED99BB4857A22767AE90A3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) (member as FieldInfo).SetValue(target, value);
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		// if(member is FieldInfo) (member as FieldInfo).SetValue(target, value);
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		// else (member as PropertyInfo).SetValue(target, value, null);
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		// }
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetValueType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m30B7B881EFB2BC891C00B2A6F829AA0DCB1D6F66_gshared (MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m30B7B881EFB2BC891C00B2A6F829AA0DCB1D6F66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).FieldType;
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).FieldType;
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0014:
	{
		// else return (member as PropertyInfo).PropertyType;
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * PartialConverter_1_GetProperties_m8679E2B74DE0B0C91C19CACA9D37B0BAC7BB29D0_gshared (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m8679E2B74DE0B0C91C19CACA9D37B0BAC7BB29D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * G_B7_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_1 = NULL;
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * G_B6_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_1 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * G_B13_0 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * G_B12_0 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	{
		// if(null != _properties) return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_0 = ((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if(null != _properties) return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_1 = ((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_000d:
	{
		// var _names = GetPropertyNames();
		NullCheck((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = VirtFuncInvoker0< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetPropertyNames() */, (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this);
		V_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_2;
		// if(null == _names || !_names.Any())
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0((RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		// throw new InvalidProgramException("GetPropertyNames() cannot return empty.");
		InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 * L_6 = (InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 *)il2cpp_codegen_object_new(InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m0A6EAC90493AED4549F5980E8110BD56A0E32C7F(L_6, (String_t*)_stringLiteral6D1AFBB48B79D4A81DC5F70E65842D7EC85548A1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, PartialConverter_1_GetProperties_m8679E2B74DE0B0C91C19CACA9D37B0BAC7BB29D0_RuntimeMethod_var);
	}

IL_002a:
	{
		// if(_names.Any((name) => string.IsNullOrEmpty(name)))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_8 = ((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_0_1();
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_9 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)L_8;
		G_B6_0 = L_9;
		G_B6_1 = L_7;
		if (L_9)
		{
			G_B7_0 = L_9;
			G_B7_1 = L_7;
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC * L_10 = ((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_11 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)il2cpp_codegen_object_new(Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC_il2cpp_TypeInfo_var);
		Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C(L_11, (RuntimeObject *)L_10, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)), /*hidden argument*/Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C_RuntimeMethod_var);
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_12 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)L_11;
		((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_0_1(L_12);
		G_B7_0 = L_12;
		G_B7_1 = G_B6_1;
	}

IL_004a:
	{
		bool L_13 = Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5((RuntimeObject*)(RuntimeObject*)G_B7_1, (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)G_B7_0, /*hidden argument*/Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// throw new InvalidProgramException("GetPropertyNames() cannot contain empty value.");
		InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 * L_14 = (InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 *)il2cpp_codegen_object_new(InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m0A6EAC90493AED4549F5980E8110BD56A0E32C7F(L_14, (String_t*)_stringLiteral393F9AC43E8D3C0D64AB7C3F5A3D819491BBD225, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, PartialConverter_1_GetProperties_m8679E2B74DE0B0C91C19CACA9D37B0BAC7BB29D0_RuntimeMethod_var);
	}

IL_005c:
	{
		// _properties = _names.Distinct().ToDictionary((name) => name, (name) => GetMember(name));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_0;
		RuntimeObject* L_16 = Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C((RuntimeObject*)(RuntimeObject*)L_15, /*hidden argument*/Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_17 = ((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_1_2();
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_18 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)L_17;
		G_B10_0 = L_18;
		G_B10_1 = L_16;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC * L_19 = ((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_20 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)il2cpp_codegen_object_new(Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96_il2cpp_TypeInfo_var);
		Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0(L_20, (RuntimeObject *)L_19, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)), /*hidden argument*/Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0_RuntimeMethod_var);
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_21 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)L_20;
		((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_1_2(L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_22 = ((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_2_3();
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_23 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)L_22;
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC * L_24 = ((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_25 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)il2cpp_codegen_object_new(Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA_il2cpp_TypeInfo_var);
		Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852(L_25, (RuntimeObject *)L_24, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)), /*hidden argument*/Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852_RuntimeMethod_var);
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_26 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)L_25;
		((U3CU3Ec_t2149029102737AC943CC8F1CDB64554105D4F6DC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_2_3(L_26);
		G_B13_0 = L_26;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00a0:
	{
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_27 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A((RuntimeObject*)G_B13_2, (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)G_B13_1, (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)G_B13_0, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A_RuntimeMethod_var);
		((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_27);
		// return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_28 = ((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_28;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PartialConverter_1_CreateInstance_m9F3CF97931BB0390776BB9915EA42013E478A875_gshared (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, const RuntimeMethod* method)
{
	{
		// return Activator.CreateInstance<T>();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_mDE7F2AD48C3FE52E58F1AA828EDA3F98FD634CEE_gshared (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_mDE7F2AD48C3FE52E58F1AA828EDA3F98FD634CEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(T) == objectType;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		bool L_3 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m5EA48BDD4C22D2D033D53F108E503EBEB39C93C7_gshared (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m5EA48BDD4C22D2D033D53F108E503EBEB39C93C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_0 = ___reader0;
		NullCheck((JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_0);
		if ((!(((uint32_t)((int32_t)11)) == ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		return NULL;
	}

IL_000c:
	{
		// var _object = JObject.Load(reader);
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_2 = ___reader0;
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_3 = JObject_Load_mEC8742E0DC6B16B1C4496B776F40F1D2922E8246((JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_3;
		// var _result = CreateInstance() as object;
		NullCheck((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::CreateInstance() */, (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), &L_5);
		V_1 = (RuntimeObject *)L_6;
		// foreach(var _pair in GetProperties()){
		NullCheck((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this);
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_7 = ((  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * (*) (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_7);
		Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  L_8 = Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC_RuntimeMethod_var);
		V_2 = (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A )L_8;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_002d:
		{
			// foreach(var _pair in GetProperties()){
			KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  L_9 = Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_inline((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_RuntimeMethod_var);
			V_3 = (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 )L_9;
			// var _value = _object[_pair.Key].ToObject(GetValueType(_pair.Value), serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_RuntimeMethod_var);
			NullCheck((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_10);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_12 = JObject_get_Item_mE36F6406690517A4E5C3DC87F76BA34D3FB9E679((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_15 = ___serializer3;
			NullCheck((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m2291B9FBA326FA8C82713218DC9578FEBEA68A7E((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_12, (Type_t *)L_14, (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			// SetValue(_pair.Value, _result, _value);
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		}

IL_0066:
		{
			// foreach(var _pair in GetProperties()){
			bool L_20 = Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_002d;
			}
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A > L_21(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__121 = il2cpp_codegen_get_interface_invoke_data(0, (&L_21), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__121.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__121.method);
		V_2 = L_21.m_Value;
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		// return _result;
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m03B6B7A0BA9CF5958486C36F7F4159BC32992E27_gshared (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * ___writer0, RuntimeObject * ___value1, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m03B6B7A0BA9CF5958486C36F7F4159BC32992E27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * V_0 = NULL;
	Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var _object = new JObject();
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)il2cpp_codegen_object_new(JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B_il2cpp_TypeInfo_var);
		JObject__ctor_mE19999761FB1AA5208E901A36EF10F5C317427E8(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_0;
		// foreach(var _pair in GetProperties()){
		NullCheck((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this);
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_1 = ((  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * (*) (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_1);
		Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  L_2 = Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC_RuntimeMethod_var);
		V_1 = (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0014:
		{
			// foreach(var _pair in GetProperties()){
			KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  L_3 = Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_inline((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 )L_3;
			// var _value = GetValue(_pair.Value, value);
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			V_3 = (RuntimeObject *)L_6;
			// _object[_pair.Key] = JToken.FromObject(_value, serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_tCCEF558996D47101E43F6436A874C249291581AA_il2cpp_TypeInfo_var);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_11 = JToken_FromObject_mC1734D279F48193B1533F37EB07D483411E55CDC((RuntimeObject *)L_9, (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_7);
			JObject_set_Item_mEC511ED82B87681085F3BAB8A0CB60A2EEA9DCE2((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_7, (String_t*)L_8, (JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_11, /*hidden argument*/NULL);
		}

IL_003e:
		{
			// foreach(var _pair in GetProperties()){
			bool L_12 = Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0014;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A > L_13(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__81 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__81.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__81.method);
		V_1 = L_13.m_Value;
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		// _object.WriteTo(writer);
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_14 = V_0;
		JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * L_15 = ___writer0;
		JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_16 = Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_inline(/*hidden argument*/Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_RuntimeMethod_var);
		NullCheck((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_14);
		VirtActionInvoker2< JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD *, JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* >::Invoke(17 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_14, (JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD *)L_15, (JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A*)L_16);
		// }
		return;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mE339E8049D3942D55A57D8D94451054C3B24A173_gshared (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)__this);
		JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39((JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)__this, /*hidden argument*/NULL);
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
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m42BE0242D67EEE5DDA447B9857AF720EEC20FA51_gshared (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m42BE0242D67EEE5DDA447B9857AF720EEC20FA51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		// var _flag = BindingFlags.Instance | BindingFlags.Public;
		V_0 = (int32_t)((int32_t)20);
		// var _field = typeof(T).GetField(name, _flag);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		// if(null != _field) return _field;
		FieldInfo_t * L_5 = V_1;
		bool L_6 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE((FieldInfo_t *)NULL, (FieldInfo_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		// if(null != _field) return _field;
		FieldInfo_t * L_7 = V_1;
		return L_7;
	}

IL_0020:
	{
		// var _property = typeof(T).GetProperty(name, _flag);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___name0;
		int32_t L_11 = V_0;
		NullCheck((Type_t *)L_9);
		PropertyInfo_t * L_12 = Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130((Type_t *)L_9, (String_t*)L_10, (int32_t)L_11, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_12;
		// if(null == _property) Throw(name, "Public instance field or property {0} is not found.");
		PropertyInfo_t * L_13 = V_2;
		bool L_14 = PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED((PropertyInfo_t *)NULL, (PropertyInfo_t *)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		// if(null == _property) Throw(name, "Public instance field or property {0} is not found.");
		String_t* L_15 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_15, (String_t*)_stringLiteral7264701AA7C4CD862F0B07ABBA5F2C7F635FF231, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0046:
	{
		// if(null == _property.GetGetMethod()) Throw(name, "Property {0} is not readable.");
		PropertyInfo_t * L_16 = V_2;
		NullCheck((PropertyInfo_t *)L_16);
		MethodInfo_t * L_17 = PropertyInfo_GetGetMethod_m90BA90BA1CAFEE1CC273BB8B3BD289890373CB8A((PropertyInfo_t *)L_16, /*hidden argument*/NULL);
		bool L_18 = MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0((MethodInfo_t *)NULL, (MethodInfo_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		// if(null == _property.GetGetMethod()) Throw(name, "Property {0} is not readable.");
		String_t* L_19 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_19, (String_t*)_stringLiteralD0274B12B2586795DECE2C81DB51930E9B839C8C, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_005f:
	{
		// if(null == _property.GetSetMethod()) Throw(name, "Property {0} is not writable.");
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		MethodInfo_t * L_21 = PropertyInfo_GetSetMethod_m275171F734C49C398DC9E9F3970AA798725C7CA9((PropertyInfo_t *)L_20, /*hidden argument*/NULL);
		bool L_22 = MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0((MethodInfo_t *)NULL, (MethodInfo_t *)L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// if(null == _property.GetSetMethod()) Throw(name, "Property {0} is not writable.");
		String_t* L_23 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_23, (String_t*)_stringLiteralDE1DD65CC399E389B77F3F5EEE0585DE3AE1E8F0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0078:
	{
		// if(_property.GetIndexParameters().Any()) Throw(name, "Not support property {0} with indexes.");
		PropertyInfo_t * L_24 = V_2;
		NullCheck((PropertyInfo_t *)L_24);
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_25 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_24);
		bool L_26 = Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB((RuntimeObject*)(RuntimeObject*)L_25, /*hidden argument*/Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_0090;
		}
	}
	{
		// if(_property.GetIndexParameters().Any()) Throw(name, "Not support property {0} with indexes.");
		String_t* L_27 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_27, (String_t*)_stringLiteral3CCF56201D174A2E31BA5BB4AD9861BD5B410A5D, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0090:
	{
		// return _property;
		PropertyInfo_t * L_28 = V_2;
		return L_28;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::Throw(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m61EAD2EE54212927EA25B92A204EC37BF71F5966_gshared (String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m61EAD2EE54212927EA25B92A204EC37BF71F5966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new ArgumentException(string.Format(format, typeof(T).Name + "." + name), "name");
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_3, (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, PartialConverter_1_Throw_m61EAD2EE54212927EA25B92A204EC37BF71F5966_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_mF3CC0D9BD7BBDFDFE8C5D4413FEE0DDB9F7A8EB6_gshared (MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_mF3CC0D9BD7BBDFDFE8C5D4413FEE0DDB9F7A8EB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).GetValue(target);
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).GetValue(target);
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0015:
	{
		// else return (member as PropertyInfo).GetValue(target, null);
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_mFB5E03B6C5E38A831AF42ED8EA478F8DC8FC2007_gshared (MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_mFB5E03B6C5E38A831AF42ED8EA478F8DC8FC2007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) (member as FieldInfo).SetValue(target, value);
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		// if(member is FieldInfo) (member as FieldInfo).SetValue(target, value);
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		// else (member as PropertyInfo).SetValue(target, value, null);
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		// }
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetValueType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m4289B27C3FBA1D5A3FDD48E64A11FFA09BEEAE70_gshared (MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m4289B27C3FBA1D5A3FDD48E64A11FFA09BEEAE70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).FieldType;
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).FieldType;
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0014:
	{
		// else return (member as PropertyInfo).PropertyType;
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * PartialConverter_1_GetProperties_m99029296D81D6122CD7A6FB5446C24413CB5D66C_gshared (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m99029296D81D6122CD7A6FB5446C24413CB5D66C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * G_B7_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_1 = NULL;
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * G_B6_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_1 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * G_B13_0 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * G_B12_0 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	{
		// if(null != _properties) return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_0 = ((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if(null != _properties) return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_1 = ((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_000d:
	{
		// var _names = GetPropertyNames();
		NullCheck((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = VirtFuncInvoker0< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetPropertyNames() */, (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this);
		V_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_2;
		// if(null == _names || !_names.Any())
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0((RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		// throw new InvalidProgramException("GetPropertyNames() cannot return empty.");
		InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 * L_6 = (InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 *)il2cpp_codegen_object_new(InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m0A6EAC90493AED4549F5980E8110BD56A0E32C7F(L_6, (String_t*)_stringLiteral6D1AFBB48B79D4A81DC5F70E65842D7EC85548A1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, PartialConverter_1_GetProperties_m99029296D81D6122CD7A6FB5446C24413CB5D66C_RuntimeMethod_var);
	}

IL_002a:
	{
		// if(_names.Any((name) => string.IsNullOrEmpty(name)))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_8 = ((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_0_1();
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_9 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)L_8;
		G_B6_0 = L_9;
		G_B6_1 = L_7;
		if (L_9)
		{
			G_B7_0 = L_9;
			G_B7_1 = L_7;
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A * L_10 = ((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_11 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)il2cpp_codegen_object_new(Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC_il2cpp_TypeInfo_var);
		Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C(L_11, (RuntimeObject *)L_10, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)), /*hidden argument*/Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C_RuntimeMethod_var);
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_12 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)L_11;
		((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_0_1(L_12);
		G_B7_0 = L_12;
		G_B7_1 = G_B6_1;
	}

IL_004a:
	{
		bool L_13 = Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5((RuntimeObject*)(RuntimeObject*)G_B7_1, (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)G_B7_0, /*hidden argument*/Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// throw new InvalidProgramException("GetPropertyNames() cannot contain empty value.");
		InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 * L_14 = (InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 *)il2cpp_codegen_object_new(InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m0A6EAC90493AED4549F5980E8110BD56A0E32C7F(L_14, (String_t*)_stringLiteral393F9AC43E8D3C0D64AB7C3F5A3D819491BBD225, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, PartialConverter_1_GetProperties_m99029296D81D6122CD7A6FB5446C24413CB5D66C_RuntimeMethod_var);
	}

IL_005c:
	{
		// _properties = _names.Distinct().ToDictionary((name) => name, (name) => GetMember(name));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_0;
		RuntimeObject* L_16 = Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C((RuntimeObject*)(RuntimeObject*)L_15, /*hidden argument*/Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_17 = ((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_1_2();
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_18 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)L_17;
		G_B10_0 = L_18;
		G_B10_1 = L_16;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A * L_19 = ((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_20 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)il2cpp_codegen_object_new(Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96_il2cpp_TypeInfo_var);
		Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0(L_20, (RuntimeObject *)L_19, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)), /*hidden argument*/Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0_RuntimeMethod_var);
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_21 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)L_20;
		((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_1_2(L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_22 = ((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_2_3();
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_23 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)L_22;
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A * L_24 = ((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_25 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)il2cpp_codegen_object_new(Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA_il2cpp_TypeInfo_var);
		Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852(L_25, (RuntimeObject *)L_24, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)), /*hidden argument*/Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852_RuntimeMethod_var);
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_26 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)L_25;
		((U3CU3Ec_t82188B33C34A4C3C6C5823E2C638EFED5B2E920A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_2_3(L_26);
		G_B13_0 = L_26;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00a0:
	{
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_27 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A((RuntimeObject*)G_B13_2, (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)G_B13_1, (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)G_B13_0, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A_RuntimeMethod_var);
		((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_27);
		// return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_28 = ((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_28;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PartialConverter_1_CreateInstance_m44F89D473E688301E4266265F2979E2452332E0D_gshared (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, const RuntimeMethod* method)
{
	{
		// return Activator.CreateInstance<T>();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_mF41899924B83493D9148FE024A0C2585D8E6D83B_gshared (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_mF41899924B83493D9148FE024A0C2585D8E6D83B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(T) == objectType;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		bool L_3 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m1595E9D6106044534117E0F3FAFC40ACE2CF1A69_gshared (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m1595E9D6106044534117E0F3FAFC40ACE2CF1A69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_0 = ___reader0;
		NullCheck((JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_0);
		if ((!(((uint32_t)((int32_t)11)) == ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		return NULL;
	}

IL_000c:
	{
		// var _object = JObject.Load(reader);
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_2 = ___reader0;
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_3 = JObject_Load_mEC8742E0DC6B16B1C4496B776F40F1D2922E8246((JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_3;
		// var _result = CreateInstance() as object;
		NullCheck((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = VirtFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::CreateInstance() */, (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), &L_5);
		V_1 = (RuntimeObject *)L_6;
		// foreach(var _pair in GetProperties()){
		NullCheck((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this);
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_7 = ((  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * (*) (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_7);
		Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  L_8 = Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC_RuntimeMethod_var);
		V_2 = (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A )L_8;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_002d:
		{
			// foreach(var _pair in GetProperties()){
			KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  L_9 = Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_inline((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_RuntimeMethod_var);
			V_3 = (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 )L_9;
			// var _value = _object[_pair.Key].ToObject(GetValueType(_pair.Value), serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_RuntimeMethod_var);
			NullCheck((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_10);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_12 = JObject_get_Item_mE36F6406690517A4E5C3DC87F76BA34D3FB9E679((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_15 = ___serializer3;
			NullCheck((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m2291B9FBA326FA8C82713218DC9578FEBEA68A7E((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_12, (Type_t *)L_14, (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			// SetValue(_pair.Value, _result, _value);
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		}

IL_0066:
		{
			// foreach(var _pair in GetProperties()){
			bool L_20 = Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_002d;
			}
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A > L_21(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__121 = il2cpp_codegen_get_interface_invoke_data(0, (&L_21), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__121.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__121.method);
		V_2 = L_21.m_Value;
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		// return _result;
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_mD556C6285B88AE89625F4C40817E8F6072253DFA_gshared (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * ___writer0, RuntimeObject * ___value1, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_mD556C6285B88AE89625F4C40817E8F6072253DFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * V_0 = NULL;
	Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var _object = new JObject();
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)il2cpp_codegen_object_new(JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B_il2cpp_TypeInfo_var);
		JObject__ctor_mE19999761FB1AA5208E901A36EF10F5C317427E8(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_0;
		// foreach(var _pair in GetProperties()){
		NullCheck((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this);
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_1 = ((  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * (*) (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_1);
		Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  L_2 = Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC_RuntimeMethod_var);
		V_1 = (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0014:
		{
			// foreach(var _pair in GetProperties()){
			KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  L_3 = Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_inline((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 )L_3;
			// var _value = GetValue(_pair.Value, value);
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			V_3 = (RuntimeObject *)L_6;
			// _object[_pair.Key] = JToken.FromObject(_value, serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_tCCEF558996D47101E43F6436A874C249291581AA_il2cpp_TypeInfo_var);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_11 = JToken_FromObject_mC1734D279F48193B1533F37EB07D483411E55CDC((RuntimeObject *)L_9, (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_7);
			JObject_set_Item_mEC511ED82B87681085F3BAB8A0CB60A2EEA9DCE2((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_7, (String_t*)L_8, (JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_11, /*hidden argument*/NULL);
		}

IL_003e:
		{
			// foreach(var _pair in GetProperties()){
			bool L_12 = Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0014;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A > L_13(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__81 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__81.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__81.method);
		V_1 = L_13.m_Value;
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		// _object.WriteTo(writer);
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_14 = V_0;
		JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * L_15 = ___writer0;
		JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_16 = Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_inline(/*hidden argument*/Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_RuntimeMethod_var);
		NullCheck((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_14);
		VirtActionInvoker2< JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD *, JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* >::Invoke(17 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_14, (JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD *)L_15, (JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A*)L_16);
		// }
		return;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mCD1550EDEEE11C3077F4EE184433CAC87A7EDBA9_gshared (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)__this);
		JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39((JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)__this, /*hidden argument*/NULL);
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
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m62674E30254E2D55DCB227368F795FFF4790897A_gshared (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m62674E30254E2D55DCB227368F795FFF4790897A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		// var _flag = BindingFlags.Instance | BindingFlags.Public;
		V_0 = (int32_t)((int32_t)20);
		// var _field = typeof(T).GetField(name, _flag);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		// if(null != _field) return _field;
		FieldInfo_t * L_5 = V_1;
		bool L_6 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE((FieldInfo_t *)NULL, (FieldInfo_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		// if(null != _field) return _field;
		FieldInfo_t * L_7 = V_1;
		return L_7;
	}

IL_0020:
	{
		// var _property = typeof(T).GetProperty(name, _flag);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___name0;
		int32_t L_11 = V_0;
		NullCheck((Type_t *)L_9);
		PropertyInfo_t * L_12 = Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130((Type_t *)L_9, (String_t*)L_10, (int32_t)L_11, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_12;
		// if(null == _property) Throw(name, "Public instance field or property {0} is not found.");
		PropertyInfo_t * L_13 = V_2;
		bool L_14 = PropertyInfo_op_Equality_m6E3A0B7912D137F6FA5F53756ED260C9831B70ED((PropertyInfo_t *)NULL, (PropertyInfo_t *)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		// if(null == _property) Throw(name, "Public instance field or property {0} is not found.");
		String_t* L_15 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_15, (String_t*)_stringLiteral7264701AA7C4CD862F0B07ABBA5F2C7F635FF231, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0046:
	{
		// if(null == _property.GetGetMethod()) Throw(name, "Property {0} is not readable.");
		PropertyInfo_t * L_16 = V_2;
		NullCheck((PropertyInfo_t *)L_16);
		MethodInfo_t * L_17 = PropertyInfo_GetGetMethod_m90BA90BA1CAFEE1CC273BB8B3BD289890373CB8A((PropertyInfo_t *)L_16, /*hidden argument*/NULL);
		bool L_18 = MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0((MethodInfo_t *)NULL, (MethodInfo_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		// if(null == _property.GetGetMethod()) Throw(name, "Property {0} is not readable.");
		String_t* L_19 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_19, (String_t*)_stringLiteralD0274B12B2586795DECE2C81DB51930E9B839C8C, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_005f:
	{
		// if(null == _property.GetSetMethod()) Throw(name, "Property {0} is not writable.");
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		MethodInfo_t * L_21 = PropertyInfo_GetSetMethod_m275171F734C49C398DC9E9F3970AA798725C7CA9((PropertyInfo_t *)L_20, /*hidden argument*/NULL);
		bool L_22 = MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0((MethodInfo_t *)NULL, (MethodInfo_t *)L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// if(null == _property.GetSetMethod()) Throw(name, "Property {0} is not writable.");
		String_t* L_23 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_23, (String_t*)_stringLiteralDE1DD65CC399E389B77F3F5EEE0585DE3AE1E8F0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0078:
	{
		// if(_property.GetIndexParameters().Any()) Throw(name, "Not support property {0} with indexes.");
		PropertyInfo_t * L_24 = V_2;
		NullCheck((PropertyInfo_t *)L_24);
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_25 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_24);
		bool L_26 = Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB((RuntimeObject*)(RuntimeObject*)L_25, /*hidden argument*/Enumerable_Any_TisParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_m5B83949B5599FEE1BDBFB59264507FBF26AED1CB_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_0090;
		}
	}
	{
		// if(_property.GetIndexParameters().Any()) Throw(name, "Not support property {0} with indexes.");
		String_t* L_27 = ___name0;
		((  void (*) (String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((String_t*)L_27, (String_t*)_stringLiteral3CCF56201D174A2E31BA5BB4AD9861BD5B410A5D, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0090:
	{
		// return _property;
		PropertyInfo_t * L_28 = V_2;
		return L_28;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::Throw(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m0288984DBC3AD263B84331D171B3ED29D9C006A7_gshared (String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m0288984DBC3AD263B84331D171B3ED29D9C006A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new ArgumentException(string.Format(format, typeof(T).Name + "." + name), "name");
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_3, (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, PartialConverter_1_Throw_m0288984DBC3AD263B84331D171B3ED29D9C006A7_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_mF5ADF6A8B7E18703D779475C5DB5861723953457_gshared (MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_mF5ADF6A8B7E18703D779475C5DB5861723953457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).GetValue(target);
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).GetValue(target);
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0015:
	{
		// else return (member as PropertyInfo).GetValue(target, null);
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m1972EF85D3032F9A484659D7BC65AEB819023790_gshared (MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m1972EF85D3032F9A484659D7BC65AEB819023790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) (member as FieldInfo).SetValue(target, value);
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		// if(member is FieldInfo) (member as FieldInfo).SetValue(target, value);
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		// else (member as PropertyInfo).SetValue(target, value, null);
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		// }
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetValueType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m8257593596179CFB62C1423152CE319BAFDD11E3_gshared (MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m8257593596179CFB62C1423152CE319BAFDD11E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).FieldType;
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		// if(member is FieldInfo) return (member as FieldInfo).FieldType;
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0014:
	{
		// else return (member as PropertyInfo).PropertyType;
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * PartialConverter_1_GetProperties_mD4A7A2CD5529D465035C9129FFFA2E7DDD120179_gshared (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_mD4A7A2CD5529D465035C9129FFFA2E7DDD120179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * G_B7_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_1 = NULL;
	Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * G_B6_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_1 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * G_B13_0 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * G_B12_0 = NULL;
	Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	{
		// if(null != _properties) return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_0 = ((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if(null != _properties) return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_1 = ((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_000d:
	{
		// var _names = GetPropertyNames();
		NullCheck((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = VirtFuncInvoker0< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetPropertyNames() */, (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this);
		V_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_2;
		// if(null == _names || !_names.Any())
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0((RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m7EC5968E0E77780784515E2EDB93FDC2105B1CF0_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		// throw new InvalidProgramException("GetPropertyNames() cannot return empty.");
		InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 * L_6 = (InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 *)il2cpp_codegen_object_new(InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m0A6EAC90493AED4549F5980E8110BD56A0E32C7F(L_6, (String_t*)_stringLiteral6D1AFBB48B79D4A81DC5F70E65842D7EC85548A1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, PartialConverter_1_GetProperties_mD4A7A2CD5529D465035C9129FFFA2E7DDD120179_RuntimeMethod_var);
	}

IL_002a:
	{
		// if(_names.Any((name) => string.IsNullOrEmpty(name)))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_8 = ((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_0_1();
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_9 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)L_8;
		G_B6_0 = L_9;
		G_B6_1 = L_7;
		if (L_9)
		{
			G_B7_0 = L_9;
			G_B7_1 = L_7;
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F * L_10 = ((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_11 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)il2cpp_codegen_object_new(Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC_il2cpp_TypeInfo_var);
		Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C(L_11, (RuntimeObject *)L_10, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)), /*hidden argument*/Func_2__ctor_mB73F1255C3B7AF571FEBC8CCA8B4F07AB0B7F35C_RuntimeMethod_var);
		Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC * L_12 = (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)L_11;
		((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_0_1(L_12);
		G_B7_0 = L_12;
		G_B7_1 = G_B6_1;
	}

IL_004a:
	{
		bool L_13 = Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5((RuntimeObject*)(RuntimeObject*)G_B7_1, (Func_2_t79B1536531C1001C63764A83FCC90D7EEF98F8FC *)G_B7_0, /*hidden argument*/Enumerable_Any_TisString_t_m40F572C05D6A19A36FDAE99B42D6D8B1C53D71A5_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// throw new InvalidProgramException("GetPropertyNames() cannot contain empty value.");
		InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 * L_14 = (InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358 *)il2cpp_codegen_object_new(InvalidProgramException_tF3B9678AC1136E8FA85EE6F0069D39578DECB358_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m0A6EAC90493AED4549F5980E8110BD56A0E32C7F(L_14, (String_t*)_stringLiteral393F9AC43E8D3C0D64AB7C3F5A3D819491BBD225, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, PartialConverter_1_GetProperties_mD4A7A2CD5529D465035C9129FFFA2E7DDD120179_RuntimeMethod_var);
	}

IL_005c:
	{
		// _properties = _names.Distinct().ToDictionary((name) => name, (name) => GetMember(name));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_0;
		RuntimeObject* L_16 = Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C((RuntimeObject*)(RuntimeObject*)L_15, /*hidden argument*/Enumerable_Distinct_TisString_t_m9C07FBED4E5F587253BFE8A9F8567BF01D59392C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_17 = ((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_1_2();
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_18 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)L_17;
		G_B10_0 = L_18;
		G_B10_1 = L_16;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F * L_19 = ((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_20 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)il2cpp_codegen_object_new(Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96_il2cpp_TypeInfo_var);
		Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0(L_20, (RuntimeObject *)L_19, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)), /*hidden argument*/Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0_RuntimeMethod_var);
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_21 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)L_20;
		((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_1_2(L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_22 = ((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9__6_2_3();
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_23 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)L_22;
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F * L_24 = ((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_U3CU3E9_0();
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_25 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)il2cpp_codegen_object_new(Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA_il2cpp_TypeInfo_var);
		Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852(L_25, (RuntimeObject *)L_24, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)), /*hidden argument*/Func_2__ctor_m8439D31C9A8DE61926ECA2D96D93308B4356C852_RuntimeMethod_var);
		Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA * L_26 = (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)L_25;
		((U3CU3Ec_t3F99ADB36482750AEE3483C9382EF7D58C1A447F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->set_U3CU3E9__6_2_3(L_26);
		G_B13_0 = L_26;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00a0:
	{
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_27 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A((RuntimeObject*)G_B13_2, (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)G_B13_1, (Func_2_t64AE3AFE134936151F32DF2F0ED185D80D0588FA *)G_B13_0, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m485DB65902F7E9F98486ACA0A810758818B1C65A_RuntimeMethod_var);
		((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_27);
		// return _properties;
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_28 = ((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_28;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  PartialConverter_1_CreateInstance_mA3374CC471A018D6A9B24361203602D6E887C536_gshared (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, const RuntimeMethod* method)
{
	{
		// return Activator.CreateInstance<T>();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m0E880DE44DE4BAF385539DAA2C13FFAEA6BB74ED_gshared (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m0E880DE44DE4BAF385539DAA2C13FFAEA6BB74ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(T) == objectType;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		bool L_3 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_mCDF9B0FA515BAE2EB0546E840DEE5990126F47D4_gshared (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_mCDF9B0FA515BAE2EB0546E840DEE5990126F47D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_0 = ___reader0;
		NullCheck((JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_0);
		if ((!(((uint32_t)((int32_t)11)) == ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		return NULL;
	}

IL_000c:
	{
		// var _object = JObject.Load(reader);
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_2 = ___reader0;
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_3 = JObject_Load_mEC8742E0DC6B16B1C4496B776F40F1D2922E8246((JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_3;
		// var _result = CreateInstance() as object;
		NullCheck((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = VirtFuncInvoker0< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::CreateInstance() */, (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), &L_5);
		V_1 = (RuntimeObject *)L_6;
		// foreach(var _pair in GetProperties()){
		NullCheck((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this);
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_7 = ((  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * (*) (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_7);
		Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  L_8 = Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC_RuntimeMethod_var);
		V_2 = (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A )L_8;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_002d:
		{
			// foreach(var _pair in GetProperties()){
			KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  L_9 = Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_inline((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_RuntimeMethod_var);
			V_3 = (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 )L_9;
			// var _value = _object[_pair.Key].ToObject(GetValueType(_pair.Value), serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_RuntimeMethod_var);
			NullCheck((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_10);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_12 = JObject_get_Item_mE36F6406690517A4E5C3DC87F76BA34D3FB9E679((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_15 = ___serializer3;
			NullCheck((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m2291B9FBA326FA8C82713218DC9578FEBEA68A7E((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_12, (Type_t *)L_14, (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			// SetValue(_pair.Value, _result, _value);
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		}

IL_0066:
		{
			// foreach(var _pair in GetProperties()){
			bool L_20 = Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_002d;
			}
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A > L_21(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__121 = il2cpp_codegen_get_interface_invoke_data(0, (&L_21), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__121.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__121.method);
		V_2 = L_21.m_Value;
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		// return _result;
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m032ACBF72B9859683023D4146511F5811F9630EE_gshared (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * ___writer0, RuntimeObject * ___value1, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m032ACBF72B9859683023D4146511F5811F9630EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * V_0 = NULL;
	Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var _object = new JObject();
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)il2cpp_codegen_object_new(JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B_il2cpp_TypeInfo_var);
		JObject__ctor_mE19999761FB1AA5208E901A36EF10F5C317427E8(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_0;
		// foreach(var _pair in GetProperties()){
		NullCheck((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this);
		Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * L_1 = ((  Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * (*) (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_1);
		Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A  L_2 = Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC((Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mA83C79884F59B35E280A3C221054F8734920C0EC_RuntimeMethod_var);
		V_1 = (Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0014:
		{
			// foreach(var _pair in GetProperties()){
			KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89  L_3 = Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_inline((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m517E9651FBEE368B7B92EB2B5099DEFD0298B71F_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 )L_3;
			// var _value = GetValue(_pair.Value, value);
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m4D1E1EBF1D555770F46151A37452AB74BB8FD962_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			V_3 = (RuntimeObject *)L_6;
			// _object[_pair.Key] = JToken.FromObject(_value, serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_inline((KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(KeyValuePair_2_tD54DC2652388F03090CDD8A01B67526717D09A89 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mD51FA5E961A395E52A7E24F1A759D2F95FE92848_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_tCCEF558996D47101E43F6436A874C249291581AA_il2cpp_TypeInfo_var);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_11 = JToken_FromObject_mC1734D279F48193B1533F37EB07D483411E55CDC((RuntimeObject *)L_9, (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_7);
			JObject_set_Item_mEC511ED82B87681085F3BAB8A0CB60A2EEA9DCE2((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)L_7, (String_t*)L_8, (JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_11, /*hidden argument*/NULL);
		}

IL_003e:
		{
			// foreach(var _pair in GetProperties()){
			bool L_12 = Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361((Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m032F376BF3968527AC1471EF11DA1CBBCA045361_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0014;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A > L_13(Enumerator_tCF6C6BA5CF7F628F5B324A9D2F2AF98079BA8A1A_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__81 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__81.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__81.method);
		V_1 = L_13.m_Value;
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		// _object.WriteTo(writer);
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_14 = V_0;
		JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * L_15 = ___writer0;
		JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_16 = Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_inline(/*hidden argument*/Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_RuntimeMethod_var);
		NullCheck((JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_14);
		VirtActionInvoker2< JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD *, JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* >::Invoke(17 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_tCCEF558996D47101E43F6436A874C249291581AA *)L_14, (JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD *)L_15, (JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A*)L_16);
		// }
		return;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mDD71AFDCDB3CB80754933AFA0A0AF09C977B9127_gshared (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)__this);
		JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39((JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
