// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCSctpTransport.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCSctpTransport : public wrapper::org::ortc::RTCSctpTransport
        {
          RTCSctpTransportWeakPtr thisWeak_;

          RTCSctpTransport();
          virtual ~RTCSctpTransport();

          // methods RTCStatsProvider
          virtual shared_ptr< PromiseWithHolderPtr< wrapper::org::ortc::RTCStatsReportPtr > > getStats(wrapper::org::ortc::RTCStatsTypeSetPtr statTypes) override;

          // methods RTCSctpTransport
          virtual void wrapper_init_org_ortc_RTCSctpTransport(wrapper::org::ortc::RTCDtlsTransportPtr transport) override;
          virtual void wrapper_init_org_ortc_RTCSctpTransport(
            wrapper::org::ortc::RTCDtlsTransportPtr transport,
            uint16_t localPort
            ) override;
          virtual void start(wrapper::org::ortc::RTCSctpCapabilitiesPtr remoteCapabilities) override;
          virtual void start(
            wrapper::org::ortc::RTCSctpCapabilitiesPtr remoteCapabilities,
            uint16_t remotePort
            ) override;
          virtual void stop() override;

          // properties RTCSctpTransport
          virtual uint64_t get_objectId() override;
          virtual wrapper::org::ortc::RTCDtlsTransportPtr get_transport() override;
          virtual wrapper::org::ortc::RTCSctpTransportState get_state() override;
          virtual uint16_t get_port() override;
          virtual uint16_t get_localPort() override;
          virtual Optional< uint16_t > get_remotePort() override;

          virtual void wrapper_onObserverCountChanged(size_t count) override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

