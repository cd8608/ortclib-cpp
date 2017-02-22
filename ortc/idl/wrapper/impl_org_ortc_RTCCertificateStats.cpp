// Generated by zsLibEventingTool

#include "impl_org_ortc_RTCCertificateStats.h"

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
wrapper::impl::org::ortc::RTCCertificateStats::RTCCertificateStats()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCCertificateStatsPtr wrapper::org::ortc::RTCCertificateStats::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::RTCCertificateStats>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCCertificateStats::~RTCCertificateStats()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::JsonPtr wrapper::impl::org::ortc::RTCCertificateStats::toJson()
{
  wrapper::org::ortc::JsonPtr result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCCertificateStats::hash()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::ortc::RTCCertificateStats::get_timestamp()
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< wrapper::org::ortc::RTCStatsType > wrapper::impl::org::ortc::RTCCertificateStats::get_statsType()
{
  Optional< wrapper::org::ortc::RTCStatsType > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCCertificateStats::get_statsTypeOther()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCCertificateStats::get_id()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCCertificateStats::wrapper_init_org_ortc_RTCCertificateStats()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCCertificateStats::wrapper_init_org_ortc_RTCCertificateStats(wrapper::org::ortc::RTCCertificateStatsPtr source)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCCertificateStats::wrapper_init_org_ortc_RTCCertificateStats(wrapper::org::ortc::JsonPtr json)
{
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCCertificateStats::get_fingerprint()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCCertificateStats::get_fingerprintAlgorithm()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCCertificateStats::get_base64Certificate()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCCertificateStats::get_issuerCertificateId()
{
  String result {};
  return result;
}


