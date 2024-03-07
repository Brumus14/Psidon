#include <Psidon.hpp>

// TESTING
#define GLFW_EXPOSE_NATIVE_X11
#include <bgfx/bgfx.h>
#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>

void OnWindowClose(const Psi::Event & event);
void OnKeyPressed(const Psi::Event & e);
void OnKeyReleased(const Psi::Event & e);
bool r = true;
int main(int argc, char * argv[]) {
  Psi::Events::AddHandler(Psi::EventType::WindowClose, OnWindowClose);
  Psi::Events::AddHandler(Psi::EventType::KeyPressed, OnKeyPressed);

  Psi::Window window = Psi::Window("test1", 800, 600);

  bgfx::Init bgfxInit;
  bgfxInit.platformData.ndt = glfwGetX11Display();
  bgfxInit.platformData.nwh = (void*)(uintptr_t)glfwGetX11Window(window.GetGlfwWindow());
  bgfxInit.resolution.width = 800;
  bgfxInit.resolution.height = 600;
  bgfxInit.resolution.reset = BGFX_RESET_VSYNC;

  bgfx::init(bgfxInit);

  while (r) {
    window.Update();
  }
}

void OnWindowClose(const Psi::Event & e) {
  const Psi::WindowCloseEvent & event = static_cast<const Psi::WindowCloseEvent &>(e);

  r = false;
}

void OnKeyPressed(const Psi::Event & e) {
  const Psi::KeyPressedEvent & event = static_cast<const Psi::KeyPressedEvent &>(e);

  Psi::Log::Info("Key pressed with key code: " + std::to_string(event.keyCode));

  if (event.keyCode == 81) { r = false; }
}

void OnKeyReleased(const Psi::Event & e) {
  const Psi::KeyReleasedEvent & event = static_cast<const Psi::KeyReleasedEvent &>(e);

  Psi::Log::Info("Key released with key code: " + std::to_string(event.keyCode));
}
