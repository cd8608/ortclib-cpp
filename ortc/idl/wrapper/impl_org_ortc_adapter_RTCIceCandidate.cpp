// Generated by zsLibEventingTool

#include "impl_org_ortc_adapter_RTCIceCandidate.h"

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
wrapper::impl::org::ortc::adapter::RTCIceCandidate::RTCIceCandidate()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::RTCIceCandidatePtr wrapper::org::ortc::adapter::RTCIceCandidate::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::adapter::RTCIceCandidate>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::adapter::RTCIceCandidate::~RTCIceCandidate()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCIceCandidate::wrapper_init_org_ortc_adapter_RTCIceCandidate()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCIceCandidate::wrapper_init_org_ortc_adapter_RTCIceCandidate(wrapper::org::ortc::adapter::RTCIceCandidatePtr source)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCIceCandidate::wrapper_init_org_ortc_adapter_RTCIceCandidate(wrapper::org::ortc::JsonPtr json)
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::RTCIceCandidatePtr wrapper::org::ortc::adapter::RTCIceCandidate::fromSdpStringWithMLineIndex(
  String sdp,
  uint64_t mlineIndex
  )
{
  wrapper::org::ortc::adapter::RTCIceCandidatePtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::RTCIceCandidatePtr wrapper::org::ortc::adapter::RTCIceCandidate::fromSdpStringWithMid(
  String sdp,
  String mid
  )
{
  wrapper::org::ortc::adapter::RTCIceCandidatePtr result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::adapter::RTCIceCandidate::toSdp()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::JsonPtr wrapper::impl::org::ortc::adapter::RTCIceCandidate::toJson()
{
  wrapper::org::ortc::JsonPtr result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::adapter::RTCIceCandidate::hash()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::adapter::RTCIceCandidate::get_sdpMid()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCIceCandidate::set_sdpMid(String value)
{
}


