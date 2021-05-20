// Generated by Haxe 4.1.5
#ifndef INCLUDED_ModifierVariables
#define INCLUDED_ModifierVariables

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ModifierVariables)



class HXCPP_CLASS_ATTRIBUTES ModifierVariables_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ModifierVariables_obj OBJ_;
		ModifierVariables_obj();

	public:
		enum { _hx_ClassId = 0x7b89b980 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ModifierVariables")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ModifierVariables"); }

		inline static ::hx::ObjectPtr< ModifierVariables_obj > __new() {
			::hx::ObjectPtr< ModifierVariables_obj > __this = new ModifierVariables_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ModifierVariables_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ModifierVariables_obj *__this = (ModifierVariables_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModifierVariables_obj), false, "ModifierVariables"));
			*(void **)__this = ModifierVariables_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModifierVariables_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModifierVariables",40,04,ef,2b); }

		static  ::Dynamic _modifiers;
		static void updateModifiers();
		static ::Dynamic updateModifiers_dyn();

		static void saveCurrent();
		static ::Dynamic saveCurrent_dyn();

		static void savePreset(::String input);
		static ::Dynamic savePreset_dyn();

		static void loadPreset(::String input);
		static ::Dynamic loadPreset_dyn();

		static void loadCurrent();
		static ::Dynamic loadCurrent_dyn();

		static void replaceValues();
		static ::Dynamic replaceValues_dyn();

		static void nullify();
		static ::Dynamic nullify_dyn();

		static void modifierSetup();
		static ::Dynamic modifierSetup_dyn();

};


#endif /* INCLUDED_ModifierVariables */ 