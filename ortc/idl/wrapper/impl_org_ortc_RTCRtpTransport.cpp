// Generated by zsLibEventingTool

#include "impl_org_ortc_RTCRtpTransport.h"

using ::zsLib::String;
using ::zsLib::Optional;
using ::zsLib::Any;
using ::zsLib::AnyPtr;
using ::zsLib::AnyHolder;
using ::zsLib::Promise;
using ::zsLib::PromisePtr;
using ::zsLib::PromiseWithHolder;
using ::zsLib::PromiseWithHolderPtr;
using ::zsLib::eventing::SecureByteBlock;
using ::zsLib::eventing::SecureByteBlockPtr;
using ::std::shared_ptr;
using ::std::weak_ptr;
using ::std::make_shared;
using ::std::list;
using ::std::set;
using ::std::map;

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCRtpTransport::RTCRtpTransport()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCRtpTransportPtr wrapper::org::ortc::RTCRtpTransport::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::RTCRtpTransport>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCRtpTransport::~RTCRtpTransport()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpTransport::wrapper_init_org_ortc_RTCRtpTransport()
{
}


