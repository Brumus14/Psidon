.PHONY: all buildPsidon buildSandbox run

all: buildPsidon buildSandbox run

buildPsidon:
	@cd ./Psidon/build/ && make > /dev/null && cd ../..

buildSandbox:
	@cd ./Sandbox/build/ && make > /dev/null && cd ../..

run:
	@cd ./Sandbox/build/ && ./Sand && cd ../..
