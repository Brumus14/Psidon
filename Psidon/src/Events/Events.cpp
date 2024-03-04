#include "Events.hpp"

namespace Psidon {
  void Events::AddHandler(EventType type, std::function<void(const Event &)> && handler) {
    handlers[type].push_back(handler);
  }

  void Events::RemoveHandler(EventType type, std::function<void(const Event &)> && handler) {
    std::vector<std::function<void(const Event &)>> & removeHandlers = handlers.at(type);

    for (int i = 0; i < removeHandlers.size(); i++) {
      removeHandlers.erase(removeHandlers.begin() + i);

      return;
    }
  }

  void Events::Dispatch(const Event & event) const {
    const std::vector<std::function<void(const Event &)>> & calledHandlers = handlers.at(event.GetType());

    for (const std::function<void(const Event &)> & handler : calledHandlers) {
      handler(event);
    }
  }
}
