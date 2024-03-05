#pragma once

#include <GLFW/glfw3.h>
#include <string>

namespace Psi {
  class Window {
  public:
    Window(std::string title, unsigned int width, unsigned int height);
    ~Window();

    void Update();

  private:
    static bool sGlfwInitialised;
    static int sWindowCount;

    GLFWwindow * mWindow;

    std::string mTitle;
    unsigned int mWidth;
    unsigned int mHeight;

    void Create(std::string title, unsigned int width, unsigned int height);
    void Destroy();
  };
}
