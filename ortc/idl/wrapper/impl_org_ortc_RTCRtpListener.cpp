// Generated by zsLibEventingTool

#include "impl_org_ortc_RTCRtpListener.h"

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
wrapper::impl::org::ortc::RTCRtpListener::RTCRtpListener()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCRtpListenerPtr wrapper::org::ortc::RTCRtpListener::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::RTCRtpListener>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCRtpListener::~RTCRtpListener()
{
}

//------------------------------------------------------------------------------
shared_ptr< PromiseWithHolderPtr< wrapper::org::ortc::RTCStatsReportPtr > > wrapper::impl::org::ortc::RTCRtpListener::getStats(wrapper::org::ortc::RTCStatsTypeSetPtr statTypes)
{
  shared_ptr< PromiseWithHolderPtr< wrapper::org::ortc::RTCStatsReportPtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpListener::wrapper_init_org_ortc_RTCRtpListener(wrapper::org::ortc::RTCRtpTransportPtr transport)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpListener::wrapper_init_org_ortc_RTCRtpListener(
  wrapper::org::ortc::RTCRtpTransportPtr transport,
  shared_ptr< list< wrapper::org::ortc::RTCRtpHeaderExtensionParametersPtr > > headerExtensions
  )
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpListener::setHeaderExtensions(shared_ptr< list< wrapper::org::ortc::RTCRtpHeaderExtensionParametersPtr > > headerExtensions)
{
}

//------------------------------------------------------------------------------
uint64_t wrapper::impl::org::ortc::RTCRtpListener::get_objectId()
{
  uint64_t result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCRtpTransportPtr wrapper::impl::org::ortc::RTCRtpListener::get_transport()
{
  wrapper::org::ortc::RTCRtpTransportPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpListener::wrapper_onObserverCountChanged(size_t count)
{
}


