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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A;
// Newtonsoft.Json.Converters.VersionConverter
struct VersionConverter_tB64F83C5B06ACAD56A7816808F9A7D5263B31620;
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
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379;
// Newtonsoft.Json.Linq.JArray
struct JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F;
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
// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.JsonConverter>
struct IEnumerable_1_t53B424467875155AB7EAA9F93A68861A6CF77E80;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_tBFDC7AB9303FD887DBCCC85A53C8B5CAC97D3FB2;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tF9225691990EF9799D9F4B64E4063CA0D1DF03CA;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_tA4DECCED36304D818872949F592A9B1849A50CF0;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t165712406B86D15508A99C58D0EC21AC02D10AA3;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerable
struct IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C;
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
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF;
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>
struct Func_2_tCB518672A3846C817A36680C0A6D733545EB5098;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t122180C7631A517B0F4BF97E5754C5F998E8923D;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D;
// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC;
// System.Func`2<System.String,System.String>
struct Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96;
// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>
struct Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tE01B4A8AFBEC69451581E8278BF47FE9B86A8AA7;
// System.Linq.IOrderedEnumerable`1<System.Type>
struct IOrderedEnumerable_1_tE98BA2E8E92E135299E0B1E03944FCAC7FD84758;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityARImageFrameData
struct UnityARImageFrameData_t5075892CD19575235557649B97D39B5D0BF1FD6A;
// WanzyeeStudio.Json.BoundsConverter
struct BoundsConverter_t92907FB8154CDA2C64CB9B56D000A9358E821AE0;
// WanzyeeStudio.Json.ColorConverter
struct ColorConverter_t55430F3834F9BBBD88C7A823E6C78D28DE2829BB;
// WanzyeeStudio.Json.DictionaryConverter
struct DictionaryConverter_t4D7D1BFCF983EF3DC7143470C3D72CF22E09102E;
// WanzyeeStudio.Json.Matrix4x4Converter
struct Matrix4x4Converter_t5E721FFAB92E3F414A4277E038A3DD25165A8F97;
// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27;
// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116;
// WanzyeeStudio.Json.PartialConverter`1<System.Object>
struct PartialConverter_1_tE0C2DA0384680325FE4F0ABDBD5B1624CAB2DD8C;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>
struct PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>
struct PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>
struct PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>
struct PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>
struct PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>
struct PartialConverter_1_tBFA8FE38917910CF52D2E7363D5B8AC008E46946;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50;
// WanzyeeStudio.Json.QuaternionConverter
struct QuaternionConverter_tEA45C3212AA21038AF0C51103735F8272110175E;
// WanzyeeStudio.Json.RectConverter
struct RectConverter_t976F3C79BF49AA404132CD3E23D702EE2EC025B6;
// WanzyeeStudio.Json.RectOffsetConverter
struct RectOffsetConverter_tBE02621D4669019617E62E647DB810016D1C8A32;
// WanzyeeStudio.Json.Vector2Converter
struct Vector2Converter_t2630B667279B95581B1EEDC0FFA23A5A9952F035;
// WanzyeeStudio.Json.Vector3Converter
struct Vector3Converter_t6EAAE842EDBF4951527B4C3AF592DDCE1C312605;
// WanzyeeStudio.Json.Vector4Converter
struct Vector4Converter_t2035BB67DCC120A95AB1874FE08203AE315C0107;
// WanzyeeStudio.JsonNetUtility/<>c
struct U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050;

IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCB518672A3846C817A36680C0A6D733545EB5098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA4DECCED36304D818872949F592A9B1849A50CF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VersionConverter_tB64F83C5B06ACAD56A7816808F9A7D5263B31620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072;
IL2CPP_EXTERN_C String_t* _stringLiteral12C0F1FBADC4046B5F2BB9E063B227EF8750D9D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2BBD3C122811B04F27A54F0CED11E01D5D088DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral305047E96EC089021660EE5965F893AC80268731;
IL2CPP_EXTERN_C String_t* _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB;
IL2CPP_EXTERN_C String_t* _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA;
IL2CPP_EXTERN_C String_t* _stringLiteral4DC7C9EC434ED06502767136789763EC11D2C4B7;
IL2CPP_EXTERN_C String_t* _stringLiteral54FD1711209FB1C0781092374132C66E79E2241B;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0D31C0D563223024DA45691584643AC78C96E8;
IL2CPP_EXTERN_C String_t* _stringLiteral70BEC8A9BF5ECD2E6B37316E112B3F4C615AD4D3;
IL2CPP_EXTERN_C String_t* _stringLiteral73E7E545C519A38F0AEC9E72DF51F8BA169DB34D;
IL2CPP_EXTERN_C String_t* _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB;
IL2CPP_EXTERN_C String_t* _stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCE170DE238B1FEDA2ECD9674EA3CA0D068FBCB;
IL2CPP_EXTERN_C String_t* _stringLiteral920334256608967FE032FB31263D7097FC4EE992;
IL2CPP_EXTERN_C String_t* _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A;
IL2CPP_EXTERN_C String_t* _stringLiteralAF2C7B4CA07AE6C74D261BC745E174DF8AB3FFEF;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralC03E9099AAD17CB58E4FFF1D93D751105735C9C2;
IL2CPP_EXTERN_C String_t* _stringLiteralC67DD20EE842986086A0A915DDC2A279490130ED;
IL2CPP_EXTERN_C String_t* _stringLiteralD27A1F11771200949714B1AF99F048A416F5D6F4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0;
IL2CPP_EXTERN_C String_t* _stringLiteralDBC111AA56F12053858945E86BAC94EA99AA2F08;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D71F5EE7C92D6DC9E92FFDAD17B8BD49418F98;
IL2CPP_EXTERN_C String_t* _stringLiteralEAE2F266BB8A4F50AC24ECD15B9AA77C631A8211;
IL2CPP_EXTERN_C String_t* _stringLiteralF523F7BE60471F1025BFABC98268AC65AF17A1A5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisRuntimeObject_mD644C007EE34FDD5F361213B076C87A6FF074F6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m523F28B1DD6EC8C6F112F3D2027C8117B16694FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisType_t_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m70070A6A01E35CF0B7720998DDB9503F9B70D0D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1548E6D478C5DD0AC4F0D888CD3259AE03B3C7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisString_t_TisString_t_mD3846E18FD81C3C14A2A798E705A7B96281B85C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_mFCB35DFD3FDBF1638A2E4069EB65634703E36ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m8AFBD07972960EF0CB639DD369E2584DE7939678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_m4FD117803FF797C740AD3EC830C41070D6FF0A43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_mA18EE5F6E6CE07FBCFD06721338547CC51D44DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m3E7B177AB63079E1591157126CB489AFDBA65108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m2419C583B70A0644F1D3F3FEC6B9F97D4F8935DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0F843B165F1FA493C2A355B28394DC78AA6DF90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4C6CCC4E9406C7DDEF293C253E610C0132CED1BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m5955683D64AA943480E08C2D22A6E22E008A5654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBAD1A2A2A6C5FB6286DB22F7752228A072E4D474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m2688888FF2E972E21530CE58566058C3BEC1C22C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m4DDE1EC9F2EAB6DB75F72ED5B3164DCECA1C8A5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m7FF02D3B379C5D32E81C7F6874F93F67BE9644AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m8B6F2BBF40E8C112D39635F6D07B7BF9ABCA4E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m91C61FF6D1A73C3949CE24E5DDE9EB5F68493789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_mB585FAB2771EA4242DF3E55C253F857DFC0DE67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_mCD1550EDEEE11C3077F4EE184433CAC87A7EDBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_mDD71AFDCDB3CB80754933AFA0A0AF09C977B9127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_mE339E8049D3942D55A57D8D94451054C3B24A173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m7215399F81DC1BD8C80FAD229FD50D6606728951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateConvertersU3Eb__2_1_m74C80667076D17B07DB08BA255707AAF19F7E256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_0_mF8C1C555438384B77F467B99F141B195FB606115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_m17AC0DDBB9C8B80349C4CFFC644E8D538BCD73CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_2_mEDB47F4CA501E57C5F080A67FB9BE855A03033DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m95C9FF676F3EEC907E9BC92BF1A91568D3A3EB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_mD61CA9DA00FFA79177A20677DD413DC368C0BC17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m35528832404A8F9CC2D354EFE43FBF2397DFB2AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeU3Eb__1_0_m13F11664D8DA44DFCE1C16F5604FA9F772DD79FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m46CCBA38324658C54D23C6A6224C030D1574CFBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_mEB90724AB231044853006230C2A6362E4299CF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tC3B7C172F472D2372732454922AB169C38E69CE9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t422C090F714C36DDE0089AF96A98CBE6FC11EA06_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BoundsConverter_GetPropertyNames_m151E30E2758C3F980E9ECFD6A2D3B886A7923EE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoundsConverter__ctor_m097FA699C775AC6D163E6258358C0EFD7E6B6D75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColorConverter_GetPropertyNames_m1A41DFBFF458D384C8D834445BF8B5E10CEBBAEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColorConverter__ctor_mBB4F910A0DECEA7D863839149D8A6B23D4D774AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictionaryConverter_CanConvert_m0ED5AB6E04476DBDF854C36DBA8D9C1B73F76528_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictionaryConverter_ReadJson_m12664B51E2D981974094A5ABE433DB8BF38850D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictionaryConverter_WriteJson_m6A7AB5266B1654499073F504F8F1A777764947D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonConvert_get_DefaultSettings_m0A64E186CBB25F5486691EE798D56712E9F807BBAssemblyU2DCSharp1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonConvert_set_DefaultSettings_mC4733AB6E76271501E1A0A9EF49DDD66BAE52904AssemblyU2DCSharp1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonNetUtility_CreateConverter_m45216D8A3CB93723832DE0755E5D9AD3E59C4804_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonNetUtility_CreateConverters_m1ED94579A6BEF0C43EE64C8E4D39838188F24734_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonNetUtility_FindConverterTypes_m53E064B2B355156B6BBD939D0799AB278C0F3A65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonNetUtility_Initialize_m38B6895657DB0B03DEE5923BE28EE2F4484EB778_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonNetUtility__cctor_m39D7B7D870817CFB3D14DD8E52461EBD54BB3CB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Matrix4x4Converter_GetPropertyNames_m43C12B95B3655761A6EEE9AE2002C069D50EB8E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Matrix4x4Converter__ctor_m8965BECD9C3C051DA68677A354DBCC2A409D4FA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuaternionConverter_GetPropertyNames_m086F37D9B1E7679C3A7E91AF1453C14978FF5BAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuaternionConverter__ctor_mEB36056BFE463A68D8FB7ECEC638396A4D190C07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RectConverter_GetPropertyNames_m8B2B4CC8371461F10EE22C591198783F44C3CD0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RectConverter__ctor_m0B4E360A2B9A3B79D27BA1E969691288EDD342D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RectOffsetConverter_GetPropertyNames_mA82A5BC168EBFD7BA759E848F287E3D9655BD934_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RectOffsetConverter__ctor_mD1320D49FDD19E113C5EC8B1CB3BE442B6FBC48E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m7215399F81DC1BD8C80FAD229FD50D6606728951_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_m17AC0DDBB9C8B80349C4CFFC644E8D538BCD73CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m95C9FF676F3EEC907E9BC92BF1A91568D3A3EB2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_mD61CA9DA00FFA79177A20677DD413DC368C0BC17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m35528832404A8F9CC2D354EFE43FBF2397DFB2AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CInitializeU3Eb__1_0_m13F11664D8DA44DFCE1C16F5604FA9F772DD79FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m46CCBA38324658C54D23C6A6224C030D1574CFBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_mEB90724AB231044853006230C2A6362E4299CF00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m82CB7C9DEA257CBA40DDFF79031F73AEAE5A2F6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2Converter_GetPropertyNames_m3D1AF86E84FC1682C0749137022357506032576B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2Converter__ctor_m700A453515A3BBCE594BB2BCFBEBD37D6DDF758E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3Converter_GetPropertyNames_m509FD9E9754FAD3B9FDF8BB4D7620F8366555F92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3Converter__ctor_mCE9C923A0D7AF77BD8333D78ACCF2F2213858E23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4Converter_GetPropertyNames_m3039C9803594BEE1D7D47E7A41F68C1524D276CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4Converter__ctor_m94A7EA991A777A0BDC3A8DE6419C384D9EA83C6F_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Newtonsoft.Json.JsonConvert
struct  JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542  : public RuntimeObject
{
public:

public:
};

struct JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields
{
public:
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::<DefaultSettings>k__BackingField
	Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * ___U3CDefaultSettingsU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.JsonConvert::True
	String_t* ___True_1;
	// System.String Newtonsoft.Json.JsonConvert::False
	String_t* ___False_2;
	// System.String Newtonsoft.Json.JsonConvert::Null
	String_t* ___Null_3;
	// System.String Newtonsoft.Json.JsonConvert::Undefined
	String_t* ___Undefined_4;
	// System.String Newtonsoft.Json.JsonConvert::PositiveInfinity
	String_t* ___PositiveInfinity_5;
	// System.String Newtonsoft.Json.JsonConvert::NegativeInfinity
	String_t* ___NegativeInfinity_6;
	// System.String Newtonsoft.Json.JsonConvert::NaN
	String_t* ___NaN_7;

public:
	inline static int32_t get_offset_of_U3CDefaultSettingsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___U3CDefaultSettingsU3Ek__BackingField_0)); }
	inline Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * get_U3CDefaultSettingsU3Ek__BackingField_0() const { return ___U3CDefaultSettingsU3Ek__BackingField_0; }
	inline Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 ** get_address_of_U3CDefaultSettingsU3Ek__BackingField_0() { return &___U3CDefaultSettingsU3Ek__BackingField_0; }
	inline void set_U3CDefaultSettingsU3Ek__BackingField_0(Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * value)
	{
		___U3CDefaultSettingsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultSettingsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_True_1() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___True_1)); }
	inline String_t* get_True_1() const { return ___True_1; }
	inline String_t** get_address_of_True_1() { return &___True_1; }
	inline void set_True_1(String_t* value)
	{
		___True_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___True_1), (void*)value);
	}

	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___False_2)); }
	inline String_t* get_False_2() const { return ___False_2; }
	inline String_t** get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(String_t* value)
	{
		___False_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___False_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___Null_3)); }
	inline String_t* get_Null_3() const { return ___Null_3; }
	inline String_t** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(String_t* value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}

	inline static int32_t get_offset_of_Undefined_4() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___Undefined_4)); }
	inline String_t* get_Undefined_4() const { return ___Undefined_4; }
	inline String_t** get_address_of_Undefined_4() { return &___Undefined_4; }
	inline void set_Undefined_4(String_t* value)
	{
		___Undefined_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Undefined_4), (void*)value);
	}

	inline static int32_t get_offset_of_PositiveInfinity_5() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___PositiveInfinity_5)); }
	inline String_t* get_PositiveInfinity_5() const { return ___PositiveInfinity_5; }
	inline String_t** get_address_of_PositiveInfinity_5() { return &___PositiveInfinity_5; }
	inline void set_PositiveInfinity_5(String_t* value)
	{
		___PositiveInfinity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositiveInfinity_5), (void*)value);
	}

	inline static int32_t get_offset_of_NegativeInfinity_6() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___NegativeInfinity_6)); }
	inline String_t* get_NegativeInfinity_6() const { return ___NegativeInfinity_6; }
	inline String_t** get_address_of_NegativeInfinity_6() { return &___NegativeInfinity_6; }
	inline void set_NegativeInfinity_6(String_t* value)
	{
		___NegativeInfinity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NegativeInfinity_6), (void*)value);
	}

	inline static int32_t get_offset_of_NaN_7() { return static_cast<int32_t>(offsetof(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields, ___NaN_7)); }
	inline String_t* get_NaN_7() const { return ___NaN_7; }
	inline String_t** get_address_of_NaN_7() { return &___NaN_7; }
	inline void set_NaN_7(String_t* value)
	{
		___NaN_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NaN_7), (void*)value);
	}
};


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


// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct  List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2, ____items_1)); }
	inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* get__items_1() const { return ____items_1; }
	inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2_StaticFields, ____emptyArray_5)); }
	inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27  : public RuntimeObject
{
public:
	// System.String[] WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_0::_indexes
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____indexes_0;

public:
	inline static int32_t get_offset_of__indexes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27, ____indexes_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__indexes_0() const { return ____indexes_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__indexes_0() { return &____indexes_0; }
	inline void set__indexes_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____indexes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexes_0), (void*)value);
	}
};


// WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_1
struct  U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116  : public RuntimeObject
{
public:
	// System.String WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_1::row
	String_t* ___row_0;

public:
	inline static int32_t get_offset_of_row_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116, ___row_0)); }
	inline String_t* get_row_0() const { return ___row_0; }
	inline String_t** get_address_of_row_0() { return &___row_0; }
	inline void set_row_0(String_t* value)
	{
		___row_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___row_0), (void*)value);
	}
};


// WanzyeeStudio.JsonNetUtility
struct  JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58  : public RuntimeObject
{
public:

public:
};

struct JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_StaticFields
{
public:
	// Newtonsoft.Json.JsonSerializerSettings WanzyeeStudio.JsonNetUtility::defaultSettings
	JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * ___defaultSettings_0;

public:
	inline static int32_t get_offset_of_defaultSettings_0() { return static_cast<int32_t>(offsetof(JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_StaticFields, ___defaultSettings_0)); }
	inline JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * get_defaultSettings_0() const { return ___defaultSettings_0; }
	inline JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 ** get_address_of_defaultSettings_0() { return &___defaultSettings_0; }
	inline void set_defaultSettings_0(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * value)
	{
		___defaultSettings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSettings_0), (void*)value);
	}
};


// WanzyeeStudio.JsonNetUtility_<>c
struct  U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields
{
public:
	// WanzyeeStudio.JsonNetUtility_<>c WanzyeeStudio.JsonNetUtility_<>c::<>9
	U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * ___U3CU3E9_0;
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> WanzyeeStudio.JsonNetUtility_<>c::<>9__1_0
	Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * ___U3CU3E9__1_0_1;
	// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter> WanzyeeStudio.JsonNetUtility_<>c::<>9__2_0
	Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * ___U3CU3E9__2_0_2;
	// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean> WanzyeeStudio.JsonNetUtility_<>c::<>9__2_1
	Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * ___U3CU3E9__2_1_3;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> WanzyeeStudio.JsonNetUtility_<>c::<>9__4_0
	Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * ___U3CU3E9__4_0_4;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.JsonNetUtility_<>c::<>9__4_1
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * ___U3CU3E9__4_1_5;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.JsonNetUtility_<>c::<>9__4_2
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * ___U3CU3E9__4_2_6;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.JsonNetUtility_<>c::<>9__4_3
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * ___U3CU3E9__4_3_7;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.JsonNetUtility_<>c::<>9__4_4
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * ___U3CU3E9__4_4_8;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.JsonNetUtility_<>c::<>9__4_5
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * ___U3CU3E9__4_5_9;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__2_0_2)); }
	inline Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * get_U3CU3E9__2_0_2() const { return ___U3CU3E9__2_0_2; }
	inline Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE ** get_address_of_U3CU3E9__2_0_2() { return &___U3CU3E9__2_0_2; }
	inline void set_U3CU3E9__2_0_2(Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * value)
	{
		___U3CU3E9__2_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__2_1_3)); }
	inline Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * get_U3CU3E9__2_1_3() const { return ___U3CU3E9__2_1_3; }
	inline Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 ** get_address_of_U3CU3E9__2_1_3() { return &___U3CU3E9__2_1_3; }
	inline void set_U3CU3E9__2_1_3(Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * value)
	{
		___U3CU3E9__2_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__4_0_4)); }
	inline Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * get_U3CU3E9__4_0_4() const { return ___U3CU3E9__4_0_4; }
	inline Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D ** get_address_of_U3CU3E9__4_0_4() { return &___U3CU3E9__4_0_4; }
	inline void set_U3CU3E9__4_0_4(Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * value)
	{
		___U3CU3E9__4_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__4_1_5)); }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * get_U3CU3E9__4_1_5() const { return ___U3CU3E9__4_1_5; }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 ** get_address_of_U3CU3E9__4_1_5() { return &___U3CU3E9__4_1_5; }
	inline void set_U3CU3E9__4_1_5(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * value)
	{
		___U3CU3E9__4_1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_2_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__4_2_6)); }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * get_U3CU3E9__4_2_6() const { return ___U3CU3E9__4_2_6; }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 ** get_address_of_U3CU3E9__4_2_6() { return &___U3CU3E9__4_2_6; }
	inline void set_U3CU3E9__4_2_6(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * value)
	{
		___U3CU3E9__4_2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_3_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__4_3_7)); }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * get_U3CU3E9__4_3_7() const { return ___U3CU3E9__4_3_7; }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 ** get_address_of_U3CU3E9__4_3_7() { return &___U3CU3E9__4_3_7; }
	inline void set_U3CU3E9__4_3_7(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * value)
	{
		___U3CU3E9__4_3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_4_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__4_4_8)); }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * get_U3CU3E9__4_4_8() const { return ___U3CU3E9__4_4_8; }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 ** get_address_of_U3CU3E9__4_4_8() { return &___U3CU3E9__4_4_8; }
	inline void set_U3CU3E9__4_4_8(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * value)
	{
		___U3CU3E9__4_4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_5_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields, ___U3CU3E9__4_5_9)); }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * get_U3CU3E9__4_5_9() const { return ___U3CU3E9__4_5_9; }
	inline Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 ** get_address_of_U3CU3E9__4_5_9() { return &___U3CU3E9__4_5_9; }
	inline void set_U3CU3E9__4_5_9(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * value)
	{
		___U3CU3E9__4_5_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_5_9), (void*)value);
	}
};


// Newtonsoft.Json.Converters.StringEnumConverter
struct  StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<CamelCaseText>k__BackingField
	bool ___U3CCamelCaseTextU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<AllowIntegerValues>k__BackingField
	bool ___U3CAllowIntegerValuesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCamelCaseTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A, ___U3CCamelCaseTextU3Ek__BackingField_0)); }
	inline bool get_U3CCamelCaseTextU3Ek__BackingField_0() const { return ___U3CCamelCaseTextU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CCamelCaseTextU3Ek__BackingField_0() { return &___U3CCamelCaseTextU3Ek__BackingField_0; }
	inline void set_U3CCamelCaseTextU3Ek__BackingField_0(bool value)
	{
		___U3CCamelCaseTextU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAllowIntegerValuesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A, ___U3CAllowIntegerValuesU3Ek__BackingField_1)); }
	inline bool get_U3CAllowIntegerValuesU3Ek__BackingField_1() const { return ___U3CAllowIntegerValuesU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAllowIntegerValuesU3Ek__BackingField_1() { return &___U3CAllowIntegerValuesU3Ek__BackingField_1; }
	inline void set_U3CAllowIntegerValuesU3Ek__BackingField_1(bool value)
	{
		___U3CAllowIntegerValuesU3Ek__BackingField_1 = value;
	}
};


// Newtonsoft.Json.Converters.VersionConverter
struct  VersionConverter_tB64F83C5B06ACAD56A7816808F9A7D5263B31620  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
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


// WanzyeeStudio.Json.DictionaryConverter
struct  DictionaryConverter_t4D7D1BFCF983EF3DC7143470C3D72CF22E09102E  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>
struct  PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>
struct  PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>
struct  PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>
struct  PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>
struct  PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
	}
};


// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>
struct  PartialConverter_1_tBFA8FE38917910CF52D2E7363D5B8AC008E46946  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};

struct PartialConverter_1_tBFA8FE38917910CF52D2E7363D5B8AC008E46946_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_tBFA8FE38917910CF52D2E7363D5B8AC008E46946_StaticFields, ____properties_0)); }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_tB1C6598E84BA3EF1EAE846C5888EEA560BC59E1D * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_0), (void*)value);
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


// Newtonsoft.Json.Linq.JArray
struct  JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F  : public JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B * ____values_16;

public:
	inline static int32_t get_offset_of__values_16() { return static_cast<int32_t>(offsetof(JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F, ____values_16)); }
	inline List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B * get__values_16() const { return ____values_16; }
	inline List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B ** get_address_of__values_16() { return &____values_16; }
	inline void set__values_16(List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B * value)
	{
		____values_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_16), (void*)value);
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


// System.AppDomain
struct  AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___DomainUnload_13)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ProcessExit_14)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___TypeResolve_16)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___FirstChanceException_18)); }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___compatibility_switch_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
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

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
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


// UnityARImageFrameData_UnityARImage
struct  UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42 
{
public:
	// System.IntPtr UnityARImageFrameData_UnityARImage::data
	intptr_t ___data_0;
	// System.UInt64 UnityARImageFrameData_UnityARImage::width
	uint64_t ___width_1;
	// System.UInt64 UnityARImageFrameData_UnityARImage::height
	uint64_t ___height_2;
	// System.UInt64 UnityARImageFrameData_UnityARImage::stride
	uint64_t ___stride_3;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42, ___width_1)); }
	inline uint64_t get_width_1() const { return ___width_1; }
	inline uint64_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(uint64_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42, ___height_2)); }
	inline uint64_t get_height_2() const { return ___height_2; }
	inline uint64_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(uint64_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42, ___stride_3)); }
	inline uint64_t get_stride_3() const { return ___stride_3; }
	inline uint64_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(uint64_t value)
	{
		___stride_3 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// WanzyeeStudio.Json.BoundsConverter
struct  BoundsConverter_t92907FB8154CDA2C64CB9B56D000A9358E821AE0  : public PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9
{
public:

public:
};


// WanzyeeStudio.Json.ColorConverter
struct  ColorConverter_t55430F3834F9BBBD88C7A823E6C78D28DE2829BB  : public PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822
{
public:

public:
};


// WanzyeeStudio.Json.Matrix4x4Converter
struct  Matrix4x4Converter_t5E721FFAB92E3F414A4277E038A3DD25165A8F97  : public PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64
{
public:

public:
};


// WanzyeeStudio.Json.QuaternionConverter
struct  QuaternionConverter_tEA45C3212AA21038AF0C51103735F8272110175E  : public PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A
{
public:

public:
};


// WanzyeeStudio.Json.RectConverter
struct  RectConverter_t976F3C79BF49AA404132CD3E23D702EE2EC025B6  : public PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576
{
public:

public:
};


// WanzyeeStudio.Json.RectOffsetConverter
struct  RectOffsetConverter_tBE02621D4669019617E62E647DB810016D1C8A32  : public PartialConverter_1_tBFA8FE38917910CF52D2E7363D5B8AC008E46946
{
public:

public:
};


// WanzyeeStudio.Json.Vector2Converter
struct  Vector2Converter_t2630B667279B95581B1EEDC0FFA23A5A9952F035  : public PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8
{
public:

public:
};


// WanzyeeStudio.Json.Vector3Converter
struct  Vector3Converter_t6EAAE842EDBF4951527B4C3AF592DDCE1C312605  : public PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53
{
public:

public:
};


// WanzyeeStudio.Json.Vector4Converter
struct  Vector4Converter_t2035BB67DCC120A95AB1874FE08203AE315C0107  : public PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50
{
public:

public:
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

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct  Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct  Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6, ___has_value_1)); }
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


// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct  Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct  Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct  Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct  Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct  Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct  Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23, ___has_value_1)); }
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


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct  Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
struct  Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// UnityARImageFrameData
struct  UnityARImageFrameData_t5075892CD19575235557649B97D39B5D0BF1FD6A  : public RuntimeObject
{
public:
	// UnityARImageFrameData_UnityARImage UnityARImageFrameData::y
	UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42  ___y_0;
	// UnityARImageFrameData_UnityARImage UnityARImageFrameData::vu
	UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42  ___vu_1;

public:
	inline static int32_t get_offset_of_y_0() { return static_cast<int32_t>(offsetof(UnityARImageFrameData_t5075892CD19575235557649B97D39B5D0BF1FD6A, ___y_0)); }
	inline UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42  get_y_0() const { return ___y_0; }
	inline UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42 * get_address_of_y_0() { return &___y_0; }
	inline void set_y_0(UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42  value)
	{
		___y_0 = value;
	}

	inline static int32_t get_offset_of_vu_1() { return static_cast<int32_t>(offsetof(UnityARImageFrameData_t5075892CD19575235557649B97D39B5D0BF1FD6A, ___vu_1)); }
	inline UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42  get_vu_1() const { return ___vu_1; }
	inline UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42 * get_address_of_vu_1() { return &___vu_1; }
	inline void set_vu_1(UnityARImage_tE5486A7050FFB459D05934607F6AA93A36342B42  value)
	{
		___vu_1 = value;
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


// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct  Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>
struct  Func_2_tCB518672A3846C817A36680C0A6D733545EB5098  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct  Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>
struct  Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC  : public MulticastDelegate_t
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


// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>
struct  Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.Boolean>
struct  Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct  Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8 
{
public:
	// T System.Nullable`1::value
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8, ___value_0)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get_value_0() const { return ___value_0; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonSerializerSettings
struct  JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormat
	Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74  ____typeNameAssemblyFormat_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C  ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544  ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8  ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540  ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783  ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_28;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 * ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_30;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializerSettings::<Binder>k__BackingField
	SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * ___U3CBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * ___U3CErrorU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__formatting_2() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____formatting_2)); }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  get__formatting_2() const { return ____formatting_2; }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154 * get_address_of__formatting_2() { return &____formatting_2; }
	inline void set__formatting_2(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  value)
	{
		____formatting_2 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateFormatHandling_3)); }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  get__dateFormatHandling_3() const { return ____dateFormatHandling_3; }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41 * get_address_of__dateFormatHandling_3() { return &____dateFormatHandling_3; }
	inline void set__dateFormatHandling_3(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  value)
	{
		____dateFormatHandling_3 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateTimeZoneHandling_4)); }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  get__dateTimeZoneHandling_4() const { return ____dateTimeZoneHandling_4; }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1 * get_address_of__dateTimeZoneHandling_4() { return &____dateTimeZoneHandling_4; }
	inline void set__dateTimeZoneHandling_4(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  value)
	{
		____dateTimeZoneHandling_4 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateParseHandling_5)); }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  get__dateParseHandling_5() const { return ____dateParseHandling_5; }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99 * get_address_of__dateParseHandling_5() { return &____dateParseHandling_5; }
	inline void set__dateParseHandling_5(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  value)
	{
		____dateParseHandling_5 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____floatFormatHandling_6)); }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  get__floatFormatHandling_6() const { return ____floatFormatHandling_6; }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7 * get_address_of__floatFormatHandling_6() { return &____floatFormatHandling_6; }
	inline void set__floatFormatHandling_6(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  value)
	{
		____floatFormatHandling_6 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____floatParseHandling_7)); }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  get__floatParseHandling_7() const { return ____floatParseHandling_7; }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B * get_address_of__floatParseHandling_7() { return &____floatParseHandling_7; }
	inline void set__floatParseHandling_7(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  value)
	{
		____floatParseHandling_7 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____stringEscapeHandling_8)); }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  get__stringEscapeHandling_8() const { return ____stringEscapeHandling_8; }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E * get_address_of__stringEscapeHandling_8() { return &____stringEscapeHandling_8; }
	inline void set__stringEscapeHandling_8(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  value)
	{
		____stringEscapeHandling_8 = value;
	}

	inline static int32_t get_offset_of__culture_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____culture_9)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_9() const { return ____culture_9; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_9() { return &____culture_9; }
	inline void set__culture_9(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_9), (void*)value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____checkAdditionalContent_10)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__checkAdditionalContent_10() const { return ____checkAdditionalContent_10; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__checkAdditionalContent_10() { return &____checkAdditionalContent_10; }
	inline void set__checkAdditionalContent_10(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____checkAdditionalContent_10 = value;
	}

	inline static int32_t get_offset_of__maxDepth_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____maxDepth_11)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get__maxDepth_11() const { return ____maxDepth_11; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of__maxDepth_11() { return &____maxDepth_11; }
	inline void set__maxDepth_11(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		____maxDepth_11 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____maxDepthSet_12)); }
	inline bool get__maxDepthSet_12() const { return ____maxDepthSet_12; }
	inline bool* get_address_of__maxDepthSet_12() { return &____maxDepthSet_12; }
	inline void set__maxDepthSet_12(bool value)
	{
		____maxDepthSet_12 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateFormatString_13)); }
	inline String_t* get__dateFormatString_13() const { return ____dateFormatString_13; }
	inline String_t** get_address_of__dateFormatString_13() { return &____dateFormatString_13; }
	inline void set__dateFormatString_13(String_t* value)
	{
		____dateFormatString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_13), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateFormatStringSet_14)); }
	inline bool get__dateFormatStringSet_14() const { return ____dateFormatStringSet_14; }
	inline bool* get_address_of__dateFormatStringSet_14() { return &____dateFormatStringSet_14; }
	inline void set__dateFormatStringSet_14(bool value)
	{
		____dateFormatStringSet_14 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____typeNameAssemblyFormat_15)); }
	inline Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74  get__typeNameAssemblyFormat_15() const { return ____typeNameAssemblyFormat_15; }
	inline Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74 * get_address_of__typeNameAssemblyFormat_15() { return &____typeNameAssemblyFormat_15; }
	inline void set__typeNameAssemblyFormat_15(Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74  value)
	{
		____typeNameAssemblyFormat_15 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____defaultValueHandling_16)); }
	inline Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  get__defaultValueHandling_16() const { return ____defaultValueHandling_16; }
	inline Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6 * get_address_of__defaultValueHandling_16() { return &____defaultValueHandling_16; }
	inline void set__defaultValueHandling_16(Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  value)
	{
		____defaultValueHandling_16 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____preserveReferencesHandling_17)); }
	inline Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C  get__preserveReferencesHandling_17() const { return ____preserveReferencesHandling_17; }
	inline Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C * get_address_of__preserveReferencesHandling_17() { return &____preserveReferencesHandling_17; }
	inline void set__preserveReferencesHandling_17(Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C  value)
	{
		____preserveReferencesHandling_17 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____nullValueHandling_18)); }
	inline Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  get__nullValueHandling_18() const { return ____nullValueHandling_18; }
	inline Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056 * get_address_of__nullValueHandling_18() { return &____nullValueHandling_18; }
	inline void set__nullValueHandling_18(Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  value)
	{
		____nullValueHandling_18 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____objectCreationHandling_19)); }
	inline Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  get__objectCreationHandling_19() const { return ____objectCreationHandling_19; }
	inline Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E * get_address_of__objectCreationHandling_19() { return &____objectCreationHandling_19; }
	inline void set__objectCreationHandling_19(Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  value)
	{
		____objectCreationHandling_19 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____missingMemberHandling_20)); }
	inline Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544  get__missingMemberHandling_20() const { return ____missingMemberHandling_20; }
	inline Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544 * get_address_of__missingMemberHandling_20() { return &____missingMemberHandling_20; }
	inline void set__missingMemberHandling_20(Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544  value)
	{
		____missingMemberHandling_20 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____referenceLoopHandling_21)); }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  get__referenceLoopHandling_21() const { return ____referenceLoopHandling_21; }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23 * get_address_of__referenceLoopHandling_21() { return &____referenceLoopHandling_21; }
	inline void set__referenceLoopHandling_21(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  value)
	{
		____referenceLoopHandling_21 = value;
	}

	inline static int32_t get_offset_of__context_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____context_22)); }
	inline Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8  get__context_22() const { return ____context_22; }
	inline Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8 * get_address_of__context_22() { return &____context_22; }
	inline void set__context_22(Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8  value)
	{
		____context_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____context_22))->___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constructorHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____constructorHandling_23)); }
	inline Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540  get__constructorHandling_23() const { return ____constructorHandling_23; }
	inline Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540 * get_address_of__constructorHandling_23() { return &____constructorHandling_23; }
	inline void set__constructorHandling_23(Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540  value)
	{
		____constructorHandling_23 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____typeNameHandling_24)); }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  get__typeNameHandling_24() const { return ____typeNameHandling_24; }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0 * get_address_of__typeNameHandling_24() { return &____typeNameHandling_24; }
	inline void set__typeNameHandling_24(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  value)
	{
		____typeNameHandling_24 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____metadataPropertyHandling_25)); }
	inline Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783  get__metadataPropertyHandling_25() const { return ____metadataPropertyHandling_25; }
	inline Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783 * get_address_of__metadataPropertyHandling_25() { return &____metadataPropertyHandling_25; }
	inline void set__metadataPropertyHandling_25(Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783  value)
	{
		____metadataPropertyHandling_25 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CConvertersU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_26() const { return ___U3CConvertersU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_26() { return &___U3CConvertersU3Ek__BackingField_26; }
	inline void set_U3CConvertersU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CContractResolverU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CContractResolverU3Ek__BackingField_27() const { return ___U3CContractResolverU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CContractResolverU3Ek__BackingField_27() { return &___U3CContractResolverU3Ek__BackingField_27; }
	inline void set_U3CContractResolverU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CContractResolverU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractResolverU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEqualityComparerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CEqualityComparerU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEqualityComparerU3Ek__BackingField_28() const { return ___U3CEqualityComparerU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEqualityComparerU3Ek__BackingField_28() { return &___U3CEqualityComparerU3Ek__BackingField_28; }
	inline void set_U3CEqualityComparerU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEqualityComparerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEqualityComparerU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CReferenceResolverProviderU3Ek__BackingField_29)); }
	inline Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 * get_U3CReferenceResolverProviderU3Ek__BackingField_29() const { return ___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 ** get_address_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return &___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline void set_U3CReferenceResolverProviderU3Ek__BackingField_29(Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 * value)
	{
		___U3CReferenceResolverProviderU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceResolverProviderU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTraceWriterU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CTraceWriterU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CTraceWriterU3Ek__BackingField_30() const { return ___U3CTraceWriterU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CTraceWriterU3Ek__BackingField_30() { return &___U3CTraceWriterU3Ek__BackingField_30; }
	inline void set_U3CTraceWriterU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CTraceWriterU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTraceWriterU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBinderU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CBinderU3Ek__BackingField_31)); }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * get_U3CBinderU3Ek__BackingField_31() const { return ___U3CBinderU3Ek__BackingField_31; }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 ** get_address_of_U3CBinderU3Ek__BackingField_31() { return &___U3CBinderU3Ek__BackingField_31; }
	inline void set_U3CBinderU3Ek__BackingField_31(SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * value)
	{
		___U3CBinderU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBinderU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CErrorU3Ek__BackingField_32)); }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * get_U3CErrorU3Ek__BackingField_32() const { return ___U3CErrorU3Ek__BackingField_32; }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D ** get_address_of_U3CErrorU3Ek__BackingField_32() { return &___U3CErrorU3Ek__BackingField_32; }
	inline void set_U3CErrorU3Ek__BackingField_32(EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * value)
	{
		___U3CErrorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_32), (void*)value);
	}
};

struct JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___DefaultCulture_1;

public:
	inline static int32_t get_offset_of_DefaultContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_StaticFields, ___DefaultContext_0)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get_DefaultContext_0() const { return ___DefaultContext_0; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of_DefaultContext_0() { return &___DefaultContext_0; }
	inline void set_DefaultContext_0(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		___DefaultContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultContext_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DefaultCulture_1() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_StaticFields, ___DefaultCulture_1)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_DefaultCulture_1() const { return ___DefaultCulture_1; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_DefaultCulture_1() { return &___DefaultCulture_1; }
	inline void set_DefaultCulture_1(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___DefaultCulture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultCulture_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
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
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m91C61FF6D1A73C3949CE24E5DDE9EB5F68493789_gshared (PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9 * __this, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m4DDE1EC9F2EAB6DB75F72ED5B3164DCECA1C8A5B_gshared (PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_mD644C007EE34FDD5F361213B076C87A6FF074F6C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m45857CDA63601D5F28356D15915F67628A17ACDF_gshared (RuntimeObject* ___source0, Func_2_t122180C7631A517B0F4BF97E5754C5F998E8923D * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_m90391AD23AB688BA42D238D4512C858F912D7A67_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m8B6F2BBF40E8C112D39635F6D07B7BF9ABCA4E04_gshared (PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared (RuntimeObject* ___source0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___selector1, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m2688888FF2E972E21530CE58566058C3BEC1C22C_gshared (PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A * __this, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m7FF02D3B379C5D32E81C7F6874F93F67BE9644AC_gshared (PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576 * __this, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m9A51E4A05D6F3984FE775DE9CF9CEA6692FB7E0D_gshared (PartialConverter_1_tE0C2DA0384680325FE4F0ABDBD5B1624CAB2DD8C * __this, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mE339E8049D3942D55A57D8D94451054C3B24A173_gshared (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mCD1550EDEEE11C3077F4EE184433CAC87A7EDBA9_gshared (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mDD71AFDCDB3CB80754933AFA0A0AF09C977B9127_gshared (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m29A4127BDD60A2585120AABFACE71C66D806D71A_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Object,System.Boolean>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m2FA3342E4E2FB5CCDC5F8180082DB1DBF53F5C0B_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___keySelector1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::.ctor()
inline void PartialConverter_1__ctor_m91C61FF6D1A73C3949CE24E5DDE9EB5F68493789 (PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tA2F30DECCE15BE667120CE28EA3245FFB89047B9 *, const RuntimeMethod*))PartialConverter_1__ctor_m91C61FF6D1A73C3949CE24E5DDE9EB5F68493789_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::.ctor()
inline void PartialConverter_1__ctor_m4DDE1EC9F2EAB6DB75F72ED5B3164DCECA1C8A5B (PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t3058AB74899BFA807FFA9FB66B01887C45FE0822 *, const RuntimeMethod*))PartialConverter_1__ctor_m4DDE1EC9F2EAB6DB75F72ED5B3164DCECA1C8A5B_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F * JArray_Load_m7270D50F7BF021A838DD3A72B846136BED138B3B (JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JArray_GetEnumerator_mFB0E193693AFF30F9078C4EBDB4E2D01B37D40FA (JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * JObject_get_Item_mE36F6406690517A4E5C3DC87F76BA34D3FB9E679 (JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Linq.JToken::ToObject(System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_m2291B9FBA326FA8C82713218DC9578FEBEA68A7E (JToken_tCCEF558996D47101E43F6436A874C249291581AA * __this, Type_t * ___objectType0, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___jsonSerializer1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Newtonsoft.Json.JsonConverter>()
inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_inline (const RuntimeMethod* method)
{
	return ((  JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.String Newtonsoft.Json.Linq.JToken::ToString(Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonConverter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JToken_ToString_m505901BA4096F5FB5B2B05399E88678AF25AFB6D (JToken_tCCEF558996D47101E43F6436A874C249291581AA * __this, int32_t ___formatting0, JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* ___converters1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_mD644C007EE34FDD5F361213B076C87A6FF074F6C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_mD644C007EE34FDD5F361213B076C87A6FF074F6C_gshared)(___source0, method);
}
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializer_Serialize_m782EB7C49215C6EA4ADF8B455999182982AC08D6 (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * __this, JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * ___jsonWriter0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39 (JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * __this, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m16E391F6E7A3923A58BE70A6F4A696ECA59C9BF8 (U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBAD1A2A2A6C5FB6286DB22F7752228A072E4D474 (Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
inline RuntimeObject* Enumerable_SelectMany_TisString_t_TisString_t_mD3846E18FD81C3C14A2A798E705A7B96281B85C6 (RuntimeObject* ___source0, Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC *, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m45857CDA63601D5F28356D15915F67628A17ACDF_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m90391AD23AB688BA42D238D4512C858F912D7A67_gshared)(___source0, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::.ctor()
inline void PartialConverter_1__ctor_m8B6F2BBF40E8C112D39635F6D07B7BF9ABCA4E04 (PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t67855D13F6FCDCD153E74E0405ACDCF27BBE2E64 *, const RuntimeMethod*))PartialConverter_1__ctor_m8B6F2BBF40E8C112D39635F6D07B7BF9ABCA4E04_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m9EDF570CEAFF225BC08AB65F51CCC736F00783C5 (U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0 (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_mFCB35DFD3FDBF1638A2E4069EB65634703E36ED6 (RuntimeObject* ___source0, Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::.ctor()
inline void PartialConverter_1__ctor_m2688888FF2E972E21530CE58566058C3BEC1C22C (PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t086A3DCB7B20C6D19AE2B5B053DE7972D7899C4A *, const RuntimeMethod*))PartialConverter_1__ctor_m2688888FF2E972E21530CE58566058C3BEC1C22C_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::.ctor()
inline void PartialConverter_1__ctor_m7FF02D3B379C5D32E81C7F6874F93F67BE9644AC (PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t6C67411899F6ECFF47265CD5A6B1825E11D07576 *, const RuntimeMethod*))PartialConverter_1__ctor_m7FF02D3B379C5D32E81C7F6874F93F67BE9644AC_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>::.ctor()
inline void PartialConverter_1__ctor_mB585FAB2771EA4242DF3E55C253F857DFC0DE67A (PartialConverter_1_tBFA8FE38917910CF52D2E7363D5B8AC008E46946 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tBFA8FE38917910CF52D2E7363D5B8AC008E46946 *, const RuntimeMethod*))PartialConverter_1__ctor_m9A51E4A05D6F3984FE775DE9CF9CEA6692FB7E0D_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::.ctor()
inline void PartialConverter_1__ctor_mE339E8049D3942D55A57D8D94451054C3B24A173 (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tFE1FCF5A21EB08BE95B4AA772065F18F2A2B07F8 *, const RuntimeMethod*))PartialConverter_1__ctor_mE339E8049D3942D55A57D8D94451054C3B24A173_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::.ctor()
inline void PartialConverter_1__ctor_mCD1550EDEEE11C3077F4EE184433CAC87A7EDBA9 (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tAFEF0C170913D1815EFA554B0D94ACA2BF100F53 *, const RuntimeMethod*))PartialConverter_1__ctor_mCD1550EDEEE11C3077F4EE184433CAC87A7EDBA9_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::.ctor()
inline void PartialConverter_1__ctor_mDD71AFDCDB3CB80754933AFA0A0AF09C977B9127 (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 * __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t191AC735A843819CBB886B8E76D136D691EC6F50 *, const RuntimeMethod*))PartialConverter_1__ctor_mDD71AFDCDB3CB80754933AFA0A0AF09C977B9127_gshared)(__this, method);
}
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::get_DefaultSettings()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * JsonConvert_get_DefaultSettings_m0A64E186CBB25F5486691EE798D56712E9F807BB_inline (const RuntimeMethod* method);
// System.Void System.Func`1<Newtonsoft.Json.JsonSerializerSettings>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m2419C583B70A0644F1D3F3FEC6B9F97D4F8935DB (Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Newtonsoft.Json.JsonConvert::set_DefaultSettings(System.Func`1<Newtonsoft.Json.JsonSerializerSettings>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JsonConvert_set_DefaultSettings_mC4733AB6E76271501E1A0A9EF49DDD66BAE52904_inline (Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * ___value0, const RuntimeMethod* method);
// System.Type[] WanzyeeStudio.JsonNetUtility::FindConverterTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* JsonNetUtility_FindConverterTypes_m53E064B2B355156B6BBD939D0799AB278C0F3A65 (const RuntimeMethod* method);
// System.Void System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4C6CCC4E9406C7DDEF293C253E610C0132CED1BC (Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Type,Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m8AFBD07972960EF0CB639DD369E2584DE7939678 (RuntimeObject* ___source0, Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(___source0, ___selector1, method);
}
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEnumConverter__ctor_m7C7AAEFDF3BEB8CC09AD5569A7C251D1E6434A03 (StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.VersionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionConverter__ctor_m78556A346B8E1E754F2D5987D026F2E7449771AE (VersionConverter_tB64F83C5B06ACAD56A7816808F9A7D5263B31620 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Concat_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m523F28B1DD6EC8C6F112F3D2027C8117B16694FC (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m29A4127BDD60A2585120AABFACE71C66D806D71A_gshared)(___first0, ___second1, method);
}
// System.Void System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5955683D64AA943480E08C2D22A6E22E008A5654 (Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m3E7B177AB63079E1591157126CB489AFDBA65108 (RuntimeObject* ___source0, Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * Enumerable_ToList_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_mA18EE5F6E6CE07FBCFD06721338547CC51D44DBD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared)(___source0, method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0 (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23 (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0F843B165F1FA493C2A355B28394DC78AA6DF90D (Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Reflection.Assembly,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
inline RuntimeObject* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1548E6D478C5DD0AC4F0D888CD3259AE03B3C7D5 (RuntimeObject* ___source0, Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D *, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m45857CDA63601D5F28356D15915F67628A17ACDF_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27 (Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411 (RuntimeObject* ___source0, Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared)(___source0, ___predicate1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Type,System.Boolean>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisType_t_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m70070A6A01E35CF0B7720998DDB9503F9B70D0D1 (RuntimeObject* ___source0, Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m2FA3342E4E2FB5CCDC5F8180082DB1DBF53F5C0B_gshared)(___source0, ___keySelector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* Enumerable_ToArray_TisType_t_m4FD117803FF797C740AD3EC830C41070D6FF0A43 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m90391AD23AB688BA42D238D4512C858F912D7A67_gshared)(___source0, method);
}
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_m1E444D76E8D4407BB6244ECDD5C8A470BE6CE644 (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter> WanzyeeStudio.JsonNetUtility::CreateConverters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * JsonNetUtility_CreateConverters_m1ED94579A6BEF0C43EE64C8E4D39838188F24734 (const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Converters(System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_Converters_m123E86993A7880E3F9E484590E75909306F41A13_inline (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void WanzyeeStudio.JsonNetUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0F0315ACDA5C7D58B7C209CDA2904A9372428C86 (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.JsonConverter WanzyeeStudio.JsonNetUtility::CreateConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * JsonNetUtility_CreateConverter_m45216D8A3CB93723832DE0755E5D9AD3E59C4804 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m769E8E92F368822B8AB5354BB0D123BDDD605D09 (Type_t * __this, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * Type_GetConstructor_m4371D7AD6A8E15067C698696B0167323CBC7F3DA (Type_t * __this, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___types0, const RuntimeMethod* method);
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_m7BACC92FB27D1999A084F5346451CEE9FD0445E4 (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___left0, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___right1, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityARImageFrameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARImageFrameData__ctor_m49B47CAAD277184F65A93BE133B4447F168D70DB (UnityARImageFrameData_t5075892CD19575235557649B97D39B5D0BF1FD6A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WanzyeeStudio.Json.BoundsConverter::PreserveProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsConverter_PreserveProperties_mD137F6B6E86976EBBD8734D1D25584FC42238001 (BoundsConverter_t92907FB8154CDA2C64CB9B56D000A9358E821AE0 * __this, const RuntimeMethod* method)
{
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var _dummy = new Bounds();
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 ));
		// _dummy.center = _dummy.center;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), L_0, /*hidden argument*/NULL);
		// _dummy.extents = _dummy.extents;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String[] WanzyeeStudio.Json.BoundsConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* BoundsConverter_GetPropertyNames_m151E30E2758C3F980E9ECFD6A2D3B886A7923EE0 (BoundsConverter_t92907FB8154CDA2C64CB9B56D000A9358E821AE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundsConverter_GetPropertyNames_m151E30E2758C3F980E9ECFD6A2D3B886A7923EE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"center", "extents"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral305047E96EC089021660EE5965F893AC80268731);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral305047E96EC089021660EE5965F893AC80268731);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2BBD3C122811B04F27A54F0CED11E01D5D088DE2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2BBD3C122811B04F27A54F0CED11E01D5D088DE2);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = V_0;
		return L_3;
	}
}
// System.Void WanzyeeStudio.Json.BoundsConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsConverter__ctor_m097FA699C775AC6D163E6258358C0EFD7E6B6D75 (BoundsConverter_t92907FB8154CDA2C64CB9B56D000A9358E821AE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundsConverter__ctor_m097FA699C775AC6D163E6258358C0EFD7E6B6D75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m91C61FF6D1A73C3949CE24E5DDE9EB5F68493789(__this, /*hidden argument*/PartialConverter_1__ctor_m91C61FF6D1A73C3949CE24E5DDE9EB5F68493789_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.ColorConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ColorConverter_GetPropertyNames_m1A41DFBFF458D384C8D834445BF8B5E10CEBBAEF (ColorConverter_t55430F3834F9BBBD88C7A823E6C78D28DE2829BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColorConverter_GetPropertyNames_m1A41DFBFF458D384C8D834445BF8B5E10CEBBAEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"r", "g", "b", "a"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4DC7C9EC434ED06502767136789763EC11D2C4B7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4DC7C9EC434ED06502767136789763EC11D2C4B7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral54FD1711209FB1C0781092374132C66E79E2241B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral54FD1711209FB1C0781092374132C66E79E2241B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralE9D71F5EE7C92D6DC9E92FFDAD17B8BD49418F98);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE9D71F5EE7C92D6DC9E92FFDAD17B8BD49418F98);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		return L_5;
	}
}
// System.Void WanzyeeStudio.Json.ColorConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorConverter__ctor_mBB4F910A0DECEA7D863839149D8A6B23D4D774AF (ColorConverter_t55430F3834F9BBBD88C7A823E6C78D28DE2829BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColorConverter__ctor_mBB4F910A0DECEA7D863839149D8A6B23D4D774AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m4DDE1EC9F2EAB6DB75F72ED5B3164DCECA1C8A5B(__this, /*hidden argument*/PartialConverter_1__ctor_m4DDE1EC9F2EAB6DB75F72ED5B3164DCECA1C8A5B_RuntimeMethod_var);
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
// System.Boolean WanzyeeStudio.Json.DictionaryConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryConverter_CanConvert_m0ED5AB6E04476DBDF854C36DBA8D9C1B73F76528 (DictionaryConverter_t4D7D1BFCF983EF3DC7143470C3D72CF22E09102E * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictionaryConverter_CanConvert_m0ED5AB6E04476DBDF854C36DBA8D9C1B73F76528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if(!objectType.IsGenericType) return false;
		Type_t * L_0 = ___objectType0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if(!objectType.IsGenericType) return false;
		V_2 = (bool)0;
		goto IL_0041;
	}

IL_0012:
	{
		// var _type = objectType.GetGenericTypeDefinition();
		Type_t * L_3 = ___objectType0;
		NullCheck(L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(105 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		V_0 = L_4;
		// return typeof(Dictionary<,>) == _type || typeof(IDictionary<,>) == _type;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (Dictionary_2_tC3B7C172F472D2372732454922AB169C38E69CE9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		Type_t * L_7 = V_0;
		bool L_8 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IDictionary_2_t422C090F714C36DDE0089AF96A98CBE6FC11EA06_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_9, /*hidden argument*/NULL);
		Type_t * L_11 = V_0;
		bool L_12 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_10, L_11, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_12));
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 1;
	}

IL_003e:
	{
		V_2 = (bool)G_B5_0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Object WanzyeeStudio.Json.DictionaryConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DictionaryConverter_ReadJson_m12664B51E2D981974094A5ABE433DB8BF38850D3 (DictionaryConverter_t4D7D1BFCF983EF3DC7143470C3D72CF22E09102E * __this, JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictionaryConverter_ReadJson_m12664B51E2D981974094A5ABE433DB8BF38850D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	bool V_8 = false;
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
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_2 = (bool)((((int32_t)((int32_t)11)) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		V_3 = NULL;
		goto IL_00d7;
	}

IL_0016:
	{
		// var _result = Activator.CreateInstance(objectType) as IDictionary;
		Type_t * L_3 = ___objectType1;
		RuntimeObject * L_4 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_3, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
		// var _args = objectType.GetGenericArguments();
		Type_t * L_5 = ___objectType1;
		NullCheck(L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(104 /* System.Type[] System.Type::GetGenericArguments() */, L_5);
		V_1 = L_6;
		// foreach(JObject _pair in JArray.Load(reader)){
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_7 = ___reader0;
		JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F * L_8 = JArray_Load_m7270D50F7BF021A838DD3A72B846136BED138B3B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = JArray_GetEnumerator_mFB0E193693AFF30F9078C4EBDB4E2D01B37D40FA(L_8, /*hidden argument*/NULL);
		V_4 = L_9;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b8;
		}

IL_0039:
		{
			// foreach(JObject _pair in JArray.Load(reader)){
			RuntimeObject* L_10 = V_4;
			NullCheck(L_10);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_11 = InterfaceFuncInvoker0< JToken_tCCEF558996D47101E43F6436A874C249291581AA * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_tA4DECCED36304D818872949F592A9B1849A50CF0_il2cpp_TypeInfo_var, L_10);
			V_5 = ((JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B *)CastclassClass((RuntimeObject*)L_11, JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B_il2cpp_TypeInfo_var));
			// var _key = _pair["Key"].ToObject(_args[0], serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_12 = V_5;
			NullCheck(L_12);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_13 = JObject_get_Item_mE36F6406690517A4E5C3DC87F76BA34D3FB9E679(L_12, _stringLiteralC67DD20EE842986086A0A915DDC2A279490130ED, /*hidden argument*/NULL);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_14 = V_1;
			NullCheck(L_14);
			int32_t L_15 = 0;
			Type_t * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_17 = ___serializer3;
			NullCheck(L_13);
			RuntimeObject * L_18 = JToken_ToObject_m2291B9FBA326FA8C82713218DC9578FEBEA68A7E(L_13, L_16, L_17, /*hidden argument*/NULL);
			V_6 = L_18;
			// var _value = _pair["Value"].ToObject(_args[1], serializer);
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_19 = V_5;
			NullCheck(L_19);
			JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_20 = JObject_get_Item_mE36F6406690517A4E5C3DC87F76BA34D3FB9E679(L_19, _stringLiteral8DCE170DE238B1FEDA2ECD9674EA3CA0D068FBCB, /*hidden argument*/NULL);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_21 = V_1;
			NullCheck(L_21);
			int32_t L_22 = 1;
			Type_t * L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_24 = ___serializer3;
			NullCheck(L_20);
			RuntimeObject * L_25 = JToken_ToObject_m2291B9FBA326FA8C82713218DC9578FEBEA68A7E(L_20, L_23, L_24, /*hidden argument*/NULL);
			V_7 = L_25;
			// if(!_result.Contains(_key)) _result.Add(_key, _value);
			RuntimeObject* L_26 = V_0;
			RuntimeObject * L_27 = V_6;
			NullCheck(L_26);
			bool L_28 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(2 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_26, L_27);
			V_8 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
			bool L_29 = V_8;
			if (!L_29)
			{
				goto IL_0096;
			}
		}

IL_0089:
		{
			// if(!_result.Contains(_key)) _result.Add(_key, _value);
			RuntimeObject* L_30 = V_0;
			RuntimeObject * L_31 = V_6;
			RuntimeObject * L_32 = V_7;
			NullCheck(L_30);
			InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_30, L_31, L_32);
			goto IL_00b7;
		}

IL_0096:
		{
			// else Debug.LogWarningFormat("Ignore pair with repeat key: {0}", _pair.ToString(Formatting.None));
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_33;
			JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_35 = V_5;
			JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_36 = Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_inline(/*hidden argument*/Array_Empty_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m1628F07FB9287AF57FE54CE3C6AB991267A98E77_RuntimeMethod_var);
			NullCheck(L_35);
			String_t* L_37 = JToken_ToString_m505901BA4096F5FB5B2B05399E88678AF25AFB6D(L_35, 0, L_36, /*hidden argument*/NULL);
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, L_37);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_37);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteralDBC111AA56F12053858945E86BAC94EA99AA2F08, L_34, /*hidden argument*/NULL);
		}

IL_00b7:
		{
		}

IL_00b8:
		{
			// foreach(JObject _pair in JArray.Load(reader)){
			RuntimeObject* L_38 = V_4;
			NullCheck(L_38);
			bool L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_38);
			if (L_39)
			{
				goto IL_0039;
			}
		}

IL_00c4:
		{
			IL2CPP_LEAVE(0xD3, FINALLY_00c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_40 = V_4;
			if (!L_40)
			{
				goto IL_00d2;
			}
		}

IL_00ca:
		{
			RuntimeObject* L_41 = V_4;
			NullCheck(L_41);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_41);
		}

IL_00d2:
		{
			IL2CPP_END_FINALLY(198)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_JUMP_TBL(0xD3, IL_00d3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d3:
	{
		// return _result;
		RuntimeObject* L_42 = V_0;
		V_3 = L_42;
		goto IL_00d7;
	}

IL_00d7:
	{
		// }
		RuntimeObject * L_43 = V_3;
		return L_43;
	}
}
// System.Void WanzyeeStudio.Json.DictionaryConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryConverter_WriteJson_m6A7AB5266B1654499073F504F8F1A777764947D1 (DictionaryConverter_t4D7D1BFCF983EF3DC7143470C3D72CF22E09102E * __this, JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * ___writer0, RuntimeObject * ___value1, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictionaryConverter_WriteJson_m6A7AB5266B1654499073F504F8F1A777764947D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serializer.Serialize(writer, (value as IDictionary).Cast<object>());
		JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_0 = ___serializer2;
		JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * L_1 = ___writer0;
		RuntimeObject * L_2 = ___value1;
		RuntimeObject* L_3 = Enumerable_Cast_TisRuntimeObject_mD644C007EE34FDD5F361213B076C87A6FF074F6C(((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var)), /*hidden argument*/Enumerable_Cast_TisRuntimeObject_mD644C007EE34FDD5F361213B076C87A6FF074F6C_RuntimeMethod_var);
		NullCheck(L_0);
		JsonSerializer_Serialize_m782EB7C49215C6EA4ADF8B455999182982AC08D6(L_0, L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WanzyeeStudio.Json.DictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryConverter__ctor_mE70DB5276A39AAF3B54DAADB4DF7FA5BB9A7AE83 (DictionaryConverter_t4D7D1BFCF983EF3DC7143470C3D72CF22E09102E * __this, const RuntimeMethod* method)
{
	{
		JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39(__this, /*hidden argument*/NULL);
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
// System.String[] WanzyeeStudio.Json.Matrix4x4Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Matrix4x4Converter_GetPropertyNames_m43C12B95B3655761A6EEE9AE2002C069D50EB8E2 (Matrix4x4Converter_t5E721FFAB92E3F414A4277E038A3DD25165A8F97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Matrix4x4Converter_GetPropertyNames_m43C12B95B3655761A6EEE9AE2002C069D50EB8E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * L_0 = (U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m16E391F6E7A3923A58BE70A6F4A696ECA59C9BF8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var _indexes = new []{"0", "1", "2", "3"};
		U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * L_1 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral356A192B7913B04C54574D18C28D46E6395428AB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB);
		NullCheck(L_1);
		L_1->set__indexes_0(L_6);
		// return _indexes.SelectMany((row) => _indexes.Select((column) => "m" + row + column)).ToArray();
		U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * L_7 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7->get__indexes_0();
		U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * L_9 = V_0;
		Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC * L_10 = (Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC *)il2cpp_codegen_object_new(Func_2_t2029B696DE873AEBC43EE6CB1EE0877415C8B5DC_il2cpp_TypeInfo_var);
		Func_2__ctor_mBAD1A2A2A6C5FB6286DB22F7752228A072E4D474(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m46CCBA38324658C54D23C6A6224C030D1574CFBB_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBAD1A2A2A6C5FB6286DB22F7752228A072E4D474_RuntimeMethod_var);
		RuntimeObject* L_11 = Enumerable_SelectMany_TisString_t_TisString_t_mD3846E18FD81C3C14A2A798E705A7B96281B85C6((RuntimeObject*)(RuntimeObject*)L_8, L_10, /*hidden argument*/Enumerable_SelectMany_TisString_t_TisString_t_mD3846E18FD81C3C14A2A798E705A7B96281B85C6_RuntimeMethod_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC(L_11, /*hidden argument*/Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var);
		V_1 = L_12;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = V_1;
		return L_13;
	}
}
// System.Void WanzyeeStudio.Json.Matrix4x4Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4Converter__ctor_m8965BECD9C3C051DA68677A354DBCC2A409D4FA7 (Matrix4x4Converter_t5E721FFAB92E3F414A4277E038A3DD25165A8F97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Matrix4x4Converter__ctor_m8965BECD9C3C051DA68677A354DBCC2A409D4FA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m8B6F2BBF40E8C112D39635F6D07B7BF9ABCA4E04(__this, /*hidden argument*/PartialConverter_1__ctor_m8B6F2BBF40E8C112D39635F6D07B7BF9ABCA4E04_RuntimeMethod_var);
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
// System.Void WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m16E391F6E7A3923A58BE70A6F4A696ECA59C9BF8 (U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_0::<GetPropertyNames>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m46CCBA38324658C54D23C6A6224C030D1574CFBB (U3CU3Ec__DisplayClass0_0_t82D4A35CEA543F060917A2C83F3646915D713C27 * __this, String_t* ___row0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m46CCBA38324658C54D23C6A6224C030D1574CFBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 * L_0 = (U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_1__ctor_m9EDF570CEAFF225BC08AB65F51CCC736F00783C5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 * L_1 = V_0;
		String_t* L_2 = ___row0;
		NullCheck(L_1);
		L_1->set_row_0(L_2);
		// return _indexes.SelectMany((row) => _indexes.Select((column) => "m" + row + column)).ToArray();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = __this->get__indexes_0();
		U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 * L_4 = V_0;
		Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 * L_5 = (Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96 *)il2cpp_codegen_object_new(Func_2_tD9EBF5FAD46B4F561FE5ABE814DC60E6253B8B96_il2cpp_TypeInfo_var);
		Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_mEB90724AB231044853006230C2A6362E4299CF00_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC276B952F432851DB174123FCF79CFABDF753BB0_RuntimeMethod_var);
		RuntimeObject* L_6 = Enumerable_Select_TisString_t_TisString_t_mFCB35DFD3FDBF1638A2E4069EB65634703E36ED6((RuntimeObject*)(RuntimeObject*)L_3, L_5, /*hidden argument*/Enumerable_Select_TisString_t_TisString_t_mFCB35DFD3FDBF1638A2E4069EB65634703E36ED6_RuntimeMethod_var);
		return L_6;
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
// System.Void WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m9EDF570CEAFF225BC08AB65F51CCC736F00783C5 (U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String WanzyeeStudio.Json.Matrix4x4Converter_<>c__DisplayClass0_1::<GetPropertyNames>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_mEB90724AB231044853006230C2A6362E4299CF00 (U3CU3Ec__DisplayClass0_1_t5E2E73F0EA2D3E9E84DA2E765429061E7FBDF116 * __this, String_t* ___column0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_mEB90724AB231044853006230C2A6362E4299CF00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _indexes.SelectMany((row) => _indexes.Select((column) => "m" + row + column)).ToArray();
		String_t* L_0 = __this->get_row_0();
		String_t* L_1 = ___column0;
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral6B0D31C0D563223024DA45691584643AC78C96E8, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.String[] WanzyeeStudio.Json.QuaternionConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* QuaternionConverter_GetPropertyNames_m086F37D9B1E7679C3A7E91AF1453C14978FF5BAC (QuaternionConverter_tEA45C3212AA21038AF0C51103735F8272110175E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuaternionConverter_GetPropertyNames_m086F37D9B1E7679C3A7E91AF1453C14978FF5BAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"x", "y", "z", "w"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		return L_5;
	}
}
// System.Void WanzyeeStudio.Json.QuaternionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionConverter__ctor_mEB36056BFE463A68D8FB7ECEC638396A4D190C07 (QuaternionConverter_tEA45C3212AA21038AF0C51103735F8272110175E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuaternionConverter__ctor_mEB36056BFE463A68D8FB7ECEC638396A4D190C07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m2688888FF2E972E21530CE58566058C3BEC1C22C(__this, /*hidden argument*/PartialConverter_1__ctor_m2688888FF2E972E21530CE58566058C3BEC1C22C_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.RectConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* RectConverter_GetPropertyNames_m8B2B4CC8371461F10EE22C591198783F44C3CD0B (RectConverter_t976F3C79BF49AA404132CD3E23D702EE2EC025B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectConverter_GetPropertyNames_m8B2B4CC8371461F10EE22C591198783F44C3CD0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"x", "y", "width", "height"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral70BEC8A9BF5ECD2E6B37316E112B3F4C615AD4D3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral70BEC8A9BF5ECD2E6B37316E112B3F4C615AD4D3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral73E7E545C519A38F0AEC9E72DF51F8BA169DB34D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral73E7E545C519A38F0AEC9E72DF51F8BA169DB34D);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		return L_5;
	}
}
// System.Void WanzyeeStudio.Json.RectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectConverter__ctor_m0B4E360A2B9A3B79D27BA1E969691288EDD342D2 (RectConverter_t976F3C79BF49AA404132CD3E23D702EE2EC025B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectConverter__ctor_m0B4E360A2B9A3B79D27BA1E969691288EDD342D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m7FF02D3B379C5D32E81C7F6874F93F67BE9644AC(__this, /*hidden argument*/PartialConverter_1__ctor_m7FF02D3B379C5D32E81C7F6874F93F67BE9644AC_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.RectOffsetConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* RectOffsetConverter_GetPropertyNames_mA82A5BC168EBFD7BA759E848F287E3D9655BD934 (RectOffsetConverter_tBE02621D4669019617E62E647DB810016D1C8A32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectOffsetConverter_GetPropertyNames_mA82A5BC168EBFD7BA759E848F287E3D9655BD934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"left", "right", "top", "bottom"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral12C0F1FBADC4046B5F2BB9E063B227EF8750D9D6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral12C0F1FBADC4046B5F2BB9E063B227EF8750D9D6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD27A1F11771200949714B1AF99F048A416F5D6F4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD27A1F11771200949714B1AF99F048A416F5D6F4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralAF2C7B4CA07AE6C74D261BC745E174DF8AB3FFEF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAF2C7B4CA07AE6C74D261BC745E174DF8AB3FFEF);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralC03E9099AAD17CB58E4FFF1D93D751105735C9C2);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC03E9099AAD17CB58E4FFF1D93D751105735C9C2);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		return L_5;
	}
}
// System.Void WanzyeeStudio.Json.RectOffsetConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffsetConverter__ctor_mD1320D49FDD19E113C5EC8B1CB3BE442B6FBC48E (RectOffsetConverter_tBE02621D4669019617E62E647DB810016D1C8A32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectOffsetConverter__ctor_mD1320D49FDD19E113C5EC8B1CB3BE442B6FBC48E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_mB585FAB2771EA4242DF3E55C253F857DFC0DE67A(__this, /*hidden argument*/PartialConverter_1__ctor_mB585FAB2771EA4242DF3E55C253F857DFC0DE67A_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.Vector2Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Vector2Converter_GetPropertyNames_m3D1AF86E84FC1682C0749137022357506032576B (Vector2Converter_t2630B667279B95581B1EEDC0FFA23A5A9952F035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Converter_GetPropertyNames_m3D1AF86E84FC1682C0749137022357506032576B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"x", "y"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = V_0;
		return L_3;
	}
}
// System.Void WanzyeeStudio.Json.Vector2Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Converter__ctor_m700A453515A3BBCE594BB2BCFBEBD37D6DDF758E (Vector2Converter_t2630B667279B95581B1EEDC0FFA23A5A9952F035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Converter__ctor_m700A453515A3BBCE594BB2BCFBEBD37D6DDF758E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_mE339E8049D3942D55A57D8D94451054C3B24A173(__this, /*hidden argument*/PartialConverter_1__ctor_mE339E8049D3942D55A57D8D94451054C3B24A173_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.Vector3Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Vector3Converter_GetPropertyNames_m509FD9E9754FAD3B9FDF8BB4D7620F8366555F92 (Vector3Converter_t6EAAE842EDBF4951527B4C3AF592DDCE1C312605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Converter_GetPropertyNames_m509FD9E9754FAD3B9FDF8BB4D7620F8366555F92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"x", "y", "z"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA);
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		return L_4;
	}
}
// System.Void WanzyeeStudio.Json.Vector3Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Converter__ctor_mCE9C923A0D7AF77BD8333D78ACCF2F2213858E23 (Vector3Converter_t6EAAE842EDBF4951527B4C3AF592DDCE1C312605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Converter__ctor_mCE9C923A0D7AF77BD8333D78ACCF2F2213858E23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_mCD1550EDEEE11C3077F4EE184433CAC87A7EDBA9(__this, /*hidden argument*/PartialConverter_1__ctor_mCD1550EDEEE11C3077F4EE184433CAC87A7EDBA9_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.Vector4Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Vector4Converter_GetPropertyNames_m3039C9803594BEE1D7D47E7A41F68C1524D276CA (Vector4Converter_t2035BB67DCC120A95AB1874FE08203AE315C0107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Converter_GetPropertyNames_m3039C9803594BEE1D7D47E7A41F68C1524D276CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		// return new []{"x", "y", "z", "w"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		return L_5;
	}
}
// System.Void WanzyeeStudio.Json.Vector4Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Converter__ctor_m94A7EA991A777A0BDC3A8DE6419C384D9EA83C6F (Vector4Converter_t2035BB67DCC120A95AB1874FE08203AE315C0107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Converter__ctor_m94A7EA991A777A0BDC3A8DE6419C384D9EA83C6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_mDD71AFDCDB3CB80754933AFA0A0AF09C977B9127(__this, /*hidden argument*/PartialConverter_1__ctor_mDD71AFDCDB3CB80754933AFA0A0AF09C977B9127_RuntimeMethod_var);
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
// System.Void WanzyeeStudio.JsonNetUtility::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNetUtility_Initialize_m38B6895657DB0B03DEE5923BE28EE2F4484EB778 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonNetUtility_Initialize_m38B6895657DB0B03DEE5923BE28EE2F4484EB778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * G_B3_0 = NULL;
	Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * G_B2_0 = NULL;
	{
		// if(null == JsonConvert.DefaultSettings) JsonConvert.DefaultSettings = () => defaultSettings;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_il2cpp_TypeInfo_var);
		Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * L_0 = JsonConvert_get_DefaultSettings_m0A64E186CBB25F5486691EE798D56712E9F807BB_inline(/*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if(null == JsonConvert.DefaultSettings) JsonConvert.DefaultSettings = () => defaultSettings;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * L_2 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_4 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * L_5 = (Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 *)il2cpp_codegen_object_new(Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1_il2cpp_TypeInfo_var);
		Func_1__ctor_m2419C583B70A0644F1D3F3FEC6B9F97D4F8935DB(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CInitializeU3Eb__1_0_m13F11664D8DA44DFCE1C16F5604FA9F772DD79FE_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m2419C583B70A0644F1D3F3FEC6B9F97D4F8935DB_RuntimeMethod_var);
		Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * L_6 = L_5;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_6);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_il2cpp_TypeInfo_var);
		JsonConvert_set_DefaultSettings_mC4733AB6E76271501E1A0A9EF49DDD66BAE52904_inline(G_B3_0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter> WanzyeeStudio.JsonNetUtility::CreateConverters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * JsonNetUtility_CreateConverters_m1ED94579A6BEF0C43EE64C8E4D39838188F24734 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonNetUtility_CreateConverters_m1ED94579A6BEF0C43EE64C8E4D39838188F24734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* V_1 = NULL;
	List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * V_2 = NULL;
	Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * G_B2_0 = NULL;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* G_B2_1 = NULL;
	Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * G_B1_0 = NULL;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* G_B1_1 = NULL;
	Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// var _customs = FindConverterTypes().Select((type) => CreateConverter(type));
		IL2CPP_RUNTIME_CLASS_INIT(JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_il2cpp_TypeInfo_var);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_0 = JsonNetUtility_FindConverterTypes_m53E064B2B355156B6BBD939D0799AB278C0F3A65(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * L_1 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_2();
		Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_3 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * L_4 = (Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE *)il2cpp_codegen_object_new(Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE_il2cpp_TypeInfo_var);
		Func_2__ctor_m4C6CCC4E9406C7DDEF293C253E610C0132CED1BC(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m7215399F81DC1BD8C80FAD229FD50D6606728951_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4C6CCC4E9406C7DDEF293C253E610C0132CED1BC_RuntimeMethod_var);
		Func_2_tF13A201A3F25B6B57368E1C398A3BEBCFD491BDE * L_5 = L_4;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_2(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6 = Enumerable_Select_TisType_t_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m8AFBD07972960EF0CB639DD369E2584DE7939678((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisType_t_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m8AFBD07972960EF0CB639DD369E2584DE7939678_RuntimeMethod_var);
		V_0 = L_6;
		// var _builtins = new JsonConverter[]{new StringEnumConverter(), new VersionConverter()};
		JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_7 = (JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A*)(JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A*)SZArrayNew(JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A_il2cpp_TypeInfo_var, (uint32_t)2);
		JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_8 = L_7;
		StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A * L_9 = (StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A *)il2cpp_codegen_object_new(StringEnumConverter_t733BA38554088DB496C2598E7BE0322F4600762A_il2cpp_TypeInfo_var);
		StringEnumConverter__ctor_m7C7AAEFDF3BEB8CC09AD5569A7C251D1E6434A03(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)L_9);
		JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_10 = L_8;
		VersionConverter_tB64F83C5B06ACAD56A7816808F9A7D5263B31620 * L_11 = (VersionConverter_tB64F83C5B06ACAD56A7816808F9A7D5263B31620 *)il2cpp_codegen_object_new(VersionConverter_tB64F83C5B06ACAD56A7816808F9A7D5263B31620_il2cpp_TypeInfo_var);
		VersionConverter__ctor_m78556A346B8E1E754F2D5987D026F2E7449771AE(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)L_11);
		V_1 = L_10;
		// return _customs.Concat(_builtins).Where((converter) => null != converter).ToList();
		RuntimeObject* L_12 = V_0;
		JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* L_13 = V_1;
		RuntimeObject* L_14 = Enumerable_Concat_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m523F28B1DD6EC8C6F112F3D2027C8117B16694FC(L_12, (RuntimeObject*)(RuntimeObject*)L_13, /*hidden argument*/Enumerable_Concat_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m523F28B1DD6EC8C6F112F3D2027C8117B16694FC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * L_15 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__2_1_3();
		Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * L_16 = L_15;
		G_B3_0 = L_16;
		G_B3_1 = L_14;
		if (L_16)
		{
			G_B4_0 = L_16;
			G_B4_1 = L_14;
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_17 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * L_18 = (Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 *)il2cpp_codegen_object_new(Func_2_tCB518672A3846C817A36680C0A6D733545EB5098_il2cpp_TypeInfo_var);
		Func_2__ctor_m5955683D64AA943480E08C2D22A6E22E008A5654(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateConvertersU3Eb__2_1_m74C80667076D17B07DB08BA255707AAF19F7E256_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m5955683D64AA943480E08C2D22A6E22E008A5654_RuntimeMethod_var);
		Func_2_tCB518672A3846C817A36680C0A6D733545EB5098 * L_19 = L_18;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__2_1_3(L_19);
		G_B4_0 = L_19;
		G_B4_1 = G_B3_1;
	}

IL_0068:
	{
		RuntimeObject* L_20 = Enumerable_Where_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m3E7B177AB63079E1591157126CB489AFDBA65108(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_m3E7B177AB63079E1591157126CB489AFDBA65108_RuntimeMethod_var);
		List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * L_21 = Enumerable_ToList_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_mA18EE5F6E6CE07FBCFD06721338547CC51D44DBD(L_20, /*hidden argument*/Enumerable_ToList_TisJsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_mA18EE5F6E6CE07FBCFD06721338547CC51D44DBD_RuntimeMethod_var);
		V_2 = L_21;
		goto IL_0075;
	}

IL_0075:
	{
		// }
		List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * L_22 = V_2;
		return L_22;
	}
}
// Newtonsoft.Json.JsonConverter WanzyeeStudio.JsonNetUtility::CreateConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * JsonNetUtility_CreateConverter_m45216D8A3CB93723832DE0755E5D9AD3E59C4804 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonNetUtility_CreateConverter_m45216D8A3CB93723832DE0755E5D9AD3E59C4804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// try{ return Activator.CreateInstance(type) as JsonConverter; }
		Type_t * L_0 = ___type0;
		RuntimeObject * L_1 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_0, /*hidden argument*/NULL);
		V_0 = ((JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)IsInstClass((RuntimeObject*)L_1, JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_il2cpp_TypeInfo_var));
		goto IL_0032;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0010;
		throw e;
	}

CATCH_0010:
	{ // begin catch(System.Exception)
		// catch(Exception exception){ Debug.LogErrorFormat("Can't create JsonConverter {0}:\n{1}", type, exception); }
		V_1 = ((Exception_t *)__exception_local);
		// catch(Exception exception){ Debug.LogErrorFormat("Can't create JsonConverter {0}:\n{1}", type, exception); }
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		Type_t * L_4 = ___type0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_3;
		Exception_t * L_6 = V_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralF523F7BE60471F1025BFABC98268AC65AF17A1A5, L_5, /*hidden argument*/NULL);
		goto IL_002e;
	} // end catch (depth: 1)

IL_002e:
	{
		// return null;
		V_0 = (JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)NULL;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * L_7 = V_0;
		return L_7;
	}
}
// System.Type[] WanzyeeStudio.JsonNetUtility::FindConverterTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* JsonNetUtility_FindConverterTypes_m53E064B2B355156B6BBD939D0799AB278C0F3A65 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonNetUtility_FindConverterTypes_m53E064B2B355156B6BBD939D0799AB278C0F3A65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_0 = NULL;
	Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * G_B2_0 = NULL;
	AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* G_B2_1 = NULL;
	Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * G_B1_0 = NULL;
	AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* G_B1_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	{
		// return AppDomain.CurrentDomain.GetAssemblies(
		// 
		//     ).SelectMany((assembly) => assembly.GetTypes()
		//     ).Where((type) => typeof(JsonConverter).IsAssignableFrom(type)
		// 
		//     ).Where((type) => (!type.IsAbstract && !type.IsGenericTypeDefinition)
		//     ).Where((type) => null != type.GetConstructor(new Type[0])
		// 
		//     ).Where((type) => !(null != type.Namespace && type.Namespace.StartsWith("Newtonsoft.Json"))
		//     ).OrderBy((type) => null != type.Namespace && type.Namespace.StartsWith("WanzyeeStudio")
		// 
		// ).ToArray();
		AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_0 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_1 = AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * L_2 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_4();
		Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_4 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * L_5 = (Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D *)il2cpp_codegen_object_new(Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D_il2cpp_TypeInfo_var);
		Func_2__ctor_m0F843B165F1FA493C2A355B28394DC78AA6DF90D(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CFindConverterTypesU3Eb__4_0_mF8C1C555438384B77F467B99F141B195FB606115_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0F843B165F1FA493C2A355B28394DC78AA6DF90D_RuntimeMethod_var);
		Func_2_t1DB78001C40A03A303D41DD7A89698AFAC67B86D * L_6 = L_5;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_4(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_7 = Enumerable_SelectMany_TisAssembly_t_TisType_t_m1548E6D478C5DD0AC4F0D888CD3259AE03B3C7D5((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_SelectMany_TisAssembly_t_TisType_t_m1548E6D478C5DD0AC4F0D888CD3259AE03B3C7D5_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_8 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__4_1_5();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_10 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_11 = (Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *)il2cpp_codegen_object_new(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091_il2cpp_TypeInfo_var);
		Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_m17AC0DDBB9C8B80349C4CFFC644E8D538BCD73CF_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27_RuntimeMethod_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_12 = L_11;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__4_1_5(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_004e:
	{
		RuntimeObject* L_13 = Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_14 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__4_2_6();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = L_13;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = L_13;
			goto IL_0072;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_16 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_17 = (Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *)il2cpp_codegen_object_new(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091_il2cpp_TypeInfo_var);
		Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec_U3CFindConverterTypesU3Eb__4_2_mEDB47F4CA501E57C5F080A67FB9BE855A03033DD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27_RuntimeMethod_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_18 = L_17;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__4_2_6(L_18);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_1;
	}

IL_0072:
	{
		RuntimeObject* L_19 = Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411(G_B6_1, G_B6_0, /*hidden argument*/Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_20 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__4_3_7();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_21 = L_20;
		G_B7_0 = L_21;
		G_B7_1 = L_19;
		if (L_21)
		{
			G_B8_0 = L_21;
			G_B8_1 = L_19;
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_22 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_23 = (Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *)il2cpp_codegen_object_new(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091_il2cpp_TypeInfo_var);
		Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m95C9FF676F3EEC907E9BC92BF1A91568D3A3EB2F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27_RuntimeMethod_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_24 = L_23;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__4_3_7(L_24);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
	}

IL_0096:
	{
		RuntimeObject* L_25 = Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411(G_B8_1, G_B8_0, /*hidden argument*/Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_26 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__4_4_8();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_27 = L_26;
		G_B9_0 = L_27;
		G_B9_1 = L_25;
		if (L_27)
		{
			G_B10_0 = L_27;
			G_B10_1 = L_25;
			goto IL_00ba;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_28 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_29 = (Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *)il2cpp_codegen_object_new(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091_il2cpp_TypeInfo_var);
		Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27(L_29, L_28, (intptr_t)((intptr_t)U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_mD61CA9DA00FFA79177A20677DD413DC368C0BC17_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27_RuntimeMethod_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_30 = L_29;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__4_4_8(L_30);
		G_B10_0 = L_30;
		G_B10_1 = G_B9_1;
	}

IL_00ba:
	{
		RuntimeObject* L_31 = Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411(G_B10_1, G_B10_0, /*hidden argument*/Enumerable_Where_TisType_t_m6545717B6BB917090F70E15DBE0E2AB9BFAB8411_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_32 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9__4_5_9();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_33 = L_32;
		G_B11_0 = L_33;
		G_B11_1 = L_31;
		if (L_33)
		{
			G_B12_0 = L_33;
			G_B12_1 = L_31;
			goto IL_00de;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_34 = ((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_35 = (Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 *)il2cpp_codegen_object_new(Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091_il2cpp_TypeInfo_var);
		Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27(L_35, L_34, (intptr_t)((intptr_t)U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m35528832404A8F9CC2D354EFE43FBF2397DFB2AF_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8427891A99F02B9B4ED5A85C776EA409B45B9A27_RuntimeMethod_var);
		Func_2_tF531BD8DCA90022059CF63DD5140CEA803AC1091 * L_36 = L_35;
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9__4_5_9(L_36);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
	}

IL_00de:
	{
		RuntimeObject* L_37 = Enumerable_OrderBy_TisType_t_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m70070A6A01E35CF0B7720998DDB9503F9B70D0D1(G_B12_1, G_B12_0, /*hidden argument*/Enumerable_OrderBy_TisType_t_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m70070A6A01E35CF0B7720998DDB9503F9B70D0D1_RuntimeMethod_var);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_38 = Enumerable_ToArray_TisType_t_m4FD117803FF797C740AD3EC830C41070D6FF0A43(L_37, /*hidden argument*/Enumerable_ToArray_TisType_t_m4FD117803FF797C740AD3EC830C41070D6FF0A43_RuntimeMethod_var);
		V_0 = L_38;
		goto IL_00eb;
	}

IL_00eb:
	{
		// }
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_39 = V_0;
		return L_39;
	}
}
// System.Void WanzyeeStudio.JsonNetUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNetUtility__cctor_m39D7B7D870817CFB3D14DD8E52461EBD54BB3CB5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonNetUtility__cctor_m39D7B7D870817CFB3D14DD8E52461EBD54BB3CB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JsonSerializerSettings defaultSettings = new JsonSerializerSettings(){
		//     Converters = CreateConverters()
		// };
		JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * L_0 = (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 *)il2cpp_codegen_object_new(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_il2cpp_TypeInfo_var);
		JsonSerializerSettings__ctor_m1E444D76E8D4407BB6244ECDD5C8A470BE6CE644(L_0, /*hidden argument*/NULL);
		JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * L_1 = L_0;
		List_1_t5BA4B04DD4C74CD315E79DAA28B9F48F2AD6C5A2 * L_2 = JsonNetUtility_CreateConverters_m1ED94579A6BEF0C43EE64C8E4D39838188F24734(/*hidden argument*/NULL);
		NullCheck(L_1);
		JsonSerializerSettings_set_Converters_m123E86993A7880E3F9E484590E75909306F41A13_inline(L_1, L_2, /*hidden argument*/NULL);
		((JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_StaticFields*)il2cpp_codegen_static_fields_for(JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_il2cpp_TypeInfo_var))->set_defaultSettings_0(L_1);
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
// System.Void WanzyeeStudio.JsonNetUtility_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m82CB7C9DEA257CBA40DDFF79031F73AEAE5A2F6E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m82CB7C9DEA257CBA40DDFF79031F73AEAE5A2F6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * L_0 = (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 *)il2cpp_codegen_object_new(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0F0315ACDA5C7D58B7C209CDA2904A9372428C86(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WanzyeeStudio.JsonNetUtility_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0F0315ACDA5C7D58B7C209CDA2904A9372428C86 (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Newtonsoft.Json.JsonSerializerSettings WanzyeeStudio.JsonNetUtility_<>c::<Initialize>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * U3CU3Ec_U3CInitializeU3Eb__1_0_m13F11664D8DA44DFCE1C16F5604FA9F772DD79FE (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CInitializeU3Eb__1_0_m13F11664D8DA44DFCE1C16F5604FA9F772DD79FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(null == JsonConvert.DefaultSettings) JsonConvert.DefaultSettings = () => defaultSettings;
		IL2CPP_RUNTIME_CLASS_INIT(JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_il2cpp_TypeInfo_var);
		JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * L_0 = ((JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_StaticFields*)il2cpp_codegen_static_fields_for(JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_il2cpp_TypeInfo_var))->get_defaultSettings_0();
		return L_0;
	}
}
// Newtonsoft.Json.JsonConverter WanzyeeStudio.JsonNetUtility_<>c::<CreateConverters>b__2_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m7215399F81DC1BD8C80FAD229FD50D6606728951 (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m7215399F81DC1BD8C80FAD229FD50D6606728951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var _customs = FindConverterTypes().Select((type) => CreateConverter(type));
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonNetUtility_t9654F4B2B362B289860920147494AF281BA52C58_il2cpp_TypeInfo_var);
		JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * L_1 = JsonNetUtility_CreateConverter_m45216D8A3CB93723832DE0755E5D9AD3E59C4804(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean WanzyeeStudio.JsonNetUtility_<>c::<CreateConverters>b__2_1(Newtonsoft.Json.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreateConvertersU3Eb__2_1_m74C80667076D17B07DB08BA255707AAF19F7E256 (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * ___converter0, const RuntimeMethod* method)
{
	{
		// return _customs.Concat(_builtins).Where((converter) => null != converter).ToList();
		JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * L_0 = ___converter0;
		return (bool)((!(((RuntimeObject*)(JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> WanzyeeStudio.JsonNetUtility_<>c::<FindConverterTypes>b__4_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CFindConverterTypesU3Eb__4_0_mF8C1C555438384B77F467B99F141B195FB606115 (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	{
		// ).SelectMany((assembly) => assembly.GetTypes()
		Assembly_t * L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_1 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(17 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean WanzyeeStudio.JsonNetUtility_<>c::<FindConverterTypes>b__4_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_m17AC0DDBB9C8B80349C4CFFC644E8D538BCD73CF (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_m17AC0DDBB9C8B80349C4CFFC644E8D538BCD73CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ).Where((type) => typeof(JsonConverter).IsAssignableFrom(type)
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___type0;
		NullCheck(L_1);
		bool L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
	}
}
// System.Boolean WanzyeeStudio.JsonNetUtility_<>c::<FindConverterTypes>b__4_2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_2_mEDB47F4CA501E57C5F080A67FB9BE855A03033DD (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// ).Where((type) => (!type.IsAbstract && !type.IsGenericTypeDefinition)
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsAbstract_m769E8E92F368822B8AB5354BB0D123BDDD605D09(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(81 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_2);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean WanzyeeStudio.JsonNetUtility_<>c::<FindConverterTypes>b__4_3(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m95C9FF676F3EEC907E9BC92BF1A91568D3A3EB2F (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m95C9FF676F3EEC907E9BC92BF1A91568D3A3EB2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ).Where((type) => null != type.GetConstructor(new Type[0])
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_1 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_2 = Type_GetConstructor_m4371D7AD6A8E15067C698696B0167323CBC7F3DA(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var);
		bool L_3 = ConstructorInfo_op_Inequality_m7BACC92FB27D1999A084F5346451CEE9FD0445E4((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)NULL, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean WanzyeeStudio.JsonNetUtility_<>c::<FindConverterTypes>b__4_4(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_mD61CA9DA00FFA79177A20677DD413DC368C0BC17 (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_mD61CA9DA00FFA79177A20677DD413DC368C0BC17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// ).Where((type) => !(null != type.Namespace && type.Namespace.StartsWith("Newtonsoft.Json"))
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_2);
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_3, _stringLiteral920334256608967FE032FB31263D7097FC4EE992, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean WanzyeeStudio.JsonNetUtility_<>c::<FindConverterTypes>b__4_5(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m35528832404A8F9CC2D354EFE43FBF2397DFB2AF (U3CU3Ec_tE9CC8D9617A72A23950D310D48D3118ED4D94050 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m35528832404A8F9CC2D354EFE43FBF2397DFB2AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// ).OrderBy((type) => null != type.Namespace && type.Namespace.StartsWith("WanzyeeStudio")
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_0);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_2);
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_3, _stringLiteralEAE2F266BB8A4F50AC24ECD15B9AA77C631A8211, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return (bool)G_B3_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * JsonConvert_get_DefaultSettings_m0A64E186CBB25F5486691EE798D56712E9F807BB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_get_DefaultSettings_m0A64E186CBB25F5486691EE798D56712E9F807BBAssemblyU2DCSharp1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_il2cpp_TypeInfo_var);
		Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * L_0 = ((JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_il2cpp_TypeInfo_var))->get_U3CDefaultSettingsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JsonConvert_set_DefaultSettings_mC4733AB6E76271501E1A0A9EF49DDD66BAE52904_inline (Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_set_DefaultSettings_mC4733AB6E76271501E1A0A9EF49DDD66BAE52904AssemblyU2DCSharp1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tCF6469FCBB9DB99D1CFA9E1F8631305C0413D2B1 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_il2cpp_TypeInfo_var);
		((JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t05746CA10F1EDB3290EA5183894D3F710968C542_il2cpp_TypeInfo_var))->set_U3CDefaultSettingsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_Converters_m123E86993A7880E3F9E484590E75909306F41A13_inline (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CConvertersU3Ek__BackingField_26(L_0);
		return;
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
