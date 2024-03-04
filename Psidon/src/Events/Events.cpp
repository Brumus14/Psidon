#include "Events.hpp"

namespace Psidon {
  void Events::AddHandler(EventType type, std::function<void(const Event &)> && handler) {
    handlers[type].push_back(handler);
  }

  void Events::Dispatch(const Event & event) const {
    std::vector<std::function<void(const Event &)>> calledHandlers = handlers.at(event.GetType());

    for (std::function<void(const Event &)> handler : calledHandlers) {
      handler(event);
    }
  }
}
