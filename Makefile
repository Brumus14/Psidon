all: buildPsidon buildSandbox run

buildPsidon:
	cd ./Psidon/build/ && make && cd ../..

buildSandbox:
	cd ./Sandbox/build/ && make && cd ../..

run:
	cd ./Sandbox/build/ && ./Sand && cd ../..
