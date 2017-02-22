// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCDtlsFingerprint.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCDtlsFingerprint : public wrapper::org::ortc::RTCDtlsFingerprint
        {
          RTCDtlsFingerprintWeakPtr thisWeak_;

          RTCDtlsFingerprint();
          virtual ~RTCDtlsFingerprint();

          // methods RTCDtlsFingerprint
          virtual void wrapper_init_org_ortc_RTCDtlsFingerprint() override;
          virtual void wrapper_init_org_ortc_RTCDtlsFingerprint(wrapper::org::ortc::RTCDtlsFingerprintPtr source) override;
          virtual void wrapper_init_org_ortc_RTCDtlsFingerprint(wrapper::org::ortc::JsonPtr json) override;
          virtual wrapper::org::ortc::JsonPtr toJson() override;
          virtual String hash() override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

