configure-debug:
	cmake -S . -B build/debug -G Ninja -DCMAKE_BUILD_TYPE=Debug

build-debug:
	cmake --build build/debug

run-debug:
	./build/debug/main

test-debug:
	cmake --build build/debug
	ctest --test-dir build/debug --output-on-failure

configure-release:
	cmake -S . -B build/release -G Ninja -DCMAKE_BUILD_TYPE=Release

build-release:
	cmake --build build/release

run-release:
	./build/release/main

test-release:
	cmake --build build/release
	ctest --test-dir build/release --output-on-failure

clean:
	rm -rf build