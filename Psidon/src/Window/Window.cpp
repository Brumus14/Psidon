#include "Window.hpp"
#include "Events/Events.hpp"
#include "Log/Log.hpp"

namespace Psi {
  bool Window::sGlfwInitialised = false;
  int Window::sWindowCount = 0;

  Window::Window(std::string title, unsigned int width, unsigned int height) {
    Create(title, width, height);
  }

  Window::~Window() {
    Destroy();
  }

  void Window::Update() {
    glfwPollEvents();
  }

  void Window::Create(std::string title, unsigned int width, unsigned int height) {
    mTitle = title;
    mWidth = width;
    mHeight = height;

    if (!sGlfwInitialised) {
      if (!glfwInit()) {
        Psi::Log::Critical("Failed to initialise GLFW");
      }

      sGlfwInitialised = true;
    }

    mWindow = glfwCreateWindow(mWidth, mHeight, mTitle.c_str(), nullptr, nullptr);

    if (!mWindow) {
      Psi::Log::Critical("Failed to create GLFW window");
    }

    sWindowCount++;

    glfwSetWindowCloseCallback(mWindow, [](GLFWwindow * window) {
      WindowCloseEvent event;
      Events::Dispatch(event);
    });

    glfwSetKeyCallback(mWindow, [](GLFWwindow * window, int key, int scancode, int action, int mods) {
      if (action == GLFW_PRESS) {
        KeyPressedEvent event;
        event.keyCode = key;
        Events::Dispatch(event);
      }
    });
  }

  void Window::Destroy() {
    glfwDestroyWindow(mWindow);
    sWindowCount--;

    if (sWindowCount == 0) {
      glfwTerminate();
      sGlfwInitialised = false;
    }
  }
}
