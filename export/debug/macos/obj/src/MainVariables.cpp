// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainVariables
#include <MainVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f942a55e5a94e20f_64_Save,"MainVariables","Save",0xa874cead,"MainVariables.Save","MainVariables.hx",64,0x78e2fe60)
HX_LOCAL_STACK_FRAME(_hx_pos_f942a55e5a94e20f_68_Load,"MainVariables","Load",0xa3dedd96,"MainVariables.Load","MainVariables.hx",68,0x78e2fe60)
HX_LOCAL_STACK_FRAME(_hx_pos_f942a55e5a94e20f_132_UpdateColors,"MainVariables","UpdateColors",0x998aa009,"MainVariables.UpdateColors","MainVariables.hx",132,0x78e2fe60)
HX_LOCAL_STACK_FRAME(_hx_pos_f942a55e5a94e20f_59_boot,"MainVariables","boot",0xb2699b82,"MainVariables.boot","MainVariables.hx",59,0x78e2fe60)

void MainVariables_obj::__construct() { }

Dynamic MainVariables_obj::__CreateEmpty() { return new MainVariables_obj; }

void *MainVariables_obj::_hx_vtable = 0;

Dynamic MainVariables_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainVariables_obj > _hx_result = new MainVariables_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainVariables_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6024a05e;
}

 ::Dynamic MainVariables_obj::_variables;

::Array< ::Dynamic> MainVariables_obj::filters;

::Array< Float > MainVariables_obj::matrix;

void MainVariables_obj::Save(){
            	HX_STACKFRAME(&_hx_pos_f942a55e5a94e20f_64_Save)
HXDLIN(  64)		 ::Dynamic replacer = null();
HXDLIN(  64)		::String space = null();
HXDLIN(  64)		::sys::io::File_obj::saveContent(HX_("config.json",54,db,08,a4),::haxe::format::JsonPrinter_obj::print(::MainVariables_obj::_variables,replacer,space));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainVariables_obj,Save,(void))

void MainVariables_obj::Load(){
            	HX_GC_STACKFRAME(&_hx_pos_f942a55e5a94e20f_68_Load)
HXLINE(  70)		if (!(::sys::FileSystem_obj::exists(HX_("config.json",54,db,08,a4)))) {
HXLINE(  72)			::MainVariables_obj::_variables =  ::Dynamic(::hx::Anon_obj::Create(36)
            				->setFixed(0,HX_("fpsCounter",13,ce,9d,83),true)
            				->setFixed(1,HX_("filter",b8,1f,35,85),HX_("none",b8,12,0a,49))
            				->setFixed(2,HX_("spamPrevention",19,9a,fd,87),false)
            				->setFixed(3,HX_("vvolume",d0,e6,37,8a),100)
            				->setFixed(4,HX_("songPosition",9e,dd,3b,8d),true)
            				->setFixed(5,HX_("gamma",27,87,b6,8e),( (Float)(1) ))
            				->setFixed(6,HX_("cameraZoom",58,cc,16,b7),( (Float)(1) ))
            				->setFixed(7,HX_("comboP",42,1c,26,c7),true)
            				->setFixed(8,HX_("scoreDisplay",10,cd,4e,c8),true)
            				->setFixed(9,HX_("watermark",a4,af,1e,e0),true)
            				->setFixed(10,HX_("fullscreen",3b,3a,b4,f9),false)
            				->setFixed(11,HX_("cutscene",8a,1c,09,fa),true)
            				->setFixed(12,HX_("noteOffset",25,a5,53,fe),0)
            				->setFixed(13,HX_("fps",e9,c7,4d,00),60)
            				->setFixed(14,HX_("nps",f1,d9,53,00),true)
            				->setFixed(15,HX_("firstTime",5d,48,cb,03),true)
            				->setFixed(16,HX_("memory",01,cb,bf,04),true)
            				->setFixed(17,HX_("rainbow",36,01,40,0b),false)
            				->setFixed(18,HX_("svolume",8d,82,77,0d),100)
            				->setFixed(19,HX_("music",a5,d0,5a,10),HX_("classic",12,52,91,69))
            				->setFixed(20,HX_("mvolume",07,ba,f6,13),100)
            				->setFixed(21,HX_("muteMiss",75,ce,dd,17),true)
            				->setFixed(22,HX_("accuracyDisplay",09,75,5e,26),true)
            				->setFixed(23,HX_("accuracyType",93,35,79,37),HX_("complex",30,66,71,83))
            				->setFixed(24,HX_("comboDisplay",94,ef,11,43),true)
            				->setFixed(25,HX_("scroll",0d,d8,64,47),HX_("up",5b,66,00,00))
            				->setFixed(26,HX_("missesDisplay",f8,70,5a,63),true)
            				->setFixed(27,HX_("brightness",d1,8d,71,65),0)
            				->setFixed(28,HX_("ratingDisplay",a5,8b,36,6c),true)
            				->setFixed(29,HX_("resolution",2c,35,49,6d),( (Float)(1) ))
            				->setFixed(30,HX_("lateD",5e,b6,bc,6f),false)
            				->setFixed(31,HX_("cameraSpeed",a2,8a,af,75),( (Float)(1) ))
            				->setFixed(32,HX_("sickX",da,99,c7,7c),( (Float)(650) ))
            				->setFixed(33,HX_("sickY",db,99,c7,7c),( (Float)(320) ))
            				->setFixed(34,HX_("iconZoom",2c,67,00,7e),( (Float)(1) ))
            				->setFixed(35,HX_("timingDisplay",d8,04,9e,7f),true));
HXLINE( 112)			::MainVariables_obj::Save();
            		}
            		else {
HXLINE( 116)			::String data = ::sys::io::File_obj::getContent(HX_("config.json",54,db,08,a4));
HXLINE( 117)			::MainVariables_obj::_variables =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
            		}
HXLINE( 120)		::flixel::FlxG_obj::resizeWindow(::Math_obj::round((( (Float)(::flixel::FlxG_obj::width) ) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("resolution",2c,35,49,6d),::hx::paccDynamic)) ))),::Math_obj::round((( (Float)(::flixel::FlxG_obj::height) ) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("resolution",2c,35,49,6d),::hx::paccDynamic)) ))));
HXLINE( 121)		::flixel::FlxG_obj::set_fullscreen(( (bool)(::MainVariables_obj::_variables->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) ));
HXLINE( 122)		::flixel::FlxG_obj::set_drawFramerate(( (int)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ));
HXLINE( 123)		::flixel::FlxG_obj::set_updateFramerate(( (int)(::MainVariables_obj::_variables->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ));
HXLINE( 124)		::Main_obj::toggleFPS(( (bool)(::MainVariables_obj::_variables->__Field(HX_("fpsCounter",13,ce,9d,83),::hx::paccDynamic)) ));
HXLINE( 125)		::Main_obj::toggleMem(( (bool)(::MainVariables_obj::_variables->__Field(HX_("memory",01,cb,bf,04),::hx::paccDynamic)) ));
HXLINE( 126)		::Main_obj::watermark->set_visible(( (bool)(::MainVariables_obj::_variables->__Field(HX_("watermark",a4,af,1e,e0),::hx::paccDynamic)) ));
HXLINE( 128)		::MainVariables_obj::UpdateColors();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainVariables_obj,Load,(void))

void MainVariables_obj::UpdateColors(){
            	HX_GC_STACKFRAME(&_hx_pos_f942a55e5a94e20f_132_UpdateColors)
HXLINE( 133)		::MainVariables_obj::filters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 135)		::String _hx_switch_0 = ( (::String)(::MainVariables_obj::_variables->__Field(HX_("filter",b8,1f,35,85),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("deutranopia",78,9c,68,74)) ){
HXLINE( 159)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0,(((Float)0.43) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(1,(((Float)0.72) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(2,(((Float)-.15) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(3,0)->init(4, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(5,(((Float)0.34) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(6,(((Float)0.57) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(7,(((Float)0.09) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(8,0)->init(9, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(10,(((Float)-.02) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(11,(((Float)0.03) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(12, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)))->init(13,0)->init(14, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 159)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("downer",4f,ad,26,34)) ){
HXLINE( 180)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0,0)->init(1,0)->init(2,0)->init(3,0)->init(4,0)->init(5,0)->init(6,0)->init(7,0)->init(8,0)->init(9,0)->init(10,0)->init(11,0)->init(12,(((Float)1.5) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(13,0)->init(14, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 180)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("gameboy",5a,4d,7b,89)) ){
HXLINE( 173)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0,0)->init(1,0)->init(2,0)->init(3,0)->init(4,0)->init(5,0)->init(6,(((Float)1.5) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(7,0)->init(8,0)->init(9, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(10,0)->init(11,0)->init(12,0)->init(13,0)->init(14,0)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 173)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("grayscale",c7,87,37,f3)) ){
HXLINE( 187)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(1,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(2,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(3,0)->init(4, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(5,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(6,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(7,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(8,0)->init(9, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(10,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(11,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(12,(((Float).3) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(13,0)->init(14, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 187)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE( 138)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)))->init(1,0)->init(2,0)->init(3,0)->init(4, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(5,0)->init(6, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)))->init(7,0)->init(8,0)->init(9, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(10,0)->init(11,0)->init(12, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)))->init(13,0)->init(14, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 138)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("protanopia",8d,55,14,1d)) ){
HXLINE( 152)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0,(((Float)0.20) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(1,(((Float)0.99) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(2,(((Float)-.19) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(3,0)->init(4, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(5,(((Float)0.16) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(6,(((Float)0.79) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(7,(((Float)0.04) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(8,0)->init(9, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(10,(((Float)0.01) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(11,(((Float)-.01) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(12, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)))->init(13,0)->init(14, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 152)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("tritanopia",4f,88,0f,c7)) ){
HXLINE( 145)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0,(((Float)0.20) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(1,(((Float)0.99) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(2,(((Float)-.19) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(3,0)->init(4, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(5,(((Float)0.16) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(6,(((Float)0.79) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(7,(((Float)0.04) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(8,0)->init(9, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(10,(((Float)0.01) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(11,(((Float)-.01) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(12, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)))->init(13,0)->init(14, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 145)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("virtual boy",77,91,12,2e)) ){
HXLINE( 166)			::MainVariables_obj::matrix = ::Array_obj< Float >::__new(20)->init(0,(((Float)0.9) * ( (Float)(::MainVariables_obj::_variables->__Field(HX_("gamma",27,87,b6,8e),::hx::paccDynamic)) )))->init(1,0)->init(2,0)->init(3,0)->init(4, ::Dynamic(::MainVariables_obj::_variables->__Field(HX_("brightness",d1,8d,71,65),::hx::paccDynamic)))->init(5,0)->init(6,0)->init(7,0)->init(8,0)->init(9,0)->init(10,0)->init(11,0)->init(12,0)->init(13,0)->init(14,0)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0);
HXDLIN( 166)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
HXLINE( 195)		::Array< ::Dynamic> _hx_tmp = ::MainVariables_obj::filters;
HXDLIN( 195)		_hx_tmp->push( ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,::MainVariables_obj::matrix));
HXLINE( 196)		::flixel::FlxG_obj::game->filtersEnabled = true;
HXLINE( 197)		::flixel::FlxG_obj::game->setFilters(::MainVariables_obj::filters);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainVariables_obj,UpdateColors,(void))


MainVariables_obj::MainVariables_obj()
{
}

bool MainVariables_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Save") ) { outValue = Save_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"Load") ) { outValue = Load_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = ( matrix ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { outValue = ( filters ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_variables") ) { outValue = ( _variables ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"UpdateColors") ) { outValue = UpdateColors_dyn(); return true; }
	}
	return false;
}

bool MainVariables_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=ioValue.Cast< ::Array< Float > >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_variables") ) { _variables=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MainVariables_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MainVariables_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &MainVariables_obj::_variables,HX_("_variables",78,5e,05,de)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &MainVariables_obj::filters,HX_("filters",bb,a1,46,09)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &MainVariables_obj::matrix,HX_("matrix",41,36,c8,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MainVariables_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainVariables_obj::_variables,"_variables");
	HX_MARK_MEMBER_NAME(MainVariables_obj::filters,"filters");
	HX_MARK_MEMBER_NAME(MainVariables_obj::matrix,"matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainVariables_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainVariables_obj::_variables,"_variables");
	HX_VISIT_MEMBER_NAME(MainVariables_obj::filters,"filters");
	HX_VISIT_MEMBER_NAME(MainVariables_obj::matrix,"matrix");
};

#endif

::hx::Class MainVariables_obj::__mClass;

static ::String MainVariables_obj_sStaticFields[] = {
	HX_("_variables",78,5e,05,de),
	HX_("filters",bb,a1,46,09),
	HX_("matrix",41,36,c8,bb),
	HX_("Save",5d,b7,26,37),
	HX_("Load",46,c6,90,32),
	HX_("UpdateColors",b9,b8,5c,8e),
	::String(null())
};

void MainVariables_obj::__register()
{
	MainVariables_obj _hx_dummy;
	MainVariables_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainVariables",1e,8b,dd,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainVariables_obj::__GetStatic;
	__mClass->mSetStaticField = &MainVariables_obj::__SetStatic;
	__mClass->mMarkFunc = MainVariables_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainVariables_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MainVariables_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainVariables_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainVariables_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainVariables_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainVariables_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f942a55e5a94e20f_59_boot)
HXDLIN(  59)		filters = ::Array_obj< ::Dynamic>::__new(0);
            	}
}
