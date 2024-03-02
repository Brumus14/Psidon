#pragma once

#include "Event.hpp"

namespace Psidon {
  class WindowCloseEvent : public Event {
  public:
    inline WindowCloseEvent() {}

    inline EventType GetType() const { return EventType::WindowClose; }
  };
}
