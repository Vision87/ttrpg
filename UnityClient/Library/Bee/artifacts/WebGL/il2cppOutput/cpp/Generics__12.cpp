#include "pch-cpp.hpp"





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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
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

struct Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF;
struct Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F;
struct Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2;
struct Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269;
struct Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD;
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
struct Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802;
struct Comparison_1_t158C975A290FF78A31C910863BC60750610FA196;
struct Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1;
struct Comparison_1_tF15DB3AEC82E2B8B1BF7E34C4EAB7D1031840D68;
struct Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734;
struct Comparison_1_t6D46DD6AA38BEDD362EA71586791DE2B3A60F4CD;
struct Comparison_1_tF964A5F2E76EBC830880EAA79F49245171578AA2;
struct Comparison_1_t6CE5C0E9637BFC69BED33F85B7839DC771A6518F;
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
struct Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A;
struct Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ICollection_1_t69C8D49CBD4139FF2E510D3086C978B5D4A6DA4E;
struct ICollection_1_t92F445645C1A79FA8CEEA374ADA2DC3A60568E3A;
struct ICollection_1_tA15C88CD562D52ED6B4D981EC7F4A5558BD52C6A;
struct ICollection_1_tC9B15468F509008C580ED71459A502B60CE0346B;
struct ICollection_1_t048CC5FC450D66E71D7FF26795D93F2E1D1FED12;
struct ICollection_1_tDD1BCC0AF95DDD3F7DA01338FCCA8F67CFED7E25;
struct ICollection_1_tDEF4FC0A4CC8BC00041FB54C53FF1161ABDFB25A;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_t00C657072990EFC3811C7F429B8E3CBEF805BD8A;
struct ICollection_1_t5E4953111374D1284927C80D03DAA31A4C696E82;
struct IComparer_1_tF8849CAD316ED547C13A0BC710F87435D428D64A;
struct IComparer_1_t3CDB984E3B936B05CED4328F796130560647F419;
struct IComparer_1_tC7D46A32A502DFC21B11BE1B2ED85863A881B5B4;
struct IComparer_1_t9506E9EC4E1E43EFBFBB23D314D9EE798E7CD251;
struct IComparer_1_tF1B1E03231E8162D589A29141987C1D4455C3740;
struct IComparer_1_tF9731D1DDC57D192F08A87427FD8461F6C9F397B;
struct IComparer_1_tF07D868EBF6988E8CBEA11D7EA5725A3B8207275;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_tC8A75A381B719F8FA4F84EAACFCE66E93FC34E0A;
struct IComparer_1_tECA14B9E78A671492391AECF3DBB0FD7DBE53DAA;
struct IEnumerable_1_tE68268B6831A9A4C9D435C424B55BE3718BA2CA1;
struct IEnumerable_1_t9A19CFE11E0D6DD97868F4DDB8AC52CEAFCCE38D;
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
struct IEnumerable_1_t0705CC93F5983E73D60DDB3F3098A71F651BFF0C;
struct IEnumerable_1_tBA4259158757D7E9A55293191376A3C4C288D5DC;
struct IEnumerable_1_t44913A79B60EB3E5B8F3437065EB10600669DBE6;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t101D1ED4FD2E11F59AE617F3A394F7AA0A21C585;
struct IEnumerable_1_t7A393989987F03DA8F60B376BA268312A4EFB898;
struct IEnumerator_1_t200423412A1CD57E0138FA44A44DA490630991C1;
struct IEnumerator_1_t667F7992B8BEB12827F403D7F8F4BCC277699E3A;
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
struct IEnumerator_1_t067D943FA808557FBA1FBED8EA4E9A1BFCB791B8;
struct IEnumerator_1_t842D019876487B2E6D3BB24F849475DF22876461;
struct IEnumerator_1_t2A9FA624D2D38205E2A75A9A27DD25624AB4CBF3;
struct IEnumerator_1_tD9AF8EC21C993A90B1FB0DB9EEEFC8072CFAC9C9;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_tE9D1C7A5287039A2077BA3B539B100F0E12F3A6C;
struct IEnumerator_1_tB3A77E02B009CBA74566B206E9F55B5316929F22;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9;
struct LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9;
struct LinkedSlot_tE7D1C25DA1E67199476082E304AAF6F99F660079;
struct LinkedSlot_t0F19A078992168BE7C3A34BE7C0ED9D0B3859584;
struct List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7;
struct List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308;
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
struct List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27;
struct List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB;
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26;
struct List_1_t420B17163897A4DF994BA698744548CD81961E70;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E;
struct Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721;
struct Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584;
struct Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E;
struct Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B;
struct Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4;
struct Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B;
struct Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE;
struct LinkedSlotVolatileU5BU5D_t0D8BD87FEA48E8F0A65CE70AB997CD45F2FDB470;
struct LinkedSlotVolatileU5BU5D_tF7345D3E67F071798E0CC6781BAFBD08BEA61388;
struct ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19;
struct ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B221ABF91F580F086900605524B962132D6AB0F;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral522D64BC87755C7FA79B087AFEB43911A81E0E95;
IL2CPP_EXTERN_C String_t* _stringLiteral5710CE45F48D63001BA691498F6BC34A07EDE686;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA5393D2D2BDCE148E08D22CB1FD20976D66BEC41;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LinkedSlotVolatileU5BU5D_t0D8BD87FEA48E8F0A65CE70AB997CD45F2FDB470;
struct LinkedSlotVolatileU5BU5D_tF7345D3E67F071798E0CC6781BAFBD08BEA61388;
struct ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19;
struct ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9 : public RuntimeObject {};
struct LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9  : public RuntimeObject
{
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___head;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct LinkedSlot_tE7D1C25DA1E67199476082E304AAF6F99F660079  : public RuntimeObject
{
	LinkedSlot_tE7D1C25DA1E67199476082E304AAF6F99F660079* ___Next;
	LinkedSlot_tE7D1C25DA1E67199476082E304AAF6F99F660079* ___Previous;
	LinkedSlotVolatileU5BU5D_t0D8BD87FEA48E8F0A65CE70AB997CD45F2FDB470* ___SlotArray;
	Il2CppSharedGenericObject* ___Value;
};
struct LinkedSlot_t0F19A078992168BE7C3A34BE7C0ED9D0B3859584 : public RuntimeObject {};
struct List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7  : public RuntimeObject
{
	ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308  : public RuntimeObject
{
	ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27  : public RuntimeObject
{
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB  : public RuntimeObject
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B  : public RuntimeObject
{
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26  : public RuntimeObject
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t420B17163897A4DF994BA698744548CD81961E70  : public RuntimeObject
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 
{
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ____list;
	int32_t ____index;
	int32_t ____version;
	bool ____current;
};
struct Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D 
{
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppChar ____current;
};
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457;
struct LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096 
{
	LinkedSlot_tE7D1C25DA1E67199476082E304AAF6F99F660079* ___Value;
};
struct LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5 
{
	LinkedSlot_t0F19A078992168BE7C3A34BE7C0ED9D0B3859584* ___Value;
};
struct ListBuilder_1_tFC1B347812D396479DFA9E563EBAC2E19775D941 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	Il2CppSharedGenericObject* ____item;
	int32_t ____count;
	int32_t ____capacity;
};
struct ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
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
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_com
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
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
struct Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D 
{
	List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* ____list;
	int32_t ____index;
	int32_t ____version;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ____current;
};
struct Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6 
{
	List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* ____list;
	int32_t ____index;
	int32_t ____version;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ____current;
};
struct Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297 
{
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ____list;
	int32_t ____index;
	int32_t ____version;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ____current;
};
struct Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 
{
	List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ____list;
	int32_t ____index;
	int32_t ____version;
	intptr_t ____current;
};
struct Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 
{
	List_1_t420B17163897A4DF994BA698744548CD81961E70* ____list;
	int32_t ____index;
	int32_t ____version;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ____current;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 
{
	int32_t ___U3CkeyU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
};
struct Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF  : public MulticastDelegate_t
{
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F  : public MulticastDelegate_t
{
};
struct Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2  : public MulticastDelegate_t
{
};
struct Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269  : public MulticastDelegate_t
{
};
struct Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD  : public MulticastDelegate_t
{
};
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};
struct Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802  : public MulticastDelegate_t
{
};
struct Comparison_1_t158C975A290FF78A31C910863BC60750610FA196  : public MulticastDelegate_t
{
};
struct Comparison_1_tF15DB3AEC82E2B8B1BF7E34C4EAB7D1031840D68  : public MulticastDelegate_t
{
};
struct Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734  : public MulticastDelegate_t
{
};
struct Comparison_1_t6D46DD6AA38BEDD362EA71586791DE2B3A60F4CD  : public MulticastDelegate_t
{
};
struct Comparison_1_tF964A5F2E76EBC830880EAA79F49245171578AA2  : public MulticastDelegate_t
{
};
struct Comparison_1_t6CE5C0E9637BFC69BED33F85B7839DC771A6518F  : public MulticastDelegate_t
{
};
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};
struct Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A  : public MulticastDelegate_t
{
};
struct Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0  : public MulticastDelegate_t
{
};
struct Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C 
{
	List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* ____list;
	int32_t ____index;
	int32_t ____version;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ____current;
};
struct Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E  : public MulticastDelegate_t
{
};
struct Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584  : public MulticastDelegate_t
{
};
struct Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E  : public MulticastDelegate_t
{
};
struct Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B  : public MulticastDelegate_t
{
};
struct Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4  : public MulticastDelegate_t
{
};
struct Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B  : public MulticastDelegate_t
{
};
struct Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE  : public MulticastDelegate_t
{
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
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9  : public MulticastDelegate_t
{
};
struct Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1  : public MulticastDelegate_t
{
};
struct Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570 
{
	List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* ____list;
	int32_t ____index;
	int32_t ____version;
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ____current;
};
struct Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields
{
	ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___s_emptyArray;
};
struct List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields
{
	ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___s_emptyArray;
};
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray;
};
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray;
};
struct List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields
{
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___s_emptyArray;
};
struct List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___s_emptyArray;
};
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields
{
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___s_emptyArray;
};
struct List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
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
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct LinkedSlotVolatileU5BU5D_t0D8BD87FEA48E8F0A65CE70AB997CD45F2FDB470  : public RuntimeArray
{
	ALIGN_FIELD (8) LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096 m_Items[1];

	inline LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LinkedSlotVolatile_t0C58FEC43C4370C933531CCE251E315BE8209096 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};
struct LinkedSlotVolatileU5BU5D_tF7345D3E67F071798E0CC6781BAFBD08BEA61388  : public RuntimeArray
{
	ALIGN_FIELD (8) LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5 m_Items[1];

	inline LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LinkedSlotVolatile_tBD1FCCE75B9C692748CC900C96086C8B6C4732E5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};
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
struct ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A m_Items[1];

	inline ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
	}
	inline ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
	}
};
struct ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE m_Items[1];

	inline ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9  : public RuntimeArray
{
	ALIGN_FIELD (8) EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 m_Items[1];

	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		m_Items[index] = value;
	}
};
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D m_Items[1];

	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		m_Items[index] = value;
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
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50  : public RuntimeArray
{
	ALIGN_FIELD (8) LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 m_Items[1];

	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ComponentGlyphIDs), (void*)NULL);
	}
	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ComponentGlyphIDs), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0F98614729A5017594BCB5D1D847C1D319913311_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mD3BED94514D2C30FA0D5EC90DF045F2A2BB0BA23_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A List_1_get_Item_m04BB8B79769E1CB553314C1B50BAEFD6F554C7EE_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mA063589276BAD8CEA82C8CA0EC1290ADF08F4144_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mB278A441D5221E2986B849BAABCC653931924D4A_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1633A3181CE9963F0AE5F3439FBF8810B49D300D_gshared_inline (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mE9E2EBCC87CE4FB2DB074CCE4D52D59BBB8D4FC2_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m8298EBDF952AB512973D9423A24DADE09BEC78CA_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m545A22D62E98856B5C1C26EE86D610A83E1136E1_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mB1756959B38F8E3BABFADAD218F7AB52DC6106CD_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD58873AD4DD712C3D7FA033B732E930080E7B288_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m0B03FD1F7BCF0C738A4A9F5F150D344B22AF6921_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_gshared_inline (Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m02CC501585E805A624624D9710409C47B73A58A7_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1EA58AC94438644ACACF974F2825DB6A06EB560E_gshared_inline (Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m116D42ECBAC317B6171EF19B7CAC779DE2D6D9F9_gshared (Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D* __this, List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB32B3597041FF03B39855E66E4ACC058E6F75C9F_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m12C02AC49F150EEC37515F4CD1EFA77C33C8EFE3_gshared (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mBA3C9C18F85B6C3AA2E522B1B8D5CC5E926FA443_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m6C1B1F08098B87BD4DF0925B5AFA18B26C962FEC_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m08D85A6B359080863E9DE73E1022BDC907798CA6_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m07DAEB0727AA94C5A75CC017E59953849EFB9ED6_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_mADCCF076FE1848D020426BEA036EADED38B517E3_gshared (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mBC2EC697191AE2C79A985ADBA5B1C062D7387669_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m9B87818DE1AF0FF50C3A4A79A6246E6A7A6CFE87_gshared (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m0A91B43DA585E54BA8F63A9000118CFB779B5EDB_gshared (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t158C975A290FF78A31C910863BC60750610FA196* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m37E48798A740056F044D74B936CF7E9BE7B7B91C_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE List_1_get_Item_m0E033C4773F22019CACA922E882F9FEBDE452D76_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6CD94F15D9CE7EB728501B169B21EADB4FA5A351_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m1E21177E185B16321B19611EFC2608257B95A509_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD289F3F0A4EA20EF1C4703B8E700B3F9384F49C_gshared_inline (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mC54D8DBC0102EAE183FFF770AABCE3FEF57A3AF7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m920664BAEC27172BDDDA2EAF63C178050124C0B7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m2E3BAC7324446128C9D7C9856B672EE9A214492F_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE842EF4FEAC51AC1F9A7F3A1407D59406D31FE29_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7117214B8F73B007DA04CDA7D459C952AFC6E2CF_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mC2A8BCDB82D37C2BA3768673597F3DA2729B8004_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_gshared_inline (Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mE993DAE75189D17907D4DD13470B27A92438EEC7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9BE1A20B0B09219CB8094DF49543084A40C61AD6_gshared_inline (Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53F61C030AD9874FB1E85A4C260CC50674303DC7_gshared (Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570* __this, List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC7C0466283FF30FF224C672EC9D2B1FBC2E585C2_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m4450C4CE6BBBC25D72B454DAA7B6BD849617EED9_gshared (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m150BA8E0436E9787E058C7ECA305DBD576B439B4_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7AA3E332F2DBD12A991A4AC9D6976BCA684D47D4_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA3E4496F2257211F65D53A91E5E963AD3538B08B_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m96832900A421C2E50D245EBD41692FB1B29E20E7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mDAF846CB3773C61E90D5A18297F98E73D4A93AF1_gshared (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD834B250CEF191D5208C0AD1052F1514D49CA0DE_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mF235EB2FF2C0008013E572914A1C36B00EA5155B_gshared (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mE0F7FA41E49185D4E819B81DE424011C88417CFF_gshared (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF2258A77346C688889600327C8F56BC4A0176A23 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEA98FA49B98EC8B769FB82DED7622F672AD1ADB (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB592E554E856EBC1FE85A8FE98867C13A2D7752C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mCD6D87C2FFD8EBD29C3BC38E75CD43A9A0C098A6 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF46FEB4C0AA492E0A1973DBE87EBF43AC9644924 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m59505FB7705CC626766A9844F72A4BA7EBDC35BF (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBEDCE03FA5017F4D16EB2D1F04FB8223B3D7330D (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mFD6B453B01191485731849D17AC464404A5693D7 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m5EB17D73F75C175B835656A7C7C137A266E07928_inline (Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA77FF56D5949456D4B615C511719FA94CFF3FD10 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8D1E0841C2529B3F77B2CE9A9606C630EDA360CD (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m91DC7897CFBCC9E83397E65300A31D6D6FDEA6FC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, bool ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3F2AA5CE4D3450E7C0A7D5CF0B4FDE49706D623C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, bool ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCB6113856F578854DE70E8FEDBEC4DAF03CB5C3B (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m280391BAD46C08340E083F957BF24546CD06CCFC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m12308A79AECE5E7D2D300ACDABDA0DC883476BC9 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m08B61D4C4CBAE0FA2D08FA6F668091320B995981 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCADEE7E401B19F98A7128D14C34529B99C2A5FB1 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m633F2DCA55A83415BCAA5601A9844617C15E9C54 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tF15DB3AEC82E2B8B1BF7E34C4EAB7D1031840D68* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCAA98D9BB6E74057D7C206AC180CFA971F0A7169 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline (Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mD2B4305696EA16BECDC4EA958138C3183C79AE68 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_inline (Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596 (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6379987CB76F278D565037B93C54CC50B8E8092F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m018F59BB01FA2473C4F75B463F7630F8EFB53F34 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, Il2CppChar ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B8A5AAC3295C28E6DD6C5E9C61D8B6BEF506AF2 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE0333A739303139C223C5EE631115880C5160F21 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mEB144F35631CDE3C91A0F1549342F937C6F71995 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m36A723430819AA1016B6F73A7C26A8BA8A606FDC (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 List_1_get_Item_m845F1A2F2642ED1FDF20EDB92D38E70F1EA0C97E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mC85BADB7F750EEAF18520AFA219ECD6F5A7E1071 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m59096DB065B8CB991347E51E599F974F751FB75E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m57D51DEE77CD2651860F4CF5ED9B04CE9D6103B9 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m4C2124C488438C6D475D7CF6DDC5BA1B0960EDA1 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE77E3C88EBBD399E4A5F6F0B05E4E32C5E11FB24_inline (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mDA8EBB60AED520FABAE376425650C507B583A61E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m94F77D1194E2B14C38B6DFA8FCC35B183CC84CBE (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m4D6941EFDEBE9D4788D796F07958B00CDEDB2E3D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1E7DEF8954CEA97EB5CB4EAE9DA75FB558111A28 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF866D00C41CB70E3EBB6660E9623E0A50F256ED9 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2C41A9DBB8AB5AE3F160F9DDDE5E7DFE98BA771A (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2F110E2073E6471BD12C32F8EA63B0673BEFB275_inline (Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m46CBA4B23605D531748C55283635E29F5F1C9DC3 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m831285BAC5866B4BA64BBE4F0B71DC4C16FADB77_inline (Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8440A21A41A6F8239720F77F241B617EACA2D12E (Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6* __this, List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFC30951412A765E79E1973F8DCB19A34E0E743EF (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m7EB28111E8C8AD6BDC68A570667CCF81AE4C29FD (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m033EE7CB7BB3EE4ADFD7CC4B8A0163AECA0540A6 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mCA571B59C857377ED169817E3350AC9CA94BE553 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m1E745EB2D980C9699BE8A35501B0617469D615C6 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA569C76082978695E51263ED9A2485E234D29B15 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m381C5B99823510F3F9EC5F66D77AFABD804C80A6 (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m88094CD71622A1ACB66EE32C13D8B05BE75ABBFF (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA24DA57EBB51944C2221550010BF4C2CFC48E3B (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mA7E48E1F488EA5D93C4B00ACEC79780C69114343 (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t6D46DD6AA38BEDD362EA71586791DE2B3A60F4CD* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4226D9662FCDA74929E06565AE54FCA449E0C77D (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E List_1_get_Item_m7480CC8D6EAB817FA8B0137F342F0F13C4ADB2F1 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mAC84FFFDC9FFB212F128B6CCFF412C0521B3CF35 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m5692CFE5978797D705EAFD37606120F554E4BA14 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m950BDA4F0AE7DE1C223608C02FDF3E5B98C6AB85 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD7FE022A626D48FDF8E314247F78503509E8392F (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5B8E2D50B31445594A41BEC435ED471E93AD6D7E_inline (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mEC5EDD2B0AF440608EC25346E4BA411FC1D4C590 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mDC007FAFE095A04C8CBEEBB3B21F2D4A72CAF64E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m727397AE80A575DB4F6D9FEDFF3B9287F556CB73 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA2D9CFAAAB50EB2CE519C6B364F0CD36F5F2082E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mB3C95288E7F4C5B4C38CE5EF95C333C724E5C0D8 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m895F0A0C03987A8A68D8D9CB0A9C1D4001805ADA (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m882AE8CF67A51CB938AA860944BE2D3839AF270F_inline (Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m896A27FFA8CBBEADD34F86D7CFD66651A838455E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3D192718EF5EF2AB5A069A5B895EE394F3D6A4BA_inline (Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D485F6CDB7B2129F57EA89E9A320BC3CD853D37 (Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C* __this, List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m26F61F5C0ADBA14C06C18B8D16455D1479E04173 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mE0F68F29A1B421A81613A72DA4204530E5EE88B6 (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9F746B16D1BC97DDD6CEF2FADB15138F968BEE5A (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF69D597445C82005734A2D459A3DDBA59E00030E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mDD73EAFDEE539538277C3579F133BAABCEB84441 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m8277F7F9699258BD6CEBACCE0E5BB41BF28662CC (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m7CAFDD8F9BAD96720FF2D79137D0F5D0927ADDC1 (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3D99E5AF59A3D27F8413656A9E4A9764A3F39152 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m3CACAF471F070AE117D7061FBFB5761342F853AD (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7DD79341C885CF8D0DC14F4613D466B8BBABD5CE (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tF964A5F2E76EBC830880EAA79F49245171578AA2* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76EFA75443EB39C9A0D6735F3B939FFB5458F0D0 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE880C25C1E2250EB54958DB93F63F2B2D1C27579 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3695A6565843D3C8B45D3E500B7F83A581E79691 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m9FD3C28AEFDC7247A9E6CE3E84E5489C5B13C1DA (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0B3B7689F4237052BB0F4FAAFD868804BBB9D380 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mBC0EFA9A1592741250239196ED79EE97845C0A00 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mD50F28D202D7F2472E2344BEAB1EB4B69EDC123E (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mEF86B3167D01A54CFD7538A6AEEB599436BE4A3D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m0F4187EC3F271EDC965F10D67E6683327084812B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m0811F9AE38A31E6A19659882B7E2E557E56F6813 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB8C0D0FD902B57AF9217F8B45F4A60EDA64B580A (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD78A3109FEA2472F42D9950F7A59DE58D0DE599A_inline (Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m57281DCD733A7BDC04E24ED2368FE322C17B44CC (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF07B4ADB16BBF6115FA0B5482E900CF4CA5BEC6A_inline (Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m09BC751BAD24CDB06B1FBA0B8466500A25F908AC (Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297* __this, List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC59F2D99C6EB086FD9F950A7CC3177BC7C5A6F3B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m2851FF3BF5667AFF6BDB883FC94A1D0F7527F6F0 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m0F529A69530858B5BD0194F778195E9BA969C38E (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m68956ED9D9817BD1D2CB1AC3A5BC1F9BF97EBF26 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m5984B59DDC014774338A51174BFA35BD003B42B3 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFCC5AFBC4F00C1999ABAAD44A9F15B83FD90D9CD (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m37F4D5CA108D725E2D7A38C69B8AC9A505DB0C36 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5B3961A9D069CD12625D24E101A8416D15521BA4 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m534A41BB28E386644C6E5AA29DAE53CCEB6A2779 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mA239B573823EC72FBCB444C2D14001CF5E73B321 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t6CE5C0E9637BFC69BED33F85B7839DC771A6518F* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m36FBFAE20D4C4C19E07819AE0C78E1AE65185819 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline (Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m7C3D45DF088822F13655A1B43D6CF4C864DD0B4D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262 (Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658* __this, List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIntPtr_t_m3EF39FCEE1A746C609E4ACA55B7DBA0B9B2FF13E (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIntPtr_t_m4644EEA142E76AA0835453F90B837AF3CBA906B8 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIntPtr_t_mB78635DE9DC1121D3F7ED84572DFE599F40BE7E7 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m550DF7E1E4B5AAD082993DB3F3683640A653FCB5 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m027125D6E3302C26972D4FA1F80D194D3D236F0A (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline (Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m7B0CB1F2BCD5C588FE855954CFF568D9A857E642 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline (Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB (Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2* __this, List_1_t420B17163897A4DF994BA698744548CD81961E70* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m94FC7F2E670E87F38F1811C819D7D7E9F0A31025 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m59A5711531F3B01A7FD38FB04BFC563BA5ACF61C (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_mFAE044C7CB74A79921108CCC1A15E61AF4DCCAFD (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mBF96DD2C71393DB577087D751CB701D9D7DC5D57 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* ___3_comparer, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m0F98614729A5017594BCB5D1D847C1D319913311 (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))Enumerator__ctor_m0F98614729A5017594BCB5D1D847C1D319913311_fshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline (const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline void Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_mD3BED94514D2C30FA0D5EC90DF045F2A2BB0BA23 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mD3BED94514D2C30FA0D5EC90DF045F2A2BB0BA23_gshared)(__this, ___0_enumerable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
inline ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A List_1_get_Item_m04BB8B79769E1CB553314C1B50BAEFD6F554C7EE (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, const RuntimeMethod*))List_1_get_Item_m04BB8B79769E1CB553314C1B50BAEFD6F554C7EE_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mA063589276BAD8CEA82C8CA0EC1290ADF08F4144 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))List_1_set_Item_mA063589276BAD8CEA82C8CA0EC1290ADF08F4144_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mB278A441D5221E2986B849BAABCC653931924D4A (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))List_1_AddWithResize_mB278A441D5221E2986B849BAABCC653931924D4A_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m1633A3181CE9963F0AE5F3439FBF8810B49D300D_inline (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))List_1_Add_m1633A3181CE9963F0AE5F3439FBF8810B49D300D_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mFBB21FF6BAD06F81E11D575EA7FF38E1C430B741_inline (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void List_1_InsertRange_mE9E2EBCC87CE4FB2DB074CCE4D52D59BBB8D4FC2 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mE9E2EBCC87CE4FB2DB074CCE4D52D59BBB8D4FC2_gshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_m8298EBDF952AB512973D9423A24DADE09BEC78CA (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))List_1_IndexOf_m8298EBDF952AB512973D9423A24DADE09BEC78CA_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m545A22D62E98856B5C1C26EE86D610A83E1136E1 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m545A22D62E98856B5C1C26EE86D610A83E1136E1_gshared)(___0_value, method);
}
inline bool List_1_Contains_mB1756959B38F8E3BABFADAD218F7AB52DC6106CD (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))List_1_Contains_mB1756959B38F8E3BABFADAD218F7AB52DC6106CD_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mF78DDF99D60E4FF5B53E9591539F48862C1A7EA9 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mD58873AD4DD712C3D7FA033B732E930080E7B288 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD58873AD4DD712C3D7FA033B732E930080E7B288_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m0B03FD1F7BCF0C738A4A9F5F150D344B22AF6921 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E*, const RuntimeMethod*))List_1_FindIndex_m0B03FD1F7BCF0C738A4A9F5F150D344B22AF6921_gshared)(__this, ___0_match, method);
}
inline bool Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_inline (Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_gshared_inline)(__this, ___0_obj, method);
}
inline int32_t List_1_FindIndex_m02CC501585E805A624624D9710409C47B73A58A7 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, int32_t, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E*, const RuntimeMethod*))List_1_FindIndex_m02CC501585E805A624624D9710409C47B73A58A7_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m1EA58AC94438644ACACF974F2825DB6A06EB560E_inline (Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))Action_1_Invoke_m1EA58AC94438644ACACF974F2825DB6A06EB560E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F (const RuntimeMethod* method) ;
inline void Enumerator__ctor_m116D42ECBAC317B6171EF19B7CAC779DE2D6D9F9 (Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D* __this, List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D*, List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, const RuntimeMethod*))Enumerator__ctor_m116D42ECBAC317B6171EF19B7CAC779DE2D6D9F9_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void List_1__ctor_mB32B3597041FF03B39855E66E4ACC058E6F75C9F (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, const RuntimeMethod*))List_1__ctor_mB32B3597041FF03B39855E66E4ACC058E6F75C9F_gshared)(__this, ___0_capacity, method);
}
inline int32_t Array_IndexOf_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m12C02AC49F150EEC37515F4CD1EFA77C33C8EFE3 (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m12C02AC49F150EEC37515F4CD1EFA77C33C8EFE3_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mBA3C9C18F85B6C3AA2E522B1B8D5CC5E926FA443 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))List_1_Insert_mBA3C9C18F85B6C3AA2E522B1B8D5CC5E926FA443_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m6C1B1F08098B87BD4DF0925B5AFA18B26C962FEC (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m6C1B1F08098B87BD4DF0925B5AFA18B26C962FEC_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m08D85A6B359080863E9DE73E1022BDC907798CA6 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))List_1_Remove_m08D85A6B359080863E9DE73E1022BDC907798CA6_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m07DAEB0727AA94C5A75CC017E59953849EFB9ED6 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m07DAEB0727AA94C5A75CC017E59953849EFB9ED6_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_mADCCF076FE1848D020426BEA036EADED38B517E3 (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_mADCCF076FE1848D020426BEA036EADED38B517E3_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mBC2EC697191AE2C79A985ADBA5B1C062D7387669 (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mBC2EC697191AE2C79A985ADBA5B1C062D7387669_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m9B87818DE1AF0FF50C3A4A79A6246E6A7A6CFE87 (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m9B87818DE1AF0FF50C3A4A79A6246E6A7A6CFE87_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m0A91B43DA585E54BA8F63A9000118CFB779B5EDB (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t158C975A290FF78A31C910863BC60750610FA196* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*, int32_t, int32_t, Comparison_1_t158C975A290FF78A31C910863BC60750610FA196*, const RuntimeMethod*))ArraySortHelper_1_Sort_m0A91B43DA585E54BA8F63A9000118CFB779B5EDB_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m37E48798A740056F044D74B936CF7E9BE7B7B91C (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m37E48798A740056F044D74B936CF7E9BE7B7B91C_gshared)(__this, ___0_enumerable, method);
}
inline ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE List_1_get_Item_m0E033C4773F22019CACA922E882F9FEBDE452D76 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, const RuntimeMethod*))List_1_get_Item_m0E033C4773F22019CACA922E882F9FEBDE452D76_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m6CD94F15D9CE7EB728501B169B21EADB4FA5A351 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))List_1_set_Item_m6CD94F15D9CE7EB728501B169B21EADB4FA5A351_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m1E21177E185B16321B19611EFC2608257B95A509 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))List_1_AddWithResize_m1E21177E185B16321B19611EFC2608257B95A509_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mAD289F3F0A4EA20EF1C4703B8E700B3F9384F49C_inline (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))List_1_Add_mAD289F3F0A4EA20EF1C4703B8E700B3F9384F49C_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m5C664A24DB4D94525EEEDBB13A790316EF3FCDEE_inline (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void List_1_InsertRange_mC54D8DBC0102EAE183FFF770AABCE3FEF57A3AF7 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mC54D8DBC0102EAE183FFF770AABCE3FEF57A3AF7_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m920664BAEC27172BDDDA2EAF63C178050124C0B7 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))List_1_IndexOf_m920664BAEC27172BDDDA2EAF63C178050124C0B7_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m2E3BAC7324446128C9D7C9856B672EE9A214492F (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m2E3BAC7324446128C9D7C9856B672EE9A214492F_gshared)(___0_value, method);
}
inline bool List_1_Contains_mE842EF4FEAC51AC1F9A7F3A1407D59406D31FE29 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))List_1_Contains_mE842EF4FEAC51AC1F9A7F3A1407D59406D31FE29_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m2B0597F0BE39B1EA6F02132927668C45F3D9CB4D (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m7117214B8F73B007DA04CDA7D459C952AFC6E2CF (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7117214B8F73B007DA04CDA7D459C952AFC6E2CF_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_mC2A8BCDB82D37C2BA3768673597F3DA2729B8004 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721*, const RuntimeMethod*))List_1_FindIndex_mC2A8BCDB82D37C2BA3768673597F3DA2729B8004_gshared)(__this, ___0_match, method);
}
inline bool Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_inline (Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_gshared_inline)(__this, ___0_obj, method);
}
inline int32_t List_1_FindIndex_mE993DAE75189D17907D4DD13470B27A92438EEC7 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, int32_t, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721*, const RuntimeMethod*))List_1_FindIndex_mE993DAE75189D17907D4DD13470B27A92438EEC7_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m9BE1A20B0B09219CB8094DF49543084A40C61AD6_inline (Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))Action_1_Invoke_m9BE1A20B0B09219CB8094DF49543084A40C61AD6_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m53F61C030AD9874FB1E85A4C260CC50674303DC7 (Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570* __this, List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570*, List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, const RuntimeMethod*))Enumerator__ctor_m53F61C030AD9874FB1E85A4C260CC50674303DC7_gshared)(__this, ___0_list, method);
}
inline void List_1__ctor_mC7C0466283FF30FF224C672EC9D2B1FBC2E585C2 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, const RuntimeMethod*))List_1__ctor_mC7C0466283FF30FF224C672EC9D2B1FBC2E585C2_gshared)(__this, ___0_capacity, method);
}
inline int32_t Array_IndexOf_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m4450C4CE6BBBC25D72B454DAA7B6BD849617EED9 (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m4450C4CE6BBBC25D72B454DAA7B6BD849617EED9_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m150BA8E0436E9787E058C7ECA305DBD576B439B4 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))List_1_Insert_m150BA8E0436E9787E058C7ECA305DBD576B439B4_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m7AA3E332F2DBD12A991A4AC9D6976BCA684D47D4 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m7AA3E332F2DBD12A991A4AC9D6976BCA684D47D4_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mA3E4496F2257211F65D53A91E5E963AD3538B08B (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*))List_1_Remove_mA3E4496F2257211F65D53A91E5E963AD3538B08B_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m96832900A421C2E50D245EBD41692FB1B29E20E7 (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m96832900A421C2E50D245EBD41692FB1B29E20E7_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mDAF846CB3773C61E90D5A18297F98E73D4A93AF1 (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mDAF846CB3773C61E90D5A18297F98E73D4A93AF1_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mD834B250CEF191D5208C0AD1052F1514D49CA0DE (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mD834B250CEF191D5208C0AD1052F1514D49CA0DE_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mF235EB2FF2C0008013E572914A1C36B00EA5155B (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mF235EB2FF2C0008013E572914A1C36B00EA5155B_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mE0F7FA41E49185D4E819B81DE424011C88417CFF (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*, int32_t, int32_t, Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1*, const RuntimeMethod*))ArraySortHelper_1_Sort_mE0F7FA41E49185D4E819B81DE424011C88417CFF_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF2258A77346C688889600327C8F56BC4A0176A23 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEA98FA49B98EC8B769FB82DED7622F672AD1ADB (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB592E554E856EBC1FE85A8FE98867C13A2D7752C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mCD6D87C2FFD8EBD29C3BC38E75CD43A9A0C098A6 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF46FEB4C0AA492E0A1973DBE87EBF43AC9644924 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m59505FB7705CC626766A9844F72A4BA7EBDC35BF (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_mEF9364A6E7497FA289911B3F194144D3C8FC82E1 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBEDCE03FA5017F4D16EB2D1F04FB8223B3D7330D (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mFD6B453B01191485731849D17AC464404A5693D7 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m5EB17D73F75C175B835656A7C7C137A266E07928_inline (Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA77FF56D5949456D4B615C511719FA94CFF3FD10 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8D1E0841C2529B3F77B2CE9A9606C630EDA360CD (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m91DC7897CFBCC9E83397E65300A31D6D6FDEA6FC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, bool ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3F2AA5CE4D3450E7C0A7D5CF0B4FDE49706D623C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, bool ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCB6113856F578854DE70E8FEDBEC4DAF03CB5C3B (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m280391BAD46C08340E083F957BF24546CD06CCFC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m12308A79AECE5E7D2D300ACDABDA0DC883476BC9 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m08B61D4C4CBAE0FA2D08FA6F668091320B995981 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCADEE7E401B19F98A7128D14C34529B99C2A5FB1 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m633F2DCA55A83415BCAA5601A9844617C15E9C54 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tF15DB3AEC82E2B8B1BF7E34C4EAB7D1031840D68* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m66386CFE5F99A7A429344E8902FE421835DD80B1 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCAA98D9BB6E74057D7C206AC180CFA971F0A7169 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline (Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mD2B4305696EA16BECDC4EA958138C3183C79AE68 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_inline (Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596 (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6379987CB76F278D565037B93C54CC50B8E8092F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m018F59BB01FA2473C4F75B463F7630F8EFB53F34 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, Il2CppChar ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B8A5AAC3295C28E6DD6C5E9C61D8B6BEF506AF2 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE0333A739303139C223C5EE631115880C5160F21 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mEB144F35631CDE3C91A0F1549342F937C6F71995 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m36A723430819AA1016B6F73A7C26A8BA8A606FDC (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 List_1_get_Item_m845F1A2F2642ED1FDF20EDB92D38E70F1EA0C97E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mC85BADB7F750EEAF18520AFA219ECD6F5A7E1071 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m59096DB065B8CB991347E51E599F974F751FB75E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m57D51DEE77CD2651860F4CF5ED9B04CE9D6103B9 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m4C2124C488438C6D475D7CF6DDC5BA1B0960EDA1 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE77E3C88EBBD399E4A5F6F0B05E4E32C5E11FB24_inline (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m7B6D1E3E06906E37393D14D17CF61CDEB088A341_inline (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mDA8EBB60AED520FABAE376425650C507B583A61E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m94F77D1194E2B14C38B6DFA8FCC35B183CC84CBE (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m4D6941EFDEBE9D4788D796F07958B00CDEDB2E3D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1E7DEF8954CEA97EB5CB4EAE9DA75FB558111A28 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m72FEA2F7558557E5E8D6AEDC346B7BCF372F2685 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27*, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF866D00C41CB70E3EBB6660E9623E0A50F256ED9 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2C41A9DBB8AB5AE3F160F9DDDE5E7DFE98BA771A (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2F110E2073E6471BD12C32F8EA63B0673BEFB275_inline (Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m46CBA4B23605D531748C55283635E29F5F1C9DC3 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m831285BAC5866B4BA64BBE4F0B71DC4C16FADB77_inline (Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8440A21A41A6F8239720F77F241B617EACA2D12E (Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6* __this, List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFC30951412A765E79E1973F8DCB19A34E0E743EF (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m7EB28111E8C8AD6BDC68A570667CCF81AE4C29FD (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m033EE7CB7BB3EE4ADFD7CC4B8A0163AECA0540A6 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mCA571B59C857377ED169817E3350AC9CA94BE553 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m1E745EB2D980C9699BE8A35501B0617469D615C6 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA569C76082978695E51263ED9A2485E234D29B15 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m381C5B99823510F3F9EC5F66D77AFABD804C80A6 (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m88094CD71622A1ACB66EE32C13D8B05BE75ABBFF (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA24DA57EBB51944C2221550010BF4C2CFC48E3B (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mA7E48E1F488EA5D93C4B00ACEC79780C69114343 (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t6D46DD6AA38BEDD362EA71586791DE2B3A60F4CD* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4226D9662FCDA74929E06565AE54FCA449E0C77D (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E List_1_get_Item_m7480CC8D6EAB817FA8B0137F342F0F13C4ADB2F1 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mAC84FFFDC9FFB212F128B6CCFF412C0521B3CF35 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m5692CFE5978797D705EAFD37606120F554E4BA14 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m950BDA4F0AE7DE1C223608C02FDF3E5B98C6AB85 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD7FE022A626D48FDF8E314247F78503509E8392F (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5B8E2D50B31445594A41BEC435ED471E93AD6D7E_inline (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mA4DFB6BC16B74FB384286DEF2597EFD9BC9414F0_inline (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mEC5EDD2B0AF440608EC25346E4BA411FC1D4C590 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mDC007FAFE095A04C8CBEEBB3B21F2D4A72CAF64E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m727397AE80A575DB4F6D9FEDFF3B9287F556CB73 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA2D9CFAAAB50EB2CE519C6B364F0CD36F5F2082E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m1545EF149CC271390B435D632C275EA7CF893BC9 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB*, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mB3C95288E7F4C5B4C38CE5EF95C333C724E5C0D8 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m895F0A0C03987A8A68D8D9CB0A9C1D4001805ADA (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m882AE8CF67A51CB938AA860944BE2D3839AF270F_inline (Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m896A27FFA8CBBEADD34F86D7CFD66651A838455E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3D192718EF5EF2AB5A069A5B895EE394F3D6A4BA_inline (Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D485F6CDB7B2129F57EA89E9A320BC3CD853D37 (Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C* __this, List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m26F61F5C0ADBA14C06C18B8D16455D1479E04173 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mE0F68F29A1B421A81613A72DA4204530E5EE88B6 (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9F746B16D1BC97DDD6CEF2FADB15138F968BEE5A (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF69D597445C82005734A2D459A3DDBA59E00030E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mDD73EAFDEE539538277C3579F133BAABCEB84441 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m8277F7F9699258BD6CEBACCE0E5BB41BF28662CC (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m7CAFDD8F9BAD96720FF2D79137D0F5D0927ADDC1 (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3D99E5AF59A3D27F8413656A9E4A9764A3F39152 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m3CACAF471F070AE117D7061FBFB5761342F853AD (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7DD79341C885CF8D0DC14F4613D466B8BBABD5CE (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tF964A5F2E76EBC830880EAA79F49245171578AA2* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76EFA75443EB39C9A0D6735F3B939FFB5458F0D0 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE880C25C1E2250EB54958DB93F63F2B2D1C27579 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3695A6565843D3C8B45D3E500B7F83A581E79691 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m9FD3C28AEFDC7247A9E6CE3E84E5489C5B13C1DA (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0B3B7689F4237052BB0F4FAAFD868804BBB9D380 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mBC0EFA9A1592741250239196ED79EE97845C0A00 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mD50F28D202D7F2472E2344BEAB1EB4B69EDC123E (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mEF86B3167D01A54CFD7538A6AEEB599436BE4A3D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m0F4187EC3F271EDC965F10D67E6683327084812B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m69E25684075F107DE4CBCE75BCA73751FE037C00 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B*, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m0811F9AE38A31E6A19659882B7E2E557E56F6813 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB8C0D0FD902B57AF9217F8B45F4A60EDA64B580A (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD78A3109FEA2472F42D9950F7A59DE58D0DE599A_inline (Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m57281DCD733A7BDC04E24ED2368FE322C17B44CC (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF07B4ADB16BBF6115FA0B5482E900CF4CA5BEC6A_inline (Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m09BC751BAD24CDB06B1FBA0B8466500A25F908AC (Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297* __this, List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC59F2D99C6EB086FD9F950A7CC3177BC7C5A6F3B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m2851FF3BF5667AFF6BDB883FC94A1D0F7527F6F0 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m0F529A69530858B5BD0194F778195E9BA969C38E (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m68956ED9D9817BD1D2CB1AC3A5BC1F9BF97EBF26 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m5984B59DDC014774338A51174BFA35BD003B42B3 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFCC5AFBC4F00C1999ABAAD44A9F15B83FD90D9CD (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m37F4D5CA108D725E2D7A38C69B8AC9A505DB0C36 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5B3961A9D069CD12625D24E101A8416D15521BA4 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m534A41BB28E386644C6E5AA29DAE53CCEB6A2779 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mA239B573823EC72FBCB444C2D14001CF5E73B321 (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t6CE5C0E9637BFC69BED33F85B7839DC771A6518F* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m78D1194C1B144CF0D8CFC975434166E718165E93 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m36FBFAE20D4C4C19E07819AE0C78E1AE65185819 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline (Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m7C3D45DF088822F13655A1B43D6CF4C864DD0B4D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262 (Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658* __this, List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIntPtr_t_m3EF39FCEE1A746C609E4ACA55B7DBA0B9B2FF13E (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIntPtr_t_m4644EEA142E76AA0835453F90B837AF3CBA906B8 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIntPtr_t_mB78635DE9DC1121D3F7ED84572DFE599F40BE7E7 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m550DF7E1E4B5AAD082993DB3F3683640A653FCB5 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t420B17163897A4DF994BA698744548CD81961E70*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m4399B10FDA489280A34B28867B8F5EF44CFE1D04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t420B17163897A4DF994BA698744548CD81961E70*, LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m027125D6E3302C26972D4FA1F80D194D3D236F0A (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline (Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m7B0CB1F2BCD5C588FE855954CFF568D9A857E642 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline (Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB (Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2* __this, List_1_t420B17163897A4DF994BA698744548CD81961E70* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m94FC7F2E670E87F38F1811C819D7D7E9F0A31025 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m59A5711531F3B01A7FD38FB04BFC563BA5ACF61C (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_mFAE044C7CB74A79921108CCC1A15E61AF4DCCAFD (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mBF96DD2C71393DB577087D751CB701D9D7DC5D57 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* ___3_comparer, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_mED84A7ED11208CC35CCE76B96F8ADC2AADF1542F_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m189747DCEEBD48A9C1BC20BFADA855C4816BD7CB_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* LinkedList_1_get_First_mFE6CE39F3C815C988217E69C202C990619E7EB87_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = __this->___head;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* LinkedList_1_get_Last_m79C544AB97456CCD4B9D035096F018ED752653D5_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = __this->___head;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = __this->___head;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_1, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		return L_2;
	}

IL_0014:
	{
		return (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1BF0889FF23641301FC26867C128A02077F90FE0_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mEFB13DCF73F3B41F07A033259EFF9C6EA9EC5A1D_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1;
		L_1 = InvokerFuncInvoker1< LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_AddFirst_m1C4F0D76D9431947A1B06ED7878FD745C31AE48B_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_node, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = __this->___head;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		goto IL_002c;
	}

IL_0018:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = __this->___head;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_5 = ___0_node;
		__this->___head = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head), (void*)L_5);
	}

IL_002c:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_6 = ___0_node;
		il2cpp_codegen_write_field_data<LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, true>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* LinkedList_1_AddLast_mFD59AD680986C098B0C771703AFD654C00C981E3_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		InvokerActionInvoker2< LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), L_1, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = __this->___head;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = V_0;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		goto IL_0026;
	}

IL_0019:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = __this->___head;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_5 = V_0;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, L_4, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
	}

IL_0026:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_AddLast_m23DE4540B337300AABC350B0C702E3A6467D427D_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_node, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = __this->___head;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		goto IL_0025;
	}

IL_0018:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = __this->___head;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
	}

IL_0025:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_5 = ___0_node;
		il2cpp_codegen_write_field_data<LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, true>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_Clear_mEEF1E2EB69B41641254C9872FE3D6646FCE6D0F7_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* V_0 = NULL;
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* V_1 = NULL;
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = __this->___head;
		V_0 = L_0;
		goto IL_0018;
	}

IL_0009:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = V_0;
		V_1 = L_1;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = V_0;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3;
		L_3 = ((  LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* (*) (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_0 = L_3;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = V_1;
		((  void (*) (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
	}

IL_0018:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_5 = V_0;
		if (L_5)
		{
			goto IL_0009;
		}
	}
	{
		__this->___head = (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head), (void*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL);
		__this->___count = 0;
		int32_t L_6 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Contains_m84F2AC87606CAFCD70ECB18C8ECFF41F105DADB8_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1;
		L_1 = InvokerFuncInvoker1< LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		return (bool)((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_CopyTo_m66BC03808A227B36DE19B0BBBFDF6495D6CE19A6_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		if ((((int32_t)L_7) <= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_10 = ___1_index;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B221ABF91F580F086900605524B962132D6AB0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0044:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_index;
		int32_t L_17;
		L_17 = ((  int32_t (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))) >= ((int32_t)L_17)))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_005c:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_19 = __this->___head;
		V_0 = L_19;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_20 = V_0;
		if (!L_20)
		{
			goto IL_0088;
		}
	}

IL_0066:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_array;
		int32_t L_22 = ___1_index;
		int32_t L_23 = L_22;
		___1_index = ((int32_t)il2cpp_codegen_add(L_23, 1));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_24 = V_0;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_field_data_pointer(L_24, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		il2cpp_codegen_memcpy((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)), L_25, SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)), (void*)L_25);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_26 = V_0;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_27 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_26, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		V_0 = L_27;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_28 = V_0;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_29 = __this->___head;
		if ((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_28) == ((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_29))))
		{
			goto IL_0066;
		}
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* LinkedList_1_Find_m1D5B2C7D5E3FD2D7EA1906C734D25B9351444670_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	const Il2CppFullySharedGenericAny L_16 = L_3;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* V_0 = NULL;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_1 = NULL;
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = __this->___head;
		V_0 = L_0;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		V_1 = L_1;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_3);
		if (!L_4)
		{
			goto IL_003b;
		}
	}

IL_0018:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5 = V_1;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_10 = V_0;
		return L_10;
	}

IL_0029:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_11 = V_0;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_12 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		V_0 = L_12;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_13 = V_0;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_14 = __this->___head;
		if ((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_13) == ((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_14))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_005a;
	}

IL_003b:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_15 = V_0;
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_field_data_pointer(L_15, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		bool L_17 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_16);
		if (L_17)
		{
			goto IL_004a;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_18 = V_0;
		return L_18;
	}

IL_004a:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_19 = V_0;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_20 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		V_0 = L_20;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_21 = V_0;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_22 = __this->___head;
		if ((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_21) == ((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_22))))
		{
			goto IL_003b;
		}
	}

IL_005a:
	{
		return (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_GetEnumerator_m11F73E5CE56DD491CBD1C569A284A39F5461D9E9_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457 L_0 = alloca(SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94);
	{
		memset(L_0, 0, SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94);
		Enumerator__ctor_m0F98614729A5017594BCB5D1D847C1D319913311((Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4FADA5873046DF7BE4251119858F8819FE554074_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457 L_0 = alloca(SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94);
	{
		InvokerActionInvoker1< Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), __this, (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Remove_m7D799D70C3D6A30F27FE6CFCDF155759B031C0D0_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1;
		L_1 = InvokerFuncInvoker1< LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = V_0;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (bool)1;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_Remove_m08754D08C38182E94ED3D2FB9D6535E0706F857A_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_node, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = ___0_node;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_RemoveFirst_m62DDC108482685270E6815FBE9A011C47DD1BB89_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = __this->___head;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5710CE45F48D63001BA691498F6BC34A07EDE686)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = __this->___head;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_RemoveLast_mFEF785EA7C7391E3E3AB8B38FD9D452A66FB08C4_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = __this->___head;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5710CE45F48D63001BA691498F6BC34A07EDE686)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = __this->___head;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_GetObjectData_mD65D4DC88D15560472D559347EA87818193F93B2_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->___version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		int32_t L_5 = __this->___count;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_4, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, L_5, NULL);
		int32_t L_6 = __this->___count;
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = __this->___count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), (uint32_t)L_7);
		V_0 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)))(__this, L_9, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 23)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_10, _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F, (RuntimeObject*)L_11, L_13, NULL);
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_OnDeserialization_m576B9318E25D58D480C8154520E0737A4AE6B269_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 23)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F, L_7, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_1;
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_10 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_005a:
	{
		V_2 = 0;
		goto IL_0070;
	}

IL_005e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_15;
		L_15 = InvokerFuncInvoker1< LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_14: *(void**)L_14));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0070:
	{
		int32_t L_17 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_007f;
	}

IL_0078:
	{
		__this->___head = (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head), (void*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL);
	}

IL_007f:
	{
		int32_t L_20 = V_0;
		__this->___version = L_20;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_InternalInsertNodeBefore_m077A914DF42D64F276CB47AFECCC65F26FA0184C_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_node, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___1_newNode, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___1_newNode;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = ___0_node;
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_1);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = ___1_newNode;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_3, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_4);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_5 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_6 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_5, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_7 = ___1_newNode;
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_7);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_8 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_9 = ___1_newNode;
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_9);
		int32_t L_10 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_InternalInsertNodeToEmptyList_mE5D04AF09AAE9B77F29A8F4A7427C800CE1B1D4C_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_newNode, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___0_newNode;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = ___0_newNode;
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_1);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = ___0_newNode;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = ___0_newNode;
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_3);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = ___0_newNode;
		__this->___head = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head), (void*)L_4);
		int32_t L_5 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_InternalRemoveNode_mF5997207A88BD443796B00CD96986195A8F770F2_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_node, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_1 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = ___0_node;
		if ((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_1) == ((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_2))))
		{
			goto IL_0012;
		}
	}
	{
		__this->___head = (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head), (void*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL);
		goto IL_0049;
	}

IL_0012:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_3 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_3, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_5 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_6 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_5, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_6);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_7 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_8 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_9 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_10 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_10);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_11 = __this->___head;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_12 = ___0_node;
		if ((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_11) == ((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_12))))
		{
			goto IL_0049;
		}
	}
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_13 = ___0_node;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_14 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		__this->___head = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head), (void*)L_14);
	}

IL_0049:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_15 = ___0_node;
		((  void (*) (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_16 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		int32_t L_17 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_ValidateNewNode_m82A7014067124D639EB3EA517A5670BFAE420BF9_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_node, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___0_node;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = ___0_node;
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_3 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5393D2D2BDCE148E08D22CB1FD20976D66BEC41)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_ValidateNode_mAEB4BE3CF7676B1C893F93D70B5F26C3A3F0E52B_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___0_node, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_0 = ___0_node;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_2 = ___0_node;
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_3 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		if ((((RuntimeObject*)(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)L_3) == ((RuntimeObject*)(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this)))
		{
			goto IL_0022;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral522D64BC87755C7FA79B087AFEB43911A81E0E95)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinkedList_1_System_Collections_ICollection_get_SyncRoot_mD33BB6071C7660C24AA187E22D2EF9CDB1088DF6_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_System_Collections_ICollection_CopyTo_m2A4BDC21D572AD949228EF8B62A6A35A0A7E63A7_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_9 = ___1_index;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_005a:
	{
		RuntimeArray* L_13 = ___0_array;
		int32_t L_14;
		L_14 = il2cpp_codegen_array_get_length(L_13);
		int32_t L_15 = ___1_index;
		int32_t L_16;
		L_16 = ((  int32_t (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_16)))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0075:
	{
		RuntimeArray* L_18 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_0;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		int32_t L_21 = ___1_index;
		((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)))(__this, L_20, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}

IL_0088:
	{
		RuntimeArray* L_22 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_22, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_1;
		if (L_23)
		{
			goto IL_00a2;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
	}

IL_00a2:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_25 = __this->___head;
		V_2 = L_25;
	}
	try
	{
		{
			LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_26 = V_2;
			if (!L_26)
			{
				goto IL_00cf_1;
			}
		}

IL_00ac_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_1;
			int32_t L_28 = ___1_index;
			int32_t L_29 = L_28;
			___1_index = ((int32_t)il2cpp_codegen_add(L_29, 1));
			LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_30 = V_2;
			il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665);
			RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_31);
			ArrayElementTypeCheck (L_27, L_32);
			(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29), (RuntimeObject*)L_32);
			LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_33 = V_2;
			LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_34 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_33, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
			V_2 = L_34;
			LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_35 = V_2;
			LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_36 = __this->___head;
			if ((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_35) == ((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_36))))
			{
				goto IL_00ac_1;
			}
		}

IL_00cf_1:
		{
			goto IL_00e2;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d1;
		}
		throw e;
	}

CATCH_00d1:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_37 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, method);
	}

IL_00e2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m1E1466F1C45DE3B2E97F0ED30ECC9D55E0BF90D6_fshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457 L_0 = alloca(SizeOf_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94);
	{
		InvokerActionInvoker1< Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), __this, (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16), L_0);
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedSlot__ctor_mE525D1C509FDB028A044319E7F61C760FCF3FB18_gshared (LinkedSlot_tE7D1C25DA1E67199476082E304AAF6F99F660079* __this, LinkedSlotVolatileU5BU5D_t0D8BD87FEA48E8F0A65CE70AB997CD45F2FDB470* ___0_slotArray, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LinkedSlotVolatileU5BU5D_t0D8BD87FEA48E8F0A65CE70AB997CD45F2FDB470* L_0 = ___0_slotArray;
		il2cpp_codegen_memory_barrier();
		__this->___SlotArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SlotArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedSlot__ctor_m3AE00E7F87A472DA6069F979FC46E0B9C6E68686_fshared (LinkedSlot_t0F19A078992168BE7C3A34BE7C0ED9D0B3859584* __this, LinkedSlotVolatileU5BU5D_tF7345D3E67F071798E0CC6781BAFBD08BEA61388* ___0_slotArray, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LinkedSlotVolatileU5BU5D_tF7345D3E67F071798E0CC6781BAFBD08BEA61388* L_0 = ___0_slotArray;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_field_data<LinkedSlotVolatileU5BU5D_tF7345D3E67F071798E0CC6781BAFBD08BEA61388*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1__ctor_m1402E9117BFBDF7B9A99F8BD28D7E61139D0C899_gshared (ListBuilder_1_tFC1B347812D396479DFA9E563EBAC2E19775D941* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		__this->____items = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)NULL);
		Il2CppSharedGenericObject** L_0 = (Il2CppSharedGenericObject**)(&__this->____item);
		il2cpp_codegen_initobj(L_0, sizeof(Il2CppSharedGenericObject*));
		__this->____count = 0;
		int32_t L_1 = ___0_capacity;
		__this->____capacity = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ListBuilder_1_get_Item_m524AC865A36D9A186C0E849FF88D00CE6851972F_gshared (ListBuilder_1_tFC1B347812D396479DFA9E563EBAC2E19775D941* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = __this->____item;
		return L_1;
	}

IL_000f:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		Il2CppSharedGenericObject* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ListBuilder_1_ToArray_mA19371A35331DF6A7B7B6CF72F48D6DF5E0189FE_gshared (ListBuilder_1_tFC1B347812D396479DFA9E563EBAC2E19775D941* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1;
		L_1 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)1);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = L_3;
		Il2CppSharedGenericObject* L_5 = __this->____item;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppSharedGenericObject*)L_5);
		return L_4;
	}

IL_002b:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_6 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979**)(&__this->____items);
		int32_t L_7 = __this->____count;
		Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038(L_6, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_8 = __this->____count;
		__this->____capacity = L_8;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1_CopyTo_m58EFC1AADEE016C19EB6391CAB1B251852242B4A_gshared (ListBuilder_1_tFC1B347812D396479DFA9E563EBAC2E19775D941* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = __this->____count;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		int32_t L_3 = ___1_index;
		Il2CppSharedGenericObject* L_4 = __this->____item;
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_4);
		return;
	}

IL_0021:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = __this->____count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListBuilder_1_get_Count_mFF71F3658BF5DE9B28C4489E8F2E9CB7E1CCC6B8_gshared (ListBuilder_1_tFC1B347812D396479DFA9E563EBAC2E19775D941* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1_Add_m42C4878A6B80F4B98C2858D15F8617C712FAE25D_gshared (ListBuilder_1_tFC1B347812D396479DFA9E563EBAC2E19775D941* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = ___0_item;
		__this->____item = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____item), (void*)L_1);
		goto IL_008b;
	}

IL_0011:
	{
		int32_t L_2 = __this->____count;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = __this->____capacity;
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		__this->____capacity = 4;
	}

IL_002a:
	{
		int32_t L_4 = __this->____capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____items;
		Il2CppSharedGenericObject* L_7 = __this->____item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppSharedGenericObject*)L_7);
		goto IL_0079;
	}

IL_004f:
	{
		int32_t L_8 = __this->____capacity;
		int32_t L_9 = __this->____count;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_10 = __this->____capacity;
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_11 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979**)(&__this->____items);
		int32_t L_12 = V_0;
		Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038(L_11, L_12, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_13 = V_0;
		__this->____capacity = L_13;
	}

IL_0079:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->____items;
		int32_t L_15 = __this->____count;
		Il2CppSharedGenericObject* L_16 = ___0_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (Il2CppSharedGenericObject*)L_16);
	}

IL_008b:
	{
		int32_t L_17 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_17, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m01409ABC80ABA059308B560E2345990131AAA187_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_0 = ((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB32B3597041FF03B39855E66E4ACC058E6F75C9F_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_2 = ((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_4 = (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)(ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m887FEC04E01BB838B78B1D555058CB49B2FFE4D6_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_6 = ((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_8 = (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)(ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_10 = __this->____items;
		InterfaceActionInvoker2< ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_12 = ((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mD3BED94514D2C30FA0D5EC90DF045F2A2BB0BA23(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD58873AD4DD712C3D7FA033B732E930080E7B288_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_7 = (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)(ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_9 = __this->____items;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_13 = ((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A List_1_get_Item_m04BB8B79769E1CB553314C1B50BAEFD6F554C7EE_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mA063589276BAD8CEA82C8CA0EC1290ADF08F4144_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m545A22D62E98856B5C1C26EE86D610A83E1136E1_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m5434CF7FCF821C20D95111C093751084D7998EF1_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_1;
		L_1 = List_1_get_Item_m04BB8B79769E1CB553314C1B50BAEFD6F554C7EE(__this, L_0, NULL);
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mD3EF624E5D1CAE03F43E75DF1B08F2FD5A3D11D6_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mA063589276BAD8CEA82C8CA0EC1290ADF08F4144(__this, L_1, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1633A3181CE9963F0AE5F3439FBF8810B49D300D_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_7 = V_0;
		int32_t L_8 = V_1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_9);
		return;
	}

IL_0034:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_10 = ___0_item;
		List_1_AddWithResize_mB278A441D5221E2986B849BAABCC653931924D4A(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mB278A441D5221E2986B849BAABCC653931924D4A_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_3 = __this->____items;
		int32_t L_4 = V_0;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m167AAE78A1C3F6B69BF02C72CC837CEDF2ECDAFA_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m1633A3181CE9963F0AE5F3439FBF8810B49D300D_inline(__this, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mFBB21FF6BAD06F81E11D575EA7FF38E1C430B741_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m3A63A15DAD81723D97523948707C28302B7BAE04_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mE9E2EBCC87CE4FB2DB074CCE4D52D59BBB8D4FC2(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD96C0FF906558EEB2F1E48D09A8D2D50935252B0_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mB1756959B38F8E3BABFADAD218F7AB52DC6106CD_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m8298EBDF952AB512973D9423A24DADE09BEC78CA(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m217F7A3542B6A16FB3713F933ACF56E7667487B1_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m545A22D62E98856B5C1C26EE86D610A83E1136E1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mB1756959B38F8E3BABFADAD218F7AB52DC6106CD(__this, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0AAA85DB407732AF5F143F80CA298C35E5A597FC_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* ___0_array, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_0 = ___0_array;
		List_1_CopyTo_mF78DDF99D60E4FF5B53E9591539F48862C1A7EA9(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mD58873AD4DD712C3D7FA033B732E930080E7B288(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mE30074FC2457041ABC754B49BF8AB7314F12924B_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m0B03FD1F7BCF0C738A4A9F5F150D344B22AF6921(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A List_1_Find_mCB773944968EBD27A859457ED297FD07DE09371D_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_1 = ___0_match;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m0B03FD1F7BCF0C738A4A9F5F150D344B22AF6921_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m02CC501585E805A624624D9710409C47B73A58A7(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m02CC501585E805A624624D9710409C47B73A58A7_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_10 = ___2_match;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m602231205EEC7CF39552504E308520739DCA983D_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF* L_4 = ___0_action;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m1EA58AC94438644ACACF974F2825DB6A06EB560E_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D List_1_GetEnumerator_mF4A5C5D870E22EA6483050B73B8FA911C260357F_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m116D42ECBAC317B6171EF19B7CAC779DE2D6D9F9((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mFE82965D3FA5DD1131987BE61C5885C40EE623AC_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m116D42ECBAC317B6171EF19B7CAC779DE2D6D9F9((&L_0), __this, NULL);
		Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m488B8D05FC4BDF8AB6207FE9C14BE52725020500_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m116D42ECBAC317B6171EF19B7CAC779DE2D6D9F9((&L_0), __this, NULL);
		Enumerator_t466EFF42AEF709262F3F4FE63CCE5B170BB6212D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* List_1_GetRange_m2E4DB2050FF82133B6882D64FE39BD1C2A4295B6_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* L_6 = (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mB32B3597041FF03B39855E66E4ACC058E6F75C9F(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* L_9 = V_0;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m8298EBDF952AB512973D9423A24DADE09BEC78CA_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_0 = __this->____items;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m12C02AC49F150EEC37515F4CD1EFA77C33C8EFE3(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mF1140C5B5098D823111D812DF2CDB25DDE798E5A_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m545A22D62E98856B5C1C26EE86D610A83E1136E1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m8298EBDF952AB512973D9423A24DADE09BEC78CA(__this, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mBA3C9C18F85B6C3AA2E522B1B8D5CC5E926FA443_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mB95B758654FFCF5C33EBE4F5FEDB618BA43AFA7C_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mBA3C9C18F85B6C3AA2E522B1B8D5CC5E926FA443(__this, L_1, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mE9E2EBCC87CE4FB2DB074CCE4D52D59BBB8D4FC2_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_20 = __this->____items;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_45;
				L_45 = InterfaceFuncInvoker0< ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_mBA3C9C18F85B6C3AA2E522B1B8D5CC5E926FA443(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mD3BED94514D2C30FA0D5EC90DF045F2A2BB0BA23(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m08D85A6B359080863E9DE73E1022BDC907798CA6_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m8298EBDF952AB512973D9423A24DADE09BEC78CA(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m6C1B1F08098B87BD4DF0925B5AFA18B26C962FEC(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m8C7B7CEA679C1E28FA0C0C816EAFA198260741A9_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m545A22D62E98856B5C1C26EE86D610A83E1136E1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m08D85A6B359080863E9DE73E1022BDC907798CA6(__this, ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m64C3655E8339EEDF22DEDD3EBFB643D50B6B8E56_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_4 = ___0_match;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* L_16 = ___0_match;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m6C1B1F08098B87BD4DF0925B5AFA18B26C962FEC_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m83BB0DCD4EDAB51FE1165D4CE1E028D31AB1003F_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mBA17478AE7ACABE1B33AD6538EEA0899A2136451_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mFBB21FF6BAD06F81E11D575EA7FF38E1C430B741_inline(__this, NULL);
		List_1_Reverse_m07DAEB0727AA94C5A75CC017E59953849EFB9ED6(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m07DAEB0727AA94C5A75CC017E59953849EFB9ED6_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_mADCCF076FE1848D020426BEA036EADED38B517E3(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0AA80E4C4B31E7B19CD2FDB4EB54407729ACE220_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mFBB21FF6BAD06F81E11D575EA7FF38E1C430B741_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mBC2EC697191AE2C79A985ADBA5B1C062D7387669(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mBC2EC697191AE2C79A985ADBA5B1C062D7387669_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m9B87818DE1AF0FF50C3A4A79A6246E6A7A6CFE87(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF54C218C93E8539225F7527D3AC13CEE3863058E_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, Comparison_1_t158C975A290FF78A31C910863BC60750610FA196* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_t158C975A290FF78A31C910863BC60750610FA196* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t158C975A290FF78A31C910863BC60750610FA196* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m0A91B43DA585E54BA8F63A9000118CFB779B5EDB(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* List_1_ToArray_m90212C7C51B7909CF45445408C70B04E9A8D00B1_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_1 = ((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_3 = (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)(ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_4 = __this->____items;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mD3BED94514D2C30FA0D5EC90DF045F2A2BB0BA23_gshared (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_6;
				L_6 = InterfaceFuncInvoker0< ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mE46DCAA76247AA2D808591ED1E07B2A296ED0B5D(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m6F1614EDD9109FF9F8C57BD1DAB2C5491F20CB9B_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_0 = (ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)(ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA08D4F3B9E61C4BC6A68577105106ECAD6A13FEF_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_0 = ((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC7C0466283FF30FF224C672EC9D2B1FBC2E585C2_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_2 = ((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_4 = (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)(ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m370BA688CB35115597A74BD78BC067C515E559F8_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_6 = ((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_8 = (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)(ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_10 = __this->____items;
		InterfaceActionInvoker2< ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_12 = ((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m37E48798A740056F044D74B936CF7E9BE7B7B91C(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7117214B8F73B007DA04CDA7D459C952AFC6E2CF_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_7 = (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)(ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_9 = __this->____items;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_13 = ((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE List_1_get_Item_m0E033C4773F22019CACA922E882F9FEBDE452D76_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6CD94F15D9CE7EB728501B169B21EADB4FA5A351_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m2E3BAC7324446128C9D7C9856B672EE9A214492F_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE));
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1EE19E6E97423CF9A9110FB395E23325889326A5_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_1;
		L_1 = List_1_get_Item_m0E033C4773F22019CACA922E882F9FEBDE452D76(__this, L_0, NULL);
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mE5E9A03AC38820E43BEC0CF2E36AE5CE257678DE_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m6CD94F15D9CE7EB728501B169B21EADB4FA5A351(__this, L_1, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAD289F3F0A4EA20EF1C4703B8E700B3F9384F49C_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_7 = V_0;
		int32_t L_8 = V_1;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE)L_9);
		return;
	}

IL_0034:
	{
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_10 = ___0_item;
		List_1_AddWithResize_m1E21177E185B16321B19611EFC2608257B95A509(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m1E21177E185B16321B19611EFC2608257B95A509_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_3 = __this->____items;
		int32_t L_4 = V_0;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mA5407A240ED3F318521F83754EDD8EAAEC8309B5_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mAD289F3F0A4EA20EF1C4703B8E700B3F9384F49C_inline(__this, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m5C664A24DB4D94525EEEDBB13A790316EF3FCDEE_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m25295903B11C626AB6C2392C5D55EE393B86346A_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mC54D8DBC0102EAE183FFF770AABCE3FEF57A3AF7(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m497FBF6909CDCC5284EB78841B4CBD43EBF7BCE9_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE842EF4FEAC51AC1F9A7F3A1407D59406D31FE29_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m920664BAEC27172BDDDA2EAF63C178050124C0B7(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m53CA8519136CCEADAFE7CF41C131B7354579BAF4_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m2E3BAC7324446128C9D7C9856B672EE9A214492F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mE842EF4FEAC51AC1F9A7F3A1407D59406D31FE29(__this, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m07E6483C0A5291A12E41D184521F25B6644DC2FE_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* ___0_array, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_0 = ___0_array;
		List_1_CopyTo_m2B0597F0BE39B1EA6F02132927668C45F3D9CB4D(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m7117214B8F73B007DA04CDA7D459C952AFC6E2CF(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mB25A3A70AF8AD4B1241E8097572D33B189565BFF_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mC2A8BCDB82D37C2BA3768673597F3DA2729B8004(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE List_1_Find_m5B005743EFD9687944C8179842EF39F66594B3B4_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_1 = ___0_match;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE));
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mC2A8BCDB82D37C2BA3768673597F3DA2729B8004_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mE993DAE75189D17907D4DD13470B27A92438EEC7(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mE993DAE75189D17907D4DD13470B27A92438EEC7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_10 = ___2_match;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mCDD1346EC875D1621E7F6C115E3C9181F7EB1E91_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9* L_4 = ___0_action;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m9BE1A20B0B09219CB8094DF49543084A40C61AD6_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570 List_1_GetEnumerator_m05711147926921BB41D99A21A7E552AB579871F3_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53F61C030AD9874FB1E85A4C260CC50674303DC7((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mFC92B484EE33036D0D76B398A20903FA5443B66D_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53F61C030AD9874FB1E85A4C260CC50674303DC7((&L_0), __this, NULL);
		Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m99EB0138EA7C1E54A1E7628AC29E4AA3060EA1D7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53F61C030AD9874FB1E85A4C260CC50674303DC7((&L_0), __this, NULL);
		Enumerator_tC8B87E820DA0B9E97586272173953E0484ABA570 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* List_1_GetRange_m9BEEC716A6E40D24032A2E4C67A692FD482F9F7A_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* L_6 = (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mC7C0466283FF30FF224C672EC9D2B1FBC2E585C2(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* L_9 = V_0;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m920664BAEC27172BDDDA2EAF63C178050124C0B7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_0 = __this->____items;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m4450C4CE6BBBC25D72B454DAA7B6BD849617EED9(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mECCEF021D9156B1056DEF68A6DE5717895B23A96_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m2E3BAC7324446128C9D7C9856B672EE9A214492F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m920664BAEC27172BDDDA2EAF63C178050124C0B7(__this, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m150BA8E0436E9787E058C7ECA305DBD576B439B4_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m3A976E7A466AE8B4D1730748742D077BA6536C08_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m150BA8E0436E9787E058C7ECA305DBD576B439B4(__this, L_1, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mC54D8DBC0102EAE183FFF770AABCE3FEF57A3AF7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_20 = __this->____items;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_45;
				L_45 = InterfaceFuncInvoker0< ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_m150BA8E0436E9787E058C7ECA305DBD576B439B4(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m37E48798A740056F044D74B936CF7E9BE7B7B91C(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA3E4496F2257211F65D53A91E5E963AD3538B08B_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m920664BAEC27172BDDDA2EAF63C178050124C0B7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m7AA3E332F2DBD12A991A4AC9D6976BCA684D47D4(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mFA7DEDBFF1E160EC807A0FC5D15EBF92D96447FB_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m2E3BAC7324446128C9D7C9856B672EE9A214492F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mA3E4496F2257211F65D53A91E5E963AD3538B08B(__this, ((*(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m425804914C0255C3D2AE6CD3A046090C77FEF741_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_4 = ___0_match;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* L_16 = ___0_match;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7AA3E332F2DBD12A991A4AC9D6976BCA684D47D4_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m20006335363F7EF7C0A8156A339610A8382147EC_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mD4E769CFC04F945DBD640E81ADB9941B7C7FBFA4_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m5C664A24DB4D94525EEEDBB13A790316EF3FCDEE_inline(__this, NULL);
		List_1_Reverse_m96832900A421C2E50D245EBD41692FB1B29E20E7(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m96832900A421C2E50D245EBD41692FB1B29E20E7_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mDAF846CB3773C61E90D5A18297F98E73D4A93AF1(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m077841ABB0402B84E33946E30B662A1B2C957D1E_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m5C664A24DB4D94525EEEDBB13A790316EF3FCDEE_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mD834B250CEF191D5208C0AD1052F1514D49CA0DE(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD834B250CEF191D5208C0AD1052F1514D49CA0DE_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_mF235EB2FF2C0008013E572914A1C36B00EA5155B(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m484C359FB5C57596CE97BE1E5CB67FDDB6CD9921_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tD408F806E3836B4176E5F3E1C9C9F96DF954F3A1* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mE0F7FA41E49185D4E819B81DE424011C88417CFF(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* List_1_ToArray_m9D55BAFA15275F675ABE8EB76001A6CA235E06BD_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_1 = ((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_3 = (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)(ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_4 = __this->____items;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m37E48798A740056F044D74B936CF7E9BE7B7B91C_gshared (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_6;
				L_6 = InterfaceFuncInvoker0< ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m16E7107B1FDC0296A04ADA7F500C28E6AE593E8F(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m61BD6C23F78973FDC86180E749DD788733EF7892_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_0 = (ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)(ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m91DC7897CFBCC9E83397E65300A31D6D6FDEA6FC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = __this->____items;
		InterfaceActionInvoker2< BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = ((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mF2258A77346C688889600327C8F56BC4A0176A23(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBEDCE03FA5017F4D16EB2D1F04FB8223B3D7330D (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = __this->____items;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = ((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		bool L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEA98FA49B98EC8B769FB82DED7622F672AD1ADB (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		bool L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (bool)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m59505FB7705CC626766A9844F72A4BA7EBDC35BF (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mE43EF8E03067FA25E210298789144059F74846F5 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		bool L_1;
		L_1 = List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179(__this, L_0, NULL);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m673C9BB9881C3F6DF93003D5B3E37033A8C9B2C1 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mFEA98FA49B98EC8B769FB82DED7622F672AD1ADB(__this, L_1, ((*(bool*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = V_0;
		int32_t L_8 = V_1;
		bool L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (bool)L_9);
		return;
	}

IL_0034:
	{
		bool L_10 = ___0_item;
		List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mB592E554E856EBC1FE85A8FE98867C13A2D7752C(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->____items;
		int32_t L_4 = V_0;
		bool L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (bool)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m3FF1A69D448385BA84E76EA259DEF2439E8AD2A6 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(__this, ((*(bool*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mCD6D87C2FFD8EBD29C3BC38E75CD43A9A0C098A6(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mAD42099EBC7E640561281C5FEDF47997858D9073 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mF46FEB4C0AA492E0A1973DBE87EBF43AC9644924(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m80DDD7CC8E1C1E2731A82606BB762DF6464E63C1 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m59505FB7705CC626766A9844F72A4BA7EBDC35BF(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190(__this, ((*(bool*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5292F7C028AA1E08850201AC3846A93E92BF44C8 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		List_1_CopyTo_mEF9364A6E7497FA289911B3F194144D3C8FC82E1(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB592E554E856EBC1FE85A8FE98867C13A2D7752C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mBEDCE03FA5017F4D16EB2D1F04FB8223B3D7330D(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m910DEF080E4C68BC16F4072A5B5F40F371DE69B7 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mFD6B453B01191485731849D17AC464404A5693D7(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Find_mC2EBEE19B164E3BBEBAC6074545F72E18749993F (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_1 = ___0_match;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		bool L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m5EB17D73F75C175B835656A7C7C137A266E07928_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		bool L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mFD6B453B01191485731849D17AC464404A5693D7 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mA77FF56D5949456D4B615C511719FA94CFF3FD10(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA77FF56D5949456D4B615C511719FA94CFF3FD10 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_10 = ___2_match;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		bool L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m5EB17D73F75C175B835656A7C7C137A266E07928_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m6266FDC0886AB7B68B6503B2EF54D3D12BFE5100 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___0_action;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		bool L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8D1E0841C2529B3F77B2CE9A9606C630EDA360CD((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m981B5553FBD694912C7C86481B825C9924B63E5B (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8D1E0841C2529B3F77B2CE9A9606C630EDA360CD((&L_0), __this, NULL);
		Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m9A275A6CB7B0AFFA3618FE905E7F43167FDAEB8E (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8D1E0841C2529B3F77B2CE9A9606C630EDA360CD((&L_0), __this, NULL);
		Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* List_1_GetRange_m78C7AAF2D58E55FD846698E05DD4CA165301AFCC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_6 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m91DC7897CFBCC9E83397E65300A31D6D6FDEA6FC(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_9 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF46FEB4C0AA492E0A1973DBE87EBF43AC9644924 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->____items;
		bool L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mECA9C1B8FA6E57CFDA23CCC2EAA193116D3DCCB8 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m59505FB7705CC626766A9844F72A4BA7EBDC35BF(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mF46FEB4C0AA492E0A1973DBE87EBF43AC9644924(__this, ((*(bool*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3F2AA5CE4D3450E7C0A7D5CF0B4FDE49706D623C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, bool ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mB592E554E856EBC1FE85A8FE98867C13A2D7752C(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		bool L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (bool)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mA2C912D4886FED37A3B5EC524E5BDC829F416095 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m3F2AA5CE4D3450E7C0A7D5CF0B4FDE49706D623C(__this, L_1, ((*(bool*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mCD6D87C2FFD8EBD29C3BC38E75CD43A9A0C098A6 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mB592E554E856EBC1FE85A8FE98867C13A2D7752C(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = __this->____items;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_m3F2AA5CE4D3450E7C0A7D5CF0B4FDE49706D623C(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mF2258A77346C688889600327C8F56BC4A0176A23(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCB6113856F578854DE70E8FEDBEC4DAF03CB5C3B (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mF46FEB4C0AA492E0A1973DBE87EBF43AC9644924(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m04CCCC212435FC4681133048AC8AB193DDD487DA (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m59505FB7705CC626766A9844F72A4BA7EBDC35BF(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mCB6113856F578854DE70E8FEDBEC4DAF03CB5C3B(__this, ((*(bool*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m09BAD67A8065BA7F3DA975E3D9A44116687F7557 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_4 = ___0_match;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		bool L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m5EB17D73F75C175B835656A7C7C137A266E07928_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* L_16 = ___0_match;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		bool L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m5EB17D73F75C175B835656A7C7C137A266E07928_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		bool L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (bool)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mD9464CAFE33012892B6478D74116B97BB9F70E62 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m654B4D7B72C7FED8CEA0401C9DE185575EE5CF64 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(__this, NULL);
		List_1_Reverse_m280391BAD46C08340E083F957BF24546CD06CCFC(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m280391BAD46C08340E083F957BF24546CD06CCFC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m12308A79AECE5E7D2D300ACDABDA0DC883476BC9(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m2028BFD6F2E0EA5E7BA4B6C4B586688901726902 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m08B61D4C4CBAE0FA2D08FA6F668091320B995981(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m08B61D4C4CBAE0FA2D08FA6F668091320B995981 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCADEE7E401B19F98A7128D14C34529B99C2A5FB1(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mB2197C8A207E252465E6DDDAEC15DDA6A967FAC9 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, Comparison_1_tF15DB3AEC82E2B8B1BF7E34C4EAB7D1031840D68* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tF15DB3AEC82E2B8B1BF7E34C4EAB7D1031840D68* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tF15DB3AEC82E2B8B1BF7E34C4EAB7D1031840D68* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m633F2DCA55A83415BCAA5601A9844617C15E9C54(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = ((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->____items;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF2258A77346C688889600327C8F56BC4A0176A23 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				bool L_6;
				L_6 = InterfaceFuncInvoker0< bool >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mB592E554E856EBC1FE85A8FE98867C13A2D7752C(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				bool L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (bool)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mF0B2676CBE62B4F701FF792D6C9501FF8EDAD155 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6379987CB76F278D565037B93C54CC50B8E8092F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7B8D24C7D34D7A575A8E6E9EE9D3FB4DABB91AE (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->____items;
		InterfaceActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->____items;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		Il2CppChar L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Il2CppChar L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		Il2CppChar L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m45797C43957559DCA062047EBC03EF762239F99B (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Il2CppChar L_1;
		L_1 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(__this, L_0, NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mCD8A0BAD90D6D41599EC0F347DEC251044AA9A98 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101(__this, L_1, ((*(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppChar L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (Il2CppChar)L_9);
		return;
	}

IL_0034:
	{
		Il2CppChar L_10 = ___0_item;
		List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Il2CppChar L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (Il2CppChar)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mA6D68A58B421E3F0FE2AF9A8119F42340F72FC1A (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(__this, ((*(Il2CppChar*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m763E16C40A2E70DCE3408F570975152E3260C398 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mF74AEA77C6A25271E7AF1754DCB6401D2FF6C6C2 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92(__this, ((*(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m18A412B180CEC8C3351E412DCE140FC1E31039F9 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		List_1_CopyTo_m66386CFE5F99A7A429344E8902FE421835DD80B1(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m4A5A7E143236F5C4CFE52D3D58761CEA629D5CCD (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mCAA98D9BB6E74057D7C206AC180CFA971F0A7169(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_Find_m410BB0A321E0315DF5500359273249E29D79F6C0 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_1 = ___0_match;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		Il2CppChar L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Il2CppChar L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCAA98D9BB6E74057D7C206AC180CFA971F0A7169 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mD2B4305696EA16BECDC4EA958138C3183C79AE68(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mD2B4305696EA16BECDC4EA958138C3183C79AE68 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_10 = ___2_match;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		Il2CppChar L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m60593A8FB7CE8CB55A26AA4F6AF607DBBCA203E6 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* L_4 = ___0_action;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		Il2CppChar L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D List_1_GetEnumerator_m4FD62856A4FB2E97031D88470D704316F1DCD928 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m831A4C0D4FF560CF7D7D53820B6FC18FB083AF45 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596((&L_0), __this, NULL);
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mFE941435676B71AE61D210D9007A8E1298959351 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596((&L_0), __this, NULL);
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* List_1_GetRange_mD69041C2CA9ED0539810A06FD79CE37E70BAB632 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_6 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m6379987CB76F278D565037B93C54CC50B8E8092F(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_9 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____items;
		Il2CppChar L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m018F59BB01FA2473C4F75B463F7630F8EFB53F34(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m47D462D1C76F4DAA4CB181DB5E466286D0D97296 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE(__this, ((*(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		Il2CppChar L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (Il2CppChar)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mE4B27EBD8D6D9C26C0D4F8A2298A47BB2A2B2925 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403(__this, L_1, ((*(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->____items;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				Il2CppChar L_45;
				L_45 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mAC21DB88E024B0A73009F0B9EBE6AB0DC8FB317B (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8(__this, ((*(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m8D77FB83CD28277B9A20C72578EA1E22F43D3135 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_4 = ___0_match;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Il2CppChar L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_16 = ___0_match;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		Il2CppChar L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		Il2CppChar L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m01FAF3427A418EA0063A134E89DFBDF8D347915D (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m9FC29AE0BE8C0B9C21C786EDC50D001A1FAFA3C8 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(__this, NULL);
		List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B8A5AAC3295C28E6DD6C5E9C61D8B6BEF506AF2(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEF4F2CE2AD4207529B3735A956A2FF3C182C88F3 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE0333A739303139C223C5EE631115880C5160F21(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m16639693BC35097493D42B649CB40BE5E19E06D5 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mEB144F35631CDE3C91A0F1549342F937C6F71995(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->____items;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				Il2CppChar L_6;
				L_6 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				Il2CppChar L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Il2CppChar)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m4DCBC2C2702B5A9E4C9408C11A852A72A9BAC6F1 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m807FCB9D21F45B86206E8E719DBB31F6B9287510 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFC30951412A765E79E1973F8DCB19A34E0E743EF (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_2 = ((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5B1A8DECC0DF937FCAE54478E993B08A8CFD4593 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_6 = ((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_8 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_10 = __this->____items;
		InterfaceActionInvoker2< EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_12 = ((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m36A723430819AA1016B6F73A7C26A8BA8A606FDC(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF866D00C41CB70E3EBB6660E9623E0A50F256ED9 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_9 = __this->____items;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_13 = ((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 List_1_get_Item_m845F1A2F2642ED1FDF20EDB92D38E70F1EA0C97E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m59096DB065B8CB991347E51E599F974F751FB75E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m4D6941EFDEBE9D4788D796F07958B00CDEDB2E3D (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1C250FB9C36226329B1C899E9F7AAE3379B197E1 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1;
		L_1 = List_1_get_Item_m845F1A2F2642ED1FDF20EDB92D38E70F1EA0C97E(__this, L_0, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m09E6C06DAB4390D723AAEAF2F41C11C4E385C2EC (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mC85BADB7F750EEAF18520AFA219ECD6F5A7E1071(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m59096DB065B8CB991347E51E599F974F751FB75E(__this, L_1, ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE77E3C88EBBD399E4A5F6F0B05E4E32C5E11FB24 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) 
{
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = V_0;
		int32_t L_8 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8)L_9);
		return;
	}

IL_0034:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_10 = ___0_item;
		List_1_AddWithResize_m57D51DEE77CD2651860F4CF5ED9B04CE9D6103B9(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m57D51DEE77CD2651860F4CF5ED9B04CE9D6103B9 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m4C2124C488438C6D475D7CF6DDC5BA1B0960EDA1(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = __this->____items;
		int32_t L_4 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m770F950253FF5CE225AD06C7DBDC50EECF4EBFC5 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mC85BADB7F750EEAF18520AFA219ECD6F5A7E1071(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mE77E3C88EBBD399E4A5F6F0B05E4E32C5E11FB24_inline(__this, ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m7B6D1E3E06906E37393D14D17CF61CDEB088A341_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m03DDA9C2669F55D5E25250FD3A6EA52A24826C8D (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mDA8EBB60AED520FABAE376425650C507B583A61E(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1E8192BD6F207D73E8B976ABD52CBDB8776499E3 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1E7DEF8954CEA97EB5CB4EAE9DA75FB558111A28 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m94F77D1194E2B14C38B6DFA8FCC35B183CC84CBE(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mEB1DEB80BD8F3589939D988E8164CAE1DDB9B995 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m4D6941EFDEBE9D4788D796F07958B00CDEDB2E3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m1E7DEF8954CEA97EB5CB4EAE9DA75FB558111A28(__this, ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m17070A5BFA81F4AA41CCCD212FE9450455CF37C1 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, const RuntimeMethod* method) 
{
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ___0_array;
		List_1_CopyTo_m72FEA2F7558557E5E8D6AEDC346B7BCF372F2685(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m4C2124C488438C6D475D7CF6DDC5BA1B0960EDA1 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mF866D00C41CB70E3EBB6660E9623E0A50F256ED9(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mBAB32D36F9C08D206B288B3E9F25CCCD0D801F17 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m2C41A9DBB8AB5AE3F160F9DDDE5E7DFE98BA771A(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 List_1_Find_m8385DC06991A486829F33E9C61C4025C4D9232E2 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_1 = ___0_match;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m2F110E2073E6471BD12C32F8EA63B0673BEFB275_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2C41A9DBB8AB5AE3F160F9DDDE5E7DFE98BA771A (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m46CBA4B23605D531748C55283635E29F5F1C9DC3(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m46CBA4B23605D531748C55283635E29F5F1C9DC3 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_10 = ___2_match;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m2F110E2073E6471BD12C32F8EA63B0673BEFB275_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1D1B1A90E2E4B9F22EE4CA3BF60A05B8CF8D8A5D (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2* L_4 = ___0_action;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m831285BAC5866B4BA64BBE4F0B71DC4C16FADB77_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6 List_1_GetEnumerator_m83621E20DEC92EE76CE5C7925913DBEAE7425810 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8440A21A41A6F8239720F77F241B617EACA2D12E((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10A35D368809EAAC8B60B6BFFB02E472F9DA0901 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8440A21A41A6F8239720F77F241B617EACA2D12E((&L_0), __this, NULL);
		Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mB58BDB11E46CF070B152E05DC7A94B3831BE96AD (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8440A21A41A6F8239720F77F241B617EACA2D12E((&L_0), __this, NULL);
		Enumerator_t21EAE5C6270B5B22FEAF69D2478DA1EF8D3BFAE6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* List_1_GetRange_mD1A9A9AE0E1118AB5F342C4D13A92EA3CA4F5310 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* L_6 = (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mFC30951412A765E79E1973F8DCB19A34E0E743EF(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* L_9 = V_0;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m94F77D1194E2B14C38B6DFA8FCC35B183CC84CBE (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) 
{
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = __this->____items;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m7EB28111E8C8AD6BDC68A570667CCF81AE4C29FD(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mE6268D863409B622C0DCE22CEB19E405BF0F9DC2 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m4D6941EFDEBE9D4788D796F07958B00CDEDB2E3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m94F77D1194E2B14C38B6DFA8FCC35B183CC84CBE(__this, ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m033EE7CB7BB3EE4ADFD7CC4B8A0163AECA0540A6 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m4C2124C488438C6D475D7CF6DDC5BA1B0960EDA1(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m2A51A4A4305497E115E25AA0B005E8BDACB7AC59 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mC85BADB7F750EEAF18520AFA219ECD6F5A7E1071(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m033EE7CB7BB3EE4ADFD7CC4B8A0163AECA0540A6(__this, L_1, ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mDA8EBB60AED520FABAE376425650C507B583A61E (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m4C2124C488438C6D475D7CF6DDC5BA1B0960EDA1(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_20 = __this->____items;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_45;
				L_45 = InterfaceFuncInvoker0< EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_m033EE7CB7BB3EE4ADFD7CC4B8A0163AECA0540A6(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m36A723430819AA1016B6F73A7C26A8BA8A606FDC(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m1E745EB2D980C9699BE8A35501B0617469D615C6 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m94F77D1194E2B14C38B6DFA8FCC35B183CC84CBE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mCA571B59C857377ED169817E3350AC9CA94BE553(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m5122A5CC5B32B4894DD63E108A4E99BBB50C34B8 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m4D6941EFDEBE9D4788D796F07958B00CDEDB2E3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m1E745EB2D980C9699BE8A35501B0617469D615C6(__this, ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mCCC5DD27E5EB7E6036CFA39ECD76FC83F7C60B22 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_4 = ___0_match;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m2F110E2073E6471BD12C32F8EA63B0673BEFB275_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* L_16 = ___0_match;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m2F110E2073E6471BD12C32F8EA63B0673BEFB275_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mCA571B59C857377ED169817E3350AC9CA94BE553 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m17982EE5AF7FACAAA5FF82F7D2B731BE085FF0A1 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5C6D9D64B80C1A14832D09D12F1F0CB824A82A42 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m7B6D1E3E06906E37393D14D17CF61CDEB088A341_inline(__this, NULL);
		List_1_Reverse_mA569C76082978695E51263ED9A2485E234D29B15(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA569C76082978695E51263ED9A2485E234D29B15 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m381C5B99823510F3F9EC5F66D77AFABD804C80A6(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0E479DAA9C9C7B947059E98E099AAE4A7A76CD20 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m7B6D1E3E06906E37393D14D17CF61CDEB088A341_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m88094CD71622A1ACB66EE32C13D8B05BE75ABBFF(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m88094CD71622A1ACB66EE32C13D8B05BE75ABBFF (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA24DA57EBB51944C2221550010BF4C2CFC48E3B(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mB6D600DB9E6F6DE49282045F1F3E848D66A71655 (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, Comparison_1_t6D46DD6AA38BEDD362EA71586791DE2B3A60F4CD* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_t6D46DD6AA38BEDD362EA71586791DE2B3A60F4CD* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t6D46DD6AA38BEDD362EA71586791DE2B3A60F4CD* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mA7E48E1F488EA5D93C4B00ACEC79780C69114343(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* List_1_ToArray_mCA9054440F1ED8F9D64334B81FAF880B7F8B814F (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_1 = ((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = __this->____items;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m36A723430819AA1016B6F73A7C26A8BA8A606FDC (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6;
				L_6 = InterfaceFuncInvoker0< EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m4C2124C488438C6D475D7CF6DDC5BA1B0960EDA1(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m8E9439519438DEF88A2B9821CE9BA36511291139 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m410E4D36BEBA4A340DE21274E4EC6A3ED19C1ACA (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m26F61F5C0ADBA14C06C18B8D16455D1479E04173 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_2 = ((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)(GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2135B419ACC64C79619DEDFEB2125E851D564C75 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_6 = ((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_8 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)(GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_10 = __this->____items;
		InterfaceActionInvoker2< GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_12 = ((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m4226D9662FCDA74929E06565AE54FCA449E0C77D(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mB3C95288E7F4C5B4C38CE5EF95C333C724E5C0D8 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)(GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_9 = __this->____items;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_13 = ((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E List_1_get_Item_m7480CC8D6EAB817FA8B0137F342F0F13C4ADB2F1 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m5692CFE5978797D705EAFD37606120F554E4BA14 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m727397AE80A575DB4F6D9FEDFF3B9287F556CB73 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mF43AE42EC51F1B4FBE0A3684A4405650F5939CA1 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1;
		L_1 = List_1_get_Item_m7480CC8D6EAB817FA8B0137F342F0F13C4ADB2F1(__this, L_0, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m87095B86D1007BA1BC6D029301B00A234565A7F9 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mAC84FFFDC9FFB212F128B6CCFF412C0521B3CF35(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m5692CFE5978797D705EAFD37606120F554E4BA14(__this, L_1, ((*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5B8E2D50B31445594A41BEC435ED471E93AD6D7E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = V_0;
		int32_t L_8 = V_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)L_9);
		return;
	}

IL_0034:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_10 = ___0_item;
		List_1_AddWithResize_m950BDA4F0AE7DE1C223608C02FDF3E5B98C6AB85(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m950BDA4F0AE7DE1C223608C02FDF3E5B98C6AB85 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mD7FE022A626D48FDF8E314247F78503509E8392F(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_3 = __this->____items;
		int32_t L_4 = V_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m8CC151F175F54F688257014CBD3406F1745C7A69 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mAC84FFFDC9FFB212F128B6CCFF412C0521B3CF35(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m5B8E2D50B31445594A41BEC435ED471E93AD6D7E_inline(__this, ((*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mA4DFB6BC16B74FB384286DEF2597EFD9BC9414F0_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m9BC3BB0DA01477F76CD53DAFEDD4C6FE5DCFC3F4 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mEC5EDD2B0AF440608EC25346E4BA411FC1D4C590(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD9E0FCE54BD07C3941967E0BD5D87412849EC69D (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA2D9CFAAAB50EB2CE519C6B364F0CD36F5F2082E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mDC007FAFE095A04C8CBEEBB3B21F2D4A72CAF64E(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m11A83512D26F733CAB963BEFD49575B2635A9219 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m727397AE80A575DB4F6D9FEDFF3B9287F556CB73(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mA2D9CFAAAB50EB2CE519C6B364F0CD36F5F2082E(__this, ((*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF74044315179BE9FBC8714E496B26D7F18AE579A (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ___0_array;
		List_1_CopyTo_m1545EF149CC271390B435D632C275EA7CF893BC9(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD7FE022A626D48FDF8E314247F78503509E8392F (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mB3C95288E7F4C5B4C38CE5EF95C333C724E5C0D8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m95D68E8F0285D1A3098041DAD975DF35AED1B227 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m895F0A0C03987A8A68D8D9CB0A9C1D4001805ADA(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E List_1_Find_m082CC062E3DF20548D5DEB369C1D2F0CC33C7541 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_1 = ___0_match;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m882AE8CF67A51CB938AA860944BE2D3839AF270F_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m895F0A0C03987A8A68D8D9CB0A9C1D4001805ADA (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m896A27FFA8CBBEADD34F86D7CFD66651A838455E(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m896A27FFA8CBBEADD34F86D7CFD66651A838455E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_10 = ___2_match;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m882AE8CF67A51CB938AA860944BE2D3839AF270F_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mAB0417FDF54DAA70F668414E20C65761D7ED8359 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269* L_4 = ___0_action;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m3D192718EF5EF2AB5A069A5B895EE394F3D6A4BA_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C List_1_GetEnumerator_mF6031386E7806D0864189E3B4592DEAB71773C78 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D485F6CDB7B2129F57EA89E9A320BC3CD853D37((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5E3E131B4284B66D9FA4F78D0988813369917CC0 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D485F6CDB7B2129F57EA89E9A320BC3CD853D37((&L_0), __this, NULL);
		Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mBBAB4ABDB5EC4FF2E08F83DDED153FEF86677C8E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D485F6CDB7B2129F57EA89E9A320BC3CD853D37((&L_0), __this, NULL);
		Enumerator_t2777CBD6F6C708FE29071A0818128DF4EE5BAA6C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* List_1_GetRange_m3CC826783E85E75EF2F0032DFE58B3F70CD219E6 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* L_6 = (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m26F61F5C0ADBA14C06C18B8D16455D1479E04173(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* L_9 = V_0;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mDC007FAFE095A04C8CBEEBB3B21F2D4A72CAF64E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = __this->____items;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mE0F68F29A1B421A81613A72DA4204530E5EE88B6(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m7A179C8CAA7984256A16542DD51274B98CF0120B (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m727397AE80A575DB4F6D9FEDFF3B9287F556CB73(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mDC007FAFE095A04C8CBEEBB3B21F2D4A72CAF64E(__this, ((*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9F746B16D1BC97DDD6CEF2FADB15138F968BEE5A (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mD7FE022A626D48FDF8E314247F78503509E8392F(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m8BD8AD02E64FAAFE661F4DB2C8D2737834404D82 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mAC84FFFDC9FFB212F128B6CCFF412C0521B3CF35(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m9F746B16D1BC97DDD6CEF2FADB15138F968BEE5A(__this, L_1, ((*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mEC5EDD2B0AF440608EC25346E4BA411FC1D4C590 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mD7FE022A626D48FDF8E314247F78503509E8392F(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_20 = __this->____items;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_45;
				L_45 = InterfaceFuncInvoker0< GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_m9F746B16D1BC97DDD6CEF2FADB15138F968BEE5A(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m4226D9662FCDA74929E06565AE54FCA449E0C77D(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mDD73EAFDEE539538277C3579F133BAABCEB84441 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mDC007FAFE095A04C8CBEEBB3B21F2D4A72CAF64E(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mF69D597445C82005734A2D459A3DDBA59E00030E(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m3D90C6517A73C2DB3E60C196C45B804336296667 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m727397AE80A575DB4F6D9FEDFF3B9287F556CB73(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mDD73EAFDEE539538277C3579F133BAABCEB84441(__this, ((*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m2E760ECA7A6AD0A06AFBC6A22FC3A358327F56F2 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_4 = ___0_match;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m882AE8CF67A51CB938AA860944BE2D3839AF270F_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* L_16 = ___0_match;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m882AE8CF67A51CB938AA860944BE2D3839AF270F_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF69D597445C82005734A2D459A3DDBA59E00030E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mF1A32F53C786948EC497B4AD7FDBACDAF8962D9C (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m8BA97FA6FCA4C22F1D3EF0A2004740A12620D650 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mA4DFB6BC16B74FB384286DEF2597EFD9BC9414F0_inline(__this, NULL);
		List_1_Reverse_m8277F7F9699258BD6CEBACCE0E5BB41BF28662CC(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m8277F7F9699258BD6CEBACCE0E5BB41BF28662CC (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m7CAFDD8F9BAD96720FF2D79137D0F5D0927ADDC1(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF9671D962B7C44CEC29C95D7D6DE9E1E9966FA48 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mA4DFB6BC16B74FB384286DEF2597EFD9BC9414F0_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3D99E5AF59A3D27F8413656A9E4A9764A3F39152(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3D99E5AF59A3D27F8413656A9E4A9764A3F39152 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m3CACAF471F070AE117D7061FBFB5761342F853AD(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0157A05AC96AE9B5DD119B1E695D66FD71C9048E (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, Comparison_1_tF964A5F2E76EBC830880EAA79F49245171578AA2* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tF964A5F2E76EBC830880EAA79F49245171578AA2* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tF964A5F2E76EBC830880EAA79F49245171578AA2* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m7DD79341C885CF8D0DC14F4613D466B8BBABD5CE(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* List_1_ToArray_mDE6014A4DE3CBF503DC545CCEF023DA428B1F150 (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_1 = ((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_3 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)(GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = __this->____items;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4226D9662FCDA74929E06565AE54FCA449E0C77D (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6;
				L_6 = InterfaceFuncInvoker0< GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mD7FE022A626D48FDF8E314247F78503509E8392F(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m992D2BB443EFDA3C3A302CDC1B4C93C91581CA30 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)(GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m532C251EB0D0E2A4DD4BBFC9A58A05E5DC1573EE (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = ((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC59F2D99C6EB086FD9F950A7CC3177BC7C5A6F3B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_2 = ((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m94C35CCA0889556C96B80F4CAC8BEB725EF882EA (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_6 = ((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_8 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_10 = __this->____items;
		InterfaceActionInvoker2< GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_12 = ((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m76EFA75443EB39C9A0D6735F3B939FFB5458F0D0(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m0811F9AE38A31E6A19659882B7E2E557E56F6813 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_9 = __this->____items;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_13 = ((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3695A6565843D3C8B45D3E500B7F83A581E79691 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mEF86B3167D01A54CFD7538A6AEEB599436BE4A3D (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m8D08C61A99BB360241A74BDFFE7D5946FA40FED3 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1;
		L_1 = List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5(__this, L_0, NULL);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m3C24C1C7E6EEBCBD9A2AE53B7BE9AFCA7A90C03C (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE880C25C1E2250EB54958DB93F63F2B2D1C27579(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m3695A6565843D3C8B45D3E500B7F83A581E79691(__this, L_1, ((*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = V_0;
		int32_t L_8 = V_1;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_9);
		return;
	}

IL_0034:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_10 = ___0_item;
		List_1_AddWithResize_m9FD3C28AEFDC7247A9E6CE3E84E5489C5B13C1DA(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m9FD3C28AEFDC7247A9E6CE3E84E5489C5B13C1DA (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m0B3B7689F4237052BB0F4FAAFD868804BBB9D380(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_3 = __this->____items;
		int32_t L_4 = V_0;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mDE15016D44C80EA3BF99719DF98C93FB1E19FB09 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE880C25C1E2250EB54958DB93F63F2B2D1C27579(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline(__this, ((*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF1B010AD628A440592EDE1086005AFC0DE480A27 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mBC0EFA9A1592741250239196ED79EE97845C0A00(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m0F4187EC3F271EDC965F10D67E6683327084812B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mD50F28D202D7F2472E2344BEAB1EB4B69EDC123E(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m89DBBA795EF0056D5A9D6B1930E6280DEF03FBF6 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mEF86B3167D01A54CFD7538A6AEEB599436BE4A3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m0F4187EC3F271EDC965F10D67E6683327084812B(__this, ((*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1364DDB133E3E30409981EFFD4535C61C59271ED (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, const RuntimeMethod* method) 
{
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = ___0_array;
		List_1_CopyTo_m69E25684075F107DE4CBCE75BCA73751FE037C00(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0B3B7689F4237052BB0F4FAAFD868804BBB9D380 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m0811F9AE38A31E6A19659882B7E2E557E56F6813(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m6DFED6E507B4919D0EA8DD23B1E8DFC6F01435CE (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mB8C0D0FD902B57AF9217F8B45F4A60EDA64B580A(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D List_1_Find_mB54AD179766AA8FE9DACA5C0D11AAF91BA0614A1 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_1 = ___0_match;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_mD78A3109FEA2472F42D9950F7A59DE58D0DE599A_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB8C0D0FD902B57AF9217F8B45F4A60EDA64B580A (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m57281DCD733A7BDC04E24ED2368FE322C17B44CC(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m57281DCD733A7BDC04E24ED2368FE322C17B44CC (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_10 = ___2_match;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_mD78A3109FEA2472F42D9950F7A59DE58D0DE599A_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mF0639A2734590EB1BD0B90CA386ACA23EE46208B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD* L_4 = ___0_action;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mF07B4ADB16BBF6115FA0B5482E900CF4CA5BEC6A_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297 List_1_GetEnumerator_mA4A37F921B660B7DFD5A760D506151571D9EBF1B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m09BC751BAD24CDB06B1FBA0B8466500A25F908AC((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m802A6ABD92CFF43F0858DE782647965782A8C52B (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m09BC751BAD24CDB06B1FBA0B8466500A25F908AC((&L_0), __this, NULL);
		Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mA10BD7E04F22A01998E4E8B9C58A826723D6DD5F (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m09BC751BAD24CDB06B1FBA0B8466500A25F908AC((&L_0), __this, NULL);
		Enumerator_t63B57491BCD47F45394410A8D6E24D4F57F5A297 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* List_1_GetRange_m5657C3655A2AA66DBCCAB10BD7BA56B67440FA07 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_6 = (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mC59F2D99C6EB086FD9F950A7CC3177BC7C5A6F3B(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_9 = V_0;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mD50F28D202D7F2472E2344BEAB1EB4B69EDC123E (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = __this->____items;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m2851FF3BF5667AFF6BDB883FC94A1D0F7527F6F0(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m08A980A909E6BE69E6705F2752FF03322B6F0D8E (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mEF86B3167D01A54CFD7538A6AEEB599436BE4A3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mD50F28D202D7F2472E2344BEAB1EB4B69EDC123E(__this, ((*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m0F529A69530858B5BD0194F778195E9BA969C38E (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m0B3B7689F4237052BB0F4FAAFD868804BBB9D380(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m0F0CF0C39A92B2468257FF0A568058366EA0EDD4 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE880C25C1E2250EB54958DB93F63F2B2D1C27579(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m0F529A69530858B5BD0194F778195E9BA969C38E(__this, L_1, ((*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mBC0EFA9A1592741250239196ED79EE97845C0A00 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m0B3B7689F4237052BB0F4FAAFD868804BBB9D380(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_20 = __this->____items;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_45;
				L_45 = InterfaceFuncInvoker0< GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_m0F529A69530858B5BD0194F778195E9BA969C38E(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m76EFA75443EB39C9A0D6735F3B939FFB5458F0D0(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m5984B59DDC014774338A51174BFA35BD003B42B3 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mD50F28D202D7F2472E2344BEAB1EB4B69EDC123E(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m68956ED9D9817BD1D2CB1AC3A5BC1F9BF97EBF26(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m21DE21EB34091DDDFFB5C601B61CAE8472AF67B2 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mEF86B3167D01A54CFD7538A6AEEB599436BE4A3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m5984B59DDC014774338A51174BFA35BD003B42B3(__this, ((*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m588724CB975D5BE842097D951ABEE361D6A57394 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_4 = ___0_match;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mD78A3109FEA2472F42D9950F7A59DE58D0DE599A_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* L_16 = ___0_match;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mD78A3109FEA2472F42D9950F7A59DE58D0DE599A_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m68956ED9D9817BD1D2CB1AC3A5BC1F9BF97EBF26 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m3CCB7E0DADA0A994EE63041354E92BDA4FFB6EDE (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3AB26FF1FB87E9B3474D0D540D758DC821B29374 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline(__this, NULL);
		List_1_Reverse_mFCC5AFBC4F00C1999ABAAD44A9F15B83FD90D9CD(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFCC5AFBC4F00C1999ABAAD44A9F15B83FD90D9CD (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m37F4D5CA108D725E2D7A38C69B8AC9A505DB0C36(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m2E9A7F480166FD66691A99127AA5007D7428BCF2 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m5B3961A9D069CD12625D24E101A8416D15521BA4(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5B3961A9D069CD12625D24E101A8416D15521BA4 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m534A41BB28E386644C6E5AA29DAE53CCEB6A2779(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0EA27C3423FCF524CDFB057AA60F72816C358BC0 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, Comparison_1_t6CE5C0E9637BFC69BED33F85B7839DC771A6518F* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_t6CE5C0E9637BFC69BED33F85B7839DC771A6518F* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t6CE5C0E9637BFC69BED33F85B7839DC771A6518F* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mA239B573823EC72FBCB444C2D14001CF5E73B321(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* List_1_ToArray_mC9099572F2F4118E17B29612761AC759D6C41B10 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_1 = ((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_3 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = __this->____items;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76EFA75443EB39C9A0D6735F3B939FFB5458F0D0 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_6;
				L_6 = InterfaceFuncInvoker0< GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m0B3B7689F4237052BB0F4FAAFD868804BBB9D380(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m6CF84314C6FC562E7FD7F647AD34706F703EBAAA (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E933D1B423B829C27D0AAE6181F4C5E0CA89F33 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(__this, L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9CD1267F4F075504130F719883E3EFD9DF762253 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(__this, L_1, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m39E3DB029FA8CE14D5437A70E01A96684957F6B6 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(__this, ((*(int32_t*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mE7517FD1F4EBD12003672EAFAEB76B269822CD44 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF4D90DC6EDE97B45F2F568839E9D5C34233FFA6B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mA59E550755D80A19985EA4724BF837C2B2DE94FD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Find_mF3466A5239D8C153F53ED271719E6934DF954A68 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_1 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_10 = ___2_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1586340C3D588CF61B941F469BDB9556E22BCCE0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_4 = ___0_action;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB9F20F5DCF4F0D1D426C507F13B662C972AE4516 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, NULL);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC6BECA0B4B79418D229C9568104AEBCE2D23C903 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, NULL);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* List_1_GetRange_m821C7554D9144281552F48B790B4E5109D285595 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m9FC60CFC60B64D25F3F26455A4AC0386E6E2C26F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m998EB213788F375DC5B0A8A62C3400CBD267E86B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_1, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mC39E90783873C337B8CB0938BE43A6E5AD42EF0A (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mF14DFF09F0ADFF511FBE004265EF8B7269ABA4D8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_4 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_16 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, NULL);
		List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8AF34E53DDA0850F189B6FA670A2CC358C9747E7 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				int32_t L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m34A28120D67ECFCD65E7E95E5A27026C1DF8B865 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5D29B990EB19839003AAD6B3FA764A2210996EB1 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9392B2717E9D48CC39482A30BD57C0190C7AD45E (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = __this->____items;
		InterfaceActionInvoker2< IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_9 = __this->____items;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_13 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		intptr_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		intptr_t L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (intptr_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		intptr_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m7EEC721EC79262856B37C87F91B6EEF6A6B4708D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		intptr_t L_1;
		L_1 = List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D(__this, L_0, NULL);
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m3C50EED246A8FAF6BA96DA2D78F2061037D51602 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378(__this, L_1, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = V_0;
		int32_t L_8 = V_1;
		intptr_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (intptr_t)L_9);
		return;
	}

IL_0034:
	{
		intptr_t L_10 = ___0_item;
		List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		int32_t L_4 = V_0;
		intptr_t L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (intptr_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mFB84BB5CBA9878EDDD12632CCFD2E5EE99F8635C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline(__this, ((*(intptr_t*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m489EE9DA7891076376F127BFDD74A4F810BD4E22 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m69A0FC39CBC66ADC415DF72EE86E432ED7C1F4E1 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		intptr_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mB71631C59F319307EAE2D29420C8A082A5616044 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D(__this, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m4CD48FAE3389BE1C1CD07942FCF834966C58E560 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		List_1_CopyTo_m78D1194C1B144CF0D8CFC975434166E718165E93(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m8B68D6D49EA58F5892B3F8855A78448A7F624857 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m36FBFAE20D4C4C19E07819AE0C78E1AE65185819(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t List_1_Find_mEE431F924D050C31D537C43A501B31E2483BC8A9 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_1 = ___0_match;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		intptr_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		intptr_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
		intptr_t L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m36FBFAE20D4C4C19E07819AE0C78E1AE65185819 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m7C3D45DF088822F13655A1B43D6CF4C864DD0B4D(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m7C3D45DF088822F13655A1B43D6CF4C864DD0B4D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_10 = ___2_match;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		intptr_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mE9F8F971A1635469850D75EF714CB0FF6EA520DC (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_4 = ___0_action;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		intptr_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 List_1_GetEnumerator_m729F04EC763CA388AFCBD6134AB4B808431D7D3B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m148764BE0580EF07A83E8514973FF333957B760C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262((&L_0), __this, NULL);
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mB3E67CCC127C19CE127E66E3D3E9650FFCB76AC5 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262((&L_0), __this, NULL);
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* List_1_GetRange_m2A54BC1435813D2F86B1B28FE0E0A5CC49CA3CEF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_6 = (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_9 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = __this->____items;
		intptr_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisIntPtr_t_m3EF39FCEE1A746C609E4ACA55B7DBA0B9B2FF13E(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m55257A95C0593D753DA1E8B9641D8D01E4D30CD0 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549(__this, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		intptr_t L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (intptr_t)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m928B1DAAF7F46D3F06A1E289D6420946ADF3E9D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973(__this, L_1, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_20 = __this->____items;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				intptr_t L_45;
				L_45 = InterfaceFuncInvoker0< intptr_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mCFE8D13FDC87D5A4472ACF5E1487E7AA45CF0509 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A(__this, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m6DDF49012FC0B6792DE9CBEA898386A03CA33680 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_4 = ___0_match;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		intptr_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_16 = ___0_match;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		intptr_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		intptr_t L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (intptr_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mFEEAC356EB2AAA867CBF18D7802ABFFD800B98FD (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6B128F0D85CC105A8774DA909A150D69A2A1D3D7 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline(__this, NULL);
		List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisIntPtr_t_m4644EEA142E76AA0835453F90B837AF3CBA906B8(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m2F8A461FB577CAF0332C1A46F14FF8E4B1A21CDE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisIntPtr_t_mB78635DE9DC1121D3F7ED84572DFE599F40BE7E7(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8CDEA20F140BE569E4B9880DB48C603EC1694788 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m550DF7E1E4B5AAD082993DB3F3683640A653FCB5(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* List_1_ToArray_m7227FA48B0C214A53767565B8A49AFC6ECEEFABB (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = __this->____items;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				intptr_t L_6;
				L_6 = InterfaceFuncInvoker0< intptr_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				intptr_t L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (intptr_t)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mB0EED9CD8F1CF94AC1BAAAD9E038CBD7D6C3B39B (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1E40A92A6C8F8E656E5129B00C69C7D9902C11ED (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB3BDF273C9F43104F5140D7AD8FB3D15FEAFECFF (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_6 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_8 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = __this->____items;
		InterfaceActionInvoker2< LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_12 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_9 = __this->____items;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_13 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94));
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m01FA46D1BB5C82C5DF3E5F27FFCE5CA6778D4755 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_1;
		L_1 = List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080(__this, L_0, NULL);
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m5544A3E84DC2B9CF326CA467688DBDEDED886D99 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C(__this, L_1, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = V_0;
		int32_t L_8 = V_1;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_9);
		return;
	}

IL_0034:
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_10 = ___0_item;
		List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = V_0;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mC4E19FCBDA77F08B800B4A6C65C44204DED8A324 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mC1D90285F5D6D07396E1C1D2D10544EADFD1E3E2 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m080DCB6E267F68A483FC7602DF3C4400DA20F60F (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m5F736D0C6EBC4692EAEC503B21DCD4D28AF6B5A0 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mB80EDE571C89E190A1374B8D75873C3BFA9929F6 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, const RuntimeMethod* method) 
{
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = ___0_array;
		List_1_CopyTo_m4399B10FDA489280A34B28867B8F5EF44CFE1D04(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mDA3569B49FE36C5F8BC64E0091840DBCC19C9FF9 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m027125D6E3302C26972D4FA1F80D194D3D236F0A(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 List_1_Find_mB0CEED179B03D33535810DFB8C21B2F337318509 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_1 = ___0_match;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94));
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m027125D6E3302C26972D4FA1F80D194D3D236F0A (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m7B0CB1F2BCD5C588FE855954CFF568D9A857E642(__this, 0, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m7B0CB1F2BCD5C588FE855954CFF568D9A857E642 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_10 = ___2_match;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m2959BCBCA405220887C5570DF16CC9C81E27D4C1 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* L_4 = ___0_action;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 List_1_GetEnumerator_m7D35A9F4F9BF9356ADEA794203B5FC4D266B49F3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mCA71607E6ABA176A7DD7F1C3288F57B5DDE79C79 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB((&L_0), __this, NULL);
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m7D23D4A8241C4F73030A8E2F1EB328EE7ADB6877 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB((&L_0), __this, NULL);
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t420B17163897A4DF994BA698744548CD81961E70* List_1_GetRange_mC7EDDBF4C765B817F54E9F6E6A5AFA1646B319C9 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t420B17163897A4DF994BA698744548CD81961E70* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_6 = (List_1_t420B17163897A4DF994BA698744548CD81961E70*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_0 = L_6;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_9 = V_0;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = __this->____items;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m94FC7F2E670E87F38F1811C819D7D7E9F0A31025(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m1082008905AD6A57B8BE32DA1ACEE2921BD5BCCE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m362041311049B1292163944A72E5ACF35D4457ED (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02(__this, L_1, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t420B17163897A4DF994BA698744548CD81961E70*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_20 = __this->____items;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_45;
				L_45 = InterfaceFuncInvoker0< LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_44);
				List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m604DC81AB6FF3E6644F43C0932EA2DA6B84EE0C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m3891E7343BD8801E4C44EFE8ED051DA05D183098 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_4 = ___0_match;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_16 = ___0_match;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94));
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2A7910DC3EC2FF7A0354A6B19AC8812CDBDCDA6F (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mBF1423F68BB34FE85CD6E72783CDA4FBA64A5307 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline(__this, NULL);
		List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m59A5711531F3B01A7FD38FB04BFC563BA5ACF61C(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE7FBAAF969CB5B87FCD0650382986F726A2F7CE0 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_mFAE044C7CB74A79921108CCC1A15E61AF4DCCAFD(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDD39F933F93C6C48681924AF81AEED59B3C10510 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 42)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mBF96DD2C71393DB577087D751CB701D9D7DC5D57(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* List_1_ToArray_mA2D5C4BCAA136816E60603708EEB46729959C63C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_1 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = __this->____items;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 31), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_6;
				L_6 = InterfaceFuncInvoker0< LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m58CC454FB03FC0F4CC91A65593A01B6291583F95 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1633A3181CE9963F0AE5F3439FBF8810B49D300D_gshared_inline (List_1_t6FBF976E05F94533BA8C3263ADC352424BFE56F7* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_item, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		ValueTuple_2U5BU5D_t8FBCDB97DBD335F8EA00F11B435C6FB7BD88DC19* L_7 = V_0;
		int32_t L_8 = V_1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A)L_9);
		return;
	}

IL_0034:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_10 = ___0_item;
		List_1_AddWithResize_mB278A441D5221E2986B849BAABCC653931924D4A(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m7F14ED42C46FE4087458DE03F506B9CAB0B5CA69_gshared_inline (Predicate_1_t91485DD6293ACA933D177C8E40E3FF525CD27E9E* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1EA58AC94438644ACACF974F2825DB6A06EB560E_gshared_inline (Action_1_t4AEA8DF17722128F4478A5CE84333E63589572CF* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD289F3F0A4EA20EF1C4703B8E700B3F9384F49C_gshared_inline (List_1_t08F5F264E0D9ACD5DB906651E321371C4D8B9308* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_item, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		ValueTuple_2U5BU5D_tA00E3E3F73FBC47A5F640D4A0E80AC0D1725BD9E* L_7 = V_0;
		int32_t L_8 = V_1;
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE)L_9);
		return;
	}

IL_0034:
	{
		ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE L_10 = ___0_item;
		List_1_AddWithResize_m1E21177E185B16321B19611EFC2608257B95A509(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA0F7A40C627DFA0A9C7C77D13EEC419AA51BE35A_gshared_inline (Predicate_1_t37F40148234A6C59BCD3A772B016396FDCF8E721* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9BE1A20B0B09219CB8094DF49543084A40C61AD6_gshared_inline (Action_1_tF40838913C22C3B6439A258E6EA6191EAA0B14E9* __this, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = V_0;
		int32_t L_8 = V_1;
		bool L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (bool)L_9);
		return;
	}

IL_0034:
	{
		bool L_10 = ___0_item;
		List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m5EB17D73F75C175B835656A7C7C137A266E07928_inline (Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppChar L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (Il2CppChar)L_9);
		return;
	}

IL_0034:
	{
		Il2CppChar L_10 = ___0_item;
		List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline (Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppChar, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_inline (Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppChar, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE77E3C88EBBD399E4A5F6F0B05E4E32C5E11FB24_inline (List_1_t16E76DEB7E8DD0995C23F19B6C5AAC26B24BAE27* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_item, const RuntimeMethod* method) 
{
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = V_0;
		int32_t L_8 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8)L_9);
		return;
	}

IL_0034:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_10 = ___0_item;
		List_1_AddWithResize_m57D51DEE77CD2651860F4CF5ED9B04CE9D6103B9(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2F110E2073E6471BD12C32F8EA63B0673BEFB275_inline (Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m831285BAC5866B4BA64BBE4F0B71DC4C16FADB77_inline (Action_1_tE9C2D9B0A48358F0A17B8A64102DB2347BC38AB2* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5B8E2D50B31445594A41BEC435ED471E93AD6D7E_inline (List_1_t3CA8EA3609B406A4099002CBD02BB599F3B1D5DB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = V_0;
		int32_t L_8 = V_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)L_9);
		return;
	}

IL_0034:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_10 = ___0_item;
		List_1_AddWithResize_m950BDA4F0AE7DE1C223608C02FDF3E5B98C6AB85(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m882AE8CF67A51CB938AA860944BE2D3839AF270F_inline (Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3D192718EF5EF2AB5A069A5B895EE394F3D6A4BA_inline (Action_1_t3BF302B6415E5D57439BB7D0DC24EE7F49A5E269* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = V_0;
		int32_t L_8 = V_1;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_9);
		return;
	}

IL_0034:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_10 = ___0_item;
		List_1_AddWithResize_m9FD3C28AEFDC7247A9E6CE3E84E5489C5B13C1DA(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD78A3109FEA2472F42D9950F7A59DE58D0DE599A_inline (Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF07B4ADB16BBF6115FA0B5482E900CF4CA5BEC6A_inline (Action_1_t1858D4080123E1E76BDE359A376C07EB9404A8AD* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = V_0;
		int32_t L_8 = V_1;
		intptr_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (intptr_t)L_9);
		return;
	}

IL_0034:
	{
		intptr_t L_10 = ___0_item;
		List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline (Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* __this, intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = V_0;
		int32_t L_8 = V_1;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_9);
		return;
	}

IL_0034:
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_10 = ___0_item;
		List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline (Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline (Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
