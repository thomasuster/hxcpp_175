#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GL
#include <openfl/_v2/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLBuffer
#include <openfl/_v2/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLFramebuffer
#include <openfl/_v2/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLProgram
#include <openfl/_v2/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLRenderbuffer
#include <openfl/_v2/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLTexture
#include <openfl/_v2/gl/GLTexture.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",14,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(18)
	Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::openfl::_v2::gl::GLObject Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",18,0x087e5c05)
			{
				HX_STACK_LINE(18)
				Dynamic value = ::openfl::_v2::gl::GL_obj::lime_gl_get_parameter((int)3379);		HX_STACK_VAR(value,"value");
				struct _Function_2_1{
					inline static ::openfl::_v2::gl::GLObject Block( Dynamic &value){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",18,0x087e5c05)
						{
							HX_STACK_LINE(18)
							switch( (int)((int)3379)){
								case (int)34964: case (int)34965: {
									HX_STACK_LINE(18)
									int _g = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(18)
									return ::openfl::_v2::gl::GLBuffer_obj::__new(_g,value);
								}
								;break;
								case (int)35725: {
									HX_STACK_LINE(18)
									int _g1 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(18)
									return ::openfl::_v2::gl::GLProgram_obj::__new(_g1,value);
								}
								;break;
								case (int)36006: {
									HX_STACK_LINE(18)
									int _g2 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(18)
									return ::openfl::_v2::gl::GLFramebuffer_obj::__new(_g2,value);
								}
								;break;
								case (int)36007: {
									HX_STACK_LINE(18)
									int _g3 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(18)
									return ::openfl::_v2::gl::GLRenderbuffer_obj::__new(_g3,value);
								}
								;break;
								case (int)32873: case (int)34068: {
									HX_STACK_LINE(18)
									int _g4 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(18)
									return ::openfl::_v2::gl::GLTexture_obj::__new(_g4,value);
								}
								;break;
								default: {
									HX_STACK_LINE(18)
									return value;
								}
							}
						}
						return null();
					}
				};
				HX_STACK_LINE(18)
				return _Function_2_1::Block(value);
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	_g5 = _Function_1_1::Block();
	HX_STACK_LINE(18)
	::haxe::Log_obj::trace(_g5,hx::SourceInfo(HX_CSTRING("Main.hx"),18,HX_CSTRING("Main"),HX_CSTRING("new")));
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Main_obj::__boot()
{
}

