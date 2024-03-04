#include <Psidon.hpp>
#include <chrono>
#include <iostream>

void OnWindowClose(const Psidon::Event & event);

int main(int argc, char * argv[]) {
  std::chrono::time_point startTime = std::chrono::high_resolution_clock::now();
  Psidon::Log::Info("this is info!");
  Psidon::Log::Warning("this is warning!");
  Psidon::Log::Critical("this is critical!");
  std::chrono::time_point endTime = std::chrono::high_resolution_clock::now();
  Psidon::Log::Info("Took " + std::to_string((endTime - startTime).count()) + "ns to run");

  Psidon::Events events;
  events.AddHandler(Psidon::EventType::WindowClose, OnWindowClose);
  Psidon::WindowCloseEvent eventData;
  eventData.test = false;
  events.Dispatch(eventData);
  eventData.test = true;
  events.AddHandler(Psidon::EventType::WindowClose, OnWindowClose);
  events.Dispatch(eventData);
  events.Dispatch(eventData);
}

void OnWindowClose(const Psidon::Event & e) {
  const Psidon::WindowCloseEvent & event = static_cast<const Psidon::WindowCloseEvent &>(e);

  Psidon::Log::Critical(event.test ? "true" : "false");
}
