#pragma once

#include <functional>
#include <unordered_map>
#include <vector>

namespace Psidon {
  enum EventType {
    WindowClose,
    KeyPressed,
    KeyReleased
  };

  class Event {
  public:
    virtual EventType GetType() const = 0;
  };

  class WindowCloseEvent : public Event {
  public:
    static constexpr EventType eventType = EventType::WindowClose;

    inline EventType GetType() const override { return eventType; }
    bool test;
  };

  class KeyPressedEvent : public Event {
  public:
    bool testa;
  };

  class KeyReleasedEvent : public Event {
  public:
    bool testb;
  };

  class Events {
  public:
    void AddHandler(EventType type, std::function<void(const Event &)> && handler);
    void RemoveHandler(EventType type, std::function<void(const Event &)> && handler);

    void Dispatch(const Event & event) const;

  private:
    std::unordered_map<EventType, std::vector<std::function<void(const Event &)>>> handlers;
  };
}
