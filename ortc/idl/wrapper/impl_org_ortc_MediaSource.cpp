// Generated by zsLibEventingTool

#include "impl_org_ortc_MediaSource.h"

using ::zsLib::String;
using ::zsLib::Optional;
using ::zsLib::Any;
using ::zsLib::AnyPtr;
using ::zsLib::Promise;
using ::zsLib::PromisePtr;
using ::zsLib::PromiseWith;
using ::zsLib::eventing::SecureByteBlock;
using ::zsLib::eventing::SecureByteBlockPtr;
using ::std::shared_ptr;
using ::std::weak_ptr;
using ::std::make_shared;
using ::std::list;
using ::std::set;
using ::std::map;

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::MediaSource::MediaSource()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::MediaSourcePtr wrapper::org::ortc::MediaSource::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::MediaSource>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::MediaSource::~MediaSource()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::MediaSource::wrapper_init_org_ortc_MediaSource()
{
}

//------------------------------------------------------------------------------
AnyPtr wrapper::impl::org::ortc::MediaSource::get_source()
{
  AnyPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::MediaSource::set_source(AnyPtr value)
{
}

//------------------------------------------------------------------------------
AnyPtr wrapper::impl::org::ortc::MediaSource::get_track()
{
  AnyPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::MediaSource::set_track(AnyPtr value)
{
}


