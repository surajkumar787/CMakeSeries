

md build

[run below command if you are running conan very first time to create your conan profile]
conan profile detect

conan install . -s build_type=Debug -s compiler.cppstd=20 --output-folder=build --build missing

if you base ssl verification issue such as [Unable to connect to remote conancenter=https://center2.conan.io]
For a temporary fix ssl verification can be disabled in the remotes settings at ~/.conan/remotes.json


cd build
cmake ..
cmake --build .