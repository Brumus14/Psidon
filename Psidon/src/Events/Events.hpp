#pragma once

#include <functional>
#include <unordered_map>
#include <vector>

namespace Psi {
  enum EventType {
    WindowClose,
    KeyPressed,
    KeyReleased
  };

  class Event {
  public:
    bool handled;

    virtual EventType GetType() const = 0;
  };

  class WindowCloseEvent : public Event {
  public:
    inline EventType GetType() const override { return EventType::WindowClose; }
  };

  class KeyPressedEvent : public Event {
  public:
    int keyCode;

    inline EventType GetType() const override { return EventType::KeyPressed; }
  };

  class KeyReleasedEvent : public Event {
  public:
    int keyCode;

    inline EventType GetType() const override { return EventType::KeyReleased; }
  };

  class Events {
  public:
    static void AddHandler(EventType type, std::function<void(const Event &)> && handler);
    static void RemoveHandler(EventType type, std::function<void(const Event &)> && handler);

    static void Dispatch(const Event & event);

  private:
    static std::unordered_map<EventType, std::vector<std::function<void(const Event &)>>> mHandlers;
  };
}
