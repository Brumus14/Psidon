#include <Psidon.hpp>

#include <stdio.h>

class Sandbox : public Psidon::Application {
public:
  Sandbox() {
    printf("Sandbox started !");
  }

  ~Sandbox() {
    printf("Sandbox stopped !");
  }
};

Psidon::Application * Psidon::CreateApplication() {
  printf("hello?");
  return new Sandbox();
}
