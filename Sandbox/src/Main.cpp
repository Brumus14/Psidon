#include <Psidon.hpp>
#include <chrono>
#include <iostream>

int main(int argc, char * argv[]) {
  std::chrono::time_point startTime = std::chrono::high_resolution_clock::now();
  Psidon::Log::Info("this is info!");
  Psidon::Log::Warning("this is warning!");
  Psidon::Log::Critical("this is critical!");
  std::chrono::time_point endTime = std::chrono::high_resolution_clock::now();
  Psidon::Log::Info("Took " + std::to_string((endTime - startTime).count()) + "ns to run");

  Psidon::KeyPressedEvent p(69);
  Psidon::KeyReleasedEvent r(69);
  Psidon::WindowCloseEvent w;
  Psidon::Log::Info(std::to_string(p.GetKeyCode()));
  Psidon::Log::Info(std::to_string(r.GetKeyCode()));
  Psidon::Log::Info(std::to_string(w.GetType()));
}
