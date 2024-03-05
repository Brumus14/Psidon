#include "Events.hpp"

namespace Psi {
  std::unordered_map<EventType, std::vector<std::function<void(const Event &)>>> Events::mHandlers;

  void Events::AddHandler(EventType type, std::function<void(const Event &)> && handler) {
    mHandlers[type].push_back(handler);
  }

  void Events::RemoveHandler(EventType type, std::function<void(const Event &)> && handler) {
    std::vector<std::function<void(const Event &)>> & handlers = mHandlers.at(type);

    for (int i = 0; i < handlers.size(); i++) {
      handlers.erase(handlers.begin() + i);

      return;
    }
  }

  void Events::Dispatch(const Event & event)  {
    if (mHandlers.find(event.GetType()) != mHandlers.end()) {
      const std::vector<std::function<void(const Event &)>> & handlers = mHandlers.at(event.GetType());

      for (const std::function<void(const Event &)> & handler : handlers) {
        handler(event);
      }
    }
  }
}
