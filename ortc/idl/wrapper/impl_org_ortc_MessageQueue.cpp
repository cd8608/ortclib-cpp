// Generated by zsLibEventingTool

#include "impl_org_ortc_MessageQueue.h"

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
wrapper::impl::org::ortc::MessageQueue::MessageQueue()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::MessageQueuePtr wrapper::org::ortc::MessageQueue::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::MessageQueue>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::MessageQueue::~MessageQueue()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::MessageQueuePtr wrapper::org::ortc::MessageQueue::getDefaultForUi()
{
  wrapper::org::ortc::MessageQueuePtr result {};
  return result;
}


