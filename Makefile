.PHONY: all cmakePsidon cmakeSandbox buildPsidon buildSandbox run

all: cmakePsidon cmakeSandbox buildPsidon buildSandbox run

cmakePsidon:
	cd ./Psidon && cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B build && cd ..

cmakeSandbox:
	cd ./Sandbox && cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B build && cd ..

buildPsidon:
	cd ./Psidon/build/ && make && cd ../..

buildSandbox:
	cd ./Sandbox/build/ && make && cd ../..

run:
	cd ./Sandbox/build/ && ./Sand && cd ../..
