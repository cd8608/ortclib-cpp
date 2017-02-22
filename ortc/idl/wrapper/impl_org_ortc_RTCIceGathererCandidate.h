// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCIceGathererCandidate.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCIceGathererCandidate : public wrapper::org::ortc::RTCIceGathererCandidate
        {
          RTCIceGathererCandidateWeakPtr thisWeak_;

          RTCIceGathererCandidate();
          virtual ~RTCIceGathererCandidate();

          // methods RTCIceGathererCandidate
          virtual wrapper::org::ortc::JsonPtr toJson() override;
          virtual String hash() override;
          virtual void wrapper_init_org_ortc_RTCIceGathererCandidate() override;

          // properties RTCIceGathererCandidate
          virtual wrapper::org::ortc::RTCIceComponent get_component() override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

