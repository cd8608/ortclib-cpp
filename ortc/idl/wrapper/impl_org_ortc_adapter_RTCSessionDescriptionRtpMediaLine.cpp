// Generated by zsLibEventingTool

#include "impl_org_ortc_adapter_RTCSessionDescriptionRtpMediaLine.h"

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
wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::RTCSessionDescriptionRtpMediaLine()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::RTCSessionDescriptionRtpMediaLinePtr wrapper::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::~RTCSessionDescriptionRtpMediaLine()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::JsonPtr wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::toJson()
{
  wrapper::org::ortc::JsonPtr result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::hash()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::wrapper_init_org_ortc_adapter_RTCSessionDescriptionRtpMediaLine()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::wrapper_init_org_ortc_adapter_RTCSessionDescriptionRtpMediaLine(wrapper::org::ortc::adapter::RTCSessionDescriptionRtpMediaLinePtr source)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::wrapper_init_org_ortc_adapter_RTCSessionDescriptionRtpMediaLine(wrapper::org::ortc::JsonPtr json)
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCRtpCapabilitiesPtr wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::get_senderCapabilities()
{
  wrapper::org::ortc::RTCRtpCapabilitiesPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::set_senderCapabilities(wrapper::org::ortc::RTCRtpCapabilitiesPtr value)
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCRtpCapabilitiesPtr wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::get_receiverCapabilities()
{
  wrapper::org::ortc::RTCRtpCapabilitiesPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::RTCSessionDescriptionRtpMediaLine::set_receiverCapabilities(wrapper::org::ortc::RTCRtpCapabilitiesPtr value)
{
}


