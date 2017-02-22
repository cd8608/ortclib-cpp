// Generated by zsLibEventingTool

#include "impl_org_ortc_RTCIceGathererStats.h"

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
wrapper::impl::org::ortc::RTCIceGathererStats::RTCIceGathererStats()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceGathererStatsPtr wrapper::org::ortc::RTCIceGathererStats::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::RTCIceGathererStats>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCIceGathererStats::~RTCIceGathererStats()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::JsonPtr wrapper::impl::org::ortc::RTCIceGathererStats::toJson()
{
  wrapper::org::ortc::JsonPtr result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCIceGathererStats::hash()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::ortc::RTCIceGathererStats::get_timestamp()
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< wrapper::org::ortc::RTCStatsType > wrapper::impl::org::ortc::RTCIceGathererStats::get_statsType()
{
  Optional< wrapper::org::ortc::RTCStatsType > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCIceGathererStats::get_statsTypeOther()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCIceGathererStats::get_id()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceGathererStats::wrapper_init_org_ortc_RTCIceGathererStats()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceGathererStats::wrapper_init_org_ortc_RTCIceGathererStats(wrapper::org::ortc::RTCIceGathererStatsPtr source)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceGathererStats::wrapper_init_org_ortc_RTCIceGathererStats(wrapper::org::ortc::JsonPtr json)
{
}

//------------------------------------------------------------------------------
unsigned long long wrapper::impl::org::ortc::RTCIceGathererStats::get_bytesSent()
{
  unsigned long long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long long wrapper::impl::org::ortc::RTCIceGathererStats::get_bytesReceived()
{
  unsigned long long result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCIceGathererStats::get_rtcpGathererStatsId()
{
  String result {};
  return result;
}


