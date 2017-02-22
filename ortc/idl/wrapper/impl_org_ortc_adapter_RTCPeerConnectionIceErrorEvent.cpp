// Generated by zsLibEventingTool

#include "impl_org_ortc_adapter_RTCPeerConnectionIceErrorEvent.h"

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
wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::RTCPeerConnectionIceErrorEvent()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::RTCPeerConnectionIceErrorEventPtr wrapper::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::~RTCPeerConnectionIceErrorEvent()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::wrapper_init_org_ortc_adapter_RTCPeerConnectionIceErrorEvent()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::RTCIceCandidatePtr wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::get_hostCandidate()
{
  wrapper::org::ortc::adapter::RTCIceCandidatePtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::set_hostCandidate(wrapper::org::ortc::adapter::RTCIceCandidatePtr value)
{
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::get_url()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::set_url(String value)
{
}

//------------------------------------------------------------------------------
Optional< uint16_t > wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::get_errorCode()
{
  Optional< uint16_t > result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::set_errorCode(Optional< uint16_t > value)
{
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::get_errorText()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCPeerConnectionIceErrorEvent::set_errorText(String value)
{
}


