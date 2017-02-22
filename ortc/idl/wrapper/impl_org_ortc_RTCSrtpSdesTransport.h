// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCSrtpSdesTransport.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCSrtpSdesTransport : public wrapper::org::ortc::RTCSrtpSdesTransport
        {
          RTCSrtpSdesTransportWeakPtr thisWeak_;

          RTCSrtpSdesTransport();
          virtual ~RTCSrtpSdesTransport();

          // methods RTCStatsProvider
          virtual shared_ptr< PromiseWith< wrapper::org::ortc::RTCStatsReportPtr > > getStats(wrapper::org::ortc::RTCStatsTypeSetPtr statTypes) override;

          // methods RTCSrtpSdesTransport
          virtual void wrapper_init_org_ortc_RTCSrtpSdesTransport(
            wrapper::org::ortc::RTCIceTransportPtr iceTransport,
            wrapper::org::ortc::RTCSrtpSdesCryptoParametersPtr encryptParameters,
            wrapper::org::ortc::RTCSrtpSdesCryptoParametersPtr decryptParameters
            ) override;
          virtual void stop() override;

          // properties RTCSrtpSdesTransport
          virtual uint64_t get_objectId() override;
          virtual wrapper::org::ortc::RTCIceTransportPtr get_transport() override;
          virtual wrapper::org::ortc::RTCIceTransportPtr get_rtcpTransport() override;

          virtual void wrapper_onObserverCountChanged(size_t count) override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

