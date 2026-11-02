#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01;
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4;
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D;
struct Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879;
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23;
struct Comparer_1_tFD32A42D8772E55226323EC91E1F3487D91575BC;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581;
struct EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t9E6E3DCB36369487564A56B3BE55B3F12E9B096B;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t984D540FC208A2CABAB23A4D766E1C17CA1D0833;
struct KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1;
struct KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_t0340DC7FDD9044645918ACB6237990DB2712B09A;
struct ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9;
struct ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F;
struct EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E;
struct EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E;
struct EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01  : public RuntimeObject
{
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4  : public RuntimeObject
{
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D  : public RuntimeObject
{
};
struct Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879  : public RuntimeObject
{
};
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23  : public RuntimeObject
{
};
struct Comparer_1_tFD32A42D8772E55226323EC91E1F3487D91575BC  : public RuntimeObject
{
};
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* ____keys;
	ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* ____keys;
	ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0340DC7FDD9044645918ACB6237990DB2712B09A* ____keys;
	ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581  : public RuntimeObject
{
};
struct EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0  : public RuntimeObject
{
};
struct ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9  : public RuntimeObject
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
};
struct ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88  : public RuntimeObject
{
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F  : public RuntimeObject
{
	Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* ____dictionary;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
struct Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E 
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____currentValue;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;
struct Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F 
{
	Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____currentValue;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_1_t950E5118B1EDD6EF8B35C11D2C9BE11923F6076E;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tD1D71D8C14C95585BD6BFEDB88935DEFEBE4F5C1;
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;
typedef Il2CppFullySharedGenericStruct ValueTuple_3_tB49E2E99DF93F3BB2968E9D245678D8623FF898E;
struct ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
	int32_t ___Item3;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98;
typedef Il2CppFullySharedGenericStruct ValueTuple_4_tC84FAA888D71F1EEFA9404956966C93E7171155F;
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t0372F0E081F7940A88ECA2C5C0C5EBCD0CCCEDD8;
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D 
{
	intptr_t ___ptr;
};
struct Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___value;
};
struct Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0 
{
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ____currentValue;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D 
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C 
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ____placeholder;
	uint8_t ____byte;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options;
	String_t* ____cultureKey;
	String_t* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options;
	char* ____cultureKey;
	char* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options;
	Il2CppChar* ____cultureKey;
	Il2CppChar* ____pattern;
};
struct KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 
{
	int32_t ___U3CkeyU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
};
struct Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297 
{
	int32_t ___hashCode;
	int32_t ___next;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 
{
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ____span;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B 
{
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ____span;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ____span;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ____span;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___Item1;
	int32_t ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_StaticFields
{
	ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ___U3CSharedU3Ek__BackingField;
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774_StaticFields
{
	ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ___U3CSharedU3Ek__BackingField;
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4_StaticFields
{
	Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* ___defaultComparer;
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80_StaticFields
{
	Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* ___defaultComparer;
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D_StaticFields
{
	Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* ___defaultComparer;
};
struct Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879_StaticFields
{
	Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879* ___defaultComparer;
};
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024_StaticFields
{
	Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* ___defaultComparer;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23_StaticFields
{
	Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23* ___defaultComparer;
};
struct Comparer_1_tFD32A42D8772E55226323EC91E1F3487D91575BC_StaticFields
{
	Comparer_1_tFD32A42D8772E55226323EC91E1F3487D91575BC* ___defaultComparer;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields
{
	EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* ___defaultComparer;
};
struct EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0_StaticFields
{
	EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* ___defaultComparer;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 m_Items[1];

	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
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
struct ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA  : public RuntimeArray
{
	ALIGN_FIELD (8) ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D m_Items[1];

	inline ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B m_Items[1];

	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297 m_Items[1];

	inline Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t74037CC28986A9F2AF8C6617DECF766B9432B297 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____pattern), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3478E01F533176EE56AC59C6EB4FC7BC920334AD_gshared (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mA82F8C1809053012A56706E5F07BB1163DA96315_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m8F5684F44FFA716943FBBD392729968B64E73791_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA867DD69720A9FB0C9CEA0DD2568D0C61842E945_gshared (Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0* __this, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7A5DDD2AC8A8C278991F4BEC15E8009F16CFA728_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m70456E44F339E6553AB0B02980332C300B2FB391_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE_fshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m707DE990097608254ED587AF911EA6DC1578C1C0_gshared (Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F* __this, Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m91348A793D252103F159B1C52F097B6B85589A15_gshared (Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m461FE97408DBFED1D0BC96B384A55E1BEA3E5CD7_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFF16FBF4112C75DCE17FBE1C12799469549384C9 (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m77CD139AE5695E19D15528EDCABC2DBC5232442A (ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m0A7616CA0C5F8B2A1372CAD6967AC4F127243618 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m74F1901BAE48B9C068373B587B6183436E40A4D4 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m177994D2B6C4391A47021A4C263145F2998CD678 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mE2C6497D8A95DCFD68062BA977030846E9424271 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3066403B3C2646F9D50688C4CC667FFF308916D4 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m69CB90458039D4AF8EA66DC1973DD9A523F06005 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m35342A6650FAB414E9DE7E5AD2E29DBCD1F4EF45 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mCE5BCFBD7B973DC76FC684E5DE77F470EB4007C2 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mAAACF5E45EB35EAC5E49A2296654B408699066D4 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m5639F7CE46E362833254E0DE9958B903EA6BDE20 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mF85DC8F3EA67856B3791947CE0B50FE0F8AC689E (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD6788CFFF1EADCC0D5841E29FDA618E3C89149CC (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mE26D9F99171F4987E38C4B72996CA6D72C8C8B1A (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879* Comparer_1_get_Default_mF0432C77CCC727F33EF733138201216D0B06038D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mD1387868FDAC9764FE6DBB73ADC6CC33BE176723 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m02C670C2E4C17D1329301091D6DEDEBEA13456E5 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2391DC8A3CB4F194AC282AA1571D53463F728ABA (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mF6205032C98ED74043069AADCF810A2B86431C61 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m129363AD62AF04EA0988D6B06689ACF1A6521AEA_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m25F48FF034850BFFB55FF0966A89773833827C13_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m29899BE37082D09F8EF9D8C77BA7EA42DD8E3579_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m72B418D5FBACB299D4F3CD1C1CAE6F121E36EEB6_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m727E4F92660C3599373E96B2277F2579D7053E7D_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mA7DA35373A0D1DA0F0F52AB5F5124EBF80123B34_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m4A5116FBF0F17298B1A8ADD2D9A92487FA5BD0F3_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8A7AD10C0F27B65A7F6B01B3E082165E04034AE2_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m45F0B64B4FBA04D76955E21916B7C8225E35DDCB_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mBBF2B5083ACB07D20DE576A46B465D322B5F32EF_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m3A7596754C146B010097071A2A4D564A7AD8769D_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mD5D1040856F67C45DD846B9353639C2B5F7F6065_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m1AD5FE9CB82D596684BC4BDF2B7E9085B4462C0E_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m8E20C14BD31E60D6D409CA3E672F24CEE4B53522_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23* Comparer_1_get_Default_m551A81612DA7FD77D4E7DEDF8CC01CC7D4B74578_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m62E822809CABB508DCB391EAAE453564AAAE8361_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mE45ABAA383FB25865A282E94D18F6F6BBD35F1B9_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2586ABE5C78BB4C3266B34D88F15E89E2883D45D_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m594ECCFB16F8174A976DF57E669380F67A8468D3_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m29AFA6292BD363090BF866F720F6CE566B210243_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m17EB11707D3325E8A34A19CF61FC4714943846DB_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* EqualityComparer_1_get_Default_m96799E2B99BE65E1AB30536CF1870515ACD05D7A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m66606AC166168D1328B5DE4157D5B44C41AD1C6B_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mCAB34603DC4F42BC11E27F00AB65D22A1C461FD2_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m4DB4D709E507AF137C8B45A8B702223359257CCC_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFD32A42D8772E55226323EC91E1F3487D91575BC* Comparer_1_get_Default_m8718B231D29DBCD29BF3F044E8B7DF331F66F70A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3F93074FF6402315F4D65A807FED2428B149A5E3_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m03DAC3002510F4F718AAD160E3DB4A3FEE47C697_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mE5B4D1E394EB70D832EDECF1C9D281A7338AE927_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mB27739EFCE0512EE04657312351929C7A7269890_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3CA178132908A6ADFF288681041F38985EA75DE0_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_mFE35D80C6C2114B0EED305163DA62B94D7BF16EE_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1ABC26E604D5CD4056D5100AEBFD8C6E18D40A71_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_mCE1FAAFBE8806199D45EAE2677CA526233303C06_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_mF8EAEC3A08D877F3FBCEBAFFA0B0D6824E4B279B_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_m1C1323FA9EDA462D02AD6A44EF9CDAC425F986A4_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m88A65F9D6160A89D54BDA901E5FC60505509ADE0_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m8F4536D49CF144E0A48EBDCA7405E6CEADB23AEE_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m5390AB6AF9BB58826B26101B61844A7F1751D26D_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_mCD303D515F291F404600F68FBCAFC0C718ACFCAF_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m2595652C267C2FB4E7FE4CC00430B208F552DC38_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* EqualityComparer_1_CreateComparer_m7E9BF3452BCAD4EF6FCD1459BD0203238F315430 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method) ;

inline void Enumerator__ctor_m3478E01F533176EE56AC59C6EB4FC7BC920334AD (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E*, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, const RuntimeMethod*))Enumerator__ctor_m3478E01F533176EE56AC59C6EB4FC7BC920334AD_gshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsValue_mA82F8C1809053012A56706E5F07BB1163DA96315 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_ContainsValue_mA82F8C1809053012A56706E5F07BB1163DA96315_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline void ValueCollection_CopyTo_m8F5684F44FFA716943FBBD392729968B64E73791 (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_m8F5684F44FFA716943FBBD392729968B64E73791_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void Enumerator__ctor_mA867DD69720A9FB0C9CEA0DD2568D0C61842E945 (Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0* __this, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0*, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))Enumerator__ctor_mA867DD69720A9FB0C9CEA0DD2568D0C61842E945_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline bool Dictionary_2_ContainsValue_m7A5DDD2AC8A8C278991F4BEC15E8009F16CFA728 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, const RuntimeMethod*))Dictionary_2_ContainsValue_m7A5DDD2AC8A8C278991F4BEC15E8009F16CFA728_gshared)(__this, ___0_value, method);
}
inline void ValueCollection_CopyTo_m70456E44F339E6553AB0B02980332C300B2FB391 (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88*, ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_m70456E44F339E6553AB0B02980332C300B2FB391_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m707DE990097608254ED587AF911EA6DC1578C1C0 (Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F* __this, Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F*, Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970*, const RuntimeMethod*))Enumerator__ctor_m707DE990097608254ED587AF911EA6DC1578C1C0_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_get_Count_m0DFB7CE7E0FF1E401B9F2751B7EC2D94E8598C85 (Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline bool Dictionary_2_ContainsValue_m91348A793D252103F159B1C52F097B6B85589A15 (Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_ContainsValue_m91348A793D252103F159B1C52F097B6B85589A15_gshared)(__this, ___0_value, method);
}
inline void ValueCollection_CopyTo_m461FE97408DBFED1D0BC96B384A55E1BEA3E5CD7 (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_m461FE97408DBFED1D0BC96B384A55E1BEA3E5CD7_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFF16FBF4112C75DCE17FBE1C12799469549384C9 (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 Span_1_op_Implicit_m2740023916201D5EB04C52CEB9FB3E175E79FE7A (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared)(___0_span, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m77CD139AE5695E19D15528EDCABC2DBC5232442A (ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m0A7616CA0C5F8B2A1372CAD6967AC4F127243618 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m74F1901BAE48B9C068373B587B6183436E40A4D4 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m177994D2B6C4391A47021A4C263145F2998CD678 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mE2C6497D8A95DCFD68062BA977030846E9424271 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3066403B3C2646F9D50688C4CC667FFF308916D4 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m69CB90458039D4AF8EA66DC1973DD9A523F06005 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m35342A6650FAB414E9DE7E5AD2E29DBCD1F4EF45 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mCE5BCFBD7B973DC76FC684E5DE77F470EB4007C2 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mAAACF5E45EB35EAC5E49A2296654B408699066D4 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m5639F7CE46E362833254E0DE9958B903EA6BDE20 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mF85DC8F3EA67856B3791947CE0B50FE0F8AC689E (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD6788CFFF1EADCC0D5841E29FDA618E3C89149CC (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mE26D9F99171F4987E38C4B72996CA6D72C8C8B1A (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879* Comparer_1_get_Default_mF0432C77CCC727F33EF733138201216D0B06038D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mD1387868FDAC9764FE6DBB73ADC6CC33BE176723 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m02C670C2E4C17D1329301091D6DEDEBEA13456E5 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2391DC8A3CB4F194AC282AA1571D53463F728ABA (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mF6205032C98ED74043069AADCF810A2B86431C61 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
inline bool ValueTuple_2_Equals_m129363AD62AF04EA0988D6B06689ACF1A6521AEA (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))ValueTuple_2_Equals_m129363AD62AF04EA0988D6B06689ACF1A6521AEA_gshared)(__this, ___0_other, method);
}
inline bool ValueTuple_2_Equals_m25F48FF034850BFFB55FF0966A89773833827C13 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m25F48FF034850BFFB55FF0966A89773833827C13_gshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m29899BE37082D09F8EF9D8C77BA7EA42DD8E3579 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m29899BE37082D09F8EF9D8C77BA7EA42DD8E3579_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_2_CompareTo_m72B418D5FBACB299D4F3CD1C1CAE6F121E36EEB6 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))ValueTuple_2_CompareTo_m72B418D5FBACB299D4F3CD1C1CAE6F121E36EEB6_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m727E4F92660C3599373E96B2277F2579D7053E7D (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m727E4F92660C3599373E96B2277F2579D7053E7D_gshared)(__this, ___0_other, method);
}
inline Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C (const RuntimeMethod* method)
{
	return ((  Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* (*) (const RuntimeMethod*))Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared)(method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mA7DA35373A0D1DA0F0F52AB5F5124EBF80123B34 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mA7DA35373A0D1DA0F0F52AB5F5124EBF80123B34_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_gshared)(__this, method);
}
inline int32_t ValueTuple_2_GetHashCodeCore_m4A5116FBF0F17298B1A8ADD2D9A92487FA5BD0F3 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_m4A5116FBF0F17298B1A8ADD2D9A92487FA5BD0F3_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8A7AD10C0F27B65A7F6B01B3E082165E04034AE2 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8A7AD10C0F27B65A7F6B01B3E082165E04034AE2_gshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_2_ToString_m45F0B64B4FBA04D76955E21916B7C8225E35DDCB (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, const RuntimeMethod*))ValueTuple_2_ToString_m45F0B64B4FBA04D76955E21916B7C8225E35DDCB_gshared)(__this, method);
}
inline bool ValueTuple_2_Equals_mBBF2B5083ACB07D20DE576A46B465D322B5F32EF (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))ValueTuple_2_Equals_mBBF2B5083ACB07D20DE576A46B465D322B5F32EF_gshared)(__this, ___0_other, method);
}
inline bool ValueTuple_2_Equals_m3A7596754C146B010097071A2A4D564A7AD8769D (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m3A7596754C146B010097071A2A4D564A7AD8769D_gshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline)(method);
}
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mD5D1040856F67C45DD846B9353639C2B5F7F6065 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mD5D1040856F67C45DD846B9353639C2B5F7F6065_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_2_CompareTo_m1AD5FE9CB82D596684BC4BDF2B7E9085B4462C0E (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))ValueTuple_2_CompareTo_m1AD5FE9CB82D596684BC4BDF2B7E9085B4462C0E_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m8E20C14BD31E60D6D409CA3E672F24CEE4B53522 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m8E20C14BD31E60D6D409CA3E672F24CEE4B53522_gshared)(__this, ___0_other, method);
}
inline Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23* Comparer_1_get_Default_m551A81612DA7FD77D4E7DEDF8CC01CC7D4B74578 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23* (*) (const RuntimeMethod*))Comparer_1_get_Default_m551A81612DA7FD77D4E7DEDF8CC01CC7D4B74578_gshared)(method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m62E822809CABB508DCB391EAAE453564AAAE8361 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m62E822809CABB508DCB391EAAE453564AAAE8361_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_gshared)(__this, method);
}
inline int32_t ValueTuple_2_GetHashCodeCore_mE45ABAA383FB25865A282E94D18F6F6BBD35F1B9 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mE45ABAA383FB25865A282E94D18F6F6BBD35F1B9_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2586ABE5C78BB4C3266B34D88F15E89E2883D45D (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2586ABE5C78BB4C3266B34D88F15E89E2883D45D_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline String_t* ValueTuple_2_ToString_m594ECCFB16F8174A976DF57E669380F67A8468D3 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, const RuntimeMethod*))ValueTuple_2_ToString_m594ECCFB16F8174A976DF57E669380F67A8468D3_gshared)(__this, method);
}
inline bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829, const RuntimeMethod*))ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_fshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_other, method);
}
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829, const RuntimeMethod*))ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_fshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_other, method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_fshared)(__this, method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_fshared)(__this, method);
}
inline bool ValueTuple_2_Equals_m29AFA6292BD363090BF866F720F6CE566B210243 (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))ValueTuple_2_Equals_m29AFA6292BD363090BF866F720F6CE566B210243_gshared)(__this, ___0_other, method);
}
inline bool ValueTuple_2_Equals_m17EB11707D3325E8A34A19CF61FC4714943846DB (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m17EB11707D3325E8A34A19CF61FC4714943846DB_gshared)(__this, ___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* EqualityComparer_1_get_Default_m96799E2B99BE65E1AB30536CF1870515ACD05D7A_inline (const RuntimeMethod* method) ;
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m66606AC166168D1328B5DE4157D5B44C41AD1C6B (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m66606AC166168D1328B5DE4157D5B44C41AD1C6B_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_2_CompareTo_mCAB34603DC4F42BC11E27F00AB65D22A1C461FD2 (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))ValueTuple_2_CompareTo_mCAB34603DC4F42BC11E27F00AB65D22A1C461FD2_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m4DB4D709E507AF137C8B45A8B702223359257CCC (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m4DB4D709E507AF137C8B45A8B702223359257CCC_gshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFD32A42D8772E55226323EC91E1F3487D91575BC* Comparer_1_get_Default_m8718B231D29DBCD29BF3F044E8B7DF331F66F70A (const RuntimeMethod* method) ;
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3F93074FF6402315F4D65A807FED2428B149A5E3 (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3F93074FF6402315F4D65A807FED2428B149A5E3_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyEvent_GetHashCode_m597244B0C54076AA98E06A3DE7E0A39CF1788154 (KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674* __this, const RuntimeMethod* method) ;
inline int32_t ValueTuple_2_GetHashCode_m03DAC3002510F4F718AAD160E3DB4A3FEE47C697 (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m03DAC3002510F4F718AAD160E3DB4A3FEE47C697_gshared)(__this, method);
}
inline int32_t ValueTuple_2_GetHashCodeCore_mE5B4D1E394EB70D832EDECF1C9D281A7338AE927 (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mE5B4D1E394EB70D832EDECF1C9D281A7338AE927_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mB27739EFCE0512EE04657312351929C7A7269890 (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mB27739EFCE0512EE04657312351929C7A7269890_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyEvent_ToString_m0A62D88B95C5C7048B1E6652BF7C8178BB4CCD28 (KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674* __this, const RuntimeMethod* method) ;
inline String_t* ValueTuple_2_ToString_m3CA178132908A6ADFF288681041F38985EA75DE0 (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*, const RuntimeMethod*))ValueTuple_2_ToString_m3CA178132908A6ADFF288681041F38985EA75DE0_gshared)(__this, method);
}
inline bool ValueTuple_3_Equals_mFE35D80C6C2114B0EED305163DA62B94D7BF16EE (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*))ValueTuple_3_Equals_mFE35D80C6C2114B0EED305163DA62B94D7BF16EE_gshared)(__this, ___0_other, method);
}
inline bool ValueTuple_3_Equals_m1ABC26E604D5CD4056D5100AEBFD8C6E18D40A71 (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_m1ABC26E604D5CD4056D5100AEBFD8C6E18D40A71_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_mCE1FAAFBE8806199D45EAE2677CA526233303C06 (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_Equals_mCE1FAAFBE8806199D45EAE2677CA526233303C06_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_CompareTo_mF8EAEC3A08D877F3FBCEBAFFA0B0D6824E4B279B (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*))ValueTuple_3_CompareTo_mF8EAEC3A08D877F3FBCEBAFFA0B0D6824E4B279B_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_IComparable_CompareTo_m1C1323FA9EDA462D02AD6A44EF9CDAC425F986A4 (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IComparable_CompareTo_m1C1323FA9EDA462D02AD6A44EF9CDAC425F986A4_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m88A65F9D6160A89D54BDA901E5FC60505509ADE0 (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m88A65F9D6160A89D54BDA901E5FC60505509ADE0_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
inline int32_t ValueTuple_3_GetHashCode_m8F4536D49CF144E0A48EBDCA7405E6CEADB23AEE (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, const RuntimeMethod*))ValueTuple_3_GetHashCode_m8F4536D49CF144E0A48EBDCA7405E6CEADB23AEE_gshared)(__this, method);
}
inline int32_t ValueTuple_3_GetHashCodeCore_m5390AB6AF9BB58826B26101B61844A7F1751D26D (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_GetHashCodeCore_m5390AB6AF9BB58826B26101B61844A7F1751D26D_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_mCD303D515F291F404600F68FBCAFC0C718ACFCAF (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_mCD303D515F291F404600F68FBCAFC0C718ACFCAF_gshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_3_ToString_m2595652C267C2FB4E7FE4CC00430B208F552DC38 (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*, const RuntimeMethod*))ValueTuple_3_ToString_m2595652C267C2FB4E7FE4CC00430B208F552DC38_gshared)(__this, method);
}
inline bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D, const RuntimeMethod*))ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_gshared)(__this, ___0_other, method);
}
inline bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D, const RuntimeMethod*))ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, const RuntimeMethod*))ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_gshared)(__this, method);
}
inline int32_t ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_gshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, const RuntimeMethod*))ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_gshared)(__this, method);
}
inline bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared)(__this, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
inline bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared)(__this, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521 (uint16_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, int32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* EqualityComparer_1_CreateComparer_m7E9BF3452BCAD4EF6FCD1459BD0203238F315430 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E ValueCollection_GetEnumerator_m516DD89FFFE3A9ED28CF68A395A1B801E38F35D1_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_0 = __this->____dictionary;
		Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3478E01F533176EE56AC59C6EB4FC7BC920334AD((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m8F5684F44FFA716943FBBD392729968B64E73791_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_array;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0018;
		}
	}

IL_0013:
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0018:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = ___0_array;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_8 = __this->____dictionary;
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876(L_8, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_9)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0030:
	{
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_10 = __this->____dictionary;
		int32_t L_11 = L_10->____count;
		V_0 = L_11;
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_12 = __this->____dictionary;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_13 = L_12->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_0077;
	}

IL_004c:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = ___0_array;
		int32_t L_18 = ___1_index;
		int32_t L_19 = L_18;
		___1_index = ((int32_t)il2cpp_codegen_add(L_19, 1));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_20 = V_1;
		int32_t L_21 = V_2;
		Il2CppSharedGenericObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (Il2CppSharedGenericObject*)L_22);
	}

IL_0073:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0077:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m22996EE1594CA3F9EE86715E1FCED43EF3DA4CB3_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_0 = __this->____dictionary;
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45E4BE214106930001EB8ADDF58D255958F67B02_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_0 = __this->____dictionary;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		bool L_2;
		L_2 = Dictionary_2_ContainsValue_mA82F8C1809053012A56706E5F07BB1163DA96315(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12DCB65B02FD0EAB1F96E01675441DEA216DE185_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_0 = __this->____dictionary;
		Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3478E01F533176EE56AC59C6EB4FC7BC920334AD((&L_1), L_0, NULL);
		Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m61027E7D93F696142A6A7CD41FEC24FD9EC67452_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_0 = __this->____dictionary;
		Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3478E01F533176EE56AC59C6EB4FC7BC920334AD((&L_1), L_0, NULL);
		Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m83AFDB3D0CBBC94E862B900D91A8D602DC64AF7C_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_11 = __this->____dictionary;
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876(L_11, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0050:
	{
		RuntimeArray* L_13 = ___0_array;
		V_0 = ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = V_0;
		int32_t L_16 = ___1_index;
		ValueCollection_CopyTo_m8F5684F44FFA716943FBBD392729968B64E73791(__this, L_15, L_16, NULL);
		return;
	}

IL_0063:
	{
		RuntimeArray* L_17 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_17, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		if (L_18)
		{
			goto IL_0072;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_0072:
	{
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_19 = __this->____dictionary;
		int32_t L_20 = L_19->____count;
		V_2 = L_20;
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_21 = __this->____dictionary;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_22 = L_21->____entries;
		V_3 = L_22;
	}
	try
	{
		{
			V_4 = 0;
			goto IL_00bf_1;
		}

IL_008f_1:
		{
			EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_23 = V_3;
			int32_t L_24 = V_4;
			int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
			if ((((int32_t)L_25) < ((int32_t)0)))
			{
				goto IL_00b9_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = V_1;
			int32_t L_27 = ___1_index;
			int32_t L_28 = L_27;
			___1_index = ((int32_t)il2cpp_codegen_add(L_28, 1));
			EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_29 = V_3;
			int32_t L_30 = V_4;
			Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
			ArrayElementTypeCheck (L_26, L_31);
			(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_31);
		}

IL_00b9_1:
		{
			int32_t L_32 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		}

IL_00bf_1:
		{
			int32_t L_33 = V_4;
			int32_t L_34 = V_2;
			if ((((int32_t)L_33) < ((int32_t)L_34)))
			{
				goto IL_008f_1;
			}
		}
		{
			goto IL_00ce;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_35 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ce;
	}

IL_00ce:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0 ValueCollection_GetEnumerator_m0232A3407D0CB48FE8A7455D1C9CE2BDA2EECBBB_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_0 = __this->____dictionary;
		Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA867DD69720A9FB0C9CEA0DD2568D0C61842E945((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m70456E44F339E6553AB0B02980332C300B2FB391_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_index;
		ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* L_3 = ___0_array;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0018;
		}
	}

IL_0013:
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0018:
	{
		ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* L_5 = ___0_array;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_8 = __this->____dictionary;
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001(L_8, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_9)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0030:
	{
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_10 = __this->____dictionary;
		int32_t L_11 = L_10->____count;
		V_0 = L_11;
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_12 = __this->____dictionary;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_13 = L_12->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_0077;
	}

IL_004c:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* L_17 = ___0_array;
		int32_t L_18 = ___1_index;
		int32_t L_19 = L_18;
		___1_index = ((int32_t)il2cpp_codegen_add(L_19, 1));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_20 = V_1;
		int32_t L_21 = V_2;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D)L_22);
	}

IL_0073:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0077:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_mEF2933906667017C129CFA7E42898FEE178875AF_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_0 = __this->____dictionary;
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2FE3A688F618C78CD2E9E675726070645208973F_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___0_item, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_0 = __this->____dictionary;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_1 = ___0_item;
		bool L_2;
		L_2 = Dictionary_2_ContainsValue_m7A5DDD2AC8A8C278991F4BEC15E8009F16CFA728(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m4DB79B0368FE14445C5DEAC8C76F1B964BE12B5F_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_0 = __this->____dictionary;
		Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA867DD69720A9FB0C9CEA0DD2568D0C61842E945((&L_1), L_0, NULL);
		Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m83476C5EDC7F9EA314C6131C42647B296E61913C_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_0 = __this->____dictionary;
		Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA867DD69720A9FB0C9CEA0DD2568D0C61842E945((&L_1), L_0, NULL);
		Enumerator_tC1F6B13EE649455AED80A37D85846EEDF8D7D1F0 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m3AED579443002EB9B9DF1801F3C02A867EEF0B06_gshared (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_11 = __this->____dictionary;
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001(L_11, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0050:
	{
		RuntimeArray* L_13 = ___0_array;
		V_0 = ((ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA*)IsInstSealed((RuntimeObject*)L_13, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		ProfilerMarkerU5BU5D_tD6059438787545DA1EC609DCFF920CD8ABB03CBA* L_15 = V_0;
		int32_t L_16 = ___1_index;
		ValueCollection_CopyTo_m70456E44F339E6553AB0B02980332C300B2FB391(__this, L_15, L_16, NULL);
		return;
	}

IL_0063:
	{
		RuntimeArray* L_17 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_17, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		if (L_18)
		{
			goto IL_0072;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_0072:
	{
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_19 = __this->____dictionary;
		int32_t L_20 = L_19->____count;
		V_2 = L_20;
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_21 = __this->____dictionary;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_22 = L_21->____entries;
		V_3 = L_22;
	}
	try
	{
		{
			V_4 = 0;
			goto IL_00bf_1;
		}

IL_008f_1:
		{
			EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_23 = V_3;
			int32_t L_24 = V_4;
			int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
			if ((((int32_t)L_25) < ((int32_t)0)))
			{
				goto IL_00b9_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = V_1;
			int32_t L_27 = ___1_index;
			int32_t L_28 = L_27;
			___1_index = ((int32_t)il2cpp_codegen_add(L_28, 1));
			EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_29 = V_3;
			int32_t L_30 = V_4;
			ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
			ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_32 = L_31;
			RuntimeObject* L_33 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), &L_32);
			ArrayElementTypeCheck (L_26, L_33);
			(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_33);
		}

IL_00b9_1:
		{
			int32_t L_34 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		}

IL_00bf_1:
		{
			int32_t L_35 = V_4;
			int32_t L_36 = V_2;
			if ((((int32_t)L_35) < ((int32_t)L_36)))
			{
				goto IL_008f_1;
			}
		}
		{
			goto IL_00ce;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_37 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ce;
	}

IL_00ce:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_000f:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_dictionary;
		__this->____dictionary = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0018;
		}
	}

IL_0013:
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_8 = __this->____dictionary;
		int32_t L_9;
		L_9 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_8, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_9)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0030:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_10 = __this->____dictionary;
		int32_t L_11 = L_10->____count;
		V_0 = L_11;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_12 = __this->____dictionary;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_13 = L_12->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_0077;
	}

IL_004c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		int32_t L_18 = ___1_index;
		int32_t L_19 = L_18;
		___1_index = ((int32_t)il2cpp_codegen_add(L_19, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_20 = V_1;
		int32_t L_21 = V_2;
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		il2cpp_codegen_memcpy((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)), L_22, SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)), (void*)L_22);
	}

IL_0073:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0077:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m618DD0B95EF664954E8642E05340971E449BD496_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m4D5D70A7E71A521B0CC07AE728D6F7CE15BF634E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m60F2FC12A09222A69CE11D344E16D222797F549C_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m96852B0B0BAD5C0A9E004972475EDE03D1B0FE90_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m00E492D453DE9F24B31D0ACB0048DE740B2C1EA0_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m71121C077381FD3EB3CC58A97BA578BAD3A2EA3B_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_item : &___0_item), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m60447823261642EB057BDD5F8E420AD15158E1B7_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mDE2A3F43BD41FDDE0DBE76E55B6F9A250F386C6D_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mE4968D276FEE90B732476798DC51887BA807F953_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_11 = __this->____dictionary;
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_11, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0050:
	{
		RuntimeArray* L_13 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		int32_t L_16 = ___1_index;
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, L_15, L_16, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return;
	}

IL_0063:
	{
		RuntimeArray* L_17 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_17, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		if (L_18)
		{
			goto IL_0072;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_0072:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_19 = __this->____dictionary;
		int32_t L_20 = L_19->____count;
		V_2 = L_20;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_21 = __this->____dictionary;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = L_21->____entries;
		V_3 = L_22;
	}
	try
	{
		{
			V_4 = 0;
			goto IL_00bf_1;
		}

IL_008f_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_3;
			int32_t L_24 = V_4;
			int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			if ((((int32_t)L_25) < ((int32_t)0)))
			{
				goto IL_00b9_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = V_1;
			int32_t L_27 = ___1_index;
			int32_t L_28 = L_27;
			___1_index = ((int32_t)il2cpp_codegen_add(L_28, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_3;
			int32_t L_30 = V_4;
			il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
			RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_31);
			ArrayElementTypeCheck (L_26, L_32);
			(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_32);
		}

IL_00b9_1:
		{
			int32_t L_33 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		}

IL_00bf_1:
		{
			int32_t L_34 = V_4;
			int32_t L_35 = V_2;
			if ((((int32_t)L_34) < ((int32_t)L_35)))
			{
				goto IL_008f_1;
			}
		}
		{
			goto IL_00ce;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_36 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ce;
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_ICollection_get_SyncRoot_m1ABB030E21FDC64810D0F5E25A73C14542878812_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F ValueCollection_GetEnumerator_m8297D7F2A79EF3BE6EAF82EC709C735334BA5986_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_0 = __this->____dictionary;
		Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m707DE990097608254ED587AF911EA6DC1578C1C0((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m461FE97408DBFED1D0BC96B384A55E1BEA3E5CD7_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_array;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0018;
		}
	}

IL_0013:
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0018:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = ___0_array;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_8 = __this->____dictionary;
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_m0DFB7CE7E0FF1E401B9F2751B7EC2D94E8598C85(L_8, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_9)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0030:
	{
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_10 = __this->____dictionary;
		int32_t L_11 = L_10->____count;
		V_0 = L_11;
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_12 = __this->____dictionary;
		EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* L_13 = L_12->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_0077;
	}

IL_004c:
	{
		EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = ___0_array;
		int32_t L_18 = ___1_index;
		int32_t L_19 = L_18;
		___1_index = ((int32_t)il2cpp_codegen_add(L_19, 1));
		EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* L_20 = V_1;
		int32_t L_21 = V_2;
		Il2CppSharedGenericObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (Il2CppSharedGenericObject*)L_22);
	}

IL_0073:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0077:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m790395F77F7F91ED97DFF44FC54D71CF11147156_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_0 = __this->____dictionary;
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m0DFB7CE7E0FF1E401B9F2751B7EC2D94E8598C85(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m5F237E2DC5321A68B9899D4F8879636F07E76038_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_0 = __this->____dictionary;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		bool L_2;
		L_2 = Dictionary_2_ContainsValue_m91348A793D252103F159B1C52F097B6B85589A15(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m92D3980DE638718FFAE1F9A4B2359AAACC100C04_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_0 = __this->____dictionary;
		Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m707DE990097608254ED587AF911EA6DC1578C1C0((&L_1), L_0, NULL);
		Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mD041D9DD68FE8D8E1BD3C17161C01CBDB6F97EF0_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_0 = __this->____dictionary;
		Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m707DE990097608254ED587AF911EA6DC1578C1C0((&L_1), L_0, NULL);
		Enumerator_t1FE0DFF7BA8D1552CADFE663A4657358EDAFED5F L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m9C763FB309D1AF1325F6DE72D4ADB40596073C9C_gshared (ValueCollection_tB33A6223053FF5C230333CF59BAD2A5743318A9F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_11 = __this->____dictionary;
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_m0DFB7CE7E0FF1E401B9F2751B7EC2D94E8598C85(L_11, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0050:
	{
		RuntimeArray* L_13 = ___0_array;
		V_0 = ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = V_0;
		int32_t L_16 = ___1_index;
		ValueCollection_CopyTo_m461FE97408DBFED1D0BC96B384A55E1BEA3E5CD7(__this, L_15, L_16, NULL);
		return;
	}

IL_0063:
	{
		RuntimeArray* L_17 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_17, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		if (L_18)
		{
			goto IL_0072;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_0072:
	{
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_19 = __this->____dictionary;
		int32_t L_20 = L_19->____count;
		V_2 = L_20;
		Dictionary_2_t4DC62B10B13E0A999F4505F19817549FD9E5B970* L_21 = __this->____dictionary;
		EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* L_22 = L_21->____entries;
		V_3 = L_22;
	}
	try
	{
		{
			V_4 = 0;
			goto IL_00bf_1;
		}

IL_008f_1:
		{
			EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* L_23 = V_3;
			int32_t L_24 = V_4;
			int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
			if ((((int32_t)L_25) < ((int32_t)0)))
			{
				goto IL_00b9_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = V_1;
			int32_t L_27 = ___1_index;
			int32_t L_28 = L_27;
			___1_index = ((int32_t)il2cpp_codegen_add(L_28, 1));
			EntryU5BU5D_t9571C818F97121A43F79F92E91C7EB6899AE9E93* L_29 = V_3;
			int32_t L_30 = V_4;
			Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
			ArrayElementTypeCheck (L_26, L_31);
			(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_31);
		}

IL_00b9_1:
		{
			int32_t L_32 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		}

IL_00bf_1:
		{
			int32_t L_33 = V_4;
			int32_t L_34 = V_2;
			if ((((int32_t)L_33) < ((int32_t)L_34)))
			{
				goto IL_008f_1;
			}
		}
		{
			goto IL_00ce;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_35 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ce;
	}

IL_00ce:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ValueListBuilder_1_get_Item_m5EF2B61BDC18BDA4F358250CFF2AD3F4180851FB (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_0 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_1 = ___0_index;
		int32_t* L_2;
		L_2 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&((L_0)->____pointer))->value, (L_1), (L_0)->____length);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_2 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_3;
		L_3 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ValueListBuilder_1_Grow_mFF16FBF4112C75DCE17FBE1C12799469549384C9(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_001b:
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_4 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_5 = V_0;
		int32_t* L_6;
		L_6 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&((L_4)->____pointer))->value, (L_5), (L_4)->____length);
		int32_t L_7 = ___0_item;
		*(int32_t*)L_6 = L_7;
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ValueListBuilder_1_AsSpan_mB168B0C17F53FF2A5F8EA0B25A60F4741D20312F (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method) 
{
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_0 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2;
		L_2 = Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_inline(L_0, 0, L_1, NULL);
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_3;
		L_3 = Span_1_op_Implicit_m2740023916201D5EB04C52CEB9FB3E175E79FE7A(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955 (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_1;
		L_1 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____arrayFromPool;
		VirtualActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFF16FBF4112C75DCE17FBE1C12799469549384C9 (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_0;
		L_0 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_1 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_2;
		L_2 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline(L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = VirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_4 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_6;
		L_6 = Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC(L_5, NULL);
		bool L_7;
		L_7 = Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD(L_4, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_2;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_12;
		L_12 = Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC(L_11, NULL);
		__this->____span = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_14;
		L_14 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_1;
		VirtualActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242 (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos;
		__this->____pos = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_1 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_2 = __this->____pos;
		int32_t* L_3;
		L_3 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&((L_1)->____pointer))->value, (L_2), (L_1)->____length);
		int32_t L_4 = (*(int32_t*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m82EED4641F554E01AB5A9D550671180EB977403A (ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_2 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_3;
		L_3 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ValueListBuilder_1_Grow_m77CD139AE5695E19D15528EDCABC2DBC5232442A(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	}

IL_001b:
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_4 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_5 = V_0;
		int32_t* L_6;
		L_6 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&((L_4)->____pointer))->value, (L_5), (L_4)->____length);
		int32_t L_7 = ___0_item;
		*(int32_t*)L_6 = L_7;
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ValueListBuilder_1_AsSpan_m58381E593F71C663EEF492F25B973DB5E1502C2D (ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B* __this, const RuntimeMethod* method) 
{
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_0 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2;
		L_2 = Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_inline(L_0, 0, L_1, NULL);
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_3;
		L_3 = Span_1_op_Implicit_m2740023916201D5EB04C52CEB9FB3E175E79FE7A(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_mE3B9D4AD5CDC1E5D3B9F50469678BF99D2FD276D (ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_1;
		L_1 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____arrayFromPool;
		VirtualActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m77CD139AE5695E19D15528EDCABC2DBC5232442A (ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_0;
		L_0 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_1 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		int32_t L_2;
		L_2 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline(L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = VirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* L_4 = (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*)(&__this->____span);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_6;
		L_6 = Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC(L_5, NULL);
		bool L_7;
		L_7 = Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD(L_4, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_2;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_12;
		L_12 = Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC(L_11, NULL);
		__this->____span = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_14;
		L_14 = ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_1;
		VirtualActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1__ctor_mAFC9E903F63FD93D370EC5A4BE96A53F3778256B_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_initialSpan, const RuntimeMethod* method) 
{
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_initialSpan;
		__this->____span = L_0;
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		__this->____pos = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_mF8F23A327A1B4D211BFE3D5A78A31D5861B36BCF_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ValueListBuilder_1_get_Item_mA8603140DF41A28E02364AEE9AA9DCA424797BDD_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = ___0_index;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m8E0893D16DEF47E8D8F9689662927E8C34597BFE_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_2 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		((  void (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_001b:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_5 = V_0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_item : &___0_item), SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_7, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_7);
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ValueListBuilder_1_AsSpan_mF5CBC7C2E1B20F3A4ABC0DD44A535D30E70A9834_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(L_0, 0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_m95D1F578E53DD38ABC79F6837BE0D50A1512F6B2_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_1;
		L_1 = ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____arrayFromPool;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0;
		L_0 = ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2;
		L_2 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_1, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = VirtualFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_6;
		L_6 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		bool L_7;
		L_7 = ((  bool (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_12;
		L_12 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__this->____span = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_14;
		L_14 = ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_1;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Pop_mB67E702E623E6BACDF0BEB363EB6D323901B33FE_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	{
		int32_t L_0 = __this->____pos;
		__this->____pos = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2 = __this->____pos;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_1, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1__ctor_mD40F35A1E8A77256DDB679DDB93D3C2AC5098311_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_initialSpan, const RuntimeMethod* method) 
{
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_initialSpan;
		__this->____span = L_0;
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		__this->____pos = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_m2C33CA4B73AB5424991AF6FB060EC12451E41CE5_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m33FE48C9A574ECCCA152F8839103014923723A5F_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_2 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		((  void (*) (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	}

IL_001b:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_5 = V_0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_item : &___0_item), SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_7, SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_7);
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ValueListBuilder_1_AsSpan_m3FA086A9E9029716DEEB2449B36D1BF768A27047_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(L_0, 0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_mB50AB010F3A50CC265634CED281E90DFBFBA04EC_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_1;
		L_1 = ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____arrayFromPool;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0;
		L_0 = ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2;
		L_2 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_1, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = VirtualFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_6;
		L_6 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		bool L_7;
		L_7 = ((  bool (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_12;
		L_12 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__this->____span = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_14;
		L_14 = ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_1;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item1;
		__this->___Item1 = L_0;
		int32_t L_1 = ___1_item2;
		__this->___Item2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m0A7616CA0C5F8B2A1372CAD6967AC4F127243618 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF(__this, ((*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m0A7616CA0C5F8B2A1372CAD6967AC4F127243618_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m0A7616CA0C5F8B2A1372CAD6967AC4F127243618(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0;
		L_0 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_1 = __this->___Item1;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2 = ___0_other;
		int32_t L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		int32_t L_6 = __this->___Item2;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7 = ___0_other;
		int32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_5, L_6, L_8);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m74F1901BAE48B9C068373B587B6183436E40A4D4 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		int32_t L_4 = __this->___Item1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_5);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7 = V_0;
		int32_t L_8 = L_7.___Item1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		int32_t L_13 = __this->___Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_14);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_16 = V_0;
		int32_t L_17 = L_16.___Item2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		return L_20;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m74F1901BAE48B9C068373B587B6183436E40A4D4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m74F1901BAE48B9C068373B587B6183436E40A4D4(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mE2C6497D8A95DCFD68062BA977030846E9424271 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2 = (*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)__this);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_m177994D2B6C4391A47021A4C263145F2998CD678(__this, ((*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_mE2C6497D8A95DCFD68062BA977030846E9424271_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_mE2C6497D8A95DCFD68062BA977030846E9424271(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m177994D2B6C4391A47021A4C263145F2998CD678 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_0;
		L_0 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		int32_t L_1 = __this->___Item1;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2 = ___0_other;
		int32_t L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_7;
		L_7 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		int32_t L_8 = __this->___Item2;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_9 = ___0_other;
		int32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, L_8, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_m177994D2B6C4391A47021A4C263145F2998CD678_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_m177994D2B6C4391A47021A4C263145F2998CD678(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3066403B3C2646F9D50688C4CC667FFF308916D4 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2 = (*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)__this);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		int32_t L_11 = __this->___Item1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_12);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_14 = V_0;
		int32_t L_15 = L_14.___Item1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, L_13, L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___1_comparer;
		int32_t L_22 = __this->___Item2;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_23);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_25 = V_0;
		int32_t L_26 = L_25.___Item2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		return L_29;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3066403B3C2646F9D50688C4CC667FFF308916D4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3066403B3C2646F9D50688C4CC667FFF308916D4(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		int32_t* L_0 = (int32_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		G_B3_0 = L_0;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B3_0, NULL);
		G_B4_0 = L_2;
	}

IL_0035:
	{
		int32_t* L_3 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_3;
		G_B7_1 = G_B4_0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B7_0, NULL);
		G_B8_0 = L_5;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_6;
		L_6 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m35342A6650FAB414E9DE7E5AD2E29DBCD1F4EF45 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_m69CB90458039D4AF8EA66DC1973DD9A523F06005(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m35342A6650FAB414E9DE7E5AD2E29DBCD1F4EF45_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m35342A6650FAB414E9DE7E5AD2E29DBCD1F4EF45(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m69CB90458039D4AF8EA66DC1973DD9A523F06005 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1 = __this->___Item1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		int32_t L_6 = __this->___Item2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_4, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mCE5BCFBD7B973DC76FC684E5DE77F470EB4007C2 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (int32_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		G_B3_0 = L_3;
		G_B3_1 = 1;
		G_B3_2 = L_2;
		G_B3_3 = L_2;
		goto IL_003a;
	}

IL_003a:
	{
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B3_0, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B4_3;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		int32_t* L_8 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_8;
		G_B7_1 = 3;
		G_B7_2 = L_7;
		G_B7_3 = L_7;
		goto IL_007a;
	}

IL_007a:
	{
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B7_0, NULL);
		G_B8_0 = L_10;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = G_B8_3;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_mCE5BCFBD7B973DC76FC684E5DE77F470EB4007C2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_mCE5BCFBD7B973DC76FC684E5DE77F470EB4007C2(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m5F4A44F5994320C2DEF6F42F894CC55D0C901DD6 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, uint32_t ___0_item1, uint32_t ___1_item2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_item1;
		__this->___Item1 = L_0;
		uint32_t L_1 = ___1_item2;
		__this->___Item2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m5639F7CE46E362833254E0DE9958B903EA6BDE20 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_2_Equals_mAAACF5E45EB35EAC5E49A2296654B408699066D4(__this, ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m5639F7CE46E362833254E0DE9958B903EA6BDE20_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m5639F7CE46E362833254E0DE9958B903EA6BDE20(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mAAACF5E45EB35EAC5E49A2296654B408699066D4 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0;
		L_0 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint32_t L_1 = __this->___Item1;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_2 = ___0_other;
		uint32_t L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		uint32_t L_6 = __this->___Item2;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_7 = ___0_other;
		uint32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_5, L_6, L_8);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mAAACF5E45EB35EAC5E49A2296654B408699066D4_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mAAACF5E45EB35EAC5E49A2296654B408699066D4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mF85DC8F3EA67856B3791947CE0B50FE0F8AC689E (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		uint32_t L_4 = __this->___Item1;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_5);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_7 = V_0;
		uint32_t L_8 = L_7.___Item1;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		uint32_t L_13 = __this->___Item2;
		uint32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_14);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_16 = V_0;
		uint32_t L_17 = L_16.___Item2;
		uint32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		return L_20;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mF85DC8F3EA67856B3791947CE0B50FE0F8AC689E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mF85DC8F3EA67856B3791947CE0B50FE0F8AC689E(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mE26D9F99171F4987E38C4B72996CA6D72C8C8B1A (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_2 = (*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)__this);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_mD6788CFFF1EADCC0D5841E29FDA618E3C89149CC(__this, ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_mE26D9F99171F4987E38C4B72996CA6D72C8C8B1A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_mE26D9F99171F4987E38C4B72996CA6D72C8C8B1A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD6788CFFF1EADCC0D5841E29FDA618E3C89149CC (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879* L_0;
		L_0 = Comparer_1_get_Default_mF0432C77CCC727F33EF733138201216D0B06038D(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		uint32_t L_1 = __this->___Item1;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_2 = ___0_other;
		uint32_t L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, uint32_t, uint32_t >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879* L_7;
		L_7 = Comparer_1_get_Default_mF0432C77CCC727F33EF733138201216D0B06038D(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		uint32_t L_8 = __this->___Item2;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_9 = ___0_other;
		uint32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, uint32_t, uint32_t >::Invoke(6, L_7, L_8, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mD6788CFFF1EADCC0D5841E29FDA618E3C89149CC_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mD6788CFFF1EADCC0D5841E29FDA618E3C89149CC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mD1387868FDAC9764FE6DBB73ADC6CC33BE176723 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_2 = (*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)__this);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		uint32_t L_11 = __this->___Item1;
		uint32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_12);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_14 = V_0;
		uint32_t L_15 = L_14.___Item1;
		uint32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, L_13, L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___1_comparer;
		uint32_t L_22 = __this->___Item2;
		uint32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_23);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_25 = V_0;
		uint32_t L_26 = L_25.___Item2;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		return L_29;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mD1387868FDAC9764FE6DBB73ADC6CC33BE176723_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mD1387868FDAC9764FE6DBB73ADC6CC33BE176723(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	uint32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		G_B3_0 = L_0;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_2;
		L_2 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(G_B3_0, NULL);
		G_B4_0 = L_2;
	}

IL_0035:
	{
		uint32_t* L_3 = (uint32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		G_B7_0 = L_3;
		G_B7_1 = G_B4_0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_5;
		L_5 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(G_B7_0, NULL);
		G_B8_0 = L_5;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_6;
		L_6 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2391DC8A3CB4F194AC282AA1571D53463F728ABA (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_m02C670C2E4C17D1329301091D6DEDEBEA13456E5(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2391DC8A3CB4F194AC282AA1571D53463F728ABA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2391DC8A3CB4F194AC282AA1571D53463F728ABA(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m02C670C2E4C17D1329301091D6DEDEBEA13456E5 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		uint32_t L_1 = __this->___Item1;
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		uint32_t L_6 = __this->___Item2;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_4, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mF6205032C98ED74043069AADCF810A2B86431C61 (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	uint32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		uint32_t* L_3 = (uint32_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		G_B3_0 = L_3;
		G_B3_1 = 1;
		G_B3_2 = L_2;
		G_B3_3 = L_2;
		goto IL_003a;
	}

IL_003a:
	{
		String_t* L_5;
		L_5 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(G_B3_0, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B4_3;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		uint32_t* L_8 = (uint32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		G_B7_0 = L_8;
		G_B7_1 = 3;
		G_B7_2 = L_7;
		G_B7_3 = L_7;
		goto IL_007a;
	}

IL_007a:
	{
		String_t* L_10;
		L_10 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(G_B7_0, NULL);
		G_B8_0 = L_10;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = G_B8_3;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_mF6205032C98ED74043069AADCF810A2B86431C61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_mF6205032C98ED74043069AADCF810A2B86431C61(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m52D8BFB63F925A672B9356006BCB9ABB604B6170_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		__this->___Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item2), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m25F48FF034850BFFB55FF0966A89773833827C13_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_2_Equals_m129363AD62AF04EA0988D6B06689ACF1A6521AEA(__this, ((*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m25F48FF034850BFFB55FF0966A89773833827C13_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m25F48FF034850BFFB55FF0966A89773833827C13(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m129363AD62AF04EA0988D6B06689ACF1A6521AEA_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		Il2CppSharedGenericObject* L_6 = __this->___Item2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_7 = ___0_other;
		Il2CppSharedGenericObject* L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_5, L_6, L_8);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m129363AD62AF04EA0988D6B06689ACF1A6521AEA_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m129363AD62AF04EA0988D6B06689ACF1A6521AEA(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m29899BE37082D09F8EF9D8C77BA7EA42DD8E3579_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item1;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = L_5.___Item1;
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___Item2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_10 = V_0;
		Il2CppSharedGenericObject* L_11 = L_10.___Item2;
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9, (RuntimeObject*)L_11);
		return L_12;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m29899BE37082D09F8EF9D8C77BA7EA42DD8E3579_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m29899BE37082D09F8EF9D8C77BA7EA42DD8E3579(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m727E4F92660C3599373E96B2277F2579D7053E7D_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_2 = (*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)__this);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_m72B418D5FBACB299D4F3CD1C1CAE6F121E36EEB6(__this, ((*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_m727E4F92660C3599373E96B2277F2579D7053E7D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_m727E4F92660C3599373E96B2277F2579D7053E7D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m72B418D5FBACB299D4F3CD1C1CAE6F121E36EEB6_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_0;
		L_0 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_7;
		L_7 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		Il2CppSharedGenericObject* L_8 = __this->___Item2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9 = ___0_other;
		Il2CppSharedGenericObject* L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_7, L_8, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_m72B418D5FBACB299D4F3CD1C1CAE6F121E36EEB6_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_m72B418D5FBACB299D4F3CD1C1CAE6F121E36EEB6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mA7DA35373A0D1DA0F0F52AB5F5124EBF80123B34_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_2 = (*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)__this);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		Il2CppSharedGenericObject* L_11 = __this->___Item1;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_12 = V_0;
		Il2CppSharedGenericObject* L_13 = L_12.___Item1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, (RuntimeObject*)L_11, (RuntimeObject*)L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___1_comparer;
		Il2CppSharedGenericObject* L_18 = __this->___Item2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_19 = V_0;
		Il2CppSharedGenericObject* L_20 = L_19.___Item2;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_17, (RuntimeObject*)L_18, (RuntimeObject*)L_20);
		return L_21;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mA7DA35373A0D1DA0F0F52AB5F5124EBF80123B34_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mA7DA35373A0D1DA0F0F52AB5F5124EBF80123B34(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Il2CppSharedGenericObject** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppSharedGenericObject** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppSharedGenericObject** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		Il2CppSharedGenericObject** L_0 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
		G_B1_0 = L_0;
	}
	{
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_2;
		Il2CppSharedGenericObject* L_3 = V_0;
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
		G_B2_0 = (&V_0);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		Il2CppSharedGenericObject** L_5 = (Il2CppSharedGenericObject**)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_1;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		Il2CppSharedGenericObject* L_7 = (*(Il2CppSharedGenericObject**)G_B5_0);
		V_1 = L_7;
		Il2CppSharedGenericObject* L_8 = V_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8A7AD10C0F27B65A7F6B01B3E082165E04034AE2_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_m4A5116FBF0F17298B1A8ADD2D9A92487FA5BD0F3(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8A7AD10C0F27B65A7F6B01B3E082165E04034AE2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8A7AD10C0F27B65A7F6B01B3E082165E04034AE2(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m4A5116FBF0F17298B1A8ADD2D9A92487FA5BD0F3_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item2;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4);
		int32_t L_6;
		L_6 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m45F0B64B4FBA04D76955E21916B7C8225E35DDCB_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppSharedGenericObject** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppSharedGenericObject** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppSharedGenericObject** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Il2CppSharedGenericObject** L_3 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_4 = V_0;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		Il2CppSharedGenericObject* L_5 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = V_0;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = G_B4_3;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		Il2CppSharedGenericObject** L_10 = (Il2CppSharedGenericObject**)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_1;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007a;
		}
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		Il2CppSharedGenericObject* L_12 = (*(Il2CppSharedGenericObject**)G_B5_0);
		V_1 = L_12;
		Il2CppSharedGenericObject* L_13 = V_1;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B8_3;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m45F0B64B4FBA04D76955E21916B7C8225E35DDCB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m45F0B64B4FBA04D76955E21916B7C8225E35DDCB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m6C8D74CA02AE9C0951282D3F562D1698FEDEDA69_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, Il2CppSharedGenericObject* ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1), (void*)L_0);
		int32_t L_1 = ___1_item2;
		__this->___Item2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m3A7596754C146B010097071A2A4D564A7AD8769D_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_2_Equals_mBBF2B5083ACB07D20DE576A46B465D322B5F32EF(__this, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m3A7596754C146B010097071A2A4D564A7AD8769D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m3A7596754C146B010097071A2A4D564A7AD8769D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mBBF2B5083ACB07D20DE576A46B465D322B5F32EF_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_5;
		L_5 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		int32_t L_6 = __this->___Item2;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_7 = ___0_other;
		int32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_5, L_6, L_8);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mBBF2B5083ACB07D20DE576A46B465D322B5F32EF_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mBBF2B5083ACB07D20DE576A46B465D322B5F32EF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mD5D1040856F67C45DD846B9353639C2B5F7F6065_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = L_5.___Item1;
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		int32_t L_9 = __this->___Item2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_10);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_12 = V_0;
		int32_t L_13 = L_12.___Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_11, L_15);
		return L_16;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mD5D1040856F67C45DD846B9353639C2B5F7F6065_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_mD5D1040856F67C45DD846B9353639C2B5F7F6065(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m8E20C14BD31E60D6D409CA3E672F24CEE4B53522_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_2 = (*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)__this);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_m1AD5FE9CB82D596684BC4BDF2B7E9085B4462C0E(__this, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_m8E20C14BD31E60D6D409CA3E672F24CEE4B53522_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_m8E20C14BD31E60D6D409CA3E672F24CEE4B53522(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m1AD5FE9CB82D596684BC4BDF2B7E9085B4462C0E_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_0;
		L_0 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23* L_7;
		L_7 = Comparer_1_get_Default_m551A81612DA7FD77D4E7DEDF8CC01CC7D4B74578(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		int32_t L_8 = __this->___Item2;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_9 = ___0_other;
		int32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, L_8, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_m1AD5FE9CB82D596684BC4BDF2B7E9085B4462C0E_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_m1AD5FE9CB82D596684BC4BDF2B7E9085B4462C0E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m62E822809CABB508DCB391EAAE453564AAAE8361_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_2 = (*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)__this);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		Il2CppSharedGenericObject* L_11 = __this->___Item1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_12 = V_0;
		Il2CppSharedGenericObject* L_13 = L_12.___Item1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, (RuntimeObject*)L_11, (RuntimeObject*)L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___1_comparer;
		int32_t L_18 = __this->___Item2;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_19);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_21 = V_0;
		int32_t L_22 = L_21.___Item2;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_23);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_17, L_20, L_24);
		return L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m62E822809CABB508DCB391EAAE453564AAAE8361_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m62E822809CABB508DCB391EAAE453564AAAE8361(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	int32_t* G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		Il2CppSharedGenericObject** L_0 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
		G_B1_0 = L_0;
	}
	{
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_2;
		Il2CppSharedGenericObject* L_3 = V_0;
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
		G_B2_0 = (&V_0);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		int32_t* L_5 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_5;
		G_B7_1 = G_B4_0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B7_0, NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_8;
		L_8 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2586ABE5C78BB4C3266B34D88F15E89E2883D45D_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_mE45ABAA383FB25865A282E94D18F6F6BBD35F1B9(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2586ABE5C78BB4C3266B34D88F15E89E2883D45D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m2586ABE5C78BB4C3266B34D88F15E89E2883D45D(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mE45ABAA383FB25865A282E94D18F6F6BBD35F1B9_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		int32_t L_4 = __this->___Item2;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6);
		int32_t L_8;
		L_8 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_2, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m594ECCFB16F8174A976DF57E669380F67A8468D3_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	int32_t* G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Il2CppSharedGenericObject** L_3 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_4 = V_0;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		Il2CppSharedGenericObject* L_5 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = V_0;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = G_B4_3;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		int32_t* L_10 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_10;
		G_B7_1 = 3;
		G_B7_2 = L_9;
		G_B7_3 = L_9;
		goto IL_007a;
	}

IL_007a:
	{
		Il2CppFakeBox<int32_t> L_12(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), *G_B7_0);
		String_t* L_13;
		L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = G_B8_3;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_15;
		L_15 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m594ECCFB16F8174A976DF57E669380F67A8468D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m594ECCFB16F8174A976DF57E669380F67A8468D3(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), __this, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_7 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_6 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_13 = L_6;
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 V_0 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	memset(V_0, 0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		return L_16;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_9;
		L_9 = InvokerFuncInvoker1< int32_t, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), __this, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_9 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_12 = L_2;
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_21 = L_2;
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 V_0 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	memset(V_0, 0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		return L_24;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(V_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(V_1, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(G_B2_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(G_B6_0, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		int32_t L_8;
		L_8 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(V_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(V_1, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(G_B2_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(G_B6_0, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007a;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mBAD1829A86D99E04FBCE92146DD6BC74D821F1AE_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) 
{
	{
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_0 = ___0_item1;
		__this->___Item1 = L_0;
		int32_t L_1 = ___1_item2;
		__this->___Item2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m17EB11707D3325E8A34A19CF61FC4714943846DB_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_2_Equals_m29AFA6292BD363090BF866F720F6CE566B210243(__this, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m17EB11707D3325E8A34A19CF61FC4714943846DB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m17EB11707D3325E8A34A19CF61FC4714943846DB(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m29AFA6292BD363090BF866F720F6CE566B210243_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* L_0;
		L_0 = EqualityComparer_1_get_Default_m96799E2B99BE65E1AB30536CF1870515ACD05D7A_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_1 = __this->___Item1;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_2 = ___0_other;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674, KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_5;
		L_5 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		int32_t L_6 = __this->___Item2;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_7 = ___0_other;
		int32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_5, L_6, L_8);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m29AFA6292BD363090BF866F720F6CE566B210243_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m29AFA6292BD363090BF866F720F6CE566B210243(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m66606AC166168D1328B5DE4157D5B44C41AD1C6B_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_4 = __this->___Item1;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_5);
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_7 = V_0;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_8 = L_7.___Item1;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		int32_t L_13 = __this->___Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_14);
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_16 = V_0;
		int32_t L_17 = L_16.___Item2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		return L_20;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m66606AC166168D1328B5DE4157D5B44C41AD1C6B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m66606AC166168D1328B5DE4157D5B44C41AD1C6B(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m4DB4D709E507AF137C8B45A8B702223359257CCC_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_2 = (*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)__this);
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_mCAB34603DC4F42BC11E27F00AB65D22A1C461FD2(__this, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_m4DB4D709E507AF137C8B45A8B702223359257CCC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_m4DB4D709E507AF137C8B45A8B702223359257CCC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mCAB34603DC4F42BC11E27F00AB65D22A1C461FD2_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_tFD32A42D8772E55226323EC91E1F3487D91575BC* L_0;
		L_0 = Comparer_1_get_Default_m8718B231D29DBCD29BF3F044E8B7DF331F66F70A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_1 = __this->___Item1;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_2 = ___0_other;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674, KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t9ECF8D85C1B72ABF5FB15E642B59B720A7B6EB23* L_7;
		L_7 = Comparer_1_get_Default_m551A81612DA7FD77D4E7DEDF8CC01CC7D4B74578(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		int32_t L_8 = __this->___Item2;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_9 = ___0_other;
		int32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, L_8, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mCAB34603DC4F42BC11E27F00AB65D22A1C461FD2_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mCAB34603DC4F42BC11E27F00AB65D22A1C461FD2(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3F93074FF6402315F4D65A807FED2428B149A5E3_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_2 = (*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)__this);
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_11 = __this->___Item1;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_12);
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_14 = V_0;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_15 = L_14.___Item1;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, L_13, L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___1_comparer;
		int32_t L_22 = __this->___Item2;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_23);
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_25 = V_0;
		int32_t L_26 = L_25.___Item2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		return L_29;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3F93074FF6402315F4D65A807FED2428B149A5E3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m3F93074FF6402315F4D65A807FED2428B149A5E3(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m03DAC3002510F4F718AAD160E3DB4A3FEE47C697_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, const RuntimeMethod* method) 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	int32_t* G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674* L_0 = (KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674));
		G_B3_0 = L_0;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_2;
		L_2 = KeyEvent_GetHashCode_m597244B0C54076AA98E06A3DE7E0A39CF1788154(G_B3_0, NULL);
		G_B4_0 = L_2;
	}

IL_0035:
	{
		int32_t* L_3 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_3;
		G_B7_1 = G_B4_0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B7_0, NULL);
		G_B8_0 = L_5;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_6;
		L_6 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m03DAC3002510F4F718AAD160E3DB4A3FEE47C697_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m03DAC3002510F4F718AAD160E3DB4A3FEE47C697(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mB27739EFCE0512EE04657312351929C7A7269890_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_mE5B4D1E394EB70D832EDECF1C9D281A7338AE927(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mB27739EFCE0512EE04657312351929C7A7269890_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mB27739EFCE0512EE04657312351929C7A7269890(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mE5B4D1E394EB70D832EDECF1C9D281A7338AE927_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_1 = __this->___Item1;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		int32_t L_6 = __this->___Item2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_4, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3CA178132908A6ADFF288681041F38985EA75DE0_gshared (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	int32_t* G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674* L_3 = (KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674));
		G_B3_0 = L_3;
		G_B3_1 = 1;
		G_B3_2 = L_2;
		G_B3_3 = L_2;
		goto IL_003a;
	}

IL_003a:
	{
		String_t* L_5;
		L_5 = KeyEvent_ToString_m0A62D88B95C5C7048B1E6652BF7C8178BB4CCD28(G_B3_0, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B4_3;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		int32_t* L_8 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_8;
		G_B7_1 = 3;
		G_B7_2 = L_7;
		G_B7_3 = L_7;
		goto IL_007a;
	}

IL_007a:
	{
		Il2CppFakeBox<int32_t> L_10(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), *G_B7_0);
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = G_B8_3;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_13;
		L_13 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m3CA178132908A6ADFF288681041F38985EA75DE0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m3CA178132908A6ADFF288681041F38985EA75DE0(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_m3ACA210E3ABE12568505967C976DA757B5E7BDED_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, Il2CppSharedGenericObject* ___0_item1, int32_t ___1_item2, int32_t ___2_item3, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1), (void*)L_0);
		int32_t L_1 = ___1_item2;
		__this->___Item2 = L_1;
		int32_t L_2 = ___2_item3;
		__this->___Item3 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1ABC26E604D5CD4056D5100AEBFD8C6E18D40A71_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_3_Equals_mFE35D80C6C2114B0EED305163DA62B94D7BF16EE(__this, ((*(ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m1ABC26E604D5CD4056D5100AEBFD8C6E18D40A71_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m1ABC26E604D5CD4056D5100AEBFD8C6E18D40A71(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_mFE35D80C6C2114B0EED305163DA62B94D7BF16EE_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		int32_t L_6 = __this->___Item2;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_7 = ___0_other;
		int32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_5, L_6, L_8);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_10;
		L_10 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		int32_t L_11 = __this->___Item3;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_12 = ___0_other;
		int32_t L_13 = L_12.___Item3;
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_10, L_11, L_13);
		return L_14;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_mFE35D80C6C2114B0EED305163DA62B94D7BF16EE_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_mFE35D80C6C2114B0EED305163DA62B94D7BF16EE(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_mCE1FAAFBE8806199D45EAE2677CA526233303C06_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item1;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = L_5.___Item1;
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		int32_t L_9 = __this->___Item2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_10);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_12 = V_0;
		int32_t L_13 = L_12.___Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_11, L_15);
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		int32_t L_18 = __this->___Item3;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_19);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_21 = V_0;
		int32_t L_22 = L_21.___Item3;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_20, L_24);
		return L_25;
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_mCE1FAAFBE8806199D45EAE2677CA526233303C06_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_Equals_mCE1FAAFBE8806199D45EAE2677CA526233303C06(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_m1C1323FA9EDA462D02AD6A44EF9CDAC425F986A4_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_2 = (*(ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*)__this);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_3_CompareTo_mF8EAEC3A08D877F3FBCEBAFFA0B0D6824E4B279B(__this, ((*(ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IComparable_CompareTo_m1C1323FA9EDA462D02AD6A44EF9CDAC425F986A4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IComparable_CompareTo_m1C1323FA9EDA462D02AD6A44EF9CDAC425F986A4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_mF8EAEC3A08D877F3FBCEBAFFA0B0D6824E4B279B_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_0;
		L_0 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_7;
		L_7 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		int32_t L_8 = __this->___Item2;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_9 = ___0_other;
		int32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, L_8, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_14;
		L_14 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		int32_t L_15 = __this->___Item3;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_16 = ___0_other;
		int32_t L_17 = L_16.___Item3;
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_14, L_15, L_17);
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_CompareTo_mF8EAEC3A08D877F3FBCEBAFFA0B0D6824E4B279B_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_CompareTo_mF8EAEC3A08D877F3FBCEBAFFA0B0D6824E4B279B(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m88A65F9D6160A89D54BDA901E5FC60505509ADE0_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_2 = (*(ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*)__this);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		Il2CppSharedGenericObject* L_11 = __this->___Item1;
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_12 = V_0;
		Il2CppSharedGenericObject* L_13 = L_12.___Item1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, (RuntimeObject*)L_11, (RuntimeObject*)L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___1_comparer;
		int32_t L_18 = __this->___Item2;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_19);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_21 = V_0;
		int32_t L_22 = L_21.___Item2;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_23);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_17, L_20, L_24);
		V_1 = L_25;
		int32_t L_26 = V_1;
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_0082:
	{
		RuntimeObject* L_28 = ___1_comparer;
		int32_t L_29 = __this->___Item3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_30);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_32 = V_0;
		int32_t L_33 = L_32.___Item3;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_28, L_31, L_35);
		return L_36;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m88A65F9D6160A89D54BDA901E5FC60505509ADE0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m88A65F9D6160A89D54BDA901E5FC60505509ADE0(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m8F4536D49CF144E0A48EBDCA7405E6CEADB23AEE_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	{
		Il2CppSharedGenericObject** L_0 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
		G_B1_0 = L_0;
	}
	{
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_2;
		Il2CppSharedGenericObject* L_3 = V_0;
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
		G_B2_0 = (&V_0);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		int32_t* L_5 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_5;
		G_B7_1 = G_B4_0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B7_0, NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t* L_8 = (int32_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_8;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B11_0, NULL);
		G_B12_0 = L_10;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t L_11;
		L_11 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B12_2, G_B12_1, G_B12_0, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCode_m8F4536D49CF144E0A48EBDCA7405E6CEADB23AEE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCode_m8F4536D49CF144E0A48EBDCA7405E6CEADB23AEE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_mCD303D515F291F404600F68FBCAFC0C718ACFCAF_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_3_GetHashCodeCore_m5390AB6AF9BB58826B26101B61844A7F1751D26D(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_mCD303D515F291F404600F68FBCAFC0C718ACFCAF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_mCD303D515F291F404600F68FBCAFC0C718ACFCAF(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m5390AB6AF9BB58826B26101B61844A7F1751D26D_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		int32_t L_4 = __this->___Item2;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		int32_t L_9 = __this->___Item3;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_11);
		int32_t L_13;
		L_13 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_2, L_7, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m2595652C267C2FB4E7FE4CC00430B208F552DC38_gshared (ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Il2CppSharedGenericObject** L_3 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_4 = V_0;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		Il2CppSharedGenericObject* L_5 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = V_0;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = G_B4_3;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		int32_t* L_10 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_10;
		G_B7_1 = 3;
		G_B7_2 = L_9;
		G_B7_3 = L_9;
		goto IL_007a;
	}

IL_007a:
	{
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B7_0, NULL);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B8_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t* L_15 = (int32_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_15;
		G_B11_1 = 5;
		G_B11_2 = L_14;
		G_B11_3 = L_14;
		goto IL_00ba;
	}

IL_00ba:
	{
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B11_0, NULL);
		G_B12_0 = L_17;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c5:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = G_B12_3;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_ToString_m2595652C267C2FB4E7FE4CC00430B208F552DC38_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_ToString_m2595652C267C2FB4E7FE4CC00430B208F552DC38(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_m5BE7DBD08197CF41C0FA0ECD14631EFFEC6BC17F_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, int32_t ___2_item3, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		__this->___Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item2), (void*)L_1);
		int32_t L_2 = ___2_item3;
		__this->___Item3 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE(__this, ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		Il2CppSharedGenericObject* L_6 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_7 = ___0_other;
		Il2CppSharedGenericObject* L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_5, L_6, L_8);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_10;
		L_10 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		int32_t L_11 = __this->___Item3;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_12 = ___0_other;
		int32_t L_13 = L_12.___Item3;
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_10, L_11, L_13);
		return L_14;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = L_5.___Item1;
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_10 = V_0;
		Il2CppSharedGenericObject* L_11 = L_10.___Item2;
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9, (RuntimeObject*)L_11);
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_13 = ___1_comparer;
		int32_t L_14 = __this->___Item3;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_15);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_17 = V_0;
		int32_t L_18 = L_17.___Item3;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_13, L_16, L_20);
		return L_21;
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = (*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)__this);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C(__this, ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_0;
		L_0 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_7;
		L_7 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		Il2CppSharedGenericObject* L_8 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_9 = ___0_other;
		Il2CppSharedGenericObject* L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_7, L_8, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_14;
		L_14 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		int32_t L_15 = __this->___Item3;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_16 = ___0_other;
		int32_t L_17 = L_16.___Item3;
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_14, L_15, L_17);
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = (*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)__this);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		Il2CppSharedGenericObject* L_11 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_12 = V_0;
		Il2CppSharedGenericObject* L_13 = L_12.___Item1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, (RuntimeObject*)L_11, (RuntimeObject*)L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___1_comparer;
		Il2CppSharedGenericObject* L_18 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_19 = V_0;
		Il2CppSharedGenericObject* L_20 = L_19.___Item2;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_17, (RuntimeObject*)L_18, (RuntimeObject*)L_20);
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___1_comparer;
		int32_t L_25 = __this->___Item3;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_26);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_28 = V_0;
		int32_t L_29 = L_28.___Item3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_30);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_24, L_27, L_31);
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Il2CppSharedGenericObject** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppSharedGenericObject** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppSharedGenericObject** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	{
		Il2CppSharedGenericObject** L_0 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
		G_B1_0 = L_0;
	}
	{
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_2;
		Il2CppSharedGenericObject* L_3 = V_0;
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
		G_B2_0 = (&V_0);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		Il2CppSharedGenericObject** L_5 = (Il2CppSharedGenericObject**)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_1;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		Il2CppSharedGenericObject* L_7 = (*(Il2CppSharedGenericObject**)G_B5_0);
		V_1 = L_7;
		Il2CppSharedGenericObject* L_8 = V_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t* L_10 = (int32_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_10;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_12;
		L_12 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B11_0, NULL);
		G_B12_0 = L_12;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t L_13;
		L_13 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B12_2, G_B12_1, G_B12_0, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item2;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4);
		RuntimeObject* L_6 = ___0_comparer;
		int32_t L_7 = __this->___Item3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_6, L_9);
		int32_t L_11;
		L_11 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_2, L_5, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppSharedGenericObject** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppSharedGenericObject** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppSharedGenericObject** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Il2CppSharedGenericObject** L_3 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_4 = V_0;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		Il2CppSharedGenericObject* L_5 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = V_0;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = G_B4_3;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		Il2CppSharedGenericObject** L_10 = (Il2CppSharedGenericObject**)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_1;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007a;
		}
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		Il2CppSharedGenericObject* L_12 = (*(Il2CppSharedGenericObject**)G_B5_0);
		V_1 = L_12;
		Il2CppSharedGenericObject* L_13 = V_1;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B8_3;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		int32_t* L_17 = (int32_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_17;
		G_B11_1 = 5;
		G_B11_2 = L_16;
		G_B11_3 = L_16;
		goto IL_00ba;
	}

IL_00ba:
	{
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B11_0, NULL);
		G_B12_0 = L_19;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c5:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = G_B12_3;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_21;
		L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), __this, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_7 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_13: *(void**)L_13));
		return L_14;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_6 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_13 = L_6;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = L_6;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		return L_23;
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_9;
		L_9 = InvokerFuncInvoker1< int32_t, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), __this, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_9 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_16 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_17: *(void**)L_17));
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_21 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_30 = L_2;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t L_30;
		L_30 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B12_2, G_B12_1, G_B12_0, NULL);
		return L_30;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		int32_t L_12;
		L_12 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_3, L_7, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007a;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00ba;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00ba;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c5;
	}

IL_00ba:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c5:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_38;
		L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_37, NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744(_thisAdjusted, method);
	return _returnValue;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_mE956FB598740F15964DFC699BB03493A5889634B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, intptr_t ___0_item1, int32_t ___1_item2, intptr_t ___2_item3, int32_t ___3_item4, bool ___4_item5, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_item1;
		__this->___Item1 = L_0;
		int32_t L_1 = ___1_item2;
		__this->___Item2 = L_1;
		intptr_t L_2 = ___2_item3;
		__this->___Item3 = L_2;
		int32_t L_3 = ___3_item4;
		__this->___Item4 = L_3;
		bool L_4 = ___4_item5;
		__this->___Item5 = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174(__this, ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_0;
		L_0 = EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		intptr_t L_1 = __this->___Item1;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = ___0_other;
		intptr_t L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		int32_t L_6 = __this->___Item2;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_7 = ___0_other;
		int32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_5, L_6, L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_10;
		L_10 = EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		intptr_t L_11 = __this->___Item3;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_12 = ___0_other;
		intptr_t L_13 = L_12.___Item3;
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(8, L_10, L_11, L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		int32_t L_16 = __this->___Item4;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_17 = ___0_other;
		int32_t L_18 = L_17.___Item4;
		bool L_19;
		L_19 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_15, L_16, L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_20;
		L_20 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		bool L_21 = __this->___Item5;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_22 = ___0_other;
		bool L_23 = L_22.___Item5;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_20, L_21, L_23);
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		intptr_t L_4 = __this->___Item1;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_5);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_7 = V_0;
		intptr_t L_8 = L_7.___Item1;
		intptr_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		int32_t L_13 = __this->___Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_14);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_16 = V_0;
		int32_t L_17 = L_16.___Item2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_21 = ___1_comparer;
		intptr_t L_22 = __this->___Item3;
		intptr_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_23);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_25 = V_0;
		intptr_t L_26 = L_25.___Item3;
		intptr_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_27);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		if (!L_29)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_30 = ___1_comparer;
		int32_t L_31 = __this->___Item4;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_32);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_34 = V_0;
		int32_t L_35 = L_34.___Item4;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_36);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_30, L_33, L_37);
		if (!L_38)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_39 = ___1_comparer;
		bool L_40 = __this->___Item5;
		bool L_41 = L_40;
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_41);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_43 = V_0;
		bool L_44 = L_43.___Item5;
		bool L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_45);
		bool L_47;
		L_47 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_39, L_42, L_46);
		return L_47;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = (*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)__this);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934(__this, ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* L_0;
		L_0 = Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		intptr_t L_1 = __this->___Item1;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = ___0_other;
		intptr_t L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_7;
		L_7 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		int32_t L_8 = __this->___Item2;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_9 = ___0_other;
		int32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, L_8, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* L_14;
		L_14 = Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		intptr_t L_15 = __this->___Item3;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_16 = ___0_other;
		intptr_t L_17 = L_16.___Item3;
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(6, L_14, L_15, L_17);
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_21;
		L_21 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		int32_t L_22 = __this->___Item4;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_23 = ___0_other;
		int32_t L_24 = L_23.___Item4;
		int32_t L_25;
		L_25 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_21, L_22, L_24);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* L_28;
		L_28 = Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		bool L_29 = __this->___Item5;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_30 = ___0_other;
		bool L_31 = L_30.___Item5;
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, bool, bool >::Invoke(6, L_28, L_29, L_31);
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = (*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)__this);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		intptr_t L_11 = __this->___Item1;
		intptr_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_12);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_14 = V_0;
		intptr_t L_15 = L_14.___Item1;
		intptr_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, L_13, L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___1_comparer;
		int32_t L_22 = __this->___Item2;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_23);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_25 = V_0;
		int32_t L_26 = L_25.___Item2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		V_1 = L_29;
		int32_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0082:
	{
		RuntimeObject* L_32 = ___1_comparer;
		intptr_t L_33 = __this->___Item3;
		intptr_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_34);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_36 = V_0;
		intptr_t L_37 = L_36.___Item3;
		intptr_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_38);
		int32_t L_40;
		L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_32, L_35, L_39);
		V_1 = L_40;
		int32_t L_41 = V_1;
		if (!L_41)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_42 = V_1;
		return L_42;
	}

IL_00a4:
	{
		RuntimeObject* L_43 = ___1_comparer;
		int32_t L_44 = __this->___Item4;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_45);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_47 = V_0;
		int32_t L_48 = L_47.___Item4;
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_43, L_46, L_50);
		V_1 = L_51;
		int32_t L_52 = V_1;
		if (!L_52)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_53 = V_1;
		return L_53;
	}

IL_00c6:
	{
		RuntimeObject* L_54 = ___1_comparer;
		bool L_55 = __this->___Item5;
		bool L_56 = L_55;
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_56);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_58 = V_0;
		bool L_59 = L_58.___Item5;
		bool L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_60);
		int32_t L_62;
		L_62 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_54, L_57, L_61);
		return L_62;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	intptr_t* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	intptr_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	int32_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	bool* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		G_B3_0 = L_0;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_2;
		L_2 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B3_0, NULL);
		G_B4_0 = L_2;
	}

IL_0035:
	{
		int32_t* L_3 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_3;
		G_B7_1 = G_B4_0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B7_0, NULL);
		G_B8_0 = L_5;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		intptr_t* L_6 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(intptr_t));
		G_B11_0 = L_6;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_8;
		L_8 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B11_0, NULL);
		G_B12_0 = L_8;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t* L_9 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		G_B15_0 = L_9;
		G_B15_1 = G_B12_0;
		G_B15_2 = G_B12_1;
		G_B15_3 = G_B12_2;
		goto IL_00c9;
	}

IL_00c9:
	{
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B15_0, NULL);
		G_B16_0 = L_11;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		bool* L_12 = (bool*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_4), sizeof(bool));
		G_B19_0 = L_12;
		G_B19_1 = G_B16_0;
		G_B19_2 = G_B16_1;
		G_B19_3 = G_B16_2;
		G_B19_4 = G_B16_3;
		goto IL_0101;
	}

IL_0101:
	{
		CHECKED_LOCAL_INIT(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit,(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B19_0, NULL);
		G_B20_0 = L_14;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_15;
		L_15 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B20_4, G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		intptr_t L_1 = __this->___Item1;
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		int32_t L_6 = __this->___Item2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		RuntimeObject* L_10 = ___0_comparer;
		intptr_t L_11 = __this->___Item3;
		intptr_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_13);
		RuntimeObject* L_15 = ___0_comparer;
		int32_t L_16 = __this->___Item4;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_15, L_18);
		RuntimeObject* L_20 = ___0_comparer;
		bool L_21 = __this->___Item5;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_20, L_23);
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_4, L_9, L_14, L_19, L_24, NULL);
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	intptr_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	intptr_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	int32_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	bool* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		intptr_t* L_3 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		G_B3_0 = L_3;
		G_B3_1 = 1;
		G_B3_2 = L_2;
		G_B3_3 = L_2;
		goto IL_003b;
	}

IL_003b:
	{
		String_t* L_5;
		L_5 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B3_0, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B4_3;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		int32_t* L_8 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_8;
		G_B7_1 = 3;
		G_B7_2 = L_7;
		G_B7_3 = L_7;
		goto IL_007b;
	}

IL_007b:
	{
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B7_0, NULL);
		G_B8_0 = L_10;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = G_B8_3;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		intptr_t* L_13 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(intptr_t));
		G_B11_0 = L_13;
		G_B11_1 = 5;
		G_B11_2 = L_12;
		G_B11_3 = L_12;
		goto IL_00bb;
	}

IL_00bb:
	{
		String_t* L_15;
		L_15 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B11_0, NULL);
		G_B12_0 = L_15;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = G_B12_3;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		int32_t* L_18 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		G_B15_0 = L_18;
		G_B15_1 = 7;
		G_B15_2 = L_17;
		G_B15_3 = L_17;
		goto IL_00fb;
	}

IL_00fb:
	{
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B15_0, NULL);
		G_B16_0 = L_20;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = G_B16_3;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		bool* L_23 = (bool*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_4), sizeof(bool));
		G_B19_0 = L_23;
		G_B19_1 = ((int32_t)9);
		G_B19_2 = L_22;
		G_B19_3 = L_22;
		goto IL_013f;
	}

IL_013f:
	{
		CHECKED_LOCAL_INIT(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit,(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_25;
		L_25 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(G_B19_0, NULL);
		G_B20_0 = L_25;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		(G_B20_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = G_B20_3;
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_27;
		L_27 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_26, NULL);
		return L_27;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? ___3_item4 : &___3_item4), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? ___4_item5 : &___4_item5), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), L_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), __this, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_7 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_17 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_22 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_17, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_19;
		L_19 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_20;
		L_20 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_22, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_field_data_pointer(L_22, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_24;
		L_24 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_23: *(void**)L_23));
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_6 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_13 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_20 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_27 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_34 = L_6;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_25);
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_28);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_31 = ___1_comparer;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_32);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_field_data_pointer(L_34, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_35);
		bool L_37;
		L_37 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_31, L_33, L_36);
		return L_37;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_9;
		L_9 = InvokerFuncInvoker1< int32_t, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), __this, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_9 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_16 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_23 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_17: *(void**)L_17));
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_21;
		L_21 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_23, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_field_data_pointer(L_23, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		int32_t L_25;
		L_25 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_24: *(void**)L_24));
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_28;
		L_28 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_30, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_31: *(void**)L_31));
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_21 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_39 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_48 = L_2;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if (!L_34)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_35 = V_1;
		return L_35;
	}

IL_00a4:
	{
		RuntimeObject* L_36 = ___1_comparer;
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_37);
		il2cpp_codegen_memcpy(L_39, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_field_data_pointer(L_39, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_40);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_36, L_38, L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_44 = V_1;
		return L_44;
	}

IL_00c6:
	{
		RuntimeObject* L_45 = ___1_comparer;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_46);
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_field_data_pointer(L_48, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_45, L_47, L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_42 = L_40;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_30);
		if (L_31)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}
	{
		il2cpp_codegen_memcpy(L_32, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_33);
		if (L_34)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26), (void*)G_B15_0, &L_36, L_35);
		typedef int32_t ( *func_L_38)(void*,const RuntimeMethod*);
		int32_t L_39 = ((func_L_38)L_37)(L_36.thisPtr,L_36.method);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_40, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_41 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_40);
		if (L_41)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
	}
	{
		il2cpp_codegen_memcpy(L_42, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_42, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_43, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_44 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_43);
		if (L_44)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		Il2CppConstrainedCallData L_46;
		Il2CppMethodPointer L_47 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27), (void*)G_B19_0, &L_46, L_45);
		typedef int32_t ( *func_L_48)(void*,const RuntimeMethod*);
		int32_t L_49 = ((func_L_48)L_47)(L_46.thisPtr,L_46.method);
		G_B20_0 = L_49;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_50;
		L_50 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B20_4, G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_12 = ___0_comparer;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_16 = ___0_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_16, L_18);
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_3, L_7, L_11, L_15, L_19, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_41 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_53 = L_51;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007b;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00bb;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_39, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_39);
		if (L_40)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = 7;
			G_B15_2 = L_38;
			G_B15_3 = L_38;
			goto IL_00fb;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = 7;
		G_B13_2 = L_38;
		G_B13_3 = L_38;
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_41, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_42, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_42);
		if (L_43)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32), (void*)G_B15_0, &L_45, L_44);
		typedef String_t* ( *func_L_47)(void*,const RuntimeMethod*);
		String_t* L_48 = ((func_L_47)L_46)(L_45.thisPtr,L_45.method);
		G_B16_0 = L_48;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = G_B16_3;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_52 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_51);
		if (L_52)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_50;
			G_B19_3 = L_50;
			goto IL_013f;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_50;
		G_B17_3 = L_50;
	}
	{
		il2cpp_codegen_memcpy(L_53, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_53, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_54, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_55 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_54);
		if (L_55)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		Il2CppConstrainedCallData L_57;
		Il2CppMethodPointer L_58 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33), (void*)G_B19_0, &L_57, L_56);
		typedef String_t* ( *func_L_59)(void*,const RuntimeMethod*);
		String_t* L_60 = ((func_L_59)L_58)(L_57.thisPtr,L_57.method);
		G_B20_0 = L_60;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		(G_B20_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = G_B20_3;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_62;
		L_62 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_61, NULL);
		return L_62;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_get_Zero_mDB2680DF070B1C7F273400548848C621F96343A4 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) 
{
	VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* L_0 = (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_1 = (uint8_t*)L_3;
		uint8_t* L_4 = (uint8_t*)(&(&V_0)->____byte);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_4,NULL));
		uint8_t* L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,uint8_t*,intptr_t,false,false>(((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_5, (intptr_t)L_6))/1)),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_7,NULL));
		V_2 = (-1);
		G_B2_0 = L_8;
		goto IL_0045;
	}

IL_0045:
	{
		G_B4_0 = G_B2_0;
		goto IL_0067;
	}

IL_0067:
	{
		G_B5_0 = G_B4_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0176:
	{
		int32_t L_9 = V_2;
		return ((int32_t)(G_B21_0/L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		goto IL_005e;
	}

IL_005e:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_2 = (uint16_t*)(&L_1->___uint16_0);
		V_7 = L_2;
		uint16_t* L_3 = V_7;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_3,NULL));
		V_6 = (uint16_t*)L_4;
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_5 = V_6;
		int32_t L_6 = V_8;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		uint16_t L_8 = ___0_value;
		*(((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2)))))) = ((int16_t)L_8);
		int32_t L_9 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_00ff:
	{
		int32_t L_10 = V_8;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_00e5;
		}
	}
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint16_t*)L_12;
		return;
	}

IL_0386:
	{
		goto IL_0505;
	}

IL_0505:
	{
		goto IL_0684;
	}

IL_0684:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_14 = ___0_value;
		L_13->___uint16_0 = L_14;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_15 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_16 = ___0_value;
		L_15->___uint16_1 = L_16;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_17 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_18 = ___0_value;
		L_17->___uint16_2 = L_18;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = ___0_value;
		L_19->___uint16_3 = L_20;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_22 = ___0_value;
		L_21->___uint16_4 = L_22;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_23 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_24 = ___0_value;
		L_23->___uint16_5 = L_24;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_26 = ___0_value;
		L_25->___uint16_6 = L_26;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_28 = ___0_value;
		L_27->___uint16_7 = L_28;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		void* L_0 = ___0_dataPointer;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359(__this, L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		goto IL_0053;
	}

IL_0053:
	{
		goto IL_00ae;
	}

IL_00ae:
	{
	}
	{
		void* L_0 = ___0_dataPointer;
		V_8 = (uint16_t*)L_0;
		uint16_t* L_1 = V_8;
		int32_t L_2 = ___1_offset;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_4 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_5 = (uint16_t*)(&L_4->___uint16_0);
		V_10 = L_5;
		uint16_t* L_6 = V_10;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_6,NULL));
		V_9 = (uint16_t*)L_7;
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_8 = V_9;
		int32_t L_9 = V_11;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint16_t* L_11 = V_8;
		int32_t L_12 = V_11;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = ((int32_t)*(((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2))))));
		*(((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 2)))))) = ((int16_t)L_14);
		int32_t L_15 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0104:
	{
		int32_t L_16 = V_11;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17;
		L_17 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_00ec;
		}
	}
	{
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_10 = (uint16_t*)L_18;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_0090;
	}

IL_0090:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_9 = (uint16_t*)(&L_8->___uint16_0);
		V_2 = L_9;
		uint16_t* L_10 = V_2;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_10,NULL));
		int32_t L_12 = ___0_index;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = ((int32_t)*(((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2)))))));
		return (uint16_t)L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_2;
		L_2 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_3 = V_0;
		uint16_t L_4;
		L_4 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_other), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_5;
		L_5 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		goto IL_01f0;
	}

IL_01f0:
	{
		goto IL_03af;
	}

IL_03af:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_9 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_10 = L_9->___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_11 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_12 = L_11.___register;
		uint16_t L_13 = L_12.___uint16_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_13))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_15 = L_14->___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint16_t L_18 = L_17.___uint16_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = L_19->___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = L_21.___register;
		uint16_t L_23 = L_22.___uint16_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_25 = L_24->___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_3;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_30 = L_29->___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint16_t L_33 = L_32.___uint16_4;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_35 = L_34->___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_5;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_40 = L_39->___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = L_41.___register;
		uint16_t L_43 = L_42.___uint16_6;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_45 = L_44->___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = L_46.___register;
		uint16_t L_48 = L_47.___uint16_7;
		return (bool)((((int32_t)L_45) == ((int32_t)L_48))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_AdjustorThunk (RuntimeObject* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	CHECKED_LOCAL(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_3;
		L_3 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		V_6 = L_3;
		int32_t L_4;
		L_4 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_1, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_00ef:
	{
		int32_t L_7 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_034a:
	{
		goto IL_04da;
	}

IL_04da:
	{
		goto IL_066a;
	}

IL_066a:
	{
	}
	{
		int32_t L_10 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_11 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_12 = (uint16_t*)(&L_11->___uint16_0);
		int32_t L_13;
		L_13 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_12, NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_10, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_16 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_17 = (uint16_t*)(&L_16->___uint16_1);
		int32_t L_18;
		L_18 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_17, NULL);
		int32_t L_19;
		L_19 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_15, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_22 = (uint16_t*)(&L_21->___uint16_2);
		int32_t L_23;
		L_23 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_22, NULL);
		int32_t L_24;
		L_24 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_20, L_23, NULL);
		V_0 = L_24;
		int32_t L_25 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_26 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_27 = (uint16_t*)(&L_26->___uint16_3);
		int32_t L_28;
		L_28 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_27, NULL);
		int32_t L_29;
		L_29 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_25, L_28, NULL);
		V_0 = L_29;
		int32_t L_30 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_31 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_32 = (uint16_t*)(&L_31->___uint16_4);
		int32_t L_33;
		L_33 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_32, NULL);
		int32_t L_34;
		L_34 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_30, L_33, NULL);
		V_0 = L_34;
		int32_t L_35 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_36 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_37 = (uint16_t*)(&L_36->___uint16_5);
		int32_t L_38;
		L_38 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_37, NULL);
		int32_t L_39;
		L_39 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_35, L_38, NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_41 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_42 = (uint16_t*)(&L_41->___uint16_6);
		int32_t L_43;
		L_43 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_42, NULL);
		int32_t L_44;
		L_44 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_40, L_43, NULL);
		V_0 = L_44;
		int32_t L_45 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_7);
		int32_t L_48;
		L_48 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_47, NULL);
		int32_t L_49;
		L_49 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_45, L_48, NULL);
		V_0 = L_49;
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_1;
		L_1 = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_8;
		L_8 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_10), L_11, L_12, NULL);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_22;
		L_22 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_24;
		L_24 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uint16_t L_25;
		L_25 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint16_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_27), L_28, L_29, NULL);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m32F4DFF513244591C00E23353EB6F6294E8BE9F0 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 2));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_4 = (uint16_t*)L_4;
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_5 = V_4;
		int32_t L_6 = V_5;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_9;
		L_9 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_10 = V_5;
		uint16_t L_11;
		L_11 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_9, L_11, NULL);
		if (L_12)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_13;
		L_13 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_13));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*(((int16_t*)G_B22_1)) = ((int16_t)G_B22_0);
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0122:
	{
		int32_t L_15 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_17 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_18), (void*)L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_18;
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		goto IL_06e5;
	}

IL_06e5:
	{
		goto IL_097b;
	}

IL_097b:
	{
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_19 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_20 = L_19.___register;
		uint16_t L_21 = L_20.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_22 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_23 = L_22.___register;
		uint16_t L_24 = L_23.___uint16_0;
		if ((((int32_t)L_21) == ((int32_t)L_24)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_25;
		L_25 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_25));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_29 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_30 = L_29.___register;
		uint16_t L_31 = L_30.___uint16_1;
		if ((((int32_t)L_28) == ((int32_t)L_31)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_32;
		L_32 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_32));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_33 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_34 = L_33.___register;
		uint16_t L_35 = L_34.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_2;
		if ((((int32_t)L_35) == ((int32_t)L_38)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_39;
		L_39 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_39));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_40 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_41 = L_40.___register;
		uint16_t L_42 = L_41.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_43 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_44 = L_43.___register;
		uint16_t L_45 = L_44.___uint16_3;
		if ((((int32_t)L_42) == ((int32_t)L_45)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_46;
		L_46 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_46));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_47 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_48 = L_47.___register;
		uint16_t L_49 = L_48.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_50 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_51 = L_50.___register;
		uint16_t L_52 = L_51.___uint16_4;
		if ((((int32_t)L_49) == ((int32_t)L_52)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_53;
		L_53 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_53));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_54 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_55 = L_54.___register;
		uint16_t L_56 = L_55.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_57 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_58 = L_57.___register;
		uint16_t L_59 = L_58.___uint16_5;
		if ((((int32_t)L_56) == ((int32_t)L_59)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_60;
		L_60 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_60));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_61 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint16_t L_63 = L_62.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_64 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_65 = L_64.___register;
		uint16_t L_66 = L_65.___uint16_6;
		if ((((int32_t)L_63) == ((int32_t)L_66)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_67;
		L_67 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_67));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_68 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_69 = L_68.___register;
		uint16_t L_70 = L_69.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_71 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint16_t L_73 = L_72.___uint16_7;
		if ((((int32_t)L_70) == ((int32_t)L_73)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_74;
		L_74 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_74));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_75), (&V_20), NULL);
		return L_75;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953 (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580 (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m6764AA686DE7E188C362C5B3E96AB2F5AB09F3CA (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0;
		L_0 = Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83(NULL);
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero), sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		uint16_t L_1;
		L_1 = Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline(NULL);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_2), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_one = L_2;
		uint16_t L_3;
		L_3 = Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline(NULL);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_4), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_allOnes = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>((&V_0),NULL));
		*(((int16_t*)L_0)) = ((int16_t)((int32_t)65535));
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7, sizeof(int32_t));
		int32_t L_9 = ___1_length;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* ArrayPool_1_get_Shared_m0F5374FE0AF46A9CAB3F9501E56B2D990DEB0C39_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit);
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01* L_0 = ((ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CSharedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* V_0 = NULL;
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0 = ((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* EqualityComparer_1_get_Default_m96799E2B99BE65E1AB30536CF1870515ACD05D7A_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* V_0 = NULL;
	{
		EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* L_0 = ((EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m7E9BF3452BCAD4EF6FCD1459BD0203238F315430(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC0FF2B3FD5C04787C1E74C1D3EAF2DCCAF1C91F0* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* V_0 = NULL;
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_0 = ((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
