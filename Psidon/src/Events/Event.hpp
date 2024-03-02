#pragma once

#include <functional>

namespace Psidon {
  enum EventType {
    WindowClose,
    KeyPressed,
    KeyReleased
  };

  class Event {
  public:
    virtual EventType GetType() const;
    inline bool Handled() { return mHandled; }

  private:
    bool mHandled = false;
  };

  class EventDispatcher {
  public:
    inline EventDispatcher(Event & event) : mEvent(event) {}

    template<typename T>
    inline void Dispatch(const std::function<void(T&)> & function) {
      if (mEvent.GetType() == T::GetStaticType()) {
      }
    }

  private:
    Event & mEvent;
  };
}
