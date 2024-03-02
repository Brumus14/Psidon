#pragma once

#include "Event.hpp"

namespace Psidon {
  class KeyPressedEvent : public Event {
  public:
    inline KeyPressedEvent(int keyCode) : mKeyCode(keyCode) {}

    inline static EventType GetStaticType() { return EventType::KeyPressed; }
    inline EventType GetType() const override { return GetStaticType(); }
    inline int GetKeyCode() const { return mKeyCode; }

  private:
    int mKeyCode;
  };

  class KeyReleasedEvent : public Event {
  public:
    inline KeyReleasedEvent(int keyCode) : mKeyCode(keyCode) {}

    inline static EventType GetStaticType() { return EventType::KeyReleased; }
    inline EventType GetType() const override { return GetStaticType(); }
    inline int GetKeyCode() const { return mKeyCode; }

  private:
    int mKeyCode;
  };
}
