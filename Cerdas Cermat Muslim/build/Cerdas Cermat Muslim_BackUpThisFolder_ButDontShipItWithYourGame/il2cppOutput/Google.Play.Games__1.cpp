#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

struct Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67;
struct Action_1_t40721379DC6360875470B0B47A7D930554D1A3D3;
struct Action_1_t764690D8533B83F132388734EC2965A2712754D9;
struct Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C;
struct Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IConflictResolver_tE12B7D94EECC5E5889D0158EC3E6F648DD91C92A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDiscoveryListener_t93BE7B49481088A68874176BA8013B7BCD1F0A3E;
struct IMessageListener_t9531F603CF2F1941B87710911F11116588A637DB;
struct ISavedGameMetadata_t28210712AB3B58D4CF3C826770E11EA8912DD4AC;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct RecallAccess_t454B1574521DDB488ADB014DA641E6E234BAA858;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F;
IL2CPP_EXTERN_C String_t* _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA;
IL2CPP_EXTERN_C String_t* _stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39;
IL2CPP_EXTERN_C String_t* _stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68;
IL2CPP_EXTERN_C String_t* _stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711;
IL2CPP_EXTERN_C String_t* _stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_m773FC305843AFE5ECC1DC8DBC4370ACEBF99A19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C;;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com;;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t67871A9771693DAB213E8B7B448F74F430F5091C  : public RuntimeObject
{
};
struct DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC  : public RuntimeObject
{
};
struct RecallAccess_t454B1574521DDB488ADB014DA641E6E234BAA858  : public RuntimeObject
{
	String_t* ___mSessionId;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C 
{
	String_t* ___mEndpointId;
	String_t* ___mName;
	String_t* ___mServiceId;
};
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke
{
	char* ___mEndpointId;
	char* ___mName;
	char* ___mServiceId;
};
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com
{
	Il2CppChar* ___mEndpointId;
	Il2CppChar* ___mName;
	Il2CppChar* ___mServiceId;
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
struct NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B 
{
	Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___mInitializationCallback;
	int64_t ___mLocalClientId;
};
struct NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback;
	int64_t ___mLocalClientId;
};
struct NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback;
	int64_t ___mLocalClientId;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3155_t5359DDB65D01A10953BA79F71837247779413EF2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3155_t5359DDB65D01A10953BA79F71837247779413EF2__padding[3155];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D4728_tAFB11F83071E70BD7BF81CB93478EF818E0676B5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4728_tAFB11F83071E70BD7BF81CB93478EF818E0676B5__padding[4728];
	};
};
#pragma pack(pop, tp)
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	bool ___hasValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value;
};
struct ConflictResolutionStrategy_tE92ED07BB1EC8A3EE04BA41CD577000B62BFD915 
{
	int32_t ___value__;
};
struct ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF 
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ___mRemoteEndpoint;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload;
};
struct ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke ___mRemoteEndpoint;
	Il2CppSafeArray* ___mPayload;
};
struct ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com ___mRemoteEndpoint;
	Il2CppSafeArray* ___mPayload;
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
struct EventVisibility_t16B3FE35E2EDBBD53604D59B80F6765A35547163 
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
struct InitializationStatus_t9B95FC3BE27F4A113C457166C5A707A44543D3DD 
{
	int32_t ___value__;
};
struct LeaderboardCollection_tFFD58717C61F03816A4EE3D2003926C0B734F91C 
{
	int32_t ___value__;
};
struct LeaderboardTimeSpan_t8E531CC9268220734CA627DFCC7ABBCE3004D0D6 
{
	int32_t ___value__;
};
struct ResponseStatus_tD794E5AA3E3E3C4F5F59DF427A35FFCCB043A95F 
{
	int32_t ___value__;
};
struct SavedGameRequestStatus_t860E4308D493A29A4245D51498EF35AEE3A9B8A0 
{
	int32_t ___value__;
};
struct ScorePageDirection_tF35D1702E2C42D93F55D9C66EDC8E2AADD902147 
{
	int32_t ___value__;
};
struct SelectUIStatus_t3EFCCDFCAB386DAD7A36828855243C556ADE8F78 
{
	int32_t ___value__;
};
struct SignInInteractivity_t27C7D771D113FB63A9325AE2C779FF60F828D780 
{
	int32_t ___value__;
};
struct SignInStatus_t7DA6625C4819AB74C191FCDE336DC602FF4782F1 
{
	int32_t ___value__;
};
struct Status_t82580DCC75A9E039CBA42B8125CD41F7C85712F9 
{
	int32_t ___value__;
};
struct AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C 
{
	int32_t ___mStatus;
	String_t* ___mLocalEndpointName;
};
struct AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke
{
	int32_t ___mStatus;
	char* ___mLocalEndpointName;
};
struct AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com
{
	int32_t ___mStatus;
	Il2CppChar* ___mLocalEndpointName;
};
struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 
{
	int64_t ___mLocalClientId;
	String_t* ___mRemoteEndpointId;
	int32_t ___mResponseStatus;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload;
};
struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke
{
	int64_t ___mLocalClientId;
	char* ___mRemoteEndpointId;
	int32_t ___mResponseStatus;
	Il2CppSafeArray* ___mPayload;
};
struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com
{
	int64_t ___mLocalClientId;
	Il2CppChar* ___mRemoteEndpointId;
	int32_t ___mResponseStatus;
	Il2CppSafeArray* ___mPayload;
};
struct Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A  : public RuntimeObject
{
	String_t* ___mId;
	String_t* ___mName;
	String_t* ___mDescription;
	String_t* ___mImageUrl;
	uint64_t ___mCurrentCount;
	int32_t ___mVisibility;
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
struct SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 
{
	bool ___mDescriptionUpdated;
	String_t* ___mNewDescription;
	bool ___mCoverImageUpdated;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime;
};
struct SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated;
	char* ___mNewDescription;
	int32_t ___mCoverImageUpdated;
	Il2CppSafeArray* ___mNewPngCoverImage;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime;
};
struct SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com
{
	int32_t ___mDescriptionUpdated;
	Il2CppChar* ___mNewDescription;
	int32_t ___mCoverImageUpdated;
	Il2CppSafeArray* ___mNewPngCoverImage;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime;
};
struct ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652  : public RuntimeObject
{
	String_t* ___mId;
	RuntimeObject* ___mInternalObject;
	int32_t ___mCollection;
	int32_t ___mTimespan;
	int32_t ___mDirection;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 
{
	bool ___mDescriptionUpdated;
	String_t* ___mNewDescription;
	bool ___mCoverImageUpdated;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime;
};
struct Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated;
	char* ___mNewDescription;
	int32_t ___mCoverImageUpdated;
	Il2CppSafeArray* ___mNewPngCoverImage;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime;
};
struct Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com
{
	int32_t ___mDescriptionUpdated;
	Il2CppChar* ___mNewDescription;
	int32_t ___mCoverImageUpdated;
	Il2CppSafeArray* ___mNewPngCoverImage;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime;
};
struct Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67  : public MulticastDelegate_t
{
};
struct Action_1_t40721379DC6360875470B0B47A7D930554D1A3D3  : public MulticastDelegate_t
{
};
struct Action_1_t764690D8533B83F132388734EC2965A2712754D9  : public MulticastDelegate_t
{
};
struct Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t67871A9771693DAB213E8B7B448F74F430F5091C_StaticFields
{
	__StaticArrayInitTypeSizeU3D3155_t5359DDB65D01A10953BA79F71837247779413EF2 ___99AADF286D51E79D1AD61AB8445A7E105EE5751D7C8C081B268EC0FFBA7C47C5;
	__StaticArrayInitTypeSizeU3D4728_tAFB11F83071E70BD7BF81CB93478EF818E0676B5 ___EF0D7F2C68F5853E049D662B5097B115D8CD8BA7501C56E54FE0BFB8B916DFE1;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyPayload;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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

IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled);

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Misc_CheckNotNull_TisRuntimeObject_m9175447FD876073E8E57D47790E370409F06B7D5_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_gshared_inline (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* __this, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_gshared_inline (Action_1_t764690D8533B83F132388734EC2965A2712754D9* __this, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 ___0_builder, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
inline String_t* Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m9175447FD876073E8E57D47790E370409F06B7D5_gshared)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, String_t* ___0_description, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newPngCoverImage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_newPlayedTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, int32_t ___0_status, String_t* ___1_localEndpointName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3_inline (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2_inline (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0 (String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, String_t* ___0_endpointId, String_t* ___1_name, String_t* ___2_serviceId, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m9175447FD876073E8E57D47790E370409F06B7D5_gshared)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, String_t* ___0_remoteEndpointId, String_t* ___1_remoteEndpointName, String_t* ___2_serviceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72_inline (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0_inline (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, int32_t ___2_code, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_inline (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* __this, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67*, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C, const RuntimeMethod*))Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_Rejected_mD0A91075C9090E4EF00E336FA82D2EC069A576E9 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_inline (Action_1_t764690D8533B83F132388734EC2965A2712754D9* __this, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t764690D8533B83F132388734EC2965A2712754D9*, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71, const RuntimeMethod*))Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC_inline (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8_inline (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094_inline (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) ;
inline Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_m773FC305843AFE5ECC1DC8DBC4370ACEBF99A19D (Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___0_value, const RuntimeMethod* method)
{
	return ((  Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* (*) (Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m9175447FD876073E8E57D47790E370409F06B7D5_gshared)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___0_callback, int64_t ___1_localClientId, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28_inline (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40_inline (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallAccess__ctor_mA4A4A08A0297CAABA9DAAE7716DB7E23DAC19E27 (RecallAccess_t454B1574521DDB488ADB014DA641E6E234BAA858* __this, String_t* ___0_sessionId, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_sessionId;
		__this->___mSessionId = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSessionId), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecallAccess_get_sessionId_mE9EFF4A95DED99FAB014DCDFB0B86C9B649D3B8F (RecallAccess_t454B1574521DDB488ADB014DA641E6E234BAA858* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mSessionId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallAccess_set_sessionId_mCBC1B40D53713967AFFC4A705FA0DDC66392A795 (RecallAccess_t454B1574521DDB488ADB014DA641E6E234BAA858* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___mSessionId = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSessionId), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorePageToken__ctor_mC6A95B2CF5D58E225B68F324F89740440E463A25 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, RuntimeObject* ___0_internalObject, String_t* ___1_id, int32_t ___2_collection, int32_t ___3_timespan, int32_t ___4_direction, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_internalObject;
		__this->___mInternalObject = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInternalObject), (void*)L_0);
		String_t* L_1 = ___1_id;
		__this->___mId = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId), (void*)L_1);
		int32_t L_2 = ___2_collection;
		__this->___mCollection = L_2;
		int32_t L_3 = ___3_timespan;
		__this->___mTimespan = L_3;
		int32_t L_4 = ___4_direction;
		__this->___mDirection = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Collection_mE50CCE1F8DAD88FC3C1339CA56E3589F59B66D5F (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mCollection;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_TimeSpan_mACECEE8508CBD17F79C6208DFC56C3ED3832E800 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mTimespan;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Direction_m311708F02EC16EE13575642268B522BDE4660396 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mDirection;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_mBEBA3AD6E37CF08D4F220EDBD40DCFEC3A65D9A5 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorePageToken_get_InternalObject_mD94F9B5585B544390A76C6682F1F26888DFB6624 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___mInternalObject;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_Multicast(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* currentDelegate = reinterpret_cast<ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInst(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, method);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenStatic(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, method);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenVirtual(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	VirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInterface(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericVirtual(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	GenericVirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericInterface(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback__ctor_m4FFD96F23036F325DEB301CC41A8DDCFBF7764DE (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4 (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCallback_BeginInvoke_m070CB10EA460E07BB8606F1E716B17A211F702E8 (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___0_resolver;
	__d_args[1] = ___1_original;
	__d_args[2] = ___2_originalData;
	__d_args[3] = ___3_unmerged;
	__d_args[4] = ___4_unmergedData;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_EndInvoke_mD8B65C517F1AF693DCDC2776A742EE122FBE907F (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_pinvoke(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_pinvoke_back(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_com(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_com_back(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com& marshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0____mNewPlayedTime_FieldInfo_var, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_com_cleanup(SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 ___0_builder, const RuntimeMethod* method) 
{
	{
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_0 = ___0_builder;
		bool L_1 = L_0.___mDescriptionUpdated;
		__this->___mDescriptionUpdated = L_1;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_2 = ___0_builder;
		String_t* L_3 = L_2.___mNewDescription;
		__this->___mNewDescription = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription), (void*)L_3);
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_4 = ___0_builder;
		bool L_5 = L_4.___mCoverImageUpdated;
		__this->___mCoverImageUpdated = L_5;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_6 = ___0_builder;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___mNewPngCoverImage;
		__this->___mNewPngCoverImage = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage), (void*)L_7);
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_8 = ___0_builder;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_9 = L_8.___mNewPlayedTime;
		__this->___mNewPlayedTime = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14_AdjustorThunk (RuntimeObject* __this, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 ___0_builder, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14(_thisAdjusted, ___0_builder, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mDescriptionUpdated;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mNewDescription;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mCoverImageUpdated;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_0 = (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*)(&__this->___mNewPlayedTime);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline(L_0, Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_pinvoke(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_pinvoke_back(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke& marshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_pinvoke_cleanup(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_com(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_com_back(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com& marshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___mNewPlayedTimeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5____mNewPlayedTime_FieldInfo_var, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTimeException, NULL);
}
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_com_cleanup(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, String_t* ___0_description, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_description;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A(L_0, Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		__this->___mNewDescription = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription), (void*)L_1);
		__this->___mDescriptionUpdated = (bool)1;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_2 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110_AdjustorThunk (RuntimeObject* __this, String_t* ___0_description, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 _returnValue;
	_returnValue = Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110(_thisAdjusted, ___0_description, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newPngCoverImage, const RuntimeMethod* method) 
{
	{
		__this->___mCoverImageUpdated = (bool)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_newPngCoverImage;
		__this->___mNewPngCoverImage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage), (void*)L_0);
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_1 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newPngCoverImage, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0(_thisAdjusted, ___0_newPngCoverImage, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_newPlayedTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___0_newPlayedTime), NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D_RuntimeMethod_var)));
	}

IL_001d:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ___0_newPlayedTime;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_3), L_2, Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		__this->___mNewPlayedTime = L_3;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_4 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_newPlayedTime, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D(_thisAdjusted, ___0_newPlayedTime, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, const RuntimeMethod* method) 
{
	{
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_0 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 _returnValue;
	_returnValue = Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_pinvoke(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke& marshaled)
{
	marshaled.___mStatus = unmarshaled.___mStatus;
	marshaled.___mLocalEndpointName = il2cpp_codegen_marshal_string(unmarshaled.___mLocalEndpointName);
}
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_pinvoke_back(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke& marshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus;
	unmarshaled.___mStatus = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName = il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName));
}
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_pinvoke_cleanup(AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mLocalEndpointName);
	marshaled.___mLocalEndpointName = NULL;
}
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_com(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com& marshaled)
{
	marshaled.___mStatus = unmarshaled.___mStatus;
	marshaled.___mLocalEndpointName = il2cpp_codegen_marshal_bstring(unmarshaled.___mLocalEndpointName);
}
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_com_back(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com& marshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus;
	unmarshaled.___mStatus = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName = il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName));
}
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_com_cleanup(AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mLocalEndpointName);
	marshaled.___mLocalEndpointName = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, int32_t ___0_status, String_t* ___1_localEndpointName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_status;
		__this->___mStatus = L_0;
		String_t* L_1 = ___1_localEndpointName;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A(L_1, Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		__this->___mLocalEndpointName = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mLocalEndpointName), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891_AdjustorThunk (RuntimeObject* __this, int32_t ___0_status, String_t* ___1_localEndpointName, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891(_thisAdjusted, ___0_status, ___1_localEndpointName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mStatus;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mStatus;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mLocalEndpointName;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2_inline(_thisAdjusted, method);
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


IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_pinvoke(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke(unmarshaled.___mRemoteEndpoint, marshaled.___mRemoteEndpoint);
	marshaled.___mPayload = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload);
}
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_pinvoke_back(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke& marshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_back(marshaled.___mRemoteEndpoint, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint))->___mEndpointId), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint))->___mName), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint))->___mServiceId), (void*)NULL);
	#endif
	unmarshaled.___mPayload = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload));
}
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_pinvoke_cleanup(ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_cleanup(marshaled.___mRemoteEndpoint);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload);
	marshaled.___mPayload = NULL;
}


IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_com(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com(unmarshaled.___mRemoteEndpoint, marshaled.___mRemoteEndpoint);
	marshaled.___mPayload = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload);
}
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_com_back(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com& marshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_back(marshaled.___mRemoteEndpoint, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint))->___mEndpointId), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint))->___mName), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint))->___mServiceId), (void*)NULL);
	#endif
	unmarshaled.___mPayload = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload));
}
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_com_cleanup(ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_cleanup(marshaled.___mRemoteEndpoint);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload);
	marshaled.___mPayload = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, String_t* ___0_remoteEndpointId, String_t* ___1_remoteEndpointName, String_t* ___2_serviceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5, NULL);
		String_t* L_0 = ___0_remoteEndpointId;
		String_t* L_1 = ___1_remoteEndpointName;
		String_t* L_2 = ___2_serviceId;
		EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C L_3;
		memset((&L_3), 0, sizeof(L_3));
		EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52((&L_3), L_0, L_1, L_2, NULL);
		__this->___mRemoteEndpoint = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint))->___mEndpointId), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint))->___mName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint))->___mServiceId), (void*)NULL);
		#endif
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D_RuntimeMethod_var);
		__this->___mPayload = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0_AdjustorThunk (RuntimeObject* __this, String_t* ___0_remoteEndpointId, String_t* ___1_remoteEndpointName, String_t* ___2_serviceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF*>(__this + _offset);
	ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0(_thisAdjusted, ___0_remoteEndpointId, ___1_remoteEndpointName, ___2_serviceId, ___3_payload, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) 
{
	{
		EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C L_0 = __this->___mRemoteEndpoint;
		return L_0;
	}
}
IL2CPP_EXTERN_C  EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF*>(__this + _offset);
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C _returnValue;
	_returnValue = ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_pinvoke(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke& marshaled)
{
	marshaled.___mLocalClientId = unmarshaled.___mLocalClientId;
	marshaled.___mRemoteEndpointId = il2cpp_codegen_marshal_string(unmarshaled.___mRemoteEndpointId);
	marshaled.___mResponseStatus = unmarshaled.___mResponseStatus;
	marshaled.___mPayload = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_pinvoke_back(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke& marshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId;
	unmarshaled.___mLocalClientId = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId = il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus;
	unmarshaled.___mResponseStatus = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload));
}
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_pinvoke_cleanup(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mRemoteEndpointId);
	marshaled.___mRemoteEndpointId = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload);
	marshaled.___mPayload = NULL;
}
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_com(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com& marshaled)
{
	marshaled.___mLocalClientId = unmarshaled.___mLocalClientId;
	marshaled.___mRemoteEndpointId = il2cpp_codegen_marshal_bstring(unmarshaled.___mRemoteEndpointId);
	marshaled.___mResponseStatus = unmarshaled.___mResponseStatus;
	marshaled.___mPayload = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_com_back(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com& marshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId;
	unmarshaled.___mLocalClientId = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId = il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus;
	unmarshaled.___mResponseStatus = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload));
}
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_com_cleanup(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mRemoteEndpointId);
	marshaled.___mRemoteEndpointId = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload);
	marshaled.___mPayload = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, int32_t ___2_code, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_localClientId;
		__this->___mLocalClientId = L_0;
		String_t* L_1 = ___1_remoteEndpointId;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A(L_1, Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		__this->___mRemoteEndpointId = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRemoteEndpointId), (void*)L_2);
		int32_t L_3 = ___2_code;
		__this->___mResponseStatus = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC9FF7DF449088F39987EDB8E79B680A07A2EAA5D_RuntimeMethod_var);
		__this->___mPayload = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A_AdjustorThunk (RuntimeObject* __this, int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, int32_t ___2_code, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A(_thisAdjusted, ___0_localClientId, ___1_remoteEndpointId, ___2_code, ___3_payload, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___mLocalClientId;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mRemoteEndpointId;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mResponseStatus;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412 (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_Rejected_mD0A91075C9090E4EF00E336FA82D2EC069A576E9 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_NetworkNotConnected_m41612438540005CB46CCB0048C489B2BAF3B152E (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 3, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_InternalError_m23D3F752F766877E6E68324C4A0125980FB5620A (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 2, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_EndpointNotConnected_mF377B36679277AEE245BA3EDB59BBF369C0C0891 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 4, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_Accepted_m89EE9E3AE0E682D3234BA4672F833FE761C250B3 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_payload, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_payload;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_AlreadyConnected_m7B791E20981EABA919ADEBC6ECDEF05FF78B5BC9 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 5, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__cctor_mE86F16BAB8025C75BD9A960B2480000142D74ED8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_mB850F559E773636931AE8E8BB406F9E071A05AE9 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)1168);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_m06F10C244B7648A9AF6DEC2D924B4D0E34DF3DAC (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)4096);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendReliable_m76E71D0583C0D38996E854A8769168F4AF3BDABA (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_recipientEndpointIds, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendUnreliable_mC4B80074F626D5847674B3648E72EF3087E7B2F0 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_recipientEndpointIds, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartAdvertising_m49366801C1FAD71979B5A41F77DF621135C78534 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___0_name, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_appIdentifiers, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_advertisingDuration, Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* ___3_resultCallback, Action_1_t40721379DC6360875470B0B47A7D930554D1A3D3* ___4_connectionRequestCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891((&V_0), (-1), L_0, NULL);
		Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* L_1 = ___3_resultCallback;
		AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAdvertising_m3D3508DDE307C7FD15A89DBABEC3AF90D5270781 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendConnectionRequest_m18FD298BEFC1B570FB52165C702785C48DAE16CE (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___0_name, String_t* ___1_remoteEndpointId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_payload, Action_1_t764690D8533B83F132388734EC2965A2712754D9* ___3_responseCallback, RuntimeObject* ___4_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645, NULL);
		Action_1_t764690D8533B83F132388734EC2965A2712754D9* L_0 = ___3_responseCallback;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_2;
		L_2 = ConnectionResponse_Rejected_mD0A91075C9090E4EF00E336FA82D2EC069A576E9(((int64_t)0), L_1, NULL);
		V_0 = L_2;
		Action_1_t764690D8533B83F132388734EC2965A2712754D9* L_3 = ___3_responseCallback;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_inline(L_3, L_4, NULL);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_AcceptConnectionRequest_mD23A49C3949ACD746CA25D7EC3118CCE6B5B200B (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___0_remoteEndpointId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_payload, RuntimeObject* ___2_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartDiscovery_m27D4A29F434992C265BEEF70A37B08C690928423 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___0_serviceId, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_advertisingTimeout, RuntimeObject* ___2_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopDiscovery_mCD7691DCFF1A6EA0BE827A7B5A04C78993A3B03C (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___0_serviceId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_RejectConnectionRequest_m71491AEA881C9442201F83167CBA053FAD8707DA (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___0_requestingEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_DisconnectFromEndpoint_m5AAC25B0A6D48E20D76A7C6005DEE63469B448FB (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___0_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAllConnections_mADE4ECCE02420B408DC199007C25B04CB3807261 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m6850ABCB49A11050904FFBBB82B2839D7D159EA0(_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalEndpointId_mC292A539D110A2F8AF9378C705B4FE33FF8AF0E7 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalDeviceId_m692C4FFAA7CE075E04D4212DAA9C825C2FFD675E (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetAppBundleId_mBE040E3049AA4526BD3E0F3507D48B581A3BF33F (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetServiceId_mC7C3070530CD97B9E2B5A3A7BCAADB9885FBAF2D (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient__ctor_mBEF7D59B77A5D0BE43018313BA7E25EA2381084F (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId = il2cpp_codegen_marshal_string(unmarshaled.___mEndpointId);
	marshaled.___mName = il2cpp_codegen_marshal_string(unmarshaled.___mName);
	marshaled.___mServiceId = il2cpp_codegen_marshal_string(unmarshaled.___mServiceId);
}
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled)
{
	unmarshaled.___mEndpointId = il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId));
	unmarshaled.___mName = il2cpp_codegen_marshal_string_result(marshaled.___mName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mName));
	unmarshaled.___mServiceId = il2cpp_codegen_marshal_string_result(marshaled.___mServiceId);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mServiceId));
}
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId);
	marshaled.___mEndpointId = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName);
	marshaled.___mName = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId);
	marshaled.___mServiceId = NULL;
}
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled)
{
	marshaled.___mEndpointId = il2cpp_codegen_marshal_bstring(unmarshaled.___mEndpointId);
	marshaled.___mName = il2cpp_codegen_marshal_bstring(unmarshaled.___mName);
	marshaled.___mServiceId = il2cpp_codegen_marshal_bstring(unmarshaled.___mServiceId);
}
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled)
{
	unmarshaled.___mEndpointId = il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId));
	unmarshaled.___mName = il2cpp_codegen_marshal_bstring_result(marshaled.___mName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mName));
	unmarshaled.___mServiceId = il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId));
}
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId);
	marshaled.___mEndpointId = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName);
	marshaled.___mName = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId);
	marshaled.___mServiceId = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, String_t* ___0_endpointId, String_t* ___1_name, String_t* ___2_serviceId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_endpointId;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A(L_0, Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		__this->___mEndpointId = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEndpointId), (void*)L_1);
		String_t* L_2 = ___1_name;
		String_t* L_3;
		L_3 = Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A(L_2, Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		__this->___mName = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName), (void*)L_3);
		String_t* L_4 = ___2_serviceId;
		String_t* L_5;
		L_5 = Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A(L_4, Misc_CheckNotNull_TisString_t_m3851D778DA6CC939EDE90168541E8EC9B61BE67A_RuntimeMethod_var);
		__this->___mServiceId = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mServiceId), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52_AdjustorThunk (RuntimeObject* __this, String_t* ___0_endpointId, String_t* ___1_name, String_t* ___2_serviceId, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52(_thisAdjusted, ___0_endpointId, ___1_name, ___2_serviceId, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mEndpointId;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mName;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mServiceId;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_pinvoke(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback));
	marshaled.___mLocalClientId = unmarshaled.___mLocalClientId;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_pinvoke_back(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId;
	unmarshaled.___mLocalClientId = unmarshaledmLocalClientId_temp_1;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_com(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback));
	marshaled.___mLocalClientId = unmarshaled.___mLocalClientId;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_com_back(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com& marshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId;
	unmarshaled.___mLocalClientId = unmarshaledmLocalClientId_temp_1;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_com_cleanup(NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___0_callback, int64_t ___1_localClientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_m773FC305843AFE5ECC1DC8DBC4370ACEBF99A19D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_0 = ___0_callback;
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_1;
		L_1 = Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_m773FC305843AFE5ECC1DC8DBC4370ACEBF99A19D(L_0, Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_m773FC305843AFE5ECC1DC8DBC4370ACEBF99A19D_RuntimeMethod_var);
		__this->___mInitializationCallback = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInitializationCallback), (void*)L_1);
		int64_t L_2 = ___1_localClientId;
		__this->___mLocalClientId = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E_AdjustorThunk (RuntimeObject* __this, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___0_callback, int64_t ___1_localClientId, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B*>(__this + _offset);
	NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E(_thisAdjusted, ___0_callback, ___1_localClientId, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28 (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___mLocalClientId;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40 (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) 
{
	{
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_0 = __this->___mInitializationCallback;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B*>(__this + _offset);
	Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m7B556E6AB4B2CCE3939135651F2DEC3194E33C4B (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, String_t* ___0_id, String_t* ___1_name, String_t* ___2_description, String_t* ___3_imageUrl, uint64_t ___4_currentCount, int32_t ___5_visibility, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		__this->___mId = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId), (void*)L_0);
		String_t* L_1 = ___1_name;
		__this->___mName = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName), (void*)L_1);
		String_t* L_2 = ___2_description;
		__this->___mDescription = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription), (void*)L_2);
		String_t* L_3 = ___3_imageUrl;
		__this->___mImageUrl = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mImageUrl), (void*)L_3);
		uint64_t L_4 = ___4_currentCount;
		__this->___mCurrentCount = L_4;
		int32_t L_5 = ___5_visibility;
		__this->___mVisibility = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Id_mDB059CFF41860171CDD4A0AC92E04A4BA1E9A0A7 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_mA37D7FB644CC50D5E90B72331502364EE90E66BE (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mName;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Description_m891BCB63ED187774CFEDD7545B6E0FB6E329B6D1 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mDescription;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_ImageUrl_mB0CEF2CD2D2A162D873B137C35A7EF859A236C18 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mImageUrl;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Event_get_CurrentCount_m1DBE8D3501BC0F8513428DA15EAEEF37558649F3 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___mCurrentCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_Visibility_m1943DA6E09E14FF4E57B99B6B013777F7F2845D3 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mVisibility;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mDescriptionUpdated;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mNewDescription;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mCoverImageUpdated;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069_inline (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3_inline (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mStatus;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2_inline (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mLocalEndpointName;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72_inline (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) 
{
	{
		EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C L_0 = __this->___mRemoteEndpoint;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0_inline (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___mLocalClientId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mRemoteEndpointId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mResponseStatus;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412_inline (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC_inline (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mEndpointId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8_inline (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mName;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094_inline (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mServiceId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28_inline (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___mLocalClientId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40_inline (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) 
{
	{
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_0 = __this->___mInitializationCallback;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_gshared_inline (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* __this, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_gshared_inline (Action_1_t764690D8533B83F132388734EC2965A2712754D9* __this, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
