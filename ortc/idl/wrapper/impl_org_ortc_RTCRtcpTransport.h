// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCRtcpTransport.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCRtcpTransport : public wrapper::org::ortc::RTCRtcpTransport
        {
          RTCRtcpTransportWeakPtr thisWeak_;

          RTCRtcpTransport();
          virtual ~RTCRtcpTransport();
          virtual void wrapper_init_org_ortc_RTCRtcpTransport() override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

