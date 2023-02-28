#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// FilterBackgroundSound
struct FilterBackgroundSound_tA5C0EFE6DA19BB94076A257D4A61FC76AFBD4DAC;
// GameSounds
struct GameSounds_tE160CF1666886E9284AD9EE66D97E21ECF8975B7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_mC420EB1F9C8B83D80E71433667A23379B343D8FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_m9F8683A8B36A02FD32E3B8345B770A2A35B5E235_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t74B9B8C0B978A7916E20CF678BFE9575C30EE6B7 
{
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// FilterBackgroundSound
struct FilterBackgroundSound_tA5C0EFE6DA19BB94076A257D4A61FC76AFBD4DAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioLowPassFilter FilterBackgroundSound::low
	AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* ___low_4;
	// UnityEngine.AudioHighPassFilter FilterBackgroundSound::high
	AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* ___high_5;
	// System.Int32 FilterBackgroundSound::low_cutoff
	int32_t ___low_cutoff_6;
	// System.Int32 FilterBackgroundSound::high_cutoff
	int32_t ___high_cutoff_7;
	// System.Single FilterBackgroundSound::transition_time
	float ___transition_time_8;
	// System.Single FilterBackgroundSound::_time
	float ____time_9;
	// System.Boolean FilterBackgroundSound::enableTransition
	bool ___enableTransition_10;
};

// GameSounds
struct GameSounds_tE160CF1666886E9284AD9EE66D97E21ECF8975B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource GameSounds::BallCorrectHitAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BallCorrectHitAudio_4;
	// UnityEngine.AudioSource GameSounds::BallWrongHitAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BallWrongHitAudio_5;
};

// <Module>

// <Module>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.AudioHighPassFilter

// UnityEngine.AudioHighPassFilter

// UnityEngine.AudioLowPassFilter

// UnityEngine.AudioLowPassFilter

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// FilterBackgroundSound

// FilterBackgroundSound

// GameSounds

// GameSounds
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.AudioLowPassFilter>()
inline AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* Component_GetComponent_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_m9F8683A8B36A02FD32E3B8345B770A2A35B5E235 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioHighPassFilter>()
inline AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* Component_GetComponent_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_mC420EB1F9C8B83D80E71433667A23379B343D8FA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioLowPassFilter::set_cutoffFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioHighPassFilter::set_cutoffFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void FilterBackgroundSound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterBackgroundSound_Start_m2262E10EE5026DB4D642E69C4B0AD77CA955797B (FilterBackgroundSound_tA5C0EFE6DA19BB94076A257D4A61FC76AFBD4DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_mC420EB1F9C8B83D80E71433667A23379B343D8FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_m9F8683A8B36A02FD32E3B8345B770A2A35B5E235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// low = GetComponent<AudioLowPassFilter>();
		AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* L_0;
		L_0 = Component_GetComponent_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_m9F8683A8B36A02FD32E3B8345B770A2A35B5E235(__this, Component_GetComponent_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_m9F8683A8B36A02FD32E3B8345B770A2A35B5E235_RuntimeMethod_var);
		__this->___low_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___low_4), (void*)L_0);
		// high = GetComponent<AudioHighPassFilter>();
		AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* L_1;
		L_1 = Component_GetComponent_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_mC420EB1F9C8B83D80E71433667A23379B343D8FA(__this, Component_GetComponent_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_mC420EB1F9C8B83D80E71433667A23379B343D8FA_RuntimeMethod_var);
		__this->___high_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___high_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void FilterBackgroundSound::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterBackgroundSound_Update_m92A866B9280BF4E93EA48BC4C7D79DF2C05305EA (FilterBackgroundSound_tA5C0EFE6DA19BB94076A257D4A61FC76AFBD4DAC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (enableTransition)
		bool L_0 = __this->___enableTransition_10;
		if (!L_0)
		{
			goto IL_0071;
		}
	}
	{
		// if (_time <= transition_time)
		float L_1 = __this->____time_9;
		float L_2 = __this->___transition_time_8;
		if ((!(((float)L_1) <= ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		// _time += Time.deltaTime;
		float L_3 = __this->____time_9;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____time_9 = ((float)il2cpp_codegen_add(L_3, L_4));
	}

IL_0028:
	{
		// float perc = _time / transition_time;
		float L_5 = __this->____time_9;
		float L_6 = __this->___transition_time_8;
		V_0 = ((float)(L_5/L_6));
		// low.cutoffFrequency = Mathf.Lerp(22000.0f, high_cutoff, perc);
		AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* L_7 = __this->___low_4;
		int32_t L_8 = __this->___high_cutoff_7;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((22000.0f), ((float)L_8), L_9, NULL);
		NullCheck(L_7);
		AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050(L_7, L_10, NULL);
		// high.cutoffFrequency = Mathf.Lerp(0.0f, low_cutoff, perc);
		AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* L_11 = __this->___high_5;
		int32_t L_12 = __this->___low_cutoff_6;
		float L_13 = V_0;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), ((float)L_12), L_13, NULL);
		NullCheck(L_11);
		AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C(L_11, L_14, NULL);
		return;
	}

IL_0071:
	{
		// if (_time >= 0.0f)
		float L_15 = __this->____time_9;
		if ((!(((float)L_15) >= ((float)(0.0f)))))
		{
			goto IL_00d9;
		}
	}
	{
		// _time -= Time.deltaTime;
		float L_16 = __this->____time_9;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____time_9 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		// float perc = _time / transition_time;
		float L_18 = __this->____time_9;
		float L_19 = __this->___transition_time_8;
		V_1 = ((float)(L_18/L_19));
		// low.cutoffFrequency = Mathf.Lerp(22000.0f, high_cutoff, perc);
		AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* L_20 = __this->___low_4;
		int32_t L_21 = __this->___high_cutoff_7;
		float L_22 = V_1;
		float L_23;
		L_23 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((22000.0f), ((float)L_21), L_22, NULL);
		NullCheck(L_20);
		AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050(L_20, L_23, NULL);
		// high.cutoffFrequency = Mathf.Lerp(0.0f, low_cutoff, perc);
		AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* L_24 = __this->___high_5;
		int32_t L_25 = __this->___low_cutoff_6;
		float L_26 = V_1;
		float L_27;
		L_27 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), ((float)L_25), L_26, NULL);
		NullCheck(L_24);
		AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C(L_24, L_27, NULL);
		return;
	}

IL_00d9:
	{
		// enableTransition = false;
		__this->___enableTransition_10 = (bool)0;
		// }
		return;
	}
}
// System.Void FilterBackgroundSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterBackgroundSound__ctor_m1F5B87C1E9327965D63796A4C903576202A151F8 (FilterBackgroundSound_tA5C0EFE6DA19BB94076A257D4A61FC76AFBD4DAC* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int low_cutoff = 2500;
		__this->___low_cutoff_6 = ((int32_t)2500);
		// [SerializeField] private int high_cutoff = 6500;
		__this->___high_cutoff_7 = ((int32_t)6500);
		// [SerializeField, Range(0.0f, 1.0f)] private float transition_time = 1.0f;
		__this->___transition_time_8 = (1.0f);
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
// System.Void GameSounds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSounds_Start_m2AD4942A805E7F90999EC30174F94AA1A86C051E (GameSounds_tE160CF1666886E9284AD9EE66D97E21ECF8975B7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameSounds::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSounds_Update_m44B89C6606A03106547113B1A1D59122AD0EEDF6 (GameSounds_tE160CF1666886E9284AD9EE66D97E21ECF8975B7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameSounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSounds__ctor_m2DF83A9D651B82A8B5005DED697947B44A1C0B6F (GameSounds_tE160CF1666886E9284AD9EE66D97E21ECF8975B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
